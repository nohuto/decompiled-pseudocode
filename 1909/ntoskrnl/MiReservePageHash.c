/*
 * XREFs of MiReservePageHash @ 0x1401937DC
 * Callers:
 *     MiCreatePagingFile @ 0x140773BF8 (MiCreatePagingFile.c)
 *     MiCreatePagefile @ 0x1407747B8 (MiCreatePagefile.c)
 * Callees:
 *     MiReservePtes @ 0x140030600 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MiReservePageHash(unsigned int a1)
{
  ULONG_PTR result; // rax

  result = MiReservePtes(
             (__int64)&qword_1404666C0,
             (unsigned __int64 *)((unsigned int)((4 * (unsigned __int64)a1) >> 12) + (((4LL * a1) & 0xFFF) != 0)));
  if ( result )
    return (__int64)(result << 25) >> 16;
  return result;
}
