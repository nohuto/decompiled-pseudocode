/*
 * XREFs of MmGetPageFileInformation @ 0x1406CC444
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     MiPartitionObjectToPartition @ 0x140011CE4 (MiPartitionObjectToPartition.c)
 *     PsDereferencePartition @ 0x140090C00 (PsDereferencePartition.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 */

__int64 __fastcall MmGetPageFileInformation(__int64 a1, __int64 a2, unsigned int a3, int a4, unsigned int *a5)
{
  unsigned int v6; // r13d
  unsigned int *v7; // rbx
  ULONG_PTR *v8; // rax
  ULONG_PTR *v9; // r15
  unsigned int v10; // eax
  unsigned int v11; // r12d
  unsigned int v12; // r14d
  __int64 v13; // rsi
  ULONG_PTR v14; // rax
  unsigned int v15; // ecx
  unsigned int v16; // edx
  unsigned int v17; // r9d
  int v18; // r14d
  int v19; // r10d
  int v20; // r11d
  unsigned __int16 v21; // dx
  unsigned __int64 v22; // rbx
  unsigned int v23; // ebx
  unsigned int v25; // [rsp+28h] [rbp-70h]
  unsigned int v26; // [rsp+30h] [rbp-68h]
  __int128 v28; // [rsp+40h] [rbp-58h]
  __int64 v29; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+10h]
  unsigned int v31; // [rsp+B0h] [rbp+18h]
  int v32; // [rsp+B8h] [rbp+20h]

  v32 = a4;
  v31 = a3;
  v30 = a2;
  v29 = a1;
  v6 = a4 != 0 ? 40 : 32;
  v7 = a5;
  *a5 = 0;
  v8 = MiPartitionObjectToPartition((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, 0, &v29);
  v9 = v8;
  if ( !v8 )
    return 3221226656LL;
  v10 = *((_DWORD *)v8 + 1782);
  v26 = v10;
  *(_DWORD *)(a2 + 4) = 0;
  v11 = 0;
  v12 = 0;
  v13 = a2;
  while ( v11 < v10 )
  {
    v14 = v9[v11 + 892];
    if ( (*(_BYTE *)(v14 + 204) & 0x50) == 0 )
    {
      v13 = v30 + v12;
      v15 = v12 + v6;
      if ( v12 + v6 <= v12 || v15 > v31 )
      {
        *v7 = v15;
        v23 = -1073741820;
        goto LABEL_18;
      }
      v16 = *(_DWORD *)v14;
      v17 = *(_DWORD *)(v14 + 24);
      v18 = *(_DWORD *)(v14 + 32);
      v19 = *(_DWORD *)(v14 + 16);
      v20 = *(_DWORD *)(v14 + 8);
      while ( v17 >= v16 )
        ;
      *(_DWORD *)(v13 + 4) = v16;
      *(_DWORD *)(v13 + 8) = v16 - v17 - 2;
      *(_DWORD *)(v13 + 12) = v18;
      if ( v32 )
      {
        *(_DWORD *)(v13 + 32) = v19;
        *(_DWORD *)(v13 + 36) = v20;
      }
      WORD3(v28) = 0;
      v21 = *(_WORD *)(v9[v11 + 892] + 96);
      LOWORD(v28) = v21;
      *(_DWORD *)((char *)&v28 + 2) = (unsigned __int16)(v21 + 2);
      *((_QWORD *)&v28 + 1) = v13 + v6;
      *(_OWORD *)(v13 + 16) = v28;
      v25 = (*(_DWORD *)((char *)&v28 + 2) + 7) & 0xFFFFFFF8;
      v12 = v25 + v15;
      if ( v25 + v15 > v31 || v12 <= v15 )
      {
        *v7 = v12;
        v23 = -1073741820;
        goto LABEL_18;
      }
      v22 = v21;
      memmove((void *)(v13 + v6), *(const void **)(v9[v11 + 892] + 104), v21);
      *(_WORD *)(v13 + v6 + 2 * (v22 >> 1)) = 0;
      *(_DWORD *)v13 = v6 + v25;
      v7 = a5;
    }
    ++v11;
    v10 = v26;
  }
  *(_DWORD *)v13 = 0;
  *v7 = v12;
  v23 = 0;
LABEL_18:
  if ( (_BYTE)v29 )
    PsDereferencePartition(v9[21]);
  return v23;
}
