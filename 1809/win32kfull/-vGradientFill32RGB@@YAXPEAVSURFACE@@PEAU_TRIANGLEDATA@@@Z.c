/*
 * XREFs of ?vGradientFill32RGB@@YAXPEAVSURFACE@@PEAU_TRIANGLEDATA@@@Z @ 0x1C02B5980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vGradientFill32RGB(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  struct _TRIANGLEDATA *v2; // r11
  struct SURFACE *v3; // r13
  int v4; // esi
  char *v5; // r14
  int v6; // ebp
  __int64 v7; // rbx
  int v8; // edi
  int v9; // r10d
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  _DWORD *v13; // r15
  int v14; // r9d
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // r8
  int v19; // r10d
  int v20; // r10d
  unsigned __int64 v21; // r8
  __int64 v22; // [rsp+0h] [rbp-68h]
  __int64 v23; // [rsp+8h] [rbp-60h]
  __int64 v24; // [rsp+10h] [rbp-58h]
  int v27; // [rsp+80h] [rbp+18h]
  __int64 v28; // [rsp+88h] [rbp+20h]

  v2 = a2;
  v3 = a1;
  v4 = *((_DWORD *)a2 + 28);
  v5 = (char *)a2 + 168;
  v6 = *((_DWORD *)a2 + 3);
  v7 = *((_QWORD *)a1 + 10) + *((_DWORD *)a1 + 22) * v4;
  v28 = *((_QWORD *)a2 + 2);
  v22 = *((_QWORD *)a2 + 3);
  v23 = *((_QWORD *)a2 + 4);
  if ( v6 >= *((_DWORD *)a2 + 29) )
    v6 = *((_DWORD *)a2 + 29);
  v27 = v6;
  if ( v4 < v6 )
  {
    v24 = *((int *)a1 + 22);
    do
    {
      v8 = *(_DWORD *)v5;
      v9 = *((_DWORD *)v5 + 1);
      v10 = *((_QWORD *)v5 + 1);
      if ( *(_DWORD *)v5 <= *(_DWORD *)v2 )
        v8 = *(_DWORD *)v2;
      v11 = *((_QWORD *)v5 + 2);
      v12 = *((_QWORD *)v5 + 3);
      if ( v9 >= *((_DWORD *)v2 + 2) )
        v9 = *((_DWORD *)v2 + 2);
      if ( *((_QWORD *)v3 + 9) <= (unsigned __int64)(v8 + v7) && v8 < v9 )
      {
        v13 = (_DWORD *)(v7 + 4LL * v8);
        v14 = *(_DWORD *)v2 - *(_DWORD *)v5;
        v15 = v7 + 4LL * v9;
        if ( v14 > 0 )
        {
          v10 += v28 * v14;
          v11 += v22 * v14;
          v12 += v23 * v14;
        }
        v16 = 0LL;
        v17 = (v15 - (unsigned __int64)v13 + 3) >> 2;
        if ( (unsigned __int64)v13 > v15 )
          v17 = 0LL;
        if ( v17 )
        {
          do
          {
            v18 = v11;
            v11 += v22;
            v19 = HIBYTE(v12) << 8;
            v12 += v23;
            ++v16;
            v20 = HIBYTE(v18) | v19;
            v21 = HIBYTE(v10);
            v10 += v28;
            *v13++ = v21 | (v20 << 8);
          }
          while ( v16 < v17 );
          v2 = a2;
          v6 = v27;
          v3 = a1;
        }
      }
      v7 += v24;
      v5 += 40;
      ++v4;
    }
    while ( v4 < v6 );
  }
}
