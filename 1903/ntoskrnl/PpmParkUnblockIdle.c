/*
 * XREFs of PpmParkUnblockIdle @ 0x140120130
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140005278 (KeGetPrcb.c)
 *     KeCountSetBitsAffinityEx @ 0x1400B8D40 (KeCountSetBitsAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1400BA2E0 (KeRemoveProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x1400BE260 (KeEnumerateNextProcessor.c)
 *     PpmPerfQueueAction @ 0x1401761BC (PpmPerfQueueAction.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

char PpmParkUnblockIdle()
{
  char v0; // bl
  __int64 Prcb; // rax
  int v3; // eax
  __int64 v4; // rax
  unsigned __int16 *v5; // [rsp+20h] [rbp-20h] BYREF
  __int64 v6; // [rsp+28h] [rbp-18h]
  __int16 v7; // [rsp+30h] [rbp-10h]
  int v8; // [rsp+32h] [rbp-Eh]
  __int16 v9; // [rsp+36h] [rbp-Ah]
  ULONG v10; // [rsp+50h] [rbp+10h] BYREF

  v8 = 0;
  v9 = 0;
  v0 = 1;
  if ( PpmIsParkingEnabled )
  {
    v6 = qword_14042B668;
    v5 = (unsigned __int16 *)&PpmPerfNewUnparkedMask;
    v7 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v10, &v5) )
    {
      Prcb = KeGetPrcb(v10);
      if ( *(_BYTE *)(Prcb + 23869) )
        *(_BYTE *)(Prcb + 23869) = 0;
      else
        KeRemoveProcessorAffinityEx((unsigned __int16 *)&PpmPerfNewUnparkedMask, v10);
    }
    v3 = KeCountSetBitsAffinityEx(&PpmPerfNewUnparkedMask);
    if ( v3 )
    {
      PpmCheckCount = v3;
      v6 = qword_14042B668;
      v7 = 0;
      v5 = (unsigned __int16 *)&PpmPerfNewUnparkedMask;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v10, &v5) )
      {
        v4 = KeGetPrcb(v10);
        PpmPerfQueueAction(v4, 5LL);
      }
      PpmPerfNewUnparkedMask = 1310721;
      memset(&unk_14042B664, 0, 0xA4uLL);
      return 0;
    }
  }
  return v0;
}
