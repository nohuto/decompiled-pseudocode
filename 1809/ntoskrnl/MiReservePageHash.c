/*
 * XREFs of MiReservePageHash @ 0x1401884E8
 * Callers:
 *     MiCreatePagingFile @ 0x14074D1A8 (MiCreatePagingFile.c)
 *     MiCreatePagefile @ 0x14074DD10 (MiCreatePagefile.c)
 * Callees:
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MiReservePageHash(unsigned int a1)
{
  ULONG_PTR result; // rax

  result = MiReservePtes(
             (__int64)&qword_14043C060,
             (unsigned __int64 *)((unsigned int)((4 * (unsigned __int64)a1) >> 12) + (((4LL * a1) & 0xFFF) != 0)));
  if ( result )
    return (__int64)(result << 25) >> 16;
  return result;
}
