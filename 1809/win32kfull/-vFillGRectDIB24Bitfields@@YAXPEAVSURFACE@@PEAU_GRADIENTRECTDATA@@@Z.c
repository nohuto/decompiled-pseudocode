/*
 * XREFs of ?vFillGRectDIB24Bitfields@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02B36B0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0163300 (memmove.c)
 */

void __fastcall vFillGRectDIB24Bitfields(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  int v2; // r14d
  struct _GRADIENTRECTDATA *v3; // rbp
  __int64 v4; // r11
  unsigned __int64 v5; // rbx
  int v6; // r13d
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rdx
  __int64 v12; // r10
  __int64 v13; // rax
  _BYTE *v14; // r12
  const void *v15; // rdx
  _BYTE *v16; // r15
  _BYTE *v17; // r14
  __int64 v18; // r13
  __int64 v19; // rbp
  __int64 v20; // r15
  int v21; // eax
  char *v22; // r15
  int v23; // r14d
  __int64 v24; // rax
  __int64 v25; // r12
  __int64 v26; // r15
  __int64 v27; // r13
  int v28; // eax
  __int64 v29; // [rsp+20h] [rbp-78h]
  _BYTE *v30; // [rsp+48h] [rbp-50h]
  int v31; // [rsp+A0h] [rbp+8h]
  __int64 v32; // [rsp+A0h] [rbp+8h]
  __int64 v34; // [rsp+A8h] [rbp+10h]
  int v35; // [rsp+B0h] [rbp+18h]
  __int64 v36; // [rsp+B0h] [rbp+18h]
  void *Src; // [rsp+B8h] [rbp+20h]
  void *Srca; // [rsp+B8h] [rbp+20h]

  v2 = *((_DWORD *)a2 + 11);
  v3 = a2;
  v4 = *((_QWORD *)a2 + 21);
  v5 = *((_QWORD *)a2 + 6);
  v6 = *((_DWORD *)a1 + 22);
  v7 = *((_QWORD *)a2 + 7);
  v8 = *((_QWORD *)a2 + 8);
  v9 = HIWORD(v7);
  v10 = HIWORD(v8);
  v11 = HIWORD(v5);
  v35 = v6;
  v31 = v2;
  v29 = v4;
  if ( *((_DWORD *)v3 + 38) )
  {
    v24 = *((int *)v3 + 45);
    v34 = *((_QWORD *)v3 + 10);
    v32 = *((_QWORD *)v3 + 11);
    v36 = *((_QWORD *)v3 + 12);
    if ( (int)v24 > 0 )
    {
      v5 += *((_QWORD *)v3 + 10) * v24;
      v7 += *((_QWORD *)v3 + 11) * v24;
      v9 = HIWORD(v7);
      v8 += *((_QWORD *)v3 + 12) * v24;
      v10 = HIWORD(v8);
      v11 = HIWORD(v5);
    }
    v25 = *((_QWORD *)a1 + 10) + 3 * *((_DWORD *)v3 + 8) + (__int64)(v6 * *((_DWORD *)v3 + 9));
    if ( v2 )
    {
      Srca = (void *)*((int *)a1 + 22);
      do
      {
        --v2;
        v26 = v25;
        v27 = v25 + 3 * *((_DWORD *)v3 + 10);
        v28 = XEPALOBJ::ulDispatchGFPEFunction(
                v29,
                *(unsigned int *)(*(_QWORD *)v29 + 100LL),
                (unsigned __int8)v11 | (((unsigned __int8)v9 | ((unsigned __int8)v10 << 8)) << 8));
        if ( v25 != v27 )
        {
          do
          {
            *(_WORD *)v26 = v28;
            *(_BYTE *)(v26 + 2) = BYTE2(v28);
            v26 += 3LL;
          }
          while ( v26 != v27 );
        }
        v25 += (__int64)Srca;
        v5 += v34;
        v7 += v32;
        v8 += v36;
        LOBYTE(v9) = BYTE6(v7);
        v11 = HIWORD(v5);
        LOBYTE(v10) = BYTE6(v8);
      }
      while ( v2 );
    }
  }
  else
  {
    v12 = *((_QWORD *)v3 + 16);
    v13 = *((int *)v3 + 44);
    if ( (int)v13 > 0 )
    {
      v5 += *((_QWORD *)v3 + 14) * v13;
      v7 += *((_QWORD *)v3 + 15) * v13;
      v8 += v12 * *((int *)v3 + 44);
    }
    v14 = (_BYTE *)(*((_QWORD *)a1 + 10) + v6 * *((_DWORD *)v3 + 9) + 3 * *((_DWORD *)v3 + 8));
    v15 = v14;
    v30 = v14;
    Src = v14;
    v16 = v14;
    if ( v14 != &v14[3 * *((_DWORD *)v3 + 10)] )
    {
      v17 = &v14[3 * *((_DWORD *)v3 + 10)];
      v18 = *((_QWORD *)v3 + 14);
      v19 = *((_QWORD *)v3 + 15);
      v20 = v12;
      do
      {
        v21 = XEPALOBJ::ulDispatchGFPEFunction(
                v4,
                *(unsigned int *)(*(_QWORD *)v4 + 100LL),
                BYTE6(v5) | ((BYTE6(v7) | (BYTE6(v8) << 8)) << 8));
        v4 = v29;
        v5 += v18;
        *v14 = v21;
        v7 += v19;
        v8 += v20;
        v14[1] = BYTE1(v21);
        v14[2] = BYTE2(v21);
        v14 += 3;
      }
      while ( v14 != v17 );
      v16 = v30;
      v3 = a2;
      v15 = v30;
      v2 = v31;
      v6 = v35;
    }
    v22 = &v16[v6];
    v23 = v2 - 1;
    while ( v23 > 0 )
    {
      --v23;
      memmove(v22, v15, 3 * *((_DWORD *)v3 + 10));
      v15 = Src;
      v22 += v6;
    }
  }
}
