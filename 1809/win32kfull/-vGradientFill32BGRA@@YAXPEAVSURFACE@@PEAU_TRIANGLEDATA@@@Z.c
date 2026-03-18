/*
 * XREFs of ?vGradientFill32BGRA@@YAXPEAVSURFACE@@PEAU_TRIANGLEDATA@@@Z @ 0x1C0145890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vGradientFill32BGRA(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  struct _TRIANGLEDATA *v2; // rbx
  struct SURFACE *v3; // r13
  int v4; // ebp
  char *v5; // r15
  int v6; // r14d
  __int64 v7; // rsi
  int v8; // edi
  int v9; // r11d
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  int v14; // r10d
  _DWORD *v15; // r12
  unsigned __int64 v16; // r11
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // r9
  int v20; // r11d
  int v21; // r11d
  unsigned __int64 v22; // r9
  int v23; // r11d
  unsigned __int64 v24; // r9
  int v25; // [rsp+0h] [rbp-88h]
  __int64 v26; // [rsp+8h] [rbp-80h]
  __int64 v27; // [rsp+10h] [rbp-78h]
  __int64 v28; // [rsp+18h] [rbp-70h]
  __int64 v29; // [rsp+20h] [rbp-68h]
  char *v30; // [rsp+28h] [rbp-60h]
  __int64 v31; // [rsp+30h] [rbp-58h]
  int v34; // [rsp+A0h] [rbp+18h]

  v2 = a2;
  v3 = a1;
  v4 = *((_DWORD *)a2 + 28);
  v5 = (char *)a2 + 168;
  v6 = *((_DWORD *)a2 + 3);
  v34 = v4;
  v30 = (char *)a2 + 168;
  v7 = *((_QWORD *)a1 + 10) + *((_DWORD *)a1 + 22) * v4;
  v26 = *((_QWORD *)a2 + 2);
  v27 = *((_QWORD *)a2 + 3);
  v28 = *((_QWORD *)a2 + 4);
  v29 = *((_QWORD *)a2 + 5);
  if ( v6 >= *((_DWORD *)a2 + 29) )
    v6 = *((_DWORD *)a2 + 29);
  v25 = v6;
  if ( v4 < v6 )
  {
    v31 = *((int *)a1 + 22);
    do
    {
      v8 = *(_DWORD *)v5;
      v9 = *((_DWORD *)v5 + 1);
      v10 = *((_QWORD *)v5 + 1);
      if ( *(_DWORD *)v5 <= *(_DWORD *)v2 )
        v8 = *(_DWORD *)v2;
      v11 = *((_QWORD *)v5 + 2);
      v12 = *((_QWORD *)v5 + 3);
      v13 = *((_QWORD *)v5 + 4);
      if ( v9 >= *((_DWORD *)v2 + 2) )
        v9 = *((_DWORD *)v2 + 2);
      if ( v8 < v9 && *((_QWORD *)v3 + 9) <= (unsigned __int64)(v8 + v7) )
      {
        v14 = *(_DWORD *)v2 - *(_DWORD *)v5;
        v15 = (_DWORD *)(v7 + 4LL * v8);
        v16 = v7 + 4LL * v9;
        if ( v14 > 0 )
        {
          v10 += v26 * v14;
          v11 += v27 * v14;
          v12 += v28 * v14;
          v13 += v29 * v14;
        }
        v17 = (v16 - (unsigned __int64)v15 + 3) >> 2;
        if ( (unsigned __int64)v15 > v16 )
          v17 = 0LL;
        if ( v17 )
        {
          v18 = 0LL;
          do
          {
            v19 = v10;
            v10 += v26;
            v20 = HIBYTE(v13) << 8;
            v13 += v29;
            ++v18;
            v21 = HIBYTE(v19) | v20;
            v22 = HIBYTE(v11);
            v11 += v27;
            v23 = v22 | (v21 << 8);
            v24 = HIBYTE(v12);
            v12 += v28;
            *v15++ = v24 | (v23 << 8);
          }
          while ( v18 < v17 );
          v2 = a2;
          v4 = v34;
          v6 = v25;
          v5 = v30;
          v3 = a1;
        }
      }
      v7 += v31;
      v5 += 40;
      ++v4;
      v30 = v5;
      v34 = v4;
    }
    while ( v4 < v6 );
  }
}
