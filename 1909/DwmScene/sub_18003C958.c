/*
 * XREFs of sub_18003C958 @ 0x18003C958
 * Callers:
 *     sub_18003D724 @ 0x18003D724 (sub_18003D724.c)
 * Callees:
 *     sub_180016234 @ 0x180016234 (sub_180016234.c)
 *     sub_18002B7AC @ 0x18002B7AC (sub_18002B7AC.c)
 *     sub_18003C238 @ 0x18003C238 (sub_18003C238.c)
 *     sub_18003C2FC @ 0x18003C2FC (sub_18003C2FC.c)
 *     sub_18003C3BC @ 0x18003C3BC (sub_18003C3BC.c)
 *     sub_18003C424 @ 0x18003C424 (sub_18003C424.c)
 *     sub_18003C7C4 @ 0x18003C7C4 (sub_18003C7C4.c)
 *     sub_18003D500 @ 0x18003D500 (sub_18003D500.c)
 *     sub_18003D974 @ 0x18003D974 (sub_18003D974.c)
 *     CreateDXGIFactory1 @ 0x180114C64 (CreateDXGIFactory1.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_18003C958(
        ID3D11DeviceContext *a1,
        IDXGIAdapter **a2,
        __int64 *a3,
        ID3D11Device **a4,
        int a5,
        char a6,
        int a7,
        D3D_FEATURE_LEVEL a8,
        D3D_FEATURE_LEVEL a9,
        char a10)
{
  ID3D11Device **v10; // rdi
  IDXGIAdapter *v13; // rcx
  __int64 v14; // rcx
  ID3D11Device *v15; // rcx
  D3D_FEATURE_LEVEL *v16; // rcx
  int v17; // edx
  HRESULT DXGIFactory1; // ebx
  D3D_FEATURE_LEVEL *v19; // rsi
  __int64 v20; // r15
  D3D_FEATURE_LEVEL *v21; // r12
  D3D_FEATURE_LEVEL v22; // eax
  int v23; // edx
  int v24; // ecx
  int v25; // edx
  ID3D11DeviceContext *v26; // rsi
  __int64 *v27; // rax
  D3D_FEATURE_LEVEL *v29; // r15
  struct ID3D11DeviceContextVtbl *lpVtbl; // rdi
  IDXGIAdapter *v31; // rcx
  int v32; // eax
  IDXGIAdapter *v33; // rcx
  bool v34; // zf
  float v35; // xmm0_4
  float *v36; // rax
  _QWORD *v37; // rdi
  bool v38; // zf
  IDXGIAdapter *v39; // rcx
  IDXGIAdapter *v40; // rbx
  IDXGIAdapter *v41; // rdx
  __int64 v42; // rcx
  ID3D11Device *v43; // rcx
  __int64 v44; // rcx
  ID3D11Device *v45; // rcx
  ID3D11DeviceContext *v46; // rcx
  ID3D11Device *v47; // rcx
  IDXGIAdapter *v48; // rcx
  __int64 v49; // rcx
  ID3D11Device *v50; // rcx
  ID3D11DeviceContext *v51; // rcx
  ID3D11Device *v52; // rcx
  __int64 **v53; // rax
  __int64 i; // rax
  __int64 *j; // rcx
  IDXGIAdapter *v56; // rcx
  __int64 v57; // rcx
  ID3D11Device *v58; // rcx
  ID3D11Device *v59; // rcx
  ID3D11DeviceContext *v60; // rcx
  ID3D11DeviceContext *v61; // rcx
  __int64 v62; // rcx
  ID3D11DeviceContext *v63; // rcx
  IDXGIAdapter *v64; // rcx
  __int64 v65; // rcx
  ID3D11Device *v66; // rcx
  ID3D11DeviceContext *v67; // rcx
  __int64 v68; // rcx
  ID3D11DeviceContext *v69; // rcx
  __int64 v70; // rcx
  ID3D11DeviceContext *v71; // rcx
  __int64 v72; // rcx
  IDXGIAdapter *v73; // rcx
  __int64 v74; // rcx
  unsigned __int64 v75; // rdx
  D3D_FEATURE_LEVEL *v76; // rax
  unsigned __int64 v77; // rdx
  float v80; // [rsp+5Ch] [rbp-A4h] BYREF
  _QWORD v81[2]; // [rsp+60h] [rbp-A0h] BYREF
  char v82[16]; // [rsp+70h] [rbp-90h] BYREF
  ID3D11DeviceContext *v83; // [rsp+80h] [rbp-80h] BYREF
  ID3D11DeviceContext *v84; // [rsp+88h] [rbp-78h] BYREF
  D3D_FEATURE_LEVEL v85[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v86; // [rsp+98h] [rbp-68h] BYREF
  ID3D11Device *v87; // [rsp+A0h] [rbp-60h] BYREF
  D3D_FEATURE_LEVEL *v88[2]; // [rsp+A8h] [rbp-58h] BYREF
  D3D_FEATURE_LEVEL *v89; // [rsp+B8h] [rbp-48h]
  D3D_FEATURE_LEVEL v90; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v91; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v92[256]; // [rsp+E0h] [rbp-20h] BYREF
  int v93; // [rsp+1E0h] [rbp+E0h]
  int v94; // [rsp+1E4h] [rbp+E4h]
  __int64 v95; // [rsp+1F0h] [rbp+F0h]
  int v96; // [rsp+210h] [rbp+110h]
  _OWORD v97[2]; // [rsp+220h] [rbp+120h] BYREF
  int v98; // [rsp+240h] [rbp+140h]
  char v99; // [rsp+244h] [rbp+144h] BYREF
  bool v100; // [rsp+2C8h] [rbp+1C8h]

  v81[1] = -2LL;
  v10 = a4;
  v83 = a1;
  v91 = 0LL;
  *(_QWORD *)&v91 = sub_18002B7AC();
  v13 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    ((void (__fastcall *)(IDXGIAdapter *))v13->lpVtbl->Release)(v13);
  }
  v14 = *a3;
  if ( *a3 )
  {
    *a3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = *v10;
  if ( *v10 )
  {
    *v10 = 0LL;
    ((void (__fastcall *)(ID3D11Device *))v15->lpVtbl->Release)(v15);
  }
  *(_OWORD *)v88 = 0LL;
  v16 = 0LL;
  v81[0] = 0LL;
  v89 = 0LL;
  if ( (a10 & 1) != 0 || (a10 & 2) != 0 )
  {
    v17 = a8;
    if ( a8 < D3D_FEATURE_LEVEL_10_0 )
    {
LABEL_10:
      DXGIFactory1 = -2147024809;
LABEL_176:
      v29 = v88[0];
      goto LABEL_177;
    }
  }
  else
  {
    v17 = a8;
  }
  if ( (a6 & 4) != 0 && v17 < 45312 )
    goto LABEL_10;
  v97[0] = _mm_load_si128((const __m128i *)&xmmword_18014BA60);
  v97[1] = _mm_load_si128((const __m128i *)&xmmword_18014BA50);
  v98 = 37120;
  v19 = (D3D_FEATURE_LEVEL *)v97;
  v20 = 0LL;
  v21 = v88[1];
  do
  {
    v22 = *v19;
    LODWORD(v86) = v22;
    if ( v22 >= v17 && v22 <= a9 )
    {
      if ( v16 == v21 )
      {
        sub_18003C424((const void **)v88, v21, &v86);
        v16 = v89;
        v21 = v88[1];
        v17 = a8;
      }
      else
      {
        *v21++ = v22;
        v88[1] = v21;
      }
    }
    ++v19;
    ++v20;
  }
  while ( v20 != (&v99 >= (char *)v97 ? 9 : 0) );
  v81[0] = v16;
  v23 = (2 * (a6 & 1) + 32) | 0x40;
  if ( (a6 & 2) == 0 )
    v23 = 2 * (a6 & 1) + 32;
  v24 = v23 | 0x100;
  if ( (a6 & 4) == 0 )
    v24 = v23;
  v90 = a6 & 8;
  v25 = v24 | 0x800;
  if ( (a6 & 0x10) == 0 )
    v25 = v24;
  LODWORD(v86) = v25;
  v100 = (a6 & 0x20) != 0;
  v26 = v83;
  v27 = sub_180016234((__int64 *)&v83[1]);
  DXGIFactory1 = CreateDXGIFactory1(&stru_18014B260, (void **)v27);
  if ( DXGIFactory1 < 0 )
  {
    v10 = a4;
    goto LABEL_176;
  }
  v29 = v88[0];
LABEL_29:
  if ( !a5 )
  {
    for ( LODWORD(v84) = 0; ; LODWORD(v84) = (_DWORD)v84 + 1 )
    {
      lpVtbl = v26[1].lpVtbl;
      v31 = *a2;
      if ( *a2 )
      {
        *a2 = 0LL;
        ((void (__fastcall *)(IDXGIAdapter *))v31->lpVtbl->Release)(v31);
      }
      v32 = (*((__int64 (__fastcall **)(struct ID3D11DeviceContextVtbl *, _QWORD, IDXGIAdapter **))lpVtbl->QueryInterface
             + 12))(
              lpVtbl,
              (unsigned int)v84,
              a2);
      v33 = *a2;
      if ( v32 == -2005270526 )
      {
        if ( v33 )
        {
          *a2 = 0LL;
          ((void (__fastcall *)(IDXGIAdapter *))v33->lpVtbl->Release)(v33);
        }
        v37 = *(_QWORD **)v91;
        v38 = *(_QWORD *)v91 == (_QWORD)v91;
        while ( 2 )
        {
          if ( v38 )
          {
            v10 = a4;
            goto LABEL_103;
          }
          v39 = *a2;
          v40 = (IDXGIAdapter *)v37[5];
          if ( *a2 != v40 )
          {
            v41 = *a2;
            if ( v40 )
            {
              ((void (__fastcall *)(_QWORD, IDXGIAdapter *))v40->lpVtbl->AddRef)(v37[5], v41);
              v41 = *a2;
            }
            *a2 = v40;
            v39 = v40;
            if ( v41 )
            {
              ((void (__fastcall *)(IDXGIAdapter *))v41->lpVtbl->Release)(v41);
              v39 = *a2;
            }
          }
          DXGIFactory1 = ((__int64 (__fastcall *)(IDXGIAdapter *, _BYTE *))v39->lpVtbl[1].QueryInterface)(v39, v92);
          if ( DXGIFactory1 < 0 )
            goto LABEL_131;
          v42 = *a3;
          if ( *a3 )
          {
            *a3 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
          }
          v43 = *a4;
          if ( *a4 )
          {
            *a4 = 0LL;
            ((void (__fastcall *)(ID3D11Device *))v43->lpVtbl->Release)(v43);
          }
          v87 = 0LL;
          v83 = 0LL;
          DXGIFactory1 = sub_18003D500(*a2, v29, v21 - v29, 7u, &v87, v85, &v83);
          if ( DXGIFactory1 < 0 )
          {
            v48 = *a2;
            if ( *a2 )
            {
              *a2 = 0LL;
              ((void (__fastcall *)(IDXGIAdapter *))v48->lpVtbl->Release)(v48);
            }
            v49 = *a3;
            if ( *a3 )
            {
              *a3 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
            }
            v50 = *a4;
            if ( *a4 )
            {
              *a4 = 0LL;
              ((void (__fastcall *)(ID3D11Device *))v50->lpVtbl->Release)(v50);
            }
LABEL_89:
            v51 = v83;
            if ( v83 )
            {
              v83 = 0LL;
              ((void (__fastcall *)(ID3D11DeviceContext *))v51->lpVtbl->Release)(v51);
            }
            v52 = v87;
            if ( v87 )
            {
              v87 = 0LL;
              ((void (__fastcall *)(ID3D11Device *))v52->lpVtbl->Release)(v52);
            }
            v53 = (__int64 **)v37[2];
            if ( *((_BYTE *)v53 + 25) )
            {
              for ( i = v37[1]; !*(_BYTE *)(i + 25) && v37 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
                v37 = (_QWORD *)i;
              v37 = (_QWORD *)i;
            }
            else
            {
              v37 = (_QWORD *)v37[2];
              for ( j = *v53; !*((_BYTE *)j + 25); j = (__int64 *)*j )
                v37 = j;
            }
            v38 = v37 == (_QWORD *)v91;
            continue;
          }
          break;
        }
        if ( v85[0] < a8 )
          goto LABEL_89;
        if ( (a10 & 1) != 0 && v85[0] < D3D_FEATURE_LEVEL_11_0 )
        {
          LODWORD(v84) = 0;
          if ( ((int (__fastcall *)(ID3D11Device *, __int64, ID3D11DeviceContext **))v87->lpVtbl->CheckFeatureSupport)(
                 v87,
                 4LL,
                 &v84) < 0
            || !(_DWORD)v84 )
          {
            goto LABEL_89;
          }
        }
        v44 = *a3;
        if ( *a3 )
        {
          *a3 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
        }
        DXGIFactory1 = ((__int64 (__fastcall *)(ID3D11Device *, void *, __int64 *))v87->lpVtbl->QueryInterface)(
                         v87,
                         &unk_180148470,
                         a3);
        if ( DXGIFactory1 < 0 )
        {
          v60 = v83;
          if ( v83 )
          {
            v83 = 0LL;
            ((void (__fastcall *)(ID3D11DeviceContext *))v60->lpVtbl->Release)(v60);
          }
          v59 = v87;
          if ( v87 )
          {
            v87 = 0LL;
            goto LABEL_125;
          }
          goto LABEL_126;
        }
        v10 = a4;
        v45 = *a4;
        if ( *a4 )
        {
          *a4 = 0LL;
          ((void (__fastcall *)(ID3D11Device *))v45->lpVtbl->Release)(v45);
        }
        DXGIFactory1 = ((__int64 (__fastcall *)(ID3D11DeviceContext *, void *, ID3D11Device **))v83->lpVtbl->QueryInterface)(
                         v83,
                         &unk_18014FF88,
                         a4);
        v46 = v83;
        if ( DXGIFactory1 < 0 )
        {
          if ( v83 )
          {
            v83 = 0LL;
            ((void (__fastcall *)(ID3D11DeviceContext *))v46->lpVtbl->Release)(v46);
          }
          v59 = v87;
          if ( v87 )
          {
            v87 = 0LL;
            goto LABEL_120;
          }
          goto LABEL_127;
        }
        if ( v83 )
        {
          v83 = 0LL;
          ((void (__fastcall *)(ID3D11DeviceContext *))v46->lpVtbl->Release)(v46);
        }
        v47 = v87;
        if ( v87 )
        {
          v87 = 0LL;
          ((void (__fastcall *)(ID3D11Device *))v47->lpVtbl->Release)(v47);
        }
LABEL_103:
        if ( v100 || *a2 && *a3 && *v10 )
          goto LABEL_170;
        a5 = 1;
        v88[1] = v29;
        LODWORD(v84) = 40960;
        if ( (D3D_FEATURE_LEVEL *)v81[0] == v29 )
        {
          sub_18003C424((const void **)v88, v29, &v84);
          v81[0] = v89;
          v21 = v88[1];
          v29 = v88[0];
        }
        else
        {
          *v29 = D3D_FEATURE_LEVEL_10_0;
          v21 = v29 + 1;
          v88[1] = v29 + 1;
        }
        v56 = *a2;
        if ( *a2 )
        {
          *a2 = 0LL;
          ((void (__fastcall *)(IDXGIAdapter *))v56->lpVtbl->Release)(v56);
        }
        v57 = *a3;
        if ( *a3 )
        {
          *a3 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
        }
        v58 = *a4;
        if ( *a4 )
        {
          *a4 = 0LL;
          ((void (__fastcall *)(ID3D11Device *))v58->lpVtbl->Release)(v58);
        }
        goto LABEL_29;
      }
      DXGIFactory1 = ((__int64 (__fastcall *)(IDXGIAdapter *, _BYTE *))v33->lpVtbl[1].QueryInterface)(v33, v92);
      if ( DXGIFactory1 < 0 )
        goto LABEL_131;
      if ( !v100 || (v96 & 2) == 0 )
        break;
LABEL_52:
      ;
    }
    if ( v93 == 4318 )
    {
      if ( v94 == 1028 || v94 == 1058 || v94 == 1060 )
        goto LABEL_52;
      v34 = v94 == 1764;
    }
    else
    {
      if ( v93 != 32902 )
      {
LABEL_45:
        v35 = (float)(int)v95;
        if ( v95 < 0 )
          v35 = v35 + 1.8446744e19;
        v80 = v35;
        if ( v90 )
          v80 = v35 * -1.0;
        if ( (v96 & 2) != 0 )
          v80 = -3.4028235e38;
        v36 = (float *)sub_18003C3BC(&v91, &v80, (__int64 *)a2);
        sub_18003C7C4(&v91, (__int64)v82, 0, v36 + 8, v36);
        goto LABEL_52;
      }
      v34 = ((v94 - 66) & 0xFFFFFFFB) == 0;
    }
    if ( v34 )
      goto LABEL_52;
    goto LABEL_45;
  }
  if ( a5 == 1 )
  {
    *(_QWORD *)v85 = 0LL;
    v84 = 0LL;
    DXGIFactory1 = sub_18003D500(0LL, v29, v21 - v29, 7u, (ID3D11Device **)v85, &v90, &v84);
    if ( DXGIFactory1 >= 0 )
    {
      v86 = 0LL;
      DXGIFactory1 = (***(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v85)(
                       *(_QWORD *)v85,
                       &unk_180148460,
                       &v86);
      if ( DXGIFactory1 >= 0 )
      {
        v83 = 0LL;
        DXGIFactory1 = (*(__int64 (__fastcall **)(__int64, ID3D11DeviceContext **))(*(_QWORD *)v86 + 56LL))(v86, &v83);
        if ( DXGIFactory1 >= 0 )
        {
          v64 = *a2;
          if ( *a2 )
          {
            *a2 = 0LL;
            ((void (__fastcall *)(IDXGIAdapter *))v64->lpVtbl->Release)(v64);
          }
          DXGIFactory1 = ((__int64 (__fastcall *)(ID3D11DeviceContext *, void *, IDXGIAdapter **))v83->lpVtbl->QueryInterface)(
                           v83,
                           &unk_18014B270,
                           a2);
          if ( DXGIFactory1 >= 0 )
          {
            v65 = *a3;
            if ( *a3 )
            {
              *a3 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
            }
            DXGIFactory1 = (***(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v85)(
                             *(_QWORD *)v85,
                             &unk_180148470,
                             a3);
            if ( DXGIFactory1 >= 0 )
            {
              v10 = a4;
              v66 = *a4;
              if ( *a4 )
              {
                *a4 = 0LL;
                ((void (__fastcall *)(ID3D11Device *))v66->lpVtbl->Release)(v66);
              }
              DXGIFactory1 = ((__int64 (__fastcall *)(ID3D11DeviceContext *, void *, ID3D11Device **))v84->lpVtbl->QueryInterface)(
                               v84,
                               &unk_18014FF88,
                               a4);
              if ( DXGIFactory1 >= 0 )
              {
                DXGIFactory1 = ((__int64 (__fastcall *)(IDXGIAdapter *, _BYTE *))(*a2)->lpVtbl[1].QueryInterface)(
                                 *a2,
                                 v92);
                v67 = v83;
                if ( DXGIFactory1 >= 0 )
                {
                  if ( v83 )
                  {
                    v83 = 0LL;
                    ((void (__fastcall *)(ID3D11DeviceContext *))v67->lpVtbl->Release)(v67);
                  }
                  v70 = v86;
                  if ( v86 )
                  {
                    v86 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 16LL))(v70);
                  }
                  v71 = v84;
                  if ( v84 )
                  {
                    v84 = 0LL;
                    ((void (__fastcall *)(ID3D11DeviceContext *))v71->lpVtbl->Release)(v71);
                  }
                  v72 = *(_QWORD *)v85;
                  if ( *(_QWORD *)v85 )
                  {
                    *(_QWORD *)v85 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
                  }
LABEL_170:
                  if ( !*a2 || !*a3 || !*v10 )
                  {
                    DXGIFactory1 = -2147467259;
                    goto LABEL_177;
                  }
                  sub_18003C2FC((__int64)*a2, L"CoreEngine");
                  sub_18003C238(*a3, L"CoreEngine");
                  goto LABEL_127;
                }
              }
              else
              {
                v67 = v83;
              }
              if ( v67 )
              {
                v83 = 0LL;
                ((void (__fastcall *)(ID3D11DeviceContext *))v67->lpVtbl->Release)(v67);
              }
              v68 = v86;
              if ( v86 )
              {
                v86 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v68 + 16LL))(v68);
              }
              v69 = v84;
              if ( v84 )
              {
                v84 = 0LL;
                ((void (__fastcall *)(ID3D11DeviceContext *))v69->lpVtbl->Release)(v69);
              }
              v59 = *(ID3D11Device **)v85;
              if ( *(_QWORD *)v85 )
              {
                *(_QWORD *)v85 = 0LL;
LABEL_120:
                ((void (__fastcall *)(ID3D11Device *))v59->lpVtbl->Release)(v59);
              }
LABEL_127:
              if ( DXGIFactory1 < 0 )
                goto LABEL_177;
              goto LABEL_183;
            }
          }
        }
        v63 = v83;
        if ( v83 )
        {
          v83 = 0LL;
          ((void (__fastcall *)(ID3D11DeviceContext *))v63->lpVtbl->Release)(v63);
        }
      }
      v62 = v86;
      if ( v86 )
      {
        v86 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
      }
    }
    v61 = v84;
    if ( v84 )
    {
      v84 = 0LL;
      ((void (__fastcall *)(ID3D11DeviceContext *))v61->lpVtbl->Release)(v61);
    }
    v59 = *(ID3D11Device **)v85;
    if ( *(_QWORD *)v85 )
    {
      *(_QWORD *)v85 = 0LL;
LABEL_125:
      ((void (__fastcall *)(ID3D11Device *))v59->lpVtbl->Release)(v59);
    }
LABEL_126:
    v10 = a4;
    goto LABEL_127;
  }
  DXGIFactory1 = -2147467259;
LABEL_131:
  v10 = a4;
LABEL_177:
  v73 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    ((void (__fastcall *)(IDXGIAdapter *))v73->lpVtbl->Release)(v73);
  }
  v74 = *a3;
  if ( *a3 )
  {
    *a3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v74 + 16LL))(v74);
  }
  v59 = *v10;
  if ( *v10 )
  {
    *v10 = 0LL;
    ((void (__fastcall *)(ID3D11Device *))v59->lpVtbl->Release)(v59);
  }
LABEL_183:
  if ( v29 )
  {
    v75 = (v81[0] - (_QWORD)v29) & 0xFFFFFFFFFFFFFFFCuLL;
    v76 = v29;
    if ( v75 >= 0x1000 )
    {
      v77 = v75 + 39;
      v29 = (D3D_FEATURE_LEVEL *)*((_QWORD *)v29 - 1);
      if ( (unsigned __int64)((char *)v76 - (char *)v29 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v59, v77);
        __debugbreak();
      }
    }
    j_j__o_free(v29);
  }
  sub_18003D974(&v91, v81, *(_QWORD *)v91);
  j_j__o_free(v91);
  return (unsigned int)DXGIFactory1;
}
