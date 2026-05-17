/*
 * XREFs of LdrSetDllDirectory @ 0x18007EF40
 * Callers:
 *     sub_18007ED94 @ 0x18007ED94 (sub_18007ED94.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x180029BA0 (RtlFreeUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x18002BE80 (RtlCreateUnicodeString.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_18007F040 @ 0x18007F040 (sub_18007F040.c)
 *     wcschr @ 0x1800922E0 (wcschr.c)
 */

__int64 __fastcall LdrSetDllDirectory(__int64 a1)
{
  const wchar_t *v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-18h] BYREF

  if ( (dword_180162714 & 4) == 0 )
    return 3221225485LL;
  v2 = *(const wchar_t **)(a1 + 8);
  if ( v2 )
  {
    if ( !wcschr(v2, 0x3Bu) )
    {
      if ( !RtlCreateUnicodeString((__int64)&v6, *(_WORD **)(a1 + 8)) )
        return 3221225495LL;
      goto LABEL_5;
    }
    return 3221225485LL;
  }
  v6 = 0uLL;
LABEL_5:
  RtlAcquireSRWLockExclusive(&qword_1801664A8);
  UnicodeString = (UNICODE_STRING)xmmword_180166020;
  xmmword_180166020 = v6;
  RtlReleaseSRWLockExclusive(&qword_1801664A8);
  RtlAcquireSRWLockExclusive(&qword_1801664A0);
  v3 = sub_18007F040(&unk_180164368);
  v4 = sub_18007F040(&unk_180164358);
  RtlReleaseSRWLockExclusive(&qword_1801664A0);
  RtlFreeUnicodeString(&UnicodeString);
  if ( v3 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v3);
  if ( v4 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
  return 1LL;
}
