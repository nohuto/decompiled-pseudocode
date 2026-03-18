/*
 * XREFs of FindFunc @ 0x1C027D4F4
 * Callers:
 *     InitializeDriver @ 0x1C027D530 (InitializeDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindFunc(int a1)
{
  _DWORD *v1; // rdx
  __int64 v2; // r8
  unsigned int v3; // eax

  v1 = (_DWORD *)qword_1C032FDD0;
  v2 = 0LL;
  v3 = 0;
  while ( *v1 != a1 )
  {
    ++v3;
    v1 += 4;
    if ( v3 >= 0x13 )
      return v2;
  }
  return *(_QWORD *)(qword_1C032FDD0 + 16LL * v3 + 8);
}
