/*
 * XREFs of TileDIB_CY @ 0x1C0269380
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C003CB9C (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     AlphaBlendBGRF @ 0x1C02631F0 (AlphaBlendBGRF.c)
 *     MappingBGRF @ 0x1C02683C4 (MappingBGRF.c)
 */

__int64 __fastcall TileDIB_CY(__int128 *a1)
{
  bool v1; // zf
  int *v3; // rdx
  __int64 v4; // rax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  unsigned int v18; // ebx
  _WORD *v19; // rdi
  int v20; // ecx
  int v21; // r14d
  __int64 v22; // rsi
  unsigned __int8 *FixupScan; // r8
  int v24; // edx
  _WORD *i; // r9
  __int64 v26; // rcx
  __int64 v27; // r9
  unsigned __int8 *v28; // rdx
  int v29; // r10d
  int v30; // r11d
  int v31; // ecx
  __int16 v32; // ax
  __int16 v33; // ax
  __int16 v34; // ax
  unsigned __int8 *v35; // rax
  __int64 v36; // rcx
  int v37; // [rsp+50h] [rbp-B0h] BYREF
  char v38; // [rsp+58h] [rbp-A8h]
  int v39; // [rsp+88h] [rbp-78h]
  __int64 v40; // [rsp+D8h] [rbp-28h]
  int v41; // [rsp+E0h] [rbp-20h]
  unsigned int v42; // [rsp+E4h] [rbp-1Ch]
  int v43; // [rsp+ECh] [rbp-14h]
  void (__fastcall *v44)(int *, unsigned __int8 *, unsigned __int8 *, __int64); // [rsp+110h] [rbp+10h]
  void (__fastcall *v45)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+160h] [rbp+60h]
  __int64 v46; // [rsp+168h] [rbp+68h]
  __int64 v47; // [rsp+180h] [rbp+80h]
  __int64 v48; // [rsp+188h] [rbp+88h]
  __int64 v49; // [rsp+1D0h] [rbp+D0h]
  __int64 v50; // [rsp+1D8h] [rbp+D8h]
  __int64 v51; // [rsp+1E8h] [rbp+E8h]
  __int64 v52; // [rsp+1F0h] [rbp+F0h]
  __int64 v53; // [rsp+1F8h] [rbp+F8h]
  int v54; // [rsp+200h] [rbp+100h]
  int v55; // [rsp+204h] [rbp+104h]
  int v56; // [rsp+208h] [rbp+108h]
  unsigned __int8 *v57; // [rsp+210h] [rbp+110h]
  unsigned __int8 *v58; // [rsp+218h] [rbp+118h]
  unsigned __int8 *v59; // [rsp+220h] [rbp+120h]
  int v60; // [rsp+228h] [rbp+128h]
  void *v61; // [rsp+268h] [rbp+168h]
  unsigned __int8 *v62; // [rsp+270h] [rbp+170h]
  unsigned __int64 v63; // [rsp+278h] [rbp+178h]
  __int64 v64; // [rsp+280h] [rbp+180h]
  __int64 v65; // [rsp+288h] [rbp+188h]
  __int64 v66; // [rsp+290h] [rbp+190h]
  int v67; // [rsp+2A0h] [rbp+1A0h]

  if ( (*((_BYTE *)a1 + 8) & 4) != 0 )
    v1 = *(_QWORD *)(*((_QWORD *)a1 + 39) + 32LL) == 0LL;
  else
    v1 = *((_QWORD *)a1 + 67) == 0LL;
  if ( v1 )
    return *((unsigned int *)a1 + 37);
  v3 = &v37;
  v4 = 4LL;
  do
  {
    v5 = *a1;
    v6 = a1[1];
    a1 += 8;
    *(_OWORD *)v3 = v5;
    v7 = *(a1 - 6);
    *((_OWORD *)v3 + 1) = v6;
    v8 = *(a1 - 5);
    *((_OWORD *)v3 + 2) = v7;
    v9 = *(a1 - 4);
    *((_OWORD *)v3 + 3) = v8;
    v10 = *(a1 - 3);
    *((_OWORD *)v3 + 4) = v9;
    v11 = *(a1 - 2);
    *((_OWORD *)v3 + 5) = v10;
    v12 = *(a1 - 1);
    *((_OWORD *)v3 + 6) = v11;
    v3 += 32;
    *((_OWORD *)v3 - 1) = v12;
    --v4;
  }
  while ( v4 );
  v13 = *((_QWORD *)a1 + 10);
  v14 = a1[1];
  *(_OWORD *)v3 = *a1;
  v15 = a1[2];
  *((_OWORD *)v3 + 1) = v14;
  v16 = a1[3];
  *((_OWORD *)v3 + 2) = v15;
  v17 = a1[4];
  *((_OWORD *)v3 + 3) = v16;
  *((_OWORD *)v3 + 4) = v17;
  *((_QWORD *)v3 + 10) = v13;
  v18 = v42;
  v19 = *(_WORD **)(v48 + 32);
  v20 = *(_DWORD *)(v47 + 24);
  v21 = v39 - v20;
  if ( v42 )
  {
    v22 = (int)(v20 * ((~v38 & 4 | 8u) >> 2));
    do
    {
      --v18;
      FixupScan = (unsigned __int8 *)GetFixupScan((__int64)&v37, v61);
      if ( (v38 & 4) != 0 )
      {
        v24 = v39;
        for ( i = v19; v24; --v24 )
        {
          v26 = *FixupScan++;
          *i++ = GrayIdxWORD[v26];
        }
        FixupScan = (unsigned __int8 *)v19;
      }
      v27 = v66;
      v28 = &FixupScan[v22];
      v29 = v41;
      v30 = v21;
      while ( v29 )
      {
        v31 = v29;
        if ( v30 <= v29 )
          v31 = v30;
        v30 = v39;
        v29 -= v31;
        if ( (v38 & 4) != 0 )
        {
          for ( ; v31; --v31 )
          {
            v32 = *(_WORD *)v28;
            v28 += 2;
            *(_WORD *)v27 = v32;
            v27 += v67;
          }
        }
        else
        {
          for ( ; v31; --v31 )
          {
            v33 = *(_WORD *)v28;
            v28 += 3;
            *(_WORD *)v27 = v33;
            *(_BYTE *)(v27 + 2) = *(v28 - 1);
            v27 += v67;
          }
        }
        v28 = FixupScan;
      }
      v34 = v37;
      if ( (v37 & 0x80u) != 0 )
      {
        v44(&v37, v28, FixupScan, v27);
        v34 = v37;
      }
      if ( (v34 & 0x800) != 0 )
      {
        AlphaBlendBGRF(&v37);
        LOBYTE(v34) = v37;
      }
      if ( (v34 & 0x10) != 0 )
      {
        MappingBGRF(v62, v63, v50, v57);
        v35 = &v57[v60];
        if ( v35 == v58 )
          v35 = v59;
        v57 = v35;
      }
      v45(&v37, v64, v65, v40, v49, v51, v51 + v55, v56, v46);
      v36 = v54 + v51;
      if ( v36 == v52 )
        v36 = v53;
      v40 += v43;
      v51 = v36;
    }
    while ( v18 );
    return v42;
  }
  return v18;
}
