/*
 * XREFs of MiReleaseSystemImageVa @ 0x140A3D2A8
 * Callers:
 *     MiHandleBootImage @ 0x1409EF704 (MiHandleBootImage.c)
 * Callees:
 *     MiReleaseDriverPtes @ 0x14074503C (MiReleaseDriverPtes.c)
 *     MiReleasePrivilegedPtes @ 0x140747A28 (MiReleasePrivilegedPtes.c)
 */

void __fastcall MiReleaseSystemImageVa(unsigned __int64 a1, unsigned int a2)
{
  unsigned __int64 v3; // rdi

  v3 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiReleasePrivilegedPtes();
  MiReleaseDriverPtes(0, v3, a2);
}
