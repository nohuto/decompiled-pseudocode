/*
 * XREFs of ?CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ @ 0x1C00078FC
 * Callers:
 *     ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1C0007890 (-UnInitialize@InputExtensibilityCallout@@SAXXZ.c)
 *     xxxUserProcessCallout @ 0x1C002AEF0 (xxxUserProcessCallout.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 */

void __fastcall InputExtensibilityCallout::CloseCoreMsgPort(InputExtensibilityCallout *this)
{
  __int64 v1; // rdi
  void *v2; // rcx

  v1 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  RIMLockExclusive(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 24LL);
  v2 = *(void **)(v1 + 40);
  if ( v2 )
  {
    ZwClose(v2);
    *(_QWORD *)(v1 + 40) = 0LL;
  }
  *(_QWORD *)(v1 + 32) = 0LL;
  ExReleasePushLockExclusiveEx(v1 + 24, 0LL);
  KeLeaveCriticalRegion();
}
