/*
 * XREFs of ?vDirectStretch32@@YAXPEAU_STR_BLT@@@Z @ 0x1C00A2E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vDirectStretch32(struct _STR_BLT *a1)
{
  __int64 v1; // r8
  int v3; // r9d
  int v4; // r12d
  __int64 v5; // rdi
  int v6; // r11d
  int v7; // r10d
  __int64 v8; // rbp
  int v9; // edx
  int v10; // esi
  unsigned int v11; // r14d
  _DWORD *v12; // rax
  int v13; // r8d
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  unsigned int v17; // r15d
  unsigned int v18; // r11d
  _DWORD *v19; // r9
  __int64 v20; // r10
  bool v21; // cf
  __int64 v22; // [rsp+0h] [rbp-58h]
  unsigned int v23; // [rsp+60h] [rbp+8h]
  int v24; // [rsp+68h] [rbp+10h]

  v1 = *((int *)a1 + 7);
  v3 = 0;
  v4 = *((_DWORD *)a1 + 9);
  v5 = *((unsigned int *)a1 + 10);
  v6 = *((_DWORD *)a1 + 13);
  v7 = *((_DWORD *)a1 + 12);
  v8 = *(_QWORD *)a1 + 4LL * *((int *)a1 + 3);
  v9 = *((_DWORD *)a1 + 8) - v1;
  v10 = *((_DWORD *)a1 + 11);
  v11 = *((_DWORD *)a1 + 15);
  v23 = *((_DWORD *)a1 + 10);
  v12 = (_DWORD *)(*((_QWORD *)a1 + 2) + 4 * v1);
  v24 = v6;
  v13 = *((_DWORD *)a1 + 6) - 4 * v9;
  if ( v4 > 0 )
  {
    if ( v7 )
      v3 = v7 * *((_DWORD *)a1 + 2);
    v14 = v9;
    v15 = v13;
    v16 = (unsigned __int64)(4 * v14) >> 2;
    v22 = v3;
    do
    {
      v17 = v6 + v11;
      v18 = *((_DWORD *)a1 + 14);
      v19 = (_DWORD *)v8;
      v20 = 0LL;
      if ( v12 > &v12[v14] )
        v16 = 0LL;
      if ( v16 )
      {
        do
        {
          v21 = v18 + v10 < v18;
          *v12 = *v19;
          v18 += v10;
          ++v12;
          ++v20;
          v19 += v21 + v5;
        }
        while ( v20 != v16 );
        v15 = v13;
        v5 = v23;
      }
      v8 += v22;
      if ( v17 < v11 )
        v8 += *((int *)a1 + 2);
      v16 = (unsigned __int64)(4 * v14) >> 2;
      v12 = (_DWORD *)((char *)v12 + v15);
      v6 = v24;
      v11 = v17;
      --v4;
    }
    while ( v4 );
  }
}
