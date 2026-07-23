/*
 * XREFs of RtlpGetRetpolineStubsFunctionTable @ 0x1401974C0
 * Callers:
 *     RtlCreateRetpolineStubsFunctionTable @ 0x1401973A0 (RtlCreateRetpolineStubsFunctionTable.c)
 *     RtlCopyRetpolineStubsUnwindInfo @ 0x1403153C4 (RtlCopyRetpolineStubsUnwindInfo.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400AFB60 (RtlpImageDirectoryEntryToDataEx.c)
 */

__int64 __fastcall RtlpGetRetpolineStubsFunctionTable(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int *a5)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rsi
  NTSTATUS v8; // eax
  __int64 v9; // r10
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rbx
  int v12; // eax
  int v13; // r9d
  unsigned __int64 v14; // r11
  int v15; // edx
  __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // r9
  __int64 result; // rax
  unsigned int *v20; // r9
  __int64 v21; // rax
  int v22; // edx
  __int64 v23; // rbx
  int v24; // r10d
  unsigned int *v25; // r9
  unsigned int v26; // [rsp+30h] [rbp-18h] BYREF
  __int64 v27; // [rsp+38h] [rbp-10h] BYREF

  v5 = a4;
  v6 = a3;
  v7 = a2;
  LOWORD(a3) = 3;
  LOBYTE(a2) = 1;
  v8 = RtlpImageDirectoryEntryToDataEx(a1, a2, a3, (__int64)&v26, &v27);
  v9 = v27;
  if ( v8 < 0 )
    v9 = 0LL;
  if ( !v9 )
    return 0LL;
  if ( !v26 )
    return 0LL;
  v10 = v26 / 0xCuLL;
  if ( v26 % 0xCuLL )
    return 0LL;
  v11 = v6 - v7;
  v12 = v10 - 1;
  v13 = 0;
  v14 = v11 + v5;
  if ( (int)v10 - 1 < 0 )
    return 0LL;
  while ( 1 )
  {
    v15 = (v12 + v13) >> 1;
    v16 = v15;
    v17 = *(unsigned int *)(v9 + 12LL * v15);
    if ( v14 <= v17 )
    {
      v12 = v15 - 1;
      goto LABEL_10;
    }
    v18 = *(unsigned int *)(v9 + 12LL * v15 + 4);
    if ( v11 < v18 )
      break;
    v13 = v15 + 1;
LABEL_10:
    if ( v12 < v13 )
      return 0LL;
  }
  if ( v11 > v17 || v14 < v18 )
    return 0LL;
  if ( v15 > 0 )
  {
    v20 = (unsigned int *)(v9 - 12 + 12LL * v15);
    do
    {
      if ( *v20 < v11 )
        break;
      --v15;
      --v16;
      v20 -= 3;
    }
    while ( v16 > 0 );
  }
  v21 = v15;
  v22 = v15 + 1;
  v23 = v9 + 12 * v21;
  v24 = 1;
  if ( v22 < v10 )
  {
    v25 = (unsigned int *)(v23 + 16);
    do
    {
      if ( *v25 > v14 )
        break;
      ++v22;
      ++v24;
      v25 += 3;
    }
    while ( v22 < v10 );
  }
  result = v23;
  *a5 = v24;
  return result;
}
