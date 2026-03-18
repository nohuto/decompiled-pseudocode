/*
 * XREFs of BmfdQueryFontFile @ 0x1C0225250
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C013D380 (memmove.c)
 */

__int64 __fastcall BmfdQueryFontFile(__int64 a1, int a2, unsigned int a3, void *a4)
{
  __int64 result; // rax
  int v6; // edx
  _WORD *v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // ebx

  if ( !a1 )
    return 0xFFFFFFFFLL;
  v6 = a2 - 1;
  if ( v6 )
  {
    if ( v6 == 1 )
      return *(unsigned int *)(a1 + 28);
    return 0xFFFFFFFFLL;
  }
  result = *(unsigned int *)(a1 + 32);
  if ( (_DWORD)result )
  {
    if ( a4 )
    {
      if ( a3 < (unsigned int)result )
        return 0xFFFFFFFFLL;
      memmove(a4, (const void *)(a1 + *(int *)(a1 + 36)), (unsigned int)result);
      return *(unsigned int *)(a1 + 32);
    }
  }
  else
  {
    v7 = (_WORD *)(*(_QWORD *)(a1 + 120) + *(int *)(*(_QWORD *)(a1 + 120) + 16LL));
    v8 = -1LL;
    do
      ++v8;
    while ( v7[v8] );
    v9 = 2 * v8 + 2;
    if ( a4 )
    {
      if ( a3 < v9 )
        return 0xFFFFFFFFLL;
      memmove(a4, v7, v9);
    }
    return v9;
  }
  return result;
}
