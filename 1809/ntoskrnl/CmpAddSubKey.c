/*
 * XREFs of CmpAddSubKey @ 0x1407FFC80
 * Callers:
 *     CmpCreateTombstone @ 0x14026D34C (CmpCreateTombstone.c)
 * Callees:
 *     CmpAddSubKeyEx @ 0x1405AFA60 (CmpAddSubKeyEx.c)
 */

char __fastcall CmpAddSubKey(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  return CmpAddSubKeyEx(a1, a2, a3, 0);
}
