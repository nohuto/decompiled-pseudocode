/*
 * XREFs of ?vGradientFill32Bitfields@@YAXPEAVSURFACE@@PEAU_TRIANGLEDATA@@@Z @ 0x1C02CB4A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vGradientFill32Bitfields(struct SURFACE *a1, struct _TRIANGLEDATA *a2)
{
  struct _TRIANGLEDATA *v2; // r14
  struct SURFACE *v3; // r9
  __int64 v4; // rdx
  int v5; // r12d
  int v6; // r13d
  __int64 v7; // r15
  char *v8; // rcx
  int v9; // r10d
  int v10; // r8d
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r9
  int v15; // edx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rbp
  _DWORD *v18; // r13
  unsigned __int64 i; // r14
  int v20; // eax
  char *v21; // [rsp+20h] [rbp-98h]
  __int64 v22; // [rsp+28h] [rbp-90h]
  __int64 v23; // [rsp+30h] [rbp-88h]
  __int64 v24; // [rsp+38h] [rbp-80h]
  __int64 v25; // [rsp+40h] [rbp-78h]
  __int64 v26; // [rsp+58h] [rbp-60h]
  __int64 v27; // [rsp+60h] [rbp-58h]
  int v30; // [rsp+D0h] [rbp+18h]
  int v31; // [rsp+D8h] [rbp+20h]

  v2 = a2;
  v3 = a1;
  v4 = *((int *)a1 + 22);
  v5 = *((_DWORD *)v2 + 28);
  v6 = *((_DWORD *)v2 + 3);
  v30 = v5;
  v7 = *((_QWORD *)a1 + 10) + (int)v4 * v5;
  v8 = (char *)v2 + 168;
  v22 = *((_QWORD *)v2 + 2);
  v23 = *((_QWORD *)v2 + 3);
  v24 = *((_QWORD *)v2 + 4);
  v26 = *((_QWORD *)v2 + 20);
  v25 = v7;
  if ( v6 >= *((_DWORD *)v2 + 29) )
    v6 = *((_DWORD *)v2 + 29);
  v21 = (char *)v2 + 168;
  v31 = v6;
  if ( v5 < v6 )
  {
    v27 = v4;
    do
    {
      v9 = *(_DWORD *)v8;
      v10 = *((_DWORD *)v8 + 1);
      v11 = *((_QWORD *)v8 + 1);
      if ( *(_DWORD *)v8 <= *(_DWORD *)v2 )
        v9 = *(_DWORD *)v2;
      v12 = *((_QWORD *)v8 + 2);
      v13 = *((_QWORD *)v8 + 3);
      if ( v10 >= *((_DWORD *)v2 + 2) )
        v10 = *((_DWORD *)v2 + 2);
      if ( *((_QWORD *)v3 + 9) <= (unsigned __int64)(v7 + v9) && v9 < v10 )
      {
        v14 = v7 + 4LL * v9;
        v15 = *(_DWORD *)v2 - *(_DWORD *)v8;
        v16 = v7 + 4LL * v10;
        if ( v15 > 0 )
        {
          v11 += v22 * v15;
          v12 += v23 * v15;
          v13 += v24 * v15;
          v8 = v21;
        }
        v17 = (v16 - v14 + 3) >> 2;
        if ( v14 > v16 )
          v17 = 0LL;
        if ( v17 )
        {
          v18 = (_DWORD *)(v7 + 4LL * v9);
          for ( i = 0LL; i < v17; ++i )
          {
            v20 = XEPALOBJ::ulDispatchGFPEFunction(
                    v26,
                    *(unsigned int *)(*(_QWORD *)v26 + 100LL),
                    HIBYTE(v11) | ((HIBYTE(v12) | ((unsigned int)HIBYTE(v13) << 8)) << 8));
            v13 += v24;
            v11 += v22;
            v12 += v23;
            *v18++ = v20;
          }
          v2 = a2;
          v7 = v25;
          v5 = v30;
          v6 = v31;
          v8 = v21;
        }
        v3 = a1;
      }
      v7 += v27;
      v8 += 40;
      ++v5;
      v25 = v7;
      v21 = v8;
      v30 = v5;
    }
    while ( v5 < v6 );
  }
}
