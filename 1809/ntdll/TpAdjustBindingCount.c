/*
 * XREFs of TpAdjustBindingCount @ 0x18002DA74
 * Callers:
 *     TppDestroyTimer @ 0x18002D5D4 (TppDestroyTimer.c)
 *     TppInitializeTimer @ 0x18002D9D4 (TppInitializeTimer.c)
 *     TpBindFileToDirect @ 0x180030EA8 (TpBindFileToDirect.c)
 *     TppIopFree @ 0x180031300 (TppIopFree.c)
 *     TppAllocAlpcCompletion @ 0x1800313F8 (TppAllocAlpcCompletion.c)
 *     TpAllocJobNotification @ 0x180032300 (TpAllocJobNotification.c)
 *     TppAlpcpFree @ 0x180086B10 (TppAlpcpFree.c)
 *     TppJobpFree @ 0x180087F40 (TppJobpFree.c)
 *     RtlpTpIoDllProcessUnloads @ 0x18011152C (RtlpTpIoDllProcessUnloads.c)
 * Callees:
 *     NtSetInformationWorkerFactory @ 0x1800A35D0 (NtSetInformationWorkerFactory.c)
 */

void __fastcall TpAdjustBindingCount(__int64 a1, unsigned int a2)
{
  int v2; // eax
  int v3; // r8d
  int v4; // eax
  __int64 v5; // rcx
  int v6; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 432), a2);
    v3 = v2 + a2;
    if ( v2 <= 0 )
    {
      if ( v3 <= 0 )
        return;
      v4 = 1;
    }
    else
    {
      if ( v3 > 0 )
        return;
      v4 = -1;
    }
    v5 = *(_QWORD *)(a1 + 56);
    v6 = v4;
    NtSetInformationWorkerFactory(v5, 3LL, &v6);
  }
}
