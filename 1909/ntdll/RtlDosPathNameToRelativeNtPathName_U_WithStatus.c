/*
 * XREFs of RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x180027630
 * Callers:
 *     <none>
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800276A8 (RtlpDosPathNameToRelativeNtPathName.c)
 */

__int64 __fastcall RtlDosPathNameToRelativeNtPathName_U_WithStatus(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  _QWORD v6[3]; // [rsp+40h] [rbp-18h] BYREF

  v6[1] = a1;
  v6[0] = 0LL;
  if ( !a1 )
    return RtlpDosPathNameToRelativeNtPathName(2, (unsigned int)v6, 0, a2, 0LL, a3, a4);
  v4 = -1LL;
  do
    ++v4;
  while ( *(_WORD *)(a1 + 2 * v4) );
  if ( v4 <= 0x7FFE )
  {
    LOWORD(v6[0]) = 2 * v4;
    WORD1(v6[0]) = 2 * v4 + 2;
    return RtlpDosPathNameToRelativeNtPathName(2, (unsigned int)v6, 0, a2, 0LL, a3, a4);
  }
  return 3221225734LL;
}
