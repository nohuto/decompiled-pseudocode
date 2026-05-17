/*
 * XREFs of RtlImageRvaToVa @ 0x1800857C0
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x180089D30 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x18001EFD0 (RtlSectionTableFromVirtualAddress.c)
 */

__int64 __fastcall RtlImageRvaToVa(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  _DWORD *v7; // r10
  unsigned int v9; // r8d

  if ( !a4 || (v7 = (_DWORD *)*a4) == 0LL || (v9 = v7[3], a3 < v9) || a3 >= v9 + v7[4] )
    v7 = (_DWORD *)RtlSectionTableFromVirtualAddress(a1, a2, a3);
  if ( !v7 )
    return 0LL;
  if ( a4 )
    *a4 = v7;
  return a2 + a3 - v7[3] + (unsigned int)v7[5];
}
