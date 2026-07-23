/*
 * XREFs of IopFillTriageDumpDataBlocks @ 0x14028167C
 * Callers:
 *     IoFillTriageDumpBuffer @ 0x14027FA84 (IoFillTriageDumpBuffer.c)
 * Callees:
 *     RtlULongLongSub @ 0x1400FE0E4 (RtlULongLongSub.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     IoUpdateBugCheckProgressEnvVariable @ 0x1402806AC (IoUpdateBugCheckProgressEnvVariable.c)
 */

int __fastcall IopFillTriageDumpDataBlocks(unsigned int *a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r11
  __int64 v5; // rax
  ULONGLONG v7; // r12
  ULONGLONG v8; // rdi
  char *v9; // rbx
  unsigned int i; // r14d
  __int64 v11; // rcx
  ULONGLONG *v12; // rsi
  unsigned int v13; // r15d
  __int64 v14; // rdx
  unsigned __int64 v15; // r10
  int v16; // r11d
  char *v17; // rcx
  unsigned int v18; // ecx
  ULONGLONG pullResult[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v21; // [rsp+50h] [rbp-48h]
  __int64 v23; // [rsp+B0h] [rbp+18h]

  v23 = a3;
  v4 = a4;
  LODWORD(v5) = a2;
  v7 = a4 + a1[30];
  pullResult[1] = v7;
  v8 = v7;
  v9 = (char *)(v7 + 16LL * a1[31]);
  for ( i = 0; i < (unsigned int)v5; ++i )
  {
    v11 = i;
    v21 = i;
    v12 = *(ULONGLONG **)(a3 + 16LL * i + 8);
    v13 = 0;
    while ( v13 < *(_DWORD *)(a3 + 16 * v11) )
    {
      v5 = (__int64)(v8 - v7) >> 4;
      if ( (unsigned int)v5 >= a1[31] )
        return v5;
      LODWORD(v5) = v8 + 16;
      if ( v8 + 16 > v4 + (unsigned __int64)a1[1] )
        return v5;
      LODWORD(v5) = RtlULongLongSub(v12[1], *v12, pullResult);
      if ( (int)v5 < 0 )
        return v5;
      v17 = &v9[LODWORD(pullResult[0])];
      LODWORD(v5) = -1;
      if ( v17 < v9 )
        return v5;
      LODWORD(v5) = (_DWORD)v9 + LODWORD(pullResult[0]);
      if ( (unsigned __int64)v17 > v15 )
        return v5;
      *(_QWORD *)v8 = v14;
      *(_DWORD *)(v8 + 8) = (_DWORD)v9 - v16;
      v18 = *((_DWORD *)v12 + 2) - *(_DWORD *)v12;
      *(_DWORD *)(v8 + 12) = v18;
      memmove(v9, (const void *)*v12, v18);
      v9 += *(unsigned int *)(v8 + 12);
      v8 += 16LL;
      ++v13;
      v12 += 2;
      v11 = v21;
      v4 = a4;
      a3 = v23;
    }
    LODWORD(v5) = a2;
  }
  return v5;
}
