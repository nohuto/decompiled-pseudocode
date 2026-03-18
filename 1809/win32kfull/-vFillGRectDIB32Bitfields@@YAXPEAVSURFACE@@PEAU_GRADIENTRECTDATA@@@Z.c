/*
 * XREFs of ?vFillGRectDIB32Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02B3BD0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0163300 (memmove.c)
 */

void __fastcall vFillGRectDIB32Bitfields(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  __int64 v2; // r13
  struct _GRADIENTRECTDATA *v3; // r14
  int v4; // r15d
  __int64 v6; // r10
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // r12
  char *v15; // rcx
  _DWORD *v16; // rdi
  char *v17; // rax
  unsigned __int64 v18; // r12
  __int64 v19; // r13
  __int64 v20; // r14
  __int64 i; // rdi
  int v22; // eax
  char *v23; // rdi
  int v24; // r15d
  __int64 v25; // rax
  __int64 v26; // r12
  unsigned int v27; // eax
  void *v28; // r9
  unsigned __int64 v29; // r8
  char *v30; // [rsp+20h] [rbp-88h]
  __int64 v31; // [rsp+28h] [rbp-80h]
  __int64 v32; // [rsp+30h] [rbp-78h]
  char *v33; // [rsp+50h] [rbp-58h]
  __int64 v34; // [rsp+B0h] [rbp+8h]
  __int64 v36; // [rsp+B8h] [rbp+10h]
  int v37; // [rsp+C0h] [rbp+18h]
  __int64 v38; // [rsp+C0h] [rbp+18h]
  char *v39; // [rsp+C8h] [rbp+20h]

  v2 = *((int *)a1 + 22);
  v3 = a2;
  v4 = *((_DWORD *)a2 + 11);
  v6 = *((_QWORD *)a2 + 21);
  v7 = *((_QWORD *)a2 + 6);
  v8 = *((_QWORD *)a2 + 7);
  v9 = *((_QWORD *)a2 + 8);
  v10 = HIWORD(v8);
  v11 = HIWORD(v9);
  v12 = HIWORD(v7);
  v37 = v2;
  v31 = v6;
  if ( *((_DWORD *)v3 + 38) )
  {
    v25 = *((int *)v3 + 45);
    v36 = *((_QWORD *)v3 + 10);
    v34 = *((_QWORD *)v3 + 11);
    v38 = *((_QWORD *)v3 + 12);
    if ( (int)v25 > 0 )
    {
      v7 += *((_QWORD *)v3 + 10) * v25;
      v9 += *((_QWORD *)v3 + 12) * v25;
      v11 = HIWORD(v9);
      v8 += *((_QWORD *)v3 + 11) * v25;
      v10 = HIWORD(v8);
      v12 = HIWORD(v7);
    }
    v26 = *((_QWORD *)a1 + 10) + 4 * *((_DWORD *)v3 + 8) + (__int64)((int)v2 * *((_DWORD *)v3 + 9));
    while ( 1 )
    {
      if ( !v4 )
        return;
      --v4;
      v27 = XEPALOBJ::ulDispatchGFPEFunction(
              v31,
              *(unsigned int *)(*(_QWORD *)v31 + 100LL),
              (unsigned __int8)v12 | (((unsigned __int8)v10 | ((unsigned __int8)v11 << 8)) << 8));
      v28 = (void *)v26;
      v29 = (unsigned __int64)(4 * *((_DWORD *)v3 + 10)) >> 2;
      if ( v29 )
      {
        if ( (v26 & 4) != 0 )
        {
          *(_DWORD *)v26 = v27;
          if ( !--v29 )
            goto LABEL_23;
          v28 = (void *)(v26 + 4);
        }
        memset64(v28, v27 | ((unsigned __int64)v27 << 32), v29 >> 1);
        if ( (v29 & 1) != 0 )
          *((_DWORD *)v28 + v29 - 1) = v27;
      }
LABEL_23:
      v26 += v2;
      v8 += v34;
      v9 += v38;
      v10 = HIWORD(v8);
      v7 += v36;
      LOBYTE(v11) = BYTE6(v9);
      v12 = HIWORD(v7);
    }
  }
  v13 = *((int *)v3 + 44);
  v32 = *((_QWORD *)v3 + 14);
  if ( (int)v13 > 0 )
  {
    v7 += *((_QWORD *)v3 + 14) * v13;
    v8 += *((_QWORD *)v3 + 15) * v13;
    v9 += *((_QWORD *)v3 + 16) * v13;
  }
  v14 = 4LL * *((int *)v3 + 10);
  v15 = (char *)(*((_QWORD *)a1 + 10) + (int)v2 * *((_DWORD *)v3 + 9) + 4LL * *((int *)v3 + 8));
  v30 = v15;
  v16 = v15;
  v17 = &v15[v14];
  v33 = v15;
  v18 = v14 >> 2;
  v39 = v15;
  if ( v15 > v17 )
    v18 = 0LL;
  if ( v18 )
  {
    v19 = *((_QWORD *)v3 + 15);
    v20 = *((_QWORD *)v3 + 16);
    for ( i = 0LL; i != v18; ++i )
    {
      v22 = XEPALOBJ::ulDispatchGFPEFunction(
              v6,
              *(unsigned int *)(*(_QWORD *)v6 + 100LL),
              BYTE6(v7) | ((BYTE6(v8) | (BYTE6(v9) << 8)) << 8));
      v7 += v32;
      v6 = v31;
      v8 += v19;
      v9 += v20;
      *(_DWORD *)v39 = v22;
      v39 += 4;
    }
    v16 = v33;
    v3 = a2;
    v15 = v33;
    LODWORD(v2) = v37;
  }
  v23 = (char *)v16 + (int)v2;
  v24 = v4 - 1;
  while ( v24 > 0 )
  {
    --v24;
    memmove(v23, v15, 4 * *((_DWORD *)v3 + 10));
    v15 = v30;
    v23 += (int)v2;
  }
}
