/*
 * XREFs of RtlpHpStackLoggingEnabled @ 0x180018410
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x18000C3B0 (RtlpReAllocateHeapInternal.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x180018460 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpFreeHeapInternal @ 0x180019360 (RtlpFreeHeapInternal.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800F3320 (RtlpExtendedHeapInformationWorkerThread.c)
 * Callees:
 *     RtlpHpMetadataHeapCtxGet @ 0x180063D68 (RtlpHpMetadataHeapCtxGet.c)
 */

_BOOL8 RtlpHpStackLoggingEnabled()
{
  _QWORD *v1; // rax
  __int64 v2; // rdx
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  if ( (dword_180166388 & 1) == 0 || (dword_180166388 & 2) == 0 || !NtCurrentPeb()->ProcessHeap )
    return 0LL;
  v3 = RtlpHpEnvHandle;
  v1 = (_QWORD *)RtlpHpMetadataHeapCtxGet(&v3);
  return v2 != *v1;
}
