/*
 * XREFs of ?vFillGRectDIB32Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C0152D40
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0168100 (memmove.c)
 */

void __fastcall vFillGRectDIB32Bitfields(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  int v2; // r13d
  struct _GRADIENTRECTDATA *v3; // r14
  __int64 v4; // r11
  int v5; // r15d
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r13
  unsigned int v12; // eax
  void *v13; // r9
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  unsigned __int64 v16; // r12
  char *v17; // rcx
  _DWORD *v18; // rdi
  char *v19; // rax
  unsigned __int64 v20; // r12
  __int64 v21; // r15
  __int64 v22; // r13
  __int64 v23; // r14
  __int64 i; // rdi
  int v25; // eax
  char *v26; // rdi
  int v27; // r15d
  char *v28; // [rsp+20h] [rbp-88h]
  __int64 v29; // [rsp+28h] [rbp-80h]
  char *v30; // [rsp+50h] [rbp-58h]
  int v31; // [rsp+B0h] [rbp+8h]
  __int64 v32; // [rsp+B0h] [rbp+8h]
  int v34; // [rsp+C0h] [rbp+18h]
  __int64 v35; // [rsp+C0h] [rbp+18h]
  __int64 v36; // [rsp+C8h] [rbp+20h]
  char *v37; // [rsp+C8h] [rbp+20h]

  v2 = *((_DWORD *)a1 + 22);
  v3 = a2;
  v34 = v2;
  v4 = *((_QWORD *)a2 + 21);
  v5 = *((_DWORD *)a2 + 11);
  v6 = *((_QWORD *)a2 + 6);
  v7 = *((_QWORD *)a2 + 7);
  v8 = *((_QWORD *)a2 + 8);
  v29 = v4;
  v31 = v5;
  if ( *((_DWORD *)a2 + 38) )
  {
    v9 = *((int *)a2 + 45);
    v32 = *((_QWORD *)a2 + 11);
    v35 = *((_QWORD *)a2 + 12);
    if ( (int)v9 > 0 )
    {
      v6 += *((_QWORD *)a2 + 10) * v9;
      v7 += *((_QWORD *)a2 + 11) * v9;
      v8 += *((_QWORD *)a2 + 12) * v9;
    }
    v10 = *((_QWORD *)a1 + 10) + 4 * *((_DWORD *)a2 + 8) + (__int64)(v2 * *((_DWORD *)a2 + 9));
    if ( v5 )
    {
      v36 = *((int *)a1 + 22);
      v11 = *((_QWORD *)a2 + 10);
      while ( 1 )
      {
        --v5;
        v12 = XEPALOBJ::ulDispatchGFPEFunction(
                v4,
                *(unsigned int *)(*(_QWORD *)v4 + 100LL),
                BYTE6(v6) | ((BYTE6(v7) | (BYTE6(v8) << 8)) << 8));
        v13 = (void *)v10;
        v14 = (unsigned __int64)(4 * *((_DWORD *)v3 + 10)) >> 2;
        if ( v14 )
        {
          if ( (v10 & 4) == 0 )
            goto LABEL_11;
          *(_DWORD *)v10 = v12;
          if ( --v14 )
            break;
        }
LABEL_9:
        v7 += v32;
        v6 += v11;
        v8 += v35;
        v10 += v36;
        v4 = v29;
        if ( !v5 )
          return;
      }
      v13 = (void *)(v10 + 4);
LABEL_11:
      memset64(v13, v12 | ((unsigned __int64)v12 << 32), v14 >> 1);
      if ( (v14 & 1) != 0 )
        *((_DWORD *)v13 + v14 - 1) = v12;
      goto LABEL_9;
    }
  }
  else
  {
    v15 = *((int *)a2 + 44);
    if ( (int)v15 > 0 )
    {
      v6 += *((_QWORD *)a2 + 14) * v15;
      v7 += *((_QWORD *)a2 + 15) * v15;
      v8 += *((_QWORD *)a2 + 16) * *((int *)a2 + 44);
    }
    v16 = 4LL * *((int *)a2 + 10);
    v17 = (char *)(*((_QWORD *)a1 + 10) + v2 * *((_DWORD *)a2 + 9) + 4LL * *((int *)a2 + 8));
    v28 = v17;
    v18 = v17;
    v19 = &v17[v16];
    v30 = v17;
    v20 = v16 >> 2;
    v37 = v17;
    if ( v17 > v19 )
      v20 = 0LL;
    if ( v20 )
    {
      v21 = *((_QWORD *)a2 + 14);
      v22 = *((_QWORD *)a2 + 15);
      v23 = *((_QWORD *)a2 + 16);
      for ( i = 0LL; i != v20; ++i )
      {
        v25 = XEPALOBJ::ulDispatchGFPEFunction(
                v4,
                *(unsigned int *)(*(_QWORD *)v4 + 100LL),
                BYTE6(v6) | ((BYTE6(v7) | (BYTE6(v8) << 8)) << 8));
        v6 += v21;
        v4 = v29;
        v7 += v22;
        v8 += v23;
        *(_DWORD *)v37 = v25;
        v37 += 4;
      }
      v18 = v30;
      v3 = a2;
      v17 = v30;
      v5 = v31;
      v2 = v34;
    }
    v26 = (char *)v18 + v2;
    v27 = v5 - 1;
    while ( v27 > 0 )
    {
      --v27;
      memmove(v26, v17, 4 * *((_DWORD *)v3 + 10));
      v17 = v28;
      v26 += v2;
    }
  }
}
