/*
 * XREFs of RtlUnlockHeap @ 0x18006D640
 * Callers:
 *     RtlExitUserProcess @ 0x18006CF90 (RtlExitUserProcess.c)
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x18006D1EC (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     RtlpLockUlockAllHeapsCallback @ 0x18006D260 (RtlpLockUlockAllHeapsCallback.c)
 *     RtlValidateHeap @ 0x18006D290 (RtlValidateHeap.c)
 *     RtlpQueryExtendedHeapInformation @ 0x18007B16C (RtlpQueryExtendedHeapInformation.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x180104F80 (RtlpHpStackTraceHeapSerialize.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18006D6D0 (RtlpCheckHeapSignature.c)
 *     RtlpHpHeapUnlock @ 0x18006D7DC (RtlpHpHeapUnlock.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 *     RtlpLogHeapUnlockEvent @ 0x1801064EC (RtlpLogHeapUnlockEvent.c)
 */

char __fastcall RtlUnlockHeap(__int64 a1)
{
  __int64 v2; // rcx
  _DWORD *SharedData; // rcx
  __int64 v4; // rcx

  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    RtlpHpHeapUnlock(a1, 0LL);
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
      return ((__int64 (*)(void))qword_18015F448)();
    if ( !(unsigned __int8)RtlpCheckHeapSignature(a1, "RtlUnlockHeap") )
      return 0;
    if ( (*(_BYTE *)(a1 + 112) & 1) == 0 )
    {
      v2 = *(_QWORD *)(a1 + 352);
      --*(_WORD *)(a1 + 416);
      RtlLeaveCriticalSection(v2);
    }
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v4 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v4 = 2147353472LL;
  if ( *(_BYTE *)v4 )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapUnlockEvent(a1);
  }
  return 1;
}
