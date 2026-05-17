/*
 * XREFs of RtlLockHeap @ 0x180019CB0
 * Callers:
 *     RtlpQueryExtendedHeapInformation @ 0x18006798C (RtlpQueryExtendedHeapInformation.c)
 *     RtlExitUserProcess @ 0x18006B150 (RtlExitUserProcess.c)
 *     RtlValidateHeap @ 0x1800705A0 (RtlValidateHeap.c)
 *     RtlpLockUlockAllHeapsCallback @ 0x18007F700 (RtlpLockUlockAllHeapsCallback.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x180102670 (RtlpHpStackTraceHeapSerialize.c)
 * Callees:
 *     RtlpHpHeapLock @ 0x1800170E8 (RtlpHpHeapLock.c)
 *     RtlpCheckHeapSignature @ 0x180019C74 (RtlpCheckHeapSignature.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     RtlpLogHeapLockEvent @ 0x1801035D4 (RtlpLogHeapLockEvent.c)
 */

char __fastcall RtlLockHeap(__int64 a1)
{
  bool v1; // zf
  __int64 v3; // rcx
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 16) == -571548178;
  v5 = -1;
  if ( v1 )
  {
    RtlpHpHeapLock(a1, &v5);
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
      return ((__int64 (*)(void))qword_18015FA10)();
    if ( !RtlpCheckHeapSignature((_DWORD *)a1, "RtlLockHeap") )
      return 0;
    if ( (*(_BYTE *)(a1 + 112) & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      ++*(_WORD *)(a1 + 416);
    }
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v3 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v3 = 2147353472LL;
  if ( *(_BYTE *)v3 )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapLockEvent(a1);
  }
  return 1;
}
