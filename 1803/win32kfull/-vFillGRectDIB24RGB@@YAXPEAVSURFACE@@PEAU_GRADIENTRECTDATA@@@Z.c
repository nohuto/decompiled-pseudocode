/*
 * XREFs of ?vFillGRectDIB24RGB@@YAXPEAVSURFACE@@PEAU_GRADIENTRECTDATA@@@Z @ 0x1C02A12A0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C013D380 (memmove.c)
 */

void __fastcall vFillGRectDIB24RGB(struct SURFACE *a1, struct _GRADIENTRECTDATA *a2)
{
  __int64 v3; // r12
  int v5; // r15d
  __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // rax
  const void *v13; // r14
  _BYTE *v14; // r8
  _BYTE *v15; // rcx
  char v16; // rax^6
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  char *i; // rbx
  __int64 v20; // r14
  __int64 v21; // r13
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rax
  _BYTE *v25; // rdx
  __int64 v26; // r11
  __int64 v27; // r12
  _BYTE *v28; // r8
  _BYTE *v29; // rax
  __int64 v30; // [rsp+60h] [rbp+8h]
  __int64 v31; // [rsp+68h] [rbp+10h]
  __int64 v32; // [rsp+70h] [rbp+18h]

  v3 = *((int *)a1 + 22);
  v5 = *((_DWORD *)a2 + 11);
  v6 = *((_QWORD *)a2 + 6);
  v7 = *((_QWORD *)a2 + 7);
  v8 = *((_QWORD *)a2 + 8);
  if ( *((_DWORD *)a2 + 38) )
  {
    v20 = *((_QWORD *)a2 + 10);
    v21 = *((_QWORD *)a2 + 11);
    v22 = *((_QWORD *)a2 + 12);
    v23 = *((_QWORD *)a1 + 10) + (int)v3 * *((_DWORD *)a2 + 9);
    v24 = *((int *)a2 + 45);
    if ( (int)v24 > 0 )
    {
      v6 += v20 * v24;
      v7 += v21 * v24;
      v8 += v22 * *((int *)a2 + 45);
    }
    v25 = (_BYTE *)(3 * *((_DWORD *)a2 + 8) + v23);
    if ( v5 )
    {
      v26 = *((int *)a1 + 22);
      v27 = *((_QWORD *)a2 + 12);
      do
      {
        --v5;
        v28 = v25;
        v29 = &v25[3 * *((_DWORD *)a2 + 10)];
        if ( v25 != v29 )
        {
          do
          {
            *v28 = BYTE6(v6);
            v28[1] = BYTE6(v7);
            v28[2] = BYTE6(v8);
            v28 += 3;
          }
          while ( v28 != v29 );
        }
        v6 += v20;
        v7 += v21;
        v8 += v27;
        v25 += v26;
      }
      while ( v5 );
    }
  }
  else
  {
    v9 = *((int *)a2 + 44);
    v10 = *((_QWORD *)a2 + 14);
    v30 = v10;
    v31 = *((_QWORD *)a2 + 15);
    v32 = *((_QWORD *)a2 + 16);
    if ( (int)v9 > 0 )
    {
      v6 += v10 * v9;
      v7 += *((_QWORD *)a2 + 15) * v9;
      v8 += *((_QWORD *)a2 + 16) * v9;
    }
    v11 = *((_DWORD *)a2 + 10);
    if ( (unsigned int)(v11 - 1) <= 0xD05554 )
    {
      v12 = AllocFreeTmpBuffer((unsigned int)(3 * v11));
      v13 = (const void *)v12;
      if ( v12 )
      {
        v14 = (_BYTE *)v12;
        v15 = (_BYTE *)(v12 + 3 * *((_DWORD *)a2 + 10));
        if ( (_BYTE *)v12 != v15 )
        {
          do
          {
            v16 = BYTE6(v6);
            v6 += v30;
            *v14 = v16;
            v17 = HIWORD(v7);
            v7 += v31;
            v14[1] = v17;
            v18 = HIWORD(v8);
            v8 += v32;
            v14[2] = v18;
            v14 += 3;
          }
          while ( v14 != v15 );
        }
        for ( i = (char *)(*((_QWORD *)a1 + 10) + 3 * *((_DWORD *)a2 + 8) + (__int64)((int)v3 * *((_DWORD *)a2 + 9)));
              v5;
              --v5 )
        {
          memmove(i, v13, 3 * *((_DWORD *)a2 + 10));
          i += v3;
        }
        FreeTmpBuffer(v13);
      }
    }
  }
}
