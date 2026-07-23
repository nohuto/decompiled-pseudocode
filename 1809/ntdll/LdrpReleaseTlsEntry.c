/*
 * XREFs of LdrpReleaseTlsEntry @ 0x1800818CC
 * Callers:
 *     LdrpDereferenceModule @ 0x1800099F8 (LdrpDereferenceModule.c)
 *     LdrpLoadDependentModule @ 0x180023AC0 (LdrpLoadDependentModule.c)
 *     LdrpHandleTlsData @ 0x18003629C (LdrpHandleTlsData.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     LdrpFindTlsEntry @ 0x180025ECC (LdrpFindTlsEntry.c)
 */

__int64 __fastcall LdrpReleaseTlsEntry(void *a1, _QWORD *a2)
{
  _UNKNOWN **TlsEntry; // rax
  _UNKNOWN **v5; // rbx
  _UNKNOWN ***v6; // rax
  _QWORD *v7; // rcx

  if ( !a2 )
    RtlAcquireSRWLockExclusive(&LdrpTlsLock);
  TlsEntry = LdrpFindTlsEntry(a1);
  v5 = TlsEntry;
  if ( TlsEntry )
  {
    v6 = (_UNKNOWN ***)*TlsEntry;
    if ( v6[1] != v5 || (v7 = v5[1], (_UNKNOWN **)*v7 != v5) )
      __fastfail(3u);
    *v7 = v6;
    v6[1] = (_UNKNOWN **)v7;
    _bittestandreset((signed __int32 *)LdrpTlsBitmap.Buffer, *((_DWORD *)v5 + 16));
  }
  if ( !a2 )
    RtlReleaseSRWLockExclusive(&LdrpTlsLock);
  if ( !v5 )
    return 3221226021LL;
  if ( a2 )
    *a2 = v5;
  else
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  return 0LL;
}
