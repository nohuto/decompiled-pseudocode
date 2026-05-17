/*
 * XREFs of RtlLockHeap @ 0x18006D5A0
 * Callers:
 *     RtlExitUserProcess @ 0x18006CF90 (RtlExitUserProcess.c)
 *     RtlpLockUlockAllHeapsCallback @ 0x18006D260 (RtlpLockUlockAllHeapsCallback.c)
 *     RtlValidateHeap @ 0x18006D290 (RtlValidateHeap.c)
 *     RtlpQueryExtendedHeapInformation @ 0x18007B16C (RtlpQueryExtendedHeapInformation.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x180104F80 (RtlpHpStackTraceHeapSerialize.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18006D6D0 (RtlpCheckHeapSignature.c)
 *     RtlpHpHeapLock @ 0x18006D704 (RtlpHpHeapLock.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 *     RtlpLogHeapLockEvent @ 0x180105EFC (RtlpLogHeapLockEvent.c)
 */

char __fastcall RtlLockHeap(__int64 a1)
{
  bool v1; // zf
  _DWORD *SharedData; // rcx
  __int64 v4; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 16) == -571548178;
  v6 = -1;
  if ( v1 )
  {
    RtlpHpHeapLock(a1, &v6);
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
      return ((__int64 (*)(void))qword_18015F440)();
    if ( !(unsigned __int8)RtlpCheckHeapSignature(a1, "RtlLockHeap") )
      return 0;
    if ( (*(_BYTE *)(a1 + 112) & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      ++*(_WORD *)(a1 + 416);
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
      RtlpLogHeapLockEvent(a1);
  }
  return 1;
}
