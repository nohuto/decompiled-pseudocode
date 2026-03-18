/*
 * XREFs of MiInitializeCfg @ 0x140A21434
 * Callers:
 *     MiInitSystem @ 0x1409F0D98 (MiInitSystem.c)
 * Callees:
 *     MiSectionControlArea @ 0x140071A50 (MiSectionControlArea.c)
 *     MmCreateSection @ 0x140650DB0 (MmCreateSection.c)
 */

__int64 MiInitializeCfg()
{
  __int64 result; // rax
  unsigned __int64 *v1; // rbx
  int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // [rsp+50h] [rbp+8h] BYREF
  __int64 v5; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0x20000000000LL;
  result = MmCreateSection((int)&v5, 983071LL, 0, &v4, 4, 0x4000000, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    qword_140464520 = v5;
    qword_140464528 = MiSectionControlArea(v5);
    v1 = (unsigned __int64 *)&unk_1404644C0;
    v2 = 0;
    v4 = 0x4000000LL;
    while ( 1 )
    {
      result = MmCreateSection((int)&v5, 983071LL, 0, &v4, 4, 0x4000000, 0LL, 0LL);
      if ( (int)result < 0 )
        break;
      v3 = v5;
      *(v1 - 1) = v5;
      *v1 = MiSectionControlArea(v3);
      ++v2;
      v1 += 8;
      if ( v2 )
        return 0LL;
    }
  }
  return result;
}
