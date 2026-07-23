/*
 * XREFs of KiSendFreeze @ 0x140297BA0
 * Callers:
 *     KeBugCheck2 @ 0x140291380 (KeBugCheck2.c)
 *     KeFreezeExecution @ 0x1402971B8 (KeFreezeExecution.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140063BD0 (KeEnumerateNextProcessor.c)
 *     KeRemoveProcessorAffinityEx @ 0x1400EDAF0 (KeRemoveProcessorAffinityEx.c)
 */

__int64 __fastcall KiSendFreeze(__int64 a1, char a2)
{
  unsigned __int16 *v2; // rax
  int v5; // edi
  __int64 result; // rax
  __int64 v7; // rcx
  signed __int32 v8; // eax
  unsigned __int16 *v9[2]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v10; // [rsp+30h] [rbp-28h]
  int v11; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(unsigned __int16 **)(a1 + 8);
  v10 = 0;
  v9[1] = v2;
  v5 = 0;
  v9[0] = (unsigned __int16 *)a1;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v11, v9);
    if ( (_DWORD)result )
      break;
    v7 = KiProcessorBlock[v11];
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 11656), 5, 0);
    if ( a2 )
    {
      if ( v8 )
      {
        do
        {
          do
            _mm_pause();
          while ( *(_DWORD *)(v7 + 11656) );
        }
        while ( _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 11656), 5, 0) );
      }
LABEL_7:
      ++v5;
    }
    else
    {
      if ( !v8 )
        goto LABEL_7;
      KeRemoveProcessorAffinityEx((unsigned __int16 *)a1, v11);
    }
  }
  if ( v5 )
    return HalSendNMI(a1);
  return result;
}
