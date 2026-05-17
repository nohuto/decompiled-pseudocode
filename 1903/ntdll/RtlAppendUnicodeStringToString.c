/*
 * XREFs of RtlAppendUnicodeStringToString @ 0x180026140
 * Callers:
 *     sub_180003D40 @ 0x180003D40 (sub_180003D40.c)
 *     sub_180009998 @ 0x180009998 (sub_180009998.c)
 *     sub_18000BCF8 @ 0x18000BCF8 (sub_18000BCF8.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180017900 (LdrLoadAlternateResourceModuleEx.c)
 *     sub_180025FD8 @ 0x180025FD8 (sub_180025FD8.c)
 *     sub_18002934C @ 0x18002934C (sub_18002934C.c)
 *     sub_18002D8FC @ 0x18002D8FC (sub_18002D8FC.c)
 *     sub_18005A3AC @ 0x18005A3AC (sub_18005A3AC.c)
 *     sub_18007A3BC @ 0x18007A3BC (sub_18007A3BC.c)
 *     sub_180080CF0 @ 0x180080CF0 (sub_180080CF0.c)
 *     sub_180081C0C @ 0x180081C0C (sub_180081C0C.c)
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 *     sub_1800D9678 @ 0x1800D9678 (sub_1800D9678.c)
 *     sub_1800D9FD0 @ 0x1800D9FD0 (sub_1800D9FD0.c)
 *     sub_1800DA8F4 @ 0x1800DA8F4 (sub_1800DA8F4.c)
 *     sub_1800F0CD8 @ 0x1800F0CD8 (sub_1800F0CD8.c)
 *     sub_180115D48 @ 0x180115D48 (sub_180115D48.c)
 * Callees:
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 __fastcall RtlAppendUnicodeStringToString(unsigned __int16 *a1, __int16 *a2)
{
  unsigned __int16 v2; // si
  unsigned __int64 v4; // rcx
  void *v5; // r14

  v2 = *a2;
  if ( !*a2 )
    return 0LL;
  v4 = *a1;
  if ( (unsigned int)v4 + v2 <= a1[1] )
  {
    v5 = (void *)(*((_QWORD *)a1 + 1) + 2 * (v4 >> 1));
    memmove(v5, *((const void **)a2 + 1), v2);
    *a1 += v2;
    if ( (unsigned int)*a1 + 1 < a1[1] )
      *((_WORD *)v5 + ((unsigned __int64)v2 >> 1)) = 0;
    return 0LL;
  }
  return 3221225507LL;
}
