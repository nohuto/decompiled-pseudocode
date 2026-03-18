/*
 * XREFs of MiCreateRetpolineBitmap @ 0x140A19C38
 * Callers:
 *     MiInitializeRetpoline @ 0x140A19AE8 (MiInitializeRetpoline.c)
 * Callees:
 *     MiReservePtes @ 0x140030600 (MiReservePtes.c)
 *     MiReleasePtes @ 0x14006B160 (MiReleasePtes.c)
 *     MiInitializeDynamicBitmap @ 0x1407420E8 (MiInitializeDynamicBitmap.c)
 */

__int64 __fastcall MiCreateRetpolineBitmap(unsigned __int64 *a1)
{
  ULONG_PTR v2; // rax
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rbx

  v2 = MiReservePtes((__int64)&qword_1404666C0, (unsigned __int64 *)0x10000);
  v3 = v2;
  if ( v2 )
  {
    v4 = (__int64)(v2 << 25) >> 16;
    if ( (unsigned int)MiInitializeDynamicBitmap(&qword_140464558, v4, 0x80000000LL, 15) )
    {
      *a1 = v4;
      return 0LL;
    }
    MiReleasePtes((__int64)&qword_1404666C0, v3, 0x10000u);
  }
  return 3221225495LL;
}
