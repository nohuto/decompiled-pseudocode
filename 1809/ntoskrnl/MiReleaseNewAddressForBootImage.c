/*
 * XREFs of MiReleaseNewAddressForBootImage @ 0x1409F773C
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x1409B7C6C (MiReloadBootLoadedDrivers.c)
 *     MiGetNewAddressForBootImage @ 0x1409B85F4 (MiGetNewAddressForBootImage.c)
 * Callees:
 *     MiReleaseDriverPtes @ 0x14070E05C (MiReleaseDriverPtes.c)
 *     MiReleasePrivilegedPtes @ 0x14070F598 (MiReleasePrivilegedPtes.c)
 */

void __fastcall MiReleaseNewAddressForBootImage(unsigned __int64 a1, int a2)
{
  unsigned __int64 v3; // rdi

  v3 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiReleasePrivilegedPtes();
  MiReleaseDriverPtes(0, v3, a2);
}
