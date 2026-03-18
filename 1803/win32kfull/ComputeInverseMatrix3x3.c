/*
 * XREFs of ComputeInverseMatrix3x3 @ 0x1C00D3970
 * Callers:
 *     ComputeColorSpaceXForm @ 0x1C00D3BC8 (ComputeColorSpaceXForm.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x1C00D3F58 (HT_CreateDeviceHalftoneInfo.c)
 * Callees:
 *     MulFD6 @ 0x1C00D17C8 (MulFD6.c)
 *     DivFD6 @ 0x1C00D331C (DivFD6.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall ComputeInverseMatrix3x3(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int128 v3; // xmm1
  int *v4; // r12
  __int64 v5; // r14
  int v6; // r10d
  __int64 v7; // r13
  int *v8; // rsi
  int v9; // r11d
  __int64 v10; // rdx
  int v11; // edi
  __int64 i; // rbx
  int v13; // r9d
  int v14; // r8d
  __int64 v15; // rax
  int v16; // eax
  int v17; // edi
  __int64 v18; // rbx
  __int64 v19; // rsi
  int v20; // eax
  int v21; // ecx
  __int64 v22; // r15
  __int64 v23; // rdi
  int v24; // r13d
  __int64 v25; // r14
  __int64 v26; // r15
  int v27; // eax
  int v28; // ecx
  unsigned int v29; // r15d
  int v30; // ecx
  __int128 v31; // xmm1
  __int64 v33; // r11
  __int64 v34; // r9
  __int64 v35; // r10
  __int64 v36; // r8
  _DWORD *v37; // rdx
  int v38; // ecx
  int v39; // eax
  int v40; // ecx
  int v41; // [rsp+20h] [rbp-79h]
  int v42; // [rsp+24h] [rbp-75h]
  __int64 v43; // [rsp+28h] [rbp-71h]
  int *v44; // [rsp+30h] [rbp-69h]
  __int64 v45; // [rsp+38h] [rbp-61h]
  int *v46; // [rsp+40h] [rbp-59h]
  int *v47; // [rsp+48h] [rbp-51h]
  __int64 v48; // [rsp+50h] [rbp-49h]
  __int64 v49; // [rsp+58h] [rbp-41h]
  _OWORD v51[2]; // [rsp+68h] [rbp-31h] BYREF
  int v52; // [rsp+88h] [rbp-11h]
  _BYTE v53[36]; // [rsp+90h] [rbp-9h] BYREF

  v2 = *(_DWORD *)(a1 + 32);
  v3 = *(_OWORD *)(a1 + 16);
  v41 = 1;
  v51[0] = *(_OWORD *)a1;
  v52 = v2;
  v51[1] = v3;
  memset(v53, 0, sizeof(v53));
  v4 = (int *)v51;
  v5 = 0LL;
  *(_DWORD *)&v53[32] = 1000000;
  v6 = 0;
  *(_DWORD *)&v53[16] = 1000000;
  v7 = 0LL;
  *(_DWORD *)v53 = 1000000;
  v8 = (int *)v51;
  v48 = 0LL;
  v45 = 0LL;
  v47 = (int *)v51;
  v46 = (int *)v51;
  do
  {
    v9 = v6;
    v42 = v6 + 1;
    v49 = v5 + 1;
    v10 = v5;
    v11 = v6 + 1;
    for ( i = v5 + 1; v11 < 3; v9 = v16 )
    {
      v13 = *((_DWORD *)v51 + 2 * i + i + v5);
      if ( v13 < 0 )
        v13 = -v13;
      v14 = *((_DWORD *)v51 + 2 * v10 + v10 + v5);
      if ( v14 < 0 )
        v14 = -v14;
      v15 = i;
      if ( v13 <= v14 )
        v15 = v10;
      v10 = v15;
      v16 = v11;
      if ( v13 <= v14 )
        v16 = v9;
      ++v11;
      ++i;
    }
    if ( *((_DWORD *)v51 + 2 * v10 + v10 + v5) )
    {
      if ( v9 != v6 )
      {
        v33 = 3LL;
        v34 = 12 * (v5 - v10);
        v35 = v34 + 40;
        v36 = 12 * v10;
        do
        {
          v37 = (_DWORD *)((char *)v51 + v36);
          v38 = *(_DWORD *)((char *)v51 + v36 + v34);
          v37[(unsigned __int64)v34 / 4] = *v37;
          v39 = *(_DWORD *)&v53[v36];
          *v37 = v38;
          v40 = *(_DWORD *)((char *)v51 + v36 + v35);
          *(_DWORD *)((char *)v37 + v35) = v39;
          *(_DWORD *)&v53[v36] = v40;
          v36 += 4LL;
          --v33;
        }
        while ( v33 );
      }
      v17 = *v8;
      v18 = v7;
      v19 = 3LL;
      do
      {
        v20 = DivFD6(*(_DWORD *)((char *)v51 + v18), v17);
        v21 = *(_DWORD *)&v53[v18];
        *(_DWORD *)((char *)v51 + v18) = v20;
        *(_DWORD *)&v53[v18] = DivFD6(v21, v17);
        v18 += 4LL;
        --v19;
      }
      while ( v19 );
      v22 = 0LL;
      v44 = v4;
      v43 = 0LL;
      v23 = v7 - (_QWORD)v51;
      do
      {
        if ( v22 != v5 )
        {
          v24 = *v4;
          if ( *v4 )
          {
            v25 = v19;
            v26 = 3LL;
            do
            {
              v27 = MulFD6(*(_DWORD *)((char *)v51 + (_QWORD)v51 + v25 + v23), v24);
              v28 = *(_DWORD *)&v53[v23 + (_QWORD)v51 + v25];
              *(_DWORD *)((char *)v51 + v25) -= v27;
              *(_DWORD *)&v53[v25] -= MulFD6(v28, v24);
              v25 += 4LL;
              --v26;
            }
            while ( v26 );
            v5 = v45;
            v22 = v43;
            v4 = v44;
          }
        }
        ++v22;
        v4 += 3;
        v23 -= 12LL;
        v43 = v22;
        v19 += 12LL;
        v44 = v4;
      }
      while ( v19 < 36 );
      v7 = v48;
      v8 = v46;
      v4 = v47;
      v29 = v41;
    }
    else
    {
      v29 = 0;
      v41 = 0;
    }
    v6 = v42;
    v8 += 4;
    v5 = v49;
    ++v4;
    v7 += 12LL;
    v45 = v49;
    v46 = v8;
    v47 = v4;
    v48 = v7;
  }
  while ( v42 < 3 );
  v30 = *(_DWORD *)&v53[32];
  v31 = *(_OWORD *)&v53[16];
  *(_OWORD *)a2 = *(_OWORD *)v53;
  *(_OWORD *)(a2 + 16) = v31;
  *(_DWORD *)(a2 + 32) = v30;
  return v29;
}
