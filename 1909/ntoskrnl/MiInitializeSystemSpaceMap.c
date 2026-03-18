/*
 * XREFs of MiInitializeSystemSpaceMap @ 0x140741E84
 * Callers:
 *     MiSessionCreate @ 0x140741918 (MiSessionCreate.c)
 *     MiInitSystem @ 0x1409F0D98 (MiInitSystem.c)
 * Callees:
 *     MiInitializePteInfo @ 0x1409EEE40 (MiInitializePteInfo.c)
 */

__int64 __fastcall MiInitializeSystemSpaceMap(_QWORD *a1)
{
  __int64 result; // rax

  a1[1] = a1;
  *a1 = 0LL;
  result = 1LL;
  a1[2] = 0LL;
  if ( a1 == qword_140464660 )
    return MiInitializePteInfo((unsigned int)&unk_140466338, 12, 0, 3, qword_1404672F0, 0x8000000000LL, 16);
  return result;
}
