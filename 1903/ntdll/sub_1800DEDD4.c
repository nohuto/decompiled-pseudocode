/*
 * XREFs of sub_1800DEDD4 @ 0x1800DEDD4
 * Callers:
 *     RtlQueryInformationActivationContext @ 0x1800376A0 (RtlQueryInformationActivationContext.c)
 * Callees:
 *     DbgPrintEx @ 0x180052780 (DbgPrintEx.c)
 *     sub_18007631C @ 0x18007631C (sub_18007631C.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 __fastcall sub_1800DEDD4(_DWORD *a1, unsigned int *a2, _DWORD *a3, size_t a4, size_t *a5)
{
  size_t *v5; // rsi
  unsigned int v6; // ebx
  unsigned int v10; // r8d
  int v11; // edx
  __int64 v12; // r13
  unsigned int v13; // r8d
  unsigned int v14; // ecx
  int v15; // r9d
  __int64 v16; // rbp
  unsigned int v17; // edx
  _DWORD *v18; // rdi
  __int64 v19; // r15
  unsigned __int64 v20; // rcx
  _WORD *v21; // rsi
  _WORD *v22; // rsi
  __int64 v23; // r15
  unsigned int v24; // ebp
  unsigned __int64 v25; // r12
  __int64 v26; // rcx
  __int64 v28; // [rsp+38h] [rbp-60h]
  int v29; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v30; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v31; // [rsp+B0h] [rbp+18h] BYREF

  v5 = a5;
  v6 = 0;
  v30 = -1073741595;
  v31 = 0LL;
  v29 = 0;
  if ( a5 )
    *a5 = 0LL;
  v10 = *a2;
  v11 = *(_DWORD *)((char *)a1 + (unsigned int)a1[6] + 8);
  if ( v10 >= v11 - 1 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() received invalid sub-instance index %lu out of %lu Assemblies in the Acitvation Context\n",
      "RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation",
      v10,
      v11);
    return (unsigned int)-1073741811;
  }
  sub_18007631C(&v29, (int *)&v30, a3, a4, v5, 0x68uLL, a1, v28, 2u, &v31, &a5);
  if ( v29 == 2 )
    return v30;
  v12 = v31;
  v13 = a2[1];
  v14 = *(_DWORD *)(v31 + 20);
  if ( v13 >= v14 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() received invalid file index (%u, max is %u) in Assembly (%u)\n",
      "RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation",
      v13,
      v14,
      *a2);
    return (unsigned int)-1073741811;
  }
  if ( !*(_DWORD *)(v31 + 24) )
    return (unsigned int)-1072365547;
  v15 = 0;
  v16 = v31 + *(unsigned int *)(v31 + 24);
  v17 = 0;
  if ( !v14 )
    return (unsigned int)-1072365547;
  while ( *(_DWORD *)(v16 + 24LL * v17 + 20) != *a2 + 1 )
  {
LABEL_15:
    if ( ++v17 >= v14 )
      return (unsigned int)-1072365547;
  }
  if ( v15 != v13 || !*(_DWORD *)(v16 + 24LL * v17 + 12) )
  {
    ++v15;
    goto LABEL_15;
  }
  v18 = (_DWORD *)(v31 + *(unsigned int *)(v16 + 24LL * v17 + 12));
  if ( !v18 )
    return (unsigned int)-1072365547;
  v19 = 3LL * v17;
  v20 = 32LL;
  if ( *(_DWORD *)(v16 + 24LL * v17 + 8) )
    v20 = *(unsigned int *)(v16 + 24LL * v17 + 8) + 34LL;
  if ( v18[2] )
    v20 += (unsigned int)v18[2] + 2LL;
  if ( v20 > a4 )
  {
    if ( v5 )
      *v5 = v20;
    return (unsigned int)-1073741789;
  }
  v21 = a3 + 8;
  *a3 = v18[1];
  a3[1] = *(_DWORD *)(v16 + 24LL * v17 + 8);
  a3[2] = v18[2];
  *((_QWORD *)a3 + 2) = 0LL;
  *((_QWORD *)a3 + 3) = 0LL;
  if ( *(_DWORD *)(v16 + 24LL * v17 + 8) )
  {
    memmove(
      a3 + 8,
      (const void *)(v12 + *(unsigned int *)(v16 + 24LL * v17 + 4)),
      *(unsigned int *)(v16 + 24LL * v17 + 8));
    *((_QWORD *)a3 + 2) = v21;
    v22 = (_WORD *)((char *)v21 + *(unsigned int *)(v16 + 8 * v19 + 8));
    *v22 = 0;
    v21 = v22 + 1;
  }
  if ( v18[2] )
  {
    if ( v18[4] )
    {
      v23 = v12 + 44LL * (unsigned int)v18[4];
      if ( v23 )
      {
        *((_QWORD *)a3 + 3) = v21;
        v24 = 0;
        if ( !v18[3] )
        {
LABEL_37:
          *v21 = 0;
          return v6;
        }
        v25 = (unsigned __int64)a3 + a4;
        while ( 1 )
        {
          v26 = *(unsigned int *)(v23 + 8LL * v24 + 4);
          if ( (unsigned __int64)v21 + v26 + 2 > v25 )
            return (unsigned int)-1072365547;
          if ( (_DWORD)v26 )
          {
            memmove(v21, (const void *)(v26 + v12), *(unsigned int *)(v23 + 8LL * v24));
            v21 = (_WORD *)((char *)v21 + *(unsigned int *)(v23 + 8LL * v24));
          }
          if ( ++v24 >= v18[3] )
            goto LABEL_37;
        }
      }
    }
  }
  return v6;
}
