/*
 * XREFs of PpmUnlockProcessors @ 0x1402D6180
 * Callers:
 *     PpmIdleSelectStates @ 0x1401801D0 (PpmIdleSelectStates.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140062160 (KeIsEmptyAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140063A30 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140063BD0 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     KeRemoveProcessorAffinityEx @ 0x1400EDAF0 (KeRemoveProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall PpmUnlockProcessors(unsigned __int16 *a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned __int16 *v5; // rax
  __int64 Prcb; // rdx
  __int64 v7; // rbx
  unsigned __int32 v8; // eax
  unsigned __int32 v9; // r9d
  signed __int32 v10; // ecx
  __int64 result; // rax
  ULONG v12; // [rsp+20h] [rbp-A9h] BYREF
  unsigned __int16 *v13[2]; // [rsp+28h] [rbp-A1h] BYREF
  __int16 v14; // [rsp+38h] [rbp-91h]
  _DWORD v15[44]; // [rsp+40h] [rbp-89h] BYREF

  v15[0] = 1310721;
  memset(&v15[1], 0, 0xA4uLL);
  LODWORD(v2) = KeGetPcr()->Prcb.Number;
  v5 = *(unsigned __int16 **)(a2 + 8);
  v14 = 0;
  v13[1] = v5;
  v13[0] = (unsigned __int16 *)a2;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v12, v13) )
  {
    Prcb = KeGetPrcb(v12);
    v7 = *(_QWORD *)(Prcb + 23808);
    _m_prefetchw((const void *)(Prcb + 23872));
    v8 = *(_DWORD *)(Prcb + 23872);
    do
    {
      v9 = v8;
      v10 = v8 ^ (v8 ^ (v8 - 1)) & 0xFFFFFF;
      if ( (v10 & 0xFFFFFF) == 0 )
      {
        if ( HIBYTE(v8) == 5 )
        {
          v10 = v10 & 0xFFFFFF | 0x4000000;
        }
        else if ( HIBYTE(v8) == 7 )
        {
          v10 = v10 & 0xFFFFFF | 0x6000000;
        }
      }
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)(Prcb + 23872), v10, v8);
    }
    while ( v8 != v9 );
    if ( HIBYTE(v10) == 6 )
      KeAddProcessorAffinityEx(v15, v12);
    _InterlockedAnd64(
      (volatile signed __int64 *)(v7
                                + 8 * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v2] >> 6)
                                + 80),
      ~(1LL << (KiProcessorIndexToNumberMappingTable[v2] & 0x3F)));
    KeRemoveProcessorAffinityEx(a1, v12);
  }
  result = KeIsEmptyAffinityEx(v15);
  if ( !(_DWORD)result )
    return HalRequestIpi(0LL, v15);
  return result;
}
