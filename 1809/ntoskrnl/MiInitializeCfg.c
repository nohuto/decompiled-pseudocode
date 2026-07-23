/*
 * XREFs of MiInitializeCfg @ 0x1409BB28C
 * Callers:
 *     MiInitSystem @ 0x1409BD5A8 (MiInitSystem.c)
 * Callees:
 *     MiSectionControlArea @ 0x140075E60 (MiSectionControlArea.c)
 *     MmCreateSection @ 0x14061C2D0 (MmCreateSection.c)
 */

__int64 MiInitializeCfg()
{
  __int64 result; // rax
  __int64 v1; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0x4000000LL;
  result = MmCreateSection((int)&qword_140439EB8, 983071LL, 0, &v1, 4, 0x4000000, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    qword_140439EC0 = MiSectionControlArea(qword_140439EB8);
    v1 = 0x20000000000LL;
    result = MmCreateSection((int)&qword_140439EC8, 983071LL, 0, &v1, 4, 0x4000000, 0LL, 0LL);
    if ( (int)result >= 0 )
    {
      qword_140439ED0 = MiSectionControlArea(qword_140439EC8);
      return 0LL;
    }
  }
  return result;
}
