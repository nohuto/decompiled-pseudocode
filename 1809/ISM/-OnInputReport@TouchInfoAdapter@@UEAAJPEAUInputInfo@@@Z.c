/*
 * XREFs of ?OnInputReport@TouchInfoAdapter@@UEAAJPEAUInputInfo@@@Z @ 0x1801045B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800056F0 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?erase@?$_Hash@V?$_Uset_traits@W4_Button@@V?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@V?$allocator@W4_Button@@@3@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@W4_Button@@@std@@@std@@@2@V32@@Z @ 0x180038294 (-erase@-$_Hash@V-$_Uset_traits@W4_Button@@V-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@.c)
 *     ??$insert_or_assign@AEAG@?$unordered_map@KGU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKG@std@@@2@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKG@std@@@std@@@std@@@std@@_N@1@AEBKAEAG@Z @ 0x180104F60 (--$insert_or_assign@AEAG@-$unordered_map@KGU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@U-$pair@$.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TouchInfoAdapter::OnInputReport(TouchInfoAdapter *this, struct InputInfo *a2)
{
  __int16 v4; // di
  __int16 v5; // ax
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v9; // eax
  char v10; // r13
  char v11; // r12
  unsigned int v12; // r9d
  __int16 v13; // si
  char *v14; // r14
  int v15; // eax
  __int64 v16; // rdx
  int v17; // r10d
  char v18; // cl
  unsigned __int64 i; // rcx
  __int64 v20; // rax
  __int64 *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r9
  __int64 *j; // r8
  __int64 *v26; // rax
  __int64 **v27; // rax
  __int16 v28; // r11
  unsigned int v29; // edx
  __int64 v30; // rcx
  _WORD *v31; // rax
  __int16 v32; // cx
  __int64 v33; // rcx
  __int16 v34; // ax
  __int16 v35; // ax
  int v36; // eax
  bool v37; // zf
  int v38; // edx
  __int16 v39; // ax
  unsigned __int64 v40; // rcx
  char v41; // dl
  unsigned int v42; // r14d
  __int64 v43; // rsi
  __int16 v44; // dx
  __int128 v45; // xmm1
  __int64 v46; // rcx
  __int128 v47; // xmm0
  _QWORD **v48; // rcx
  _QWORD *v49; // rax
  __int64 v50; // r8
  int v51; // r9d
  unsigned __int16 v52; // dx
  __int64 v53; // r10
  unsigned __int16 v54; // dx
  _OWORD *v55; // rcx
  int *v56; // rax
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  __int128 v64; // xmm1
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  __int64 v67; // rax
  __int64 v68; // r9
  __int64 v69; // rax
  __int16 v70; // cx
  __int64 v71; // rcx
  unsigned __int8 v72; // r10
  unsigned int v73; // r9d
  unsigned int m; // r8d
  unsigned __int64 v75; // rdx
  __int16 v76; // dx
  int v77; // eax
  __int64 v78; // rcx
  unsigned __int8 v79; // r10
  unsigned int v80; // r9d
  unsigned int k; // r8d
  unsigned __int64 v82; // rdx
  __int16 v83; // ax
  __int16 v84; // dx
  int v85; // eax
  unsigned int v86; // eax
  char v87; // [rsp+20h] [rbp-E0h]
  unsigned int v88; // [rsp+24h] [rbp-DCh]
  int v89; // [rsp+28h] [rbp-D8h] BYREF
  int v90; // [rsp+2Ch] [rbp-D4h]
  unsigned int v91; // [rsp+30h] [rbp-D0h]
  __int64 v92; // [rsp+38h] [rbp-C8h] BYREF
  int v93; // [rsp+40h] [rbp-C0h] BYREF
  int v94; // [rsp+44h] [rbp-BCh]
  int v95; // [rsp+50h] [rbp-B0h]
  __int16 v96; // [rsp+55h] [rbp-ABh]
  unsigned __int8 v97; // [rsp+57h] [rbp-A9h]
  __int16 v98; // [rsp+58h] [rbp-A8h]
  __int16 v99; // [rsp+5Ah] [rbp-A6h]
  __int16 v100; // [rsp+5Ch] [rbp-A4h]
  __int16 v101; // [rsp+5Eh] [rbp-A2h]
  __int16 v102; // [rsp+60h] [rbp-A0h]
  _WORD v103[279]; // [rsp+62h] [rbp-9Eh]
  _QWORD v104[2]; // [rsp+290h] [rbp+190h] BYREF
  int v105; // [rsp+2A0h] [rbp+1A0h]
  wil::details::in1diag3 *retaddr; // [rsp+2E8h] [rbp+1E8h]

  if ( (*(_BYTE *)a2 & 0x3B) == 0 )
    return 0LL;
  memset_0(&v93, 0, 0x248uLL);
  v87 = 0;
  LOBYTE(v90) = 0;
  v4 = 1;
  if ( !*((_BYTE *)a2 + 516) )
  {
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v91 = 0;
    v12 = 0;
    v88 = 0;
    while ( v9 < *((_DWORD *)a2 + 12) )
    {
      v13 = 0;
      v14 = (char *)a2 + 32 * v9;
      if ( (*(_BYTE *)a2 & 2) != 0 && (*((_BYTE *)a2 + 376) & 0x10) == 0 )
        *((_DWORD *)v14 + 15) &= ~2u;
      v15 = *((_DWORD *)v14 + 15);
      v89 = v15;
      if ( (v15 & 1) != 0 && !*((_BYTE *)this + 32) )
      {
        v13 = 8;
        ++v10;
      }
      v16 = 0xCBF29CE484222325uLL;
      v17 = v15 & 2;
      v18 = v11 + 1;
      if ( (v15 & 2) == 0 )
        v18 = v11;
      v11 = v18;
      for ( i = 0LL; i < 4; ++i )
      {
        v20 = (unsigned __int8)v14[i + 56];
        v16 = 0x100000001B3LL * (v20 ^ v16);
      }
      v21 = (__int64 *)*((_QWORD *)this + 6);
      v22 = v16 & *((_QWORD *)this + 11);
      v23 = *((_QWORD *)this + 8);
      v24 = 2 * v22;
      for ( j = *(__int64 **)(v23 + 16 * v22); ; j = (__int64 *)*j )
      {
        v26 = *(__int64 **)(v23 + 8 * v24) == v21
            ? (__int64 *)*((_QWORD *)this + 6)
            : **(__int64 ***)(v23 + 8 * v24 + 8);
        if ( j == v26 )
          break;
        if ( *((_DWORD *)j + 4) == *((_DWORD *)v14 + 14) )
          goto LABEL_27;
      }
      j = (__int64 *)*((_QWORD *)this + 6);
LABEL_27:
      if ( j == v21 )
      {
        if ( v17 )
        {
          v13 |= 1u;
        }
        else if ( *((_BYTE *)this + 32) )
        {
          goto LABEL_60;
        }
        LOWORD(v89) = *((_WORD *)this + 54);
        *((_WORD *)this + 54) = v89 + 1;
        v27 = (__int64 **)std::unordered_map<unsigned long,unsigned short>::insert_or_assign<unsigned short &>(
                            (char *)this + 40,
                            v104,
                            v14 + 56,
                            &v89);
        v28 = v89;
        j = *v27;
      }
      else
      {
        v28 = *((_WORD *)j + 10);
        if ( !*((_BYTE *)this + 696) || (v29 = 0, !*((_BYTE *)this + 135)) )
        {
LABEL_113:
          v86 = wil::verify_hresult<long>(0x8000FFFF);
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xE0,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\adapters\\touchinfo\\lib\\touchinfoadapter.cpp",
            (const char *)v86);
          JUMPOUT(0x180104ECFLL);
        }
        v30 = 0LL;
        v31 = (_WORD *)((char *)this + 136);
        while ( v28 != *v31 )
        {
          ++v29;
          ++v30;
          v31 += 28;
          if ( v29 >= *((unsigned __int8 *)this + 135) )
            goto LABEL_113;
        }
        v32 = *((_WORD *)this + 28 * v30 + 69);
        if ( *((_BYTE *)this + 32) )
        {
          if ( (v32 & 4) != 0 )
            goto LABEL_113;
        }
        else if ( (v32 & 8) == 0 )
        {
          goto LABEL_113;
        }
        v33 = 56LL * v29;
        v34 = *(_WORD *)((char *)this + v33 + 138);
        if ( v17 )
        {
          if ( (v34 & 1) != 0 || (v34 & 2) != 0 )
            v35 = 2;
          else
            v35 = 1;
          v13 |= v35;
        }
        else if ( (v34 & 1) != 0 || (v34 & 2) != 0 )
        {
          v13 |= 4u;
        }
        v36 = (unsigned __int8)v90;
        v37 = (v89 & 4) == 0;
        v38 = v89 & 4;
        *(_WORD *)((char *)this + v33 + 154) = 1;
        if ( !v37 )
          v36 = 1;
        v90 = v36;
        v39 = v13 | 0x2000;
        if ( !v38 )
          v39 = v13;
        v13 = v39;
      }
      v40 = 56LL * v88;
      v12 = ++v88;
      *(__int16 *)((char *)&v100 + v40) = *((_WORD *)v14 + 32);
      *(__int16 *)((char *)&v101 + v40) = *((_WORD *)v14 + 34);
      v103[v40 / 2 - 1] = *((_WORD *)v14 + 36);
      v103[v40 / 2] = *((_WORD *)v14 + 38);
      *(__int16 *)((char *)&v98 + v40) = v28;
      *(__int16 *)((char *)&v99 + v40) = v13;
      if ( (v14[60] & 1) != 0 && (!*((_BYTE *)this + 32) || (v14[60] & 2) != 0) )
        goto LABEL_61;
      std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::erase(
        (_QWORD *)this + 5,
        &v92,
        j);
LABEL_60:
      v12 = v88;
LABEL_61:
      v9 = v91 + 1;
      v91 = v9;
    }
    v41 = *((_BYTE *)this + 696);
    if ( v41 )
    {
      v42 = 0;
      if ( *((_BYTE *)this + 135) )
      {
        do
        {
          v43 = 56LL * v42;
          v44 = *(_WORD *)((char *)this + v43 + 138);
          if ( (v44 & 0xB) != 0 && *(_WORD *)((char *)this + v43 + 154) != 1 )
          {
            v45 = *(_OWORD *)((char *)this + v43 + 152);
            v46 = 28LL * v12;
            v88 = v12 + 1;
            *(_OWORD *)((char *)&v98 + v46 * 2) = *(_OWORD *)((char *)this + v43 + 136);
            v47 = *(_OWORD *)((char *)this + v43 + 168);
            *(_OWORD *)&v103[v46 + 3] = v45;
            *(_QWORD *)&v45 = *(_QWORD *)((char *)this + v43 + 184);
            *(_OWORD *)&v103[v46 + 11] = v47;
            *(_QWORD *)&v103[v46 + 19] = v45;
            *(__int16 *)((char *)&v99 + v46 * 2) = (v44 & 3) != 0 ? 4 : 0;
            v48 = (_QWORD **)*((_QWORD *)this + 6);
            v49 = *v48;
            if ( *v48 != v48 )
            {
              do
              {
                if ( *((_WORD *)v49 + 10) == *(_WORD *)((char *)this + v43 + 136) )
                  v49 = std::_Hash<std::_Uset_traits<enum _Button,std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>,std::allocator<enum _Button>,0>>::erase(
                          (_QWORD *)this + 5,
                          &v92,
                          v49);
                v49 = (_QWORD *)*v49;
              }
              while ( v49 != *((_QWORD **)this + 6) );
            }
          }
          ++v42;
          v12 = v88;
        }
        while ( v42 < *((unsigned __int8 *)this + 135) );
        v41 = *((_BYTE *)this + 696);
      }
    }
    v50 = 0LL;
    v51 = *((_DWORD *)this + 26);
    v94 = *((_DWORD *)a2 + 2);
    v95 = v51;
    LOBYTE(v96) = v10;
    HIBYTE(v96) = v11;
    v97 = v88;
    v93 = (unsigned __int16)(56 * v88 + 24);
    if ( v41 )
    {
      if ( *((_BYTE *)this + 32) || (v52 = 256, (*((_WORD *)this + 57) & 0x100) == 0) )
      {
        v52 = 0;
        if ( !v11 )
        {
          if ( !v10 )
          {
            v53 = 4LL;
            *((_BYTE *)this + 696) = 0;
            HIWORD(v93) = 4;
            v50 = 4LL;
            *((_DWORD *)this + 26) = v51 + 1;
            v52 = 4;
            *((_WORD *)this + 54) = 0;
            goto LABEL_81;
          }
          v78 = *((_QWORD *)this + 3);
          HIWORD(v93) = 4;
          (*(void (__fastcall **)(__int64, int *, _QWORD))(*(_QWORD *)v78 + 24LL))(v78, &v93, 0LL);
          v79 = v97;
          v80 = 0;
          for ( k = 0; k < v79; ++k )
          {
            v82 = 56LL * v80;
            v83 = *(&v99 + 28 * k);
            if ( (v83 & 8) != 0 )
            {
              *(&v99 + 28 * v80++) = v83 & 0xFFFB;
              *(__int16 *)((char *)&v98 + v82) = *(&v98 + 28 * k);
              *(__int16 *)((char *)&v100 + v82) = *(&v100 + 28 * k);
              *(__int16 *)((char *)&v101 + v82) = *(&v101 + 28 * k);
              v103[v82 / 2 - 1] = v103[28 * k - 1];
              v103[v82 / 2] = v103[28 * k];
              v79 = v97;
            }
          }
          v84 = HIWORD(v93);
          v85 = *((_DWORD *)this + 26) + 1;
          *((_DWORD *)this + 26) = v85;
          v95 = v85;
          v52 = v84 & 0xFEFA | 0x101;
          v97 = v80;
          v50 = v52;
          HIWORD(v93) = v52;
          LOWORD(v93) = 56 * v80 + 24;
        }
      }
      else
      {
        if ( v11 )
        {
          v68 = 0LL;
          v104[0] = 0LL;
          v104[1] = 0LL;
          v105 = 0;
          if ( (_BYTE)v88 )
          {
            do
            {
              v69 = (unsigned int)v68;
              v68 = (unsigned int)(v68 + 1);
              v70 = *(&v99 + 28 * v69);
              *((_WORD *)v104 + v69) = v70;
              *(&v99 + 28 * v69) = v70 & 0xFFFE;
            }
            while ( (unsigned int)v68 < v97 );
            v50 = HIWORD(v93);
          }
          v71 = *((_QWORD *)this + 3);
          LOWORD(v50) = v50 | 0x104;
          HIBYTE(v96) = 0;
          HIWORD(v93) = v50;
          (*(void (__fastcall **)(__int64, int *, __int64, __int64))(*(_QWORD *)v71 + 24LL))(v71, &v93, v50, v68);
          v72 = v97;
          v73 = 0;
          for ( m = 0; m < v72; ++m )
          {
            v75 = 56LL * v73;
            if ( (*(_BYTE *)(&v99 + 28 * m) & 8) != 0 )
            {
              ++v73;
              *(__int16 *)((char *)&v99 + v75) = *((_WORD *)v104 + m);
              *(__int16 *)((char *)&v98 + v75) = *(&v98 + 28 * m);
              *(__int16 *)((char *)&v100 + v75) = *(&v100 + 28 * m);
              *(__int16 *)((char *)&v101 + v75) = *(&v101 + 28 * m);
              v103[v75 / 2 - 1] = v103[28 * m - 1];
              v103[v75 / 2] = v103[28 * m];
              v72 = v97;
            }
          }
          v76 = HIWORD(v93);
          v77 = *((_DWORD *)this + 26) + 1;
          *((_DWORD *)this + 26) = v77;
          v95 = v77;
          HIBYTE(v96) = v11;
          v52 = v76 & 0xFEFA | 1;
          v97 = v73;
          LOWORD(v93) = 56 * v73 + 24;
        }
        else if ( !v10 )
        {
          *((_BYTE *)this + 696) = 0;
          *((_DWORD *)this + 26) = v51 + 1;
          v52 = 260;
          *((_WORD *)this + 54) = 0;
        }
        v50 = v52;
        HIWORD(v93) = v52;
      }
    }
    else
    {
      *((_BYTE *)this + 696) = 1;
      if ( v11 )
      {
        v50 = 1LL;
        HIWORD(v93) = 1;
      }
      else if ( v10 )
      {
        v50 = 257LL;
        HIWORD(v93) = 257;
        v4 = 257;
      }
      else
      {
        if ( !*((_BYTE *)this + 32) )
        {
          v7 = 368LL;
          goto LABEL_7;
        }
        v87 = 1;
        v4 = 0;
        *((_BYTE *)this + 696) = 0;
      }
      v52 = v4;
    }
    v53 = 4LL;
LABEL_81:
    if ( (_BYTE)v90 )
    {
      v54 = v52 | 0x8000;
      v50 = v54;
      HIWORD(v93) = v54;
    }
    if ( (*(_BYTE *)a2 & 0x20) != 0 )
    {
      LOWORD(v50) = v50 | 0x1000;
      HIWORD(v93) = v50;
    }
    if ( !v87 )
    {
      v55 = (_OWORD *)((char *)this + 112);
      v56 = &v93;
      do
      {
        v57 = *((_OWORD *)v56 + 1);
        *v55 = *(_OWORD *)v56;
        v58 = *((_OWORD *)v56 + 2);
        v55[1] = v57;
        v59 = *((_OWORD *)v56 + 3);
        v55[2] = v58;
        v60 = *((_OWORD *)v56 + 4);
        v55[3] = v59;
        v61 = *((_OWORD *)v56 + 5);
        v55[4] = v60;
        v62 = *((_OWORD *)v56 + 6);
        v55[5] = v61;
        v63 = *((_OWORD *)v56 + 7);
        v56 += 32;
        v55[6] = v62;
        v55 += 8;
        *(v55 - 1) = v63;
        --v53;
      }
      while ( v53 );
      v64 = *((_OWORD *)v56 + 1);
      *v55 = *(_OWORD *)v56;
      v65 = *((_OWORD *)v56 + 2);
      v55[1] = v64;
      v66 = *((_OWORD *)v56 + 3);
      v67 = *((_QWORD *)v56 + 8);
      v55[2] = v65;
      v55[3] = v66;
      *((_QWORD *)v55 + 8) = v67;
      (*(void (__fastcall **)(_QWORD, int *, __int64))(**((_QWORD **)this + 3) + 24LL))(
        *((_QWORD *)this + 3),
        &v93,
        v50);
    }
    return 0LL;
  }
  if ( *((_DWORD *)a2 + 12) != 1 || *((_BYTE *)this + 696) )
  {
    v7 = 126LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\adapters\\touchinfo\\lib\\touchinfoadapter.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  v95 = *((_DWORD *)this + 26);
  v94 = *((_DWORD *)a2 + 2);
  v98 = *((_WORD *)a2 + 28);
  v100 = *((_WORD *)a2 + 32);
  v101 = *((_WORD *)a2 + 34);
  v102 = *((_WORD *)a2 + 36);
  v5 = *((_WORD *)a2 + 38);
  v99 = 5;
  v6 = *((_QWORD *)this + 3);
  v103[0] = v5;
  v93 = 327760;
  v96 = 0;
  v97 = 1;
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v6 + 24LL))(v6, &v93);
  ++*((_DWORD *)this + 26);
  return 0LL;
}
