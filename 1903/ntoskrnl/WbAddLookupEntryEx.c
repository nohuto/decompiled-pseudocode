/*
 * XREFs of WbAddLookupEntryEx @ 0x1406AF3A0
 * Callers:
 *     sub_1406AF340 @ 0x1406AF340 (sub_1406AF340.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
 *     WbReAlloc @ 0x1406AF464 (WbReAlloc.c)
 */

__int64 __fastcall WbAddLookupEntryEx(int *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // edx
  int v5; // edi
  unsigned int v6; // r10d
  int v9; // ecx

  v4 = a1[1];
  v5 = 0;
  v6 = a1[2];
  if ( v4 + 1 >= v6 )
  {
    v5 = WbReAlloc(*((PVOID *)a1 + 2), v6 * *a1, *a1 * (v6 + a1[6]));
    if ( v5 < 0 )
      return (unsigned int)v5;
    a1[2] += a1[6];
    v6 = a1[2];
    v4 = a1[1];
  }
  if ( a4 <= v4 && v6 )
  {
    memmove(
      (void *)(*((_QWORD *)a1 + 2) + (a4 + 1) * *a1),
      (const void *)(*((_QWORD *)a1 + 2) + a4 * *a1),
      *a1 * (v4 - a4));
    v9 = *a1;
    ++a1[1];
    *(_QWORD *)(*((_QWORD *)a1 + 2) + a4 * v9) = a2;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
