/*
 * XREFs of ?QuerySizeConstraints@CPrivilegedSizeConstraintsOperations@@EEAAJPEAUHWND__@@@Z @ 0x180078C40
 * Callers:
 *     <none>
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x180078D48 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1801017C8 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 */

__int64 __fastcall CPrivilegedSizeConstraintsOperations::QuerySizeConstraints(
        CPrivilegedSizeConstraintsOperations *this,
        HWND a2)
{
  __int64 v2; // rcx
  unsigned int LastErrorFailHr; // edi
  __int64 v5; // rbx
  wil::details *v6; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 6);
  LastErrorFailHr = 0;
  v8 = v2;
  v5 = v2;
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 36));
    v5 = v8;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(v2 + 48));
  EnableIAMAccess(*(_QWORD *)(v5 + 40), 1LL);
  if ( !(unsigned int)GetWindowTrackInfoAsync(a2) )
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v6);
  IamAccess::SyncIamAccess::~SyncIamAccess((IamAccess::SyncIamAccess *)&v8);
  return LastErrorFailHr;
}
