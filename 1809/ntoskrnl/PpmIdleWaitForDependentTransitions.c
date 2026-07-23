/*
 * XREFs of PpmIdleWaitForDependentTransitions @ 0x1402D568C
 * Callers:
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x1402D4884 (PpmIdleCheckCoordinatedStateEligibility.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140063BD0 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PpmIdleTransitionStall @ 0x1402D5508 (PpmIdleTransitionStall.c)
 */

__int64 __fastcall PpmIdleWaitForDependentTransitions(__int64 a1)
{
  unsigned __int16 *v1; // rax
  unsigned int v2; // ebx
  __int64 Prcb; // rdi
  __int64 v4; // rsi
  unsigned __int16 *v6[2]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v7; // [rsp+30h] [rbp-38h]
  _QWORD v8[5]; // [rsp+38h] [rbp-30h] BYREF
  ULONG v9; // [rsp+70h] [rbp+8h] BYREF

  v1 = *(unsigned __int16 **)(a1 + 8);
  v2 = 0;
  v7 = 0;
  v6[1] = v1;
  v6[0] = (unsigned __int16 *)a1;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v9, v6) )
  {
    Prcb = KeGetPrcb(v9);
    v4 = *(_QWORD *)(Prcb + 23808);
    memset(v8, 0, 0x20uLL);
    v8[1] = PopIdleTransitionTimeout;
    BYTE4(v8[3]) = 1;
    v8[2] = Prcb;
    while ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(v4 + 472))(*(_QWORD *)(v4 + 488)) )
    {
      if ( (*(_DWORD *)(Prcb + 23872) & 0xFF000000) != 0x5000000 )
        return (unsigned int)-1073741782;
      PpmIdleTransitionStall((__int64)v8);
    }
  }
  return v2;
}
