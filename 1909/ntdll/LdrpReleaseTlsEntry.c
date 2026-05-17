/*
 * XREFs of LdrpReleaseTlsEntry @ 0x18007E45C
 * Callers:
 *     LdrpDereferenceModule @ 0x18001B678 (LdrpDereferenceModule.c)
 *     LdrpLoadDependentModule @ 0x180023170 (LdrpLoadDependentModule.c)
 *     LdrpHandleTlsData @ 0x180055984 (LdrpHandleTlsData.c)
 * Callees:
 *     LdrpFindTlsEntry @ 0x180025164 (LdrpFindTlsEntry.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

__int64 __fastcall LdrpReleaseTlsEntry(void *a1, __int64 *a2)
{
  __int64 *TlsEntry; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rcx

  if ( !a2 )
    RtlAcquireSRWLockExclusive(&LdrpTlsLock);
  TlsEntry = (__int64 *)LdrpFindTlsEntry(a1);
  v5 = (__int64)TlsEntry;
  if ( TlsEntry )
  {
    v6 = *TlsEntry;
    if ( *(_QWORD *)(v6 + 8) != v5 || (v7 = *(_QWORD **)(v5 + 8), *v7 != v5) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    _bittestandreset((signed __int32 *)Src, *(_DWORD *)(v5 + 64));
  }
  if ( !a2 )
    RtlReleaseSRWLockExclusive(&LdrpTlsLock);
  if ( !v5 )
    return 3221226021LL;
  if ( a2 )
    *a2 = v5;
  else
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
  return 0LL;
}
