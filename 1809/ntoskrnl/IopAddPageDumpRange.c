/*
 * XREFs of IopAddPageDumpRange @ 0x140280E80
 * Callers:
 *     IopDumpCallAddPagesCallbacks @ 0x1402813CC (IopDumpCallAddPagesCallbacks.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     IoSetDumpRange @ 0x1402804A0 (IoSetDumpRange.c)
 */

__int64 __fastcall IopAddPageDumpRange(__int64 a1, char *a2)
{
  int v4; // r9d
  int v5; // edx
  __int64 result; // rax
  char v7; // si
  unsigned __int64 v8; // r8
  _QWORD v9[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v10[7]; // [rsp+30h] [rbp-38h] BYREF

  memset(v10, 0, 0x30uLL);
  if ( a2 )
    *a2 = 0;
  v4 = *(_DWORD *)(a1 + 8) & 0xFF0;
  v5 = v4 ^ *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = v5;
  if ( (v5 & 0x7FFFFFFC) != 0 )
    return 3221225714LL;
  if ( v5 >= 0 )
  {
    v7 = 0;
  }
  else
  {
    v5 &= ~0x80000000;
    v7 = 1;
    *(_DWORD *)(a1 + 8) = v5;
  }
  if ( ((v5 - 1) & v5) != 0 )
    return 3221225485LL;
  v8 = *(_QWORD *)(a1 + 24);
  if ( !v8 )
    return 0LL;
  v10[3] = *(_QWORD *)(CrashdmpDumpBlock + 8);
  v9[0] = *(_QWORD *)(v10[3] + 48LL);
  v9[1] = v10[3] + 56LL;
  v10[2] = v9;
  if ( (v5 & 1) == 0 )
    v4 |= 2u;
  result = IoSetDumpRange((__int64)v10, *(char **)(a1 + 16), v8, v4);
  if ( (int)result >= 0 )
  {
    if ( a2 )
      *a2 = v7;
  }
  return result;
}
