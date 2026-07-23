/*
 * XREFs of MiInitializeSystemSpaceMap @ 0x1407167FC
 * Callers:
 *     MiSessionCreate @ 0x1407162A8 (MiSessionCreate.c)
 *     MiInitSystem @ 0x1409BD5A8 (MiInitSystem.c)
 * Callees:
 *     MiInitializePteInfo @ 0x1409B84C8 (MiInitializePteInfo.c)
 */

__int64 __fastcall MiInitializeSystemSpaceMap(_QWORD *a1)
{
  __int64 result; // rax

  a1[1] = a1;
  *a1 = 0LL;
  result = 1LL;
  a1[2] = 0LL;
  if ( a1 == qword_14043A000 )
    return MiInitializePteInfo((unsigned int)&unk_14043BC78, 12, 0, 3, qword_14043CBE0, 0x8000000000LL, 16);
  return result;
}
