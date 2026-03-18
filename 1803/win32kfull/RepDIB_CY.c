/*
 * XREFs of RepDIB_CY @ 0x1C0114DE0
 * Callers:
 *     <none>
 * Callees:
 *     CopyDIB_CX @ 0x1C0117900 (CopyDIB_CX.c)
 *     FixupColorScan @ 0x1C012702C (FixupColorScan.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     FixupGrayScan @ 0x1C0234184 (FixupGrayScan.c)
 *     AlphaBlendBGRF @ 0x1C0234D70 (AlphaBlendBGRF.c)
 *     MappingBGR @ 0x1C023928C (MappingBGR.c)
 *     MappingBGRF @ 0x1C0239330 (MappingBGRF.c)
 */

__int64 __fastcall RepDIB_CY(__int128 *a1)
{
  __int128 *v1; // r13
  __int128 *v2; // rax
  __int64 v3; // rdx
  int *v4; // rcx
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  int v13; // edi
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int64 v18; // rax
  unsigned __int16 *v19; // rsi
  __int64 v20; // r15
  __int64 v21; // r14
  int v22; // r12d
  unsigned __int64 v23; // r13
  __int64 v24; // r9
  unsigned __int64 v25; // r10
  unsigned __int8 *v26; // rax
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v31; // rbx
  unsigned int v32; // ecx
  __int64 v33; // rdx
  char v34; // al
  __int64 v35; // rax
  __int64 v36; // rax
  _BYTE *v37; // r8
  int v39; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v40[16]; // [rsp+68h] [rbp-98h] BYREF
  void (__fastcall *v41)(_BYTE *, __int64, _QWORD, __int64); // [rsp+78h] [rbp-88h]
  __int64 v42; // [rsp+80h] [rbp-80h]
  unsigned int v43; // [rsp+88h] [rbp-78h]
  __int64 v44; // [rsp+90h] [rbp-70h]
  unsigned int v45; // [rsp+98h] [rbp-68h]
  unsigned int v46; // [rsp+9Ch] [rbp-64h]
  int v47; // [rsp+A4h] [rbp-5Ch]
  __int64 v48; // [rsp+E8h] [rbp-18h]
  int v49; // [rsp+F0h] [rbp-10h]
  int v50; // [rsp+F4h] [rbp-Ch]
  int v51; // [rsp+FCh] [rbp-4h]
  void (__fastcall *v52)(int *); // [rsp+120h] [rbp+20h]
  void (__fastcall *v53)(int *, __int64, unsigned __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+170h] [rbp+70h]
  __int64 v54; // [rsp+178h] [rbp+78h]
  void (__fastcall *v55)(__int64, __int64, __int64, __int64, int); // [rsp+180h] [rbp+80h]
  __int64 v56; // [rsp+190h] [rbp+90h]
  _QWORD *v57; // [rsp+198h] [rbp+98h]
  __int64 v58; // [rsp+1E0h] [rbp+E0h]
  __int64 v59; // [rsp+1E8h] [rbp+E8h]
  __int64 v60; // [rsp+1F8h] [rbp+F8h]
  __int64 v61; // [rsp+200h] [rbp+100h]
  __int64 v62; // [rsp+208h] [rbp+108h]
  int v63; // [rsp+210h] [rbp+110h]
  int v64; // [rsp+214h] [rbp+114h]
  int v65; // [rsp+218h] [rbp+118h]
  __int64 v66; // [rsp+220h] [rbp+120h]
  __int64 v67; // [rsp+228h] [rbp+128h]
  __int64 v68; // [rsp+230h] [rbp+130h]
  int v69; // [rsp+238h] [rbp+138h]
  __int64 v70; // [rsp+278h] [rbp+178h]
  __int64 v71; // [rsp+280h] [rbp+180h]
  __int64 v72; // [rsp+288h] [rbp+188h]
  __int64 v73; // [rsp+290h] [rbp+190h]
  unsigned __int64 v74; // [rsp+298h] [rbp+198h]
  __int64 v75; // [rsp+2A0h] [rbp+1A0h]
  __int64 v76; // [rsp+2A8h] [rbp+1A8h]
  int v77; // [rsp+2B0h] [rbp+1B0h]

  v1 = a1;
  v2 = a1;
  v3 = 4LL;
  v4 = &v39;
  do
  {
    v4 += 32;
    v5 = *v2;
    v6 = v2[1];
    v2 += 8;
    *((_OWORD *)v4 - 8) = v5;
    v7 = *(v2 - 6);
    *((_OWORD *)v4 - 7) = v6;
    v8 = *(v2 - 5);
    *((_OWORD *)v4 - 6) = v7;
    v9 = *(v2 - 4);
    *((_OWORD *)v4 - 5) = v8;
    v10 = *(v2 - 3);
    *((_OWORD *)v4 - 4) = v9;
    v11 = *(v2 - 2);
    *((_OWORD *)v4 - 3) = v10;
    v12 = *(v2 - 1);
    *((_OWORD *)v4 - 2) = v11;
    *((_OWORD *)v4 - 1) = v12;
    --v3;
  }
  while ( v3 );
  v13 = 1;
  v14 = v2[1];
  *(_OWORD *)v4 = *v2;
  v15 = v2[2];
  *((_OWORD *)v4 + 1) = v14;
  v16 = v2[3];
  *((_OWORD *)v4 + 2) = v15;
  v17 = v2[4];
  v18 = *((_QWORD *)v2 + 10);
  *((_OWORD *)v4 + 3) = v16;
  *((_OWORD *)v4 + 4) = v17;
  *((_QWORD *)v4 + 10) = v18;
  v19 = (unsigned __int16 *)v57[11];
  if ( (v39 & 0x800) != 0 )
  {
    v22 = 3;
    v20 = v57[4];
    v21 = v20 + 2LL * v49 + v49;
  }
  else
  {
    v20 = v75;
    v21 = v76;
    v22 = v77;
  }
  if ( v50 )
  {
    v23 = v57[12];
    do
    {
      --v50;
      if ( !--v13 )
      {
        v13 = *v19;
        if ( (unsigned __int64)v19 < v23 )
        {
          v31 = v70;
          if ( (v39 & 0x40) != 0 )
          {
            if ( (v40[0] & 4) != 0 )
              FixupGrayScan(&v39);
            else
              FixupColorScan(&v39);
          }
          else
          {
            v32 = v46;
            if ( (v39 & 0x20) != 0 )
            {
              v32 = v46 + 1;
              if ( (int)(v46 + 1) > (int)v43 )
                v32 = v43;
              v46 = v32;
              v33 = v42 + (int)(v47 * (v43 - v32));
              v34 = v40[0] | 2;
              v44 = v33;
              v39 &= ~0x20u;
              v40[0] |= 2u;
            }
            else
            {
              v33 = v44;
              v34 = v40[0];
            }
            if ( v70 )
            {
              v41(v40, v70, v43, v42);
            }
            else if ( (v34 & 2) != 0 )
            {
              if ( !v32 || (v46 = v32 - 1, v32 == 1) )
              {
                if ( (v34 & 1) != 0 )
                {
                  v44 = v42;
                  v46 = v43;
                }
                else
                {
                  v40[0] = v34 & 0xFD;
                }
              }
              else
              {
                v44 = v47 + v33;
              }
            }
          }
          if ( (v39 & 8) != 0 && v31 )
          {
            MappingBGR(v31, v45, v59, v66);
            v35 = v69 + v66;
            if ( v35 == v67 )
              v35 = v68;
            v66 = v35;
          }
          v55(v56, v31, v20, v21, v22);
          ++v19;
        }
      }
      if ( (v39 & 0x800) != 0 )
        CopyDIB_CX(0, v20, v75, v76, v77);
      if ( (v39 & 0x80u) != 0 )
        v52(&v39);
      if ( (v39 & 0x800) != 0 )
        AlphaBlendBGRF(&v39);
      if ( (v39 & 0x10) != 0 )
      {
        MappingBGRF(v71, v72, v59, v66);
        v36 = v69 + v66;
        if ( v36 == v67 )
          v36 = v68;
        v66 = v36;
      }
      v24 = v58;
      v25 = v74;
      if ( (char *)v53 == (char *)OutputAATo24BPP_BGR )
      {
        v26 = (unsigned __int8 *)(v73 + 4);
        if ( (v39 & 0x80u) != 0 )
        {
          if ( (unsigned __int64)v26 < v74 )
          {
            v37 = (_BYTE *)(v48 + 2);
            do
            {
              if ( v26[3] )
              {
                *(v37 - 2) = ~*(_BYTE *)(v24 + 4LL * ((unsigned int)v26[2] + 512));
                *(v37 - 1) = ~*(_BYTE *)(v24 + 4LL * ((unsigned int)v26[1] + 256));
                *v37 = ~*(_BYTE *)(v24 + 4LL * *v26);
              }
              v37 += 3;
              v26 += 4;
            }
            while ( (unsigned __int64)v26 < v25 );
          }
        }
        else if ( (unsigned __int64)v26 < v74 )
        {
          v27 = v48 + 2;
          do
          {
            v27 += 3LL;
            *(_BYTE *)(v27 - 5) = ~*(_BYTE *)(v24 + 4LL * ((unsigned int)v26[2] + 512));
            *(_BYTE *)(v27 - 4) = ~*(_BYTE *)(v24 + 4LL * ((unsigned int)v26[1] + 256));
            v28 = *v26;
            v26 += 4;
            *(_BYTE *)(v27 - 3) = ~*(_BYTE *)(v24 + 4 * v28);
          }
          while ( (unsigned __int64)v26 < v25 );
        }
      }
      else
      {
        v53(&v39, v73, v74, v48, v58, v60, v60 + v64, v65, v54);
      }
      v29 = v63 + v60;
      if ( v29 == v61 )
        v29 = v62;
      v48 += v51;
      v60 = v29;
    }
    while ( v50 );
    v1 = a1;
  }
  return *((unsigned int *)v1 + 37);
}
