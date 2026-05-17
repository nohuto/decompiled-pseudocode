/*
 * XREFs of RtlDeleteCriticalSection @ 0x18005C6B0
 * Callers:
 *     EtwpFreeLoggerContext @ 0x18005A9DC (EtwpFreeLoggerContext.c)
 *     RtlDeleteResource @ 0x18005C660 (RtlDeleteResource.c)
 *     RtlDestroyHeap @ 0x18005F2F0 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x18005F7E0 (RtlCreateHeap.c)
 *     RtlTraceDatabaseDestroy @ 0x1800FEC30 (RtlTraceDatabaseDestroy.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpGetStackTraceAddressEx @ 0x18005C7A0 (RtlpGetStackTraceAddressEx.c)
 *     RtlpFreeDebugInfo @ 0x18005C7C8 (RtlpFreeDebugInfo.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlStdReleaseStackTrace @ 0x1800FDC40 (RtlStdReleaseStackTrace.c)
 */

__int64 __fastcall RtlDeleteCriticalSection(__int64 *a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  char *v5; // rcx
  unsigned int v6; // r14d
  __int64 v7; // rbx
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rdx
  __int64 StackTraceAddress; // rax

  v5 = (char *)a1[3];
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    v6 = NtClose(v5);
  else
    v6 = 0;
  v7 = *a1;
  if ( (unsigned __int64)(*a1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v9 = a1[4] & 0x4000000;
    RtlAcquireSRWLockExclusive((unsigned __int64)&RtlCriticalSectionLock, a2, a3, a4);
    v10 = v7 + 16;
    v11 = *(_QWORD *)(v7 + 16);
    if ( v11 )
    {
      v12 = *(_QWORD **)(v7 + 24);
      if ( *(_QWORD *)(v11 + 8) != v10 || *v12 != v10 )
        __fastfail(3u);
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
    }
    RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
    StackTraceAddress = RtlpGetStackTraceAddressEx(*(unsigned __int16 *)(v7 + 2), *(unsigned __int16 *)(v7 + 44));
    if ( StackTraceAddress && RtlpStackTraceDatabase )
      RtlStdReleaseStackTrace(RtlpStackTraceDatabase, StackTraceAddress);
    memset((void *)v7, 0, 0x30uLL);
    if ( !v9 )
      RtlpFreeDebugInfo(v7);
  }
  memset(a1, 0, 0x28uLL);
  return v6;
}
