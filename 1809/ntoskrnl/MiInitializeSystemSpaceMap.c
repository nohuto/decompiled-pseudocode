/*
 * XREFs of MiInitializeSystemSpaceMap @ 0x14071557C
 * Callers:
 *     MiSessionCreate @ 0x140715028 (MiSessionCreate.c)
 *     MiInitSystem @ 0x1409BC5A8 (MiInitSystem.c)
 * Callees:
 *     MiInitializePteInfo @ 0x1409B74C8 (MiInitializePteInfo.c)
 */

__int64 __fastcall MiInitializeSystemSpaceMap(_QWORD *a1)
{
  __int64 result; // rax

  a1[1] = a1;
  *a1 = 0LL;
  result = 1LL;
  a1[2] = 0LL;
  if ( a1 == qword_140438F40 )
    return MiInitializePteInfo((unsigned int)&unk_14043ABB8, 12, 0, 3, qword_14043BB20, 0x8000000000LL, 16);
  return result;
}
