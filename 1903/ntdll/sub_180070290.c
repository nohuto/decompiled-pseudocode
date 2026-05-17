/*
 * XREFs of sub_180070290 @ 0x180070290
 * Callers:
 *     sub_18007025C @ 0x18007025C (sub_18007025C.c)
 * Callees:
 *     sub_180035F18 @ 0x180035F18 (sub_180035F18.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

void __fastcall sub_180070290(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int *v3; // rax
  bool v4; // zf
  int v5; // eax

  v2 = (unsigned int)(KiUserInvertedFunctionTable[0] - 1);
  if ( KiUserInvertedFunctionTable[0] != 1 )
  {
    v3 = &KiUserInvertedFunctionTable[6 * v2 + 6];
    do
    {
      if ( a2 == *(_QWORD *)v3 )
        break;
      v3 -= 6;
      v4 = (_DWORD)v2 == 1;
      v2 = (unsigned int)(v2 - 1);
    }
    while ( !v4 );
  }
  if ( (_DWORD)v2 )
  {
    sub_180035F18(0);
    _InterlockedIncrement(&dword_18017A4D8);
    v5 = KiUserInvertedFunctionTable[0];
    if ( KiUserInvertedFunctionTable[0] != 2 )
    {
      memmove(
        &KiUserInvertedFunctionTable[4 * v2 + 4 + 2 * v2],
        &KiUserInvertedFunctionTable[4 * (unsigned int)(v2 + 1) + 4 + 2 * (unsigned int)(v2 + 1)],
        24LL * (unsigned int)(KiUserInvertedFunctionTable[0] - v2 - 1));
      v5 = KiUserInvertedFunctionTable[0];
    }
    KiUserInvertedFunctionTable[0] = v5 - 1;
    _InterlockedIncrement(&dword_18017A4D8);
    sub_180035F18(1);
  }
}
