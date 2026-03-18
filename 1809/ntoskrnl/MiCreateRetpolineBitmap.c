/*
 * XREFs of MiCreateRetpolineBitmap @ 0x1409F7050
 * Callers:
 *     MiInitializeRetpoline @ 0x1409DEFC8 (MiInitializeRetpoline.c)
 * Callees:
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     MiInitializeDynamicBitmap @ 0x140715740 (MiInitializeDynamicBitmap.c)
 */

__int64 __fastcall MiCreateRetpolineBitmap(__int64 *a1)
{
  ULONG_PTR v2; // rdi

  v2 = MiReservePtes((__int64)&qword_14043AFA0, (unsigned __int64 *)0x10000);
  if ( !v2 )
    return 3221225495LL;
  if ( !(unsigned int)MiInitializeDynamicBitmap(&qword_140438E40, (__int64)(v2 << 25) >> 16, 0x80000000LL, 15) )
  {
    MiReleasePtes((__int64)&qword_14043AFA0, v2, 0x10000u);
    return 3221225495LL;
  }
  *a1 = (__int64)(v2 << 25) >> 16;
  return 0LL;
}
