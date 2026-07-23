/*
 * XREFs of CmpBuildRegMultiSz @ 0x1409F4950
 * Callers:
 *     CmpInitializeSystemBiosInformation @ 0x1409F4A30 (CmpInitializeSystemBiosInformation.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 */

__int64 __fastcall CmpBuildRegMultiSz(__int64 a1, __int64 a2, _DWORD *a3, const void *a4, unsigned int Size)
{
  __int64 result; // rax
  int v7; // ebp
  char *v8; // rdi

  result = Size;
  v7 = a1;
  if ( Size )
  {
    v8 = (char *)(a1 + (unsigned int)*a3);
    memmove(v8, a4, Size);
    *(_WORD *)&v8[Size] = 0;
    result = Size + (unsigned int)v8 - v7 + 2;
    *a3 = result;
  }
  return result;
}
