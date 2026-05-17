/*
 * XREFs of LdrGetDllDirectory @ 0x18007D5F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCopyUnicodeString @ 0x1800150A0 (RtlCopyUnicodeString.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrGetDllDirectory(__int64 a1)
{
  unsigned int v2; // edx
  unsigned int v3; // eax
  unsigned int v4; // edi

  if ( (dword_180162714 & 4) == 0 )
    return 3221225485LL;
  RtlAcquireSRWLockExclusive(&qword_1801664A8);
  v2 = *(unsigned __int16 *)(a1 + 2);
  v3 = (unsigned __int16)xmmword_180166020 + 2;
  if ( v2 >= v3 )
  {
    RtlCopyUnicodeString((unsigned __int16 *)a1, (unsigned __int16 *)&xmmword_180166020);
    v4 = 0;
  }
  else
  {
    *(_WORD *)a1 = v3;
    v4 = -1073741789;
    if ( (_WORD)v2 )
      **(_WORD **)(a1 + 8) = 0;
  }
  RtlReleaseSRWLockExclusive(&qword_1801664A8);
  return v4;
}
