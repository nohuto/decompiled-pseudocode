/*
 * XREFs of RtlpHpStackLoggingEnabled @ 0x180040750
 * Callers:
 *     RtlpFreeHeapInternal @ 0x180040B50 (RtlpFreeHeapInternal.c)
 *     RtlpReAllocateHeapInternal @ 0x180043280 (RtlpReAllocateHeapInternal.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800F04D0 (RtlpExtendedHeapInformationWorkerThread.c)
 * Callees:
 *     RtlpHpMetadataHeapCtxGet @ 0x18004CD1C (RtlpHpMetadataHeapCtxGet.c)
 */

_BOOL8 RtlpHpStackLoggingEnabled()
{
  _QWORD *v1; // rax
  __int64 v2; // rdx
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  if ( (dword_1801663A8 & 1) == 0 || (dword_1801663A8 & 2) == 0 || !NtCurrentPeb()->ProcessHeap )
    return 0LL;
  v3 = RtlpHpEnvHandle;
  v1 = (_QWORD *)RtlpHpMetadataHeapCtxGet(&v3);
  return v2 != *v1;
}
