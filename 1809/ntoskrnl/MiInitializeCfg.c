/*
 * XREFs of MiInitializeCfg @ 0x1409BA28C
 * Callers:
 *     MiInitSystem @ 0x1409BC5A8 (MiInitSystem.c)
 * Callees:
 *     MiSectionControlArea @ 0x140075E70 (MiSectionControlArea.c)
 *     MmCreateSection @ 0x14061B2D0 (MmCreateSection.c)
 */

__int64 MiInitializeCfg()
{
  __int64 result; // rax
  __int64 v1; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0x4000000LL;
  result = MmCreateSection((int)&qword_140438DF8, 983071LL, 0, &v1, 4, 0x4000000, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    qword_140438E00 = MiSectionControlArea(qword_140438DF8);
    v1 = 0x20000000000LL;
    result = MmCreateSection((int)&qword_140438E08, 983071LL, 0, &v1, 4, 0x4000000, 0LL, 0LL);
    if ( (int)result >= 0 )
    {
      qword_140438E10 = MiSectionControlArea(qword_140438E08);
      return 0LL;
    }
  }
  return result;
}
