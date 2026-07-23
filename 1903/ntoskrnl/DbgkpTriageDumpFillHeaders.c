/*
 * XREFs of DbgkpTriageDumpFillHeaders @ 0x14084CCD0
 * Callers:
 *     <none>
 * Callees:
 *     IoFillDumpHeader @ 0x140294748 (IoFillDumpHeader.c)
 *     IoFillTriageDumpBuffer @ 0x140294A14 (IoFillTriageDumpBuffer.c)
 */

__int64 __fastcall DbgkpTriageDumpFillHeaders(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _NT_PRODUCT_TYPE *v7; // rsi
  unsigned int v8; // ecx
  __int64 result; // rax
  int v10; // eax
  int v11; // [rsp+38h] [rbp-50h]
  _DWORD v12[4]; // [rsp+70h] [rbp-18h] BYREF
  int v13; // [rsp+90h] [rbp+8h] BYREF

  v7 = *(_NT_PRODUCT_TYPE **)a1;
  IoFillDumpHeader(*(_NT_PRODUCT_TYPE **)a1, 4, a2, a3, a4, a5, a6, 0LL);
  v12[0] = 0;
  v13 = 0;
  v8 = *(_DWORD *)(a1 + 8);
  if ( v8 < 0x2000 )
    return 3221225626LL;
  result = IoFillTriageDumpBuffer(v8 - 0x2000, (__int64 *)v7 + 1024, 0, 1088, &v13, 0LL, 0LL, v11, 0, 0, 0LL, 0LL, v12);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)v7 + 1038) = v13;
    *(_DWORD *)(a1 + 24) = (v12[0] + 8199) & 0xFFFFFFF8;
    v10 = *(_DWORD *)(a1 + 8);
    *((_DWORD *)v7 + 2079) = 0;
    *((_DWORD *)v7 + 2078) = v10 - 4;
    return 0LL;
  }
  return result;
}
