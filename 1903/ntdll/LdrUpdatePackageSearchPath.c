/*
 * XREFs of LdrUpdatePackageSearchPath @ 0x1800DDB00
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_18006D6B8 @ 0x18006D6B8 (sub_18006D6B8.c)
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

NTSTATUS __cdecl LdrUpdatePackageSearchPath(PWSTR SearchPathA)
{
  NTSTATUS v1; // ebx
  __int64 v3; // rdi
  size_t v4; // rdi
  _WORD *v5; // rax
  _WORD *v6; // r14
  _OBJECT_BOUNDARY_DESCRIPTOR *v7; // rsi

  v1 = 0;
  if ( !SearchPathA )
    return -1073741811;
  if ( !(_WORD)xmmword_180164390 )
    return -1073741811;
  v3 = -1LL;
  do
    ++v3;
  while ( SearchPathA[v3] );
  v4 = 2 * v3;
  if ( !v4 )
    return -1073741811;
  if ( v4 >= 0xFFFE )
    return -1073741562;
  v5 = sub_18006D6B8(v4 + 2);
  v6 = v5;
  if ( !v5 )
    return -1073741801;
  memmove(v5, SearchPathA, v4);
  v6[v4 >> 1] = 0;
  RtlAcquireSRWLockExclusive(&stru_1801664A8);
  v7 = (_OBJECT_BOUNDARY_DESCRIPTOR *)*((_QWORD *)&xmmword_180164390 + 1);
  LOWORD(xmmword_180164390) = v4;
  WORD1(xmmword_180164390) = v4 + 2;
  *((_QWORD *)&xmmword_180164390 + 1) = v6;
  RtlReleaseSRWLockExclusive(&stru_1801664A8);
  if ( v7 != *((_OBJECT_BOUNDARY_DESCRIPTOR **)&xmmword_180164380 + 1) )
    RtlDeleteBoundaryDescriptor(v7);
  return v1;
}
