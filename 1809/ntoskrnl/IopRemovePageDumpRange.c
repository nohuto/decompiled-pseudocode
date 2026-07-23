/*
 * XREFs of IopRemovePageDumpRange @ 0x140281B70
 * Callers:
 *     IopDumpCallRemovePagesCallbacks @ 0x140281524 (IopDumpCallRemovePagesCallbacks.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     IoFreeDumpRange @ 0x140280020 (IoFreeDumpRange.c)
 */

__int64 __fastcall IopRemovePageDumpRange(__int64 a1, char *a2)
{
  int v4; // r9d
  __int64 result; // rax
  char v6; // si
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  int v9; // r9d
  __int64 v10; // rcx
  _QWORD v11[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v12[7]; // [rsp+30h] [rbp-38h] BYREF

  memset(v12, 0, 0x30uLL);
  if ( a2 )
    *a2 = 0;
  v4 = *(_DWORD *)(a1 + 8);
  if ( (v4 & 0x7FFFFFFC) != 0 )
    return 3221225714LL;
  if ( v4 >= 0 )
  {
    v6 = 0;
  }
  else
  {
    v4 &= ~0x80000000;
    v6 = 1;
    *(_DWORD *)(a1 + 8) = v4;
  }
  if ( ((v4 - 1) & v4) != 0 )
    return 3221225485LL;
  v7 = *(_QWORD *)(a1 + 24);
  if ( !v7 )
    return 0LL;
  v8 = *(_QWORD *)(a1 + 16);
  v9 = v4 & 1;
  if ( !v9 )
    v8 >>= 12;
  v10 = *(_QWORD *)(CrashdmpDumpBlock + 8);
  v11[0] = *(_QWORD *)(v10 + 48);
  v11[1] = v10 + 56;
  v12[2] = v11;
  result = IoFreeDumpRange((__int64)v12, (char *)v8, v7, 2 * (v9 ^ 1u));
  if ( (int)result >= 0 )
  {
    if ( a2 )
      *a2 = v6;
  }
  return result;
}
