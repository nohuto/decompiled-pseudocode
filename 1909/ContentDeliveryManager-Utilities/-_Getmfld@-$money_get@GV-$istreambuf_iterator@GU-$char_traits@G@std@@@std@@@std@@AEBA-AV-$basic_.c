/*
 * XREFs of ?_Getmfld@?$money_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@0_NAEAVios_base@2@PEAG@Z @ 0x1800BBD34
 * Callers:
 *     ?do_get@?$money_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAO@Z @ 0x1800C0CC0 (-do_get@-$money_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$istreamb.c)
 *     ?do_get@?$money_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x1800C0DC0 (-do_get@-$money_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA_ea_1800C0DC0.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180032360 (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ??D?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@QEBAAEBGXZ @ 0x180034554 (--D-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@QEBAAEBGXZ.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180034990 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x1800357D0 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x1800359B4 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x1800375E4 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z @ 0x1800B5548 (-insert@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z.c)
 *     ??$use_facet@V?$moneypunct@G$00@std@@@std@@YAAEBV?$moneypunct@G$00@0@AEBVlocale@0@@Z @ 0x1800B9480 (--$use_facet@V-$moneypunct@G$00@std@@@std@@YAAEBV-$moneypunct@G$00@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$moneypunct@G$0A@@std@@@std@@YAAEBV?$moneypunct@G$0A@@0@AEBVlocale@0@@Z @ 0x1800B95C0 (--$use_facet@V-$moneypunct@G$0A@@std@@@std@@YAAEBV-$moneypunct@G$0A@@0@AEBVlocale@0@@Z.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800CAF31 (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
char *__fastcall std::money_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getmfld(
        __int64 a1,
        char *a2,
        __int64 *a3,
        __int64 *a4,
        char a5,
        __int64 a6,
        __int16 *a7)
{
  __int64 *v7; // r13
  char *v9; // r14
  __int64 v10; // rbx
  int v11; // edi
  struct std::_Facet_base *v12; // r12
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  __int64 v14; // rbx
  int v15; // esi
  struct std::_Facet_base *v16; // rdi
  void (__fastcall ***v17)(_QWORD, __int64); // rax
  unsigned __int64 v18; // rdi
  char v19; // bl
  char v20; // al
  char v21; // bl
  struct std::_Facet_base *v22; // r14
  unsigned __int16 *v23; // rax
  char v24; // al
  __int64 v25; // rbx
  int v26; // edi
  int v27; // r13d
  __int16 v28; // r12
  void **v29; // rcx
  unsigned __int64 v30; // r14
  char v31; // al
  void **v32; // rdi
  char *v33; // r13
  __int64 *v34; // rsi
  __int16 v35; // dx
  __int16 *v36; // rax
  __int16 k; // cx
  unsigned __int64 v38; // rax
  void **v39; // rax
  void **v40; // rax
  void **v41; // rax
  void **v42; // rax
  void **v43; // rcx
  void *v44; // r9
  unsigned __int64 v45; // r8
  void **v46; // r10
  char v47; // dl
  void **v48; // rax
  void **v49; // rax
  unsigned __int64 v50; // rcx
  void **v51; // rbx
  void **v52; // rax
  __int16 v53; // bx
  __int64 *v54; // rbx
  __int64 *v55; // rbx
  __int16 *v56; // r12
  __int16 v57; // dx
  __int16 *v58; // rax
  __int16 i; // cx
  unsigned __int64 v60; // rax
  __int16 v61; // dx
  __int16 *v62; // rax
  __int16 j; // cx
  unsigned __int64 v64; // rax
  char v65; // al
  __int64 v66; // rbx
  int v67; // esi
  void **v68; // rbx
  char v69; // bl
  unsigned int v70; // esi
  int v71; // esi
  void **v72; // rbx
  char v73; // bl
  unsigned int v74; // esi
  __int64 v75; // rbx
  __int64 v76; // rbx
  bool v77; // zf
  void **v78; // rbx
  void **v79; // rax
  void **v80; // rbx
  void **v81; // rax
  void **v82; // rbx
  void **v83; // rax
  void **v84; // rcx
  unsigned __int64 v85; // r8
  __int64 v86; // rdx
  void **v87; // rax
  void **v88; // rax
  char v89; // dl
  void **v90; // rax
  char *v91; // rax
  char v93; // [rsp+38h] [rbp-C1h]
  char v94; // [rsp+40h] [rbp-B9h]
  unsigned __int64 v95; // [rsp+48h] [rbp-B1h] BYREF
  struct std::_Facet_base *v96; // [rsp+50h] [rbp-A9h]
  __int64 *v97; // [rsp+58h] [rbp-A1h]
  __int64 v98; // [rsp+60h] [rbp-99h]
  char *v99; // [rsp+68h] [rbp-91h]
  int v100; // [rsp+70h] [rbp-89h]
  int v101; // [rsp+74h] [rbp-85h]
  _BYTE v102[8]; // [rsp+78h] [rbp-81h] BYREF
  __int16 *v103; // [rsp+80h] [rbp-79h]
  struct std::_Facet_base *v104; // [rsp+88h] [rbp-71h]
  __int64 v105; // [rsp+90h] [rbp-69h]
  char *v106; // [rsp+98h] [rbp-61h]
  void *v107[2]; // [rsp+A0h] [rbp-59h] BYREF
  __int64 v108; // [rsp+B0h] [rbp-49h]
  unsigned __int64 v109; // [rsp+B8h] [rbp-41h]
  void *v110[2]; // [rsp+C0h] [rbp-39h] BYREF
  __int64 v111; // [rsp+D0h] [rbp-29h]
  unsigned __int64 v112; // [rsp+D8h] [rbp-21h]
  void *v113[2]; // [rsp+E0h] [rbp-19h] BYREF
  unsigned __int64 v114; // [rsp+F0h] [rbp-9h]
  unsigned __int64 v115; // [rsp+F8h] [rbp-1h]

  v105 = -2LL;
  v7 = a4;
  v97 = a4;
  v9 = a2;
  v99 = a2;
  v106 = a2;
  v103 = a7;
  v10 = **(_QWORD **)(a6 + 64);
  v95 = v10;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  if ( a5 )
  {
    v11 = 32;
    v12 = std::use_facet<std::moneypunct<unsigned short,1>>((__int64 *)&v95);
  }
  else
  {
    v11 = 64;
    v12 = std::use_facet<std::moneypunct<unsigned short,0>>((__int64 *)&v95);
  }
  v96 = v12;
  if ( v10 )
  {
    v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v13 )
      (**v13)(v13, 1LL);
  }
  v93 = 0;
  v94 = 0;
  v115 = 7LL;
  v114 = 0LL;
  LOWORD(v113[0]) = 0;
  (*(void (__fastcall **)(struct std::_Facet_base *, _BYTE *))(*(_QWORD *)v12 + 88LL))(v12, v102);
  *((_QWORD *)v9 + 3) = 15LL;
  *((_QWORD *)v9 + 2) = 0LL;
  *v9 = 0;
  v14 = **(_QWORD **)(a6 + 64);
  v95 = v14;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  v15 = v11 | 0x81;
  v16 = std::use_facet<std::ctype<unsigned short>>((__int64 *)&v95);
  v104 = v16;
  if ( v14 )
  {
    v17 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    if ( v17 )
      (**v17)(v17, 1LL);
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, const char *, char *, __int16 *))(*(_QWORD *)v16 + 88LL))(
    v16,
    "0123456789-",
    "",
    v103);
  v18 = 0LL;
  v95 = 0LL;
  v19 = 0;
  do
  {
    if ( v18 >= 4 )
      break;
    v20 = v102[v18];
    switch ( v20 )
    {
      case ' ':
        goto LABEL_17;
      case '$':
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 48LL))(v12, v107);
        v15 |= 0x100u;
        if ( (*(_BYTE *)(a6 + 24) & 8) != 0 || std::istreambuf_iterator<wchar_t>::equal(a3, v7) )
          goto LABEL_186;
        v78 = v107;
        if ( v109 >= 8 )
          v78 = (void **)v107[0];
        if ( *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3) == *(_WORD *)v78 )
        {
LABEL_186:
          if ( v18 == 3 && v114 <= 1 )
          {
            if ( std::istreambuf_iterator<wchar_t>::equal(a3, v7) )
              goto LABEL_187;
            v80 = v107;
            if ( v109 >= 8 )
              v80 = (void **)v107[0];
            if ( *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3) != *(_WORD *)v80 )
            {
LABEL_187:
              v108 = 0LL;
              v81 = v107;
              if ( v109 >= 8 )
                v81 = (void **)v107[0];
              *(_WORD *)v81 = 0;
            }
          }
        }
        else
        {
          v108 = 0LL;
          v79 = v107;
          if ( v109 >= 8 )
            v79 = (void **)v107[0];
          *(_WORD *)v79 = 0;
        }
        v82 = v107;
        if ( v109 >= 8 )
          v82 = (void **)v107[0];
        while ( !std::istreambuf_iterator<wchar_t>::equal(a3, v7) )
        {
          v83 = v107;
          v84 = (void **)v107[0];
          v85 = v109;
          if ( v109 >= 8 )
            v83 = (void **)v107[0];
          v86 = v108;
          if ( v82 == (void **)((char *)v83 + 2 * v108) )
            goto LABEL_200;
          if ( *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3) != *(_WORD *)v82 )
            break;
          v82 = (void **)((char *)v82 + 2);
          std::istreambuf_iterator<unsigned short>::_Inc(a3);
        }
        v85 = v109;
        v86 = v108;
        v84 = (void **)v107[0];
LABEL_200:
        v87 = v107;
        if ( v85 >= 8 )
          v87 = v84;
        v88 = (void **)((char *)v87 + 2 * v86);
        v89 = v93;
        if ( v82 != v88 )
          v89 = 1;
        v19 = v89;
        v93 = v89;
        if ( v85 >= 8 )
          operator delete(v84);
        goto LABEL_81;
      case '+':
        if ( std::istreambuf_iterator<wchar_t>::equal(a3, v7) )
          goto LABEL_81;
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 56LL))(v12, v107);
        v67 = v15 | 0x202;
        if ( !v108 )
          goto LABEL_135;
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 56LL))(v12, v110);
        v67 |= 0x404u;
        v68 = v110;
        if ( v112 >= 8 )
          v68 = (void **)v110[0];
        if ( *(_WORD *)v68 == *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3) )
          v69 = 1;
        else
LABEL_135:
          v69 = 0;
        if ( (v67 & 4) != 0 )
        {
          v67 &= ~4u;
          if ( v112 >= 8 )
            operator delete(v110[0]);
          v112 = 7LL;
          v111 = 0LL;
          LOWORD(v110[0]) = 0;
        }
        v70 = v67 & 0xFFFFFFFD;
        if ( v109 >= 8 )
          operator delete(v107[0]);
        if ( v69 )
        {
          std::istreambuf_iterator<unsigned short>::_Inc(a3);
          (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 56LL))(v12, v110);
          v15 = v70 | 0x800;
          if ( v115 >= 8 )
            operator delete(v113[0]);
          v115 = 7LL;
          v114 = 0LL;
          LOWORD(v113[0]) = 0;
          std::wstring::_Assign_rv(v113, v110);
          if ( v112 >= 8 )
            operator delete(v110[0]);
        }
        else
        {
          (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 64LL))(v12, v107);
          v71 = v70 | 0x1008;
          if ( !v108 )
            goto LABEL_153;
          (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 64LL))(v12, v110);
          v71 |= 0x2010u;
          v72 = v110;
          if ( v112 >= 8 )
            v72 = (void **)v110[0];
          if ( *(_WORD *)v72 == *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3) )
            v73 = 1;
          else
LABEL_153:
            v73 = 0;
          if ( (v71 & 0x10) != 0 )
          {
            v71 &= ~0x10u;
            if ( v112 >= 8 )
              operator delete(v110[0]);
            v112 = 7LL;
            v111 = 0LL;
            LOWORD(v110[0]) = 0;
          }
          v74 = v71 & 0xFFFFFFF7;
          if ( v109 >= 8 )
            operator delete(v107[0]);
          if ( !v73 )
          {
            (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 56LL))(v12, v110);
            v15 = v74 | 0x8000;
            v75 = v111;
            if ( v112 >= 8 )
              operator delete(v110[0]);
            if ( v75 )
            {
              (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 64LL))(v12, v110);
              v15 |= 0x10000u;
              v76 = v111;
              if ( v112 >= 8 )
                operator delete(v110[0]);
              v77 = v76 == 0;
              v19 = v93;
              if ( v77 )
                v94 = 1;
              goto LABEL_81;
            }
            goto LABEL_206;
          }
          std::istreambuf_iterator<unsigned short>::_Inc(a3);
          (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 64LL))(v12, v110);
          v15 = v74 | 0x4000;
          if ( v115 >= 8 )
            operator delete(v113[0]);
          v115 = 7LL;
          v114 = 0LL;
          LOWORD(v113[0]) = 0;
          std::wstring::_Assign_rv(v113, v110);
          if ( v112 >= 8 )
            operator delete(v110[0]);
          v94 = 1;
        }
        v19 = v93;
        goto LABEL_81;
    }
    if ( v20 != 118 )
    {
      if ( v20 != 120 )
        goto LABEL_81;
LABEL_17:
      if ( v18 == 3 )
        goto LABEL_81;
      v21 = 0;
      if ( !std::istreambuf_iterator<wchar_t>::equal(a3, v7) )
      {
        v22 = v104;
        do
        {
          v23 = (unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*(a3);
          if ( !(*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, __int64, _QWORD))(*(_QWORD *)v22 + 32LL))(
                  v22,
                  72LL,
                  *v23) )
            break;
          v21 = 1;
          std::istreambuf_iterator<unsigned short>::_Inc(a3);
        }
        while ( !std::istreambuf_iterator<wchar_t>::equal(a3, v7) );
        v9 = v99;
        v12 = v96;
        v18 = v95;
      }
      if ( v102[v18] == 32 )
      {
        v24 = v93;
        if ( !v21 )
          v24 = 1;
        v19 = v24;
        v93 = v24;
        goto LABEL_81;
      }
LABEL_206:
      v19 = v93;
      goto LABEL_81;
    }
    v25 = 0LL;
    v26 = 0;
    LODWORD(v98) = 0;
    v27 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v12 + 72LL))(v12);
    v101 = v27;
    (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v12 + 40LL))(v12, v110);
    v15 |= 0x20000u;
    v100 = v15;
    if ( !v111 )
      goto LABEL_101;
    v28 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v12 + 32LL))(v12);
    if ( !v28 )
      goto LABEL_100;
    v29 = v110;
    if ( v112 >= 0x10 )
      v29 = (void **)v110[0];
    if ( *(_BYTE *)v29 >= 0x7Fu )
    {
LABEL_100:
      v12 = v96;
LABEL_101:
      v55 = v97;
      if ( !std::istreambuf_iterator<wchar_t>::equal(a3, v97) )
      {
        v56 = v103;
        do
        {
          v57 = *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
          v58 = v56;
          for ( i = *v56; i && i != v57; i = *v58 )
            ++v58;
          v60 = v58 - v56;
          if ( v60 >= 0xA )
            break;
          std::string::append(
            v9,
            1uLL,
            `std::money_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getmfld'::`2'::_Src[v60]);
          std::istreambuf_iterator<unsigned short>::_Inc(a3);
        }
        while ( !std::istreambuf_iterator<wchar_t>::equal(a3, v55) );
        v15 = v100;
        v27 = v101;
        goto LABEL_95;
      }
LABEL_96:
      v53 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v12 + 24LL))(v12);
      if ( !std::istreambuf_iterator<wchar_t>::equal(a3, v97)
        && v53
        && *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3) == v53 )
      {
        std::istreambuf_iterator<unsigned short>::_Inc(a3);
        v54 = v97;
        while ( !std::istreambuf_iterator<wchar_t>::equal(a3, v54) )
        {
          if ( v26 >= v27 )
            goto LABEL_121;
          v61 = *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
          v62 = v103;
          for ( j = *v103; j && j != v61; j = *v62 )
            ++v62;
          v64 = v62 - v103;
          if ( v64 >= 0xA )
            break;
          std::string::append(
            v9,
            1uLL,
            `std::money_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getmfld'::`2'::_Src[v64]);
          ++v26;
          std::istreambuf_iterator<unsigned short>::_Inc(a3);
        }
        v65 = v93;
        if ( v26 < v27 )
          v65 = 1;
        v93 = v65;
      }
LABEL_121:
      if ( *((_QWORD *)v9 + 2) )
      {
        if ( v26 < v27 )
        {
          v66 = (unsigned int)(v27 - v26);
          do
          {
            std::string::append(v9, 1uLL, 48);
            --v66;
          }
          while ( v66 );
          v12 = v96;
        }
      }
      else
      {
        v93 = 1;
      }
      if ( v112 >= 0x10 )
        operator delete(v110[0]);
      goto LABEL_80;
    }
    v30 = 15LL;
    v109 = 15LL;
    LOWORD(v107[0]) = 0;
    v108 = 1LL;
    v31 = std::istreambuf_iterator<wchar_t>::equal(a3, v97);
    v32 = (void **)v107[0];
    if ( v31 )
      goto LABEL_58;
    v33 = v99;
    v34 = v97;
    while ( 1 )
    {
      v35 = *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
      v36 = v103;
      for ( k = *v103; k && k != v35; k = *v36 )
        ++v36;
      v38 = v36 - v103;
      if ( v38 >= 0xA )
        break;
      std::string::append(
        v33,
        1uLL,
        `std::money_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getmfld'::`2'::_Src[v38]);
      v39 = v107;
      if ( v30 >= 0x10 )
        v39 = v32;
      if ( *((_BYTE *)v39 + v25) == 127 )
        goto LABEL_51;
      v40 = v107;
      if ( v30 >= 0x10 )
        v40 = v32;
      ++*((_BYTE *)v40 + v25);
LABEL_50:
      v32 = (void **)v107[0];
      v30 = v109;
LABEL_51:
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
      if ( std::istreambuf_iterator<wchar_t>::equal(a3, v34) )
        goto LABEL_52;
    }
    v41 = v107;
    if ( v30 >= 0x10 )
      v41 = v32;
    if ( *((_BYTE *)v41 + v25) && *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3) == v28 )
    {
      std::string::append((char *)v107, 1uLL, 0);
      ++v25;
      goto LABEL_50;
    }
LABEL_52:
    v15 = v100;
    v27 = v101;
    if ( v25 )
    {
      v42 = v107;
      if ( v30 >= 0x10 )
        v42 = v32;
      if ( *((char *)v42 + v25) <= 0 )
        v93 = 1;
      else
        ++v25;
    }
LABEL_58:
    v43 = v110;
    v44 = v110[0];
    v45 = v112;
    if ( v112 >= 0x10 )
      v43 = (void **)v110[0];
    if ( !v93 )
    {
      while ( 1 )
      {
        v46 = v43;
        if ( !v25 )
          break;
        v47 = *(_BYTE *)v43;
        if ( *(_BYTE *)v43 == 127 )
          break;
        if ( --v25 )
        {
          v48 = v107;
          if ( v30 >= 0x10 )
            v48 = v32;
          if ( v47 != *((_BYTE *)v48 + v25) )
            goto LABEL_74;
        }
        if ( !v25 )
        {
          v49 = v107;
          if ( v30 >= 0x10 )
            v49 = v32;
          if ( v47 < *(char *)v49 )
          {
LABEL_74:
            v93 = 1;
            goto LABEL_75;
          }
        }
        v43 = (void **)((char *)v43 + 1);
        if ( *(char *)v43 <= 0 )
          v43 = v46;
      }
      if ( v30 >= 0x10 )
        operator delete(v32);
      v9 = v99;
LABEL_95:
      v26 = v98;
      v12 = v96;
      goto LABEL_96;
    }
LABEL_75:
    if ( v30 >= 0x10 )
    {
      operator delete(v32);
      v45 = v112;
      v44 = v110[0];
    }
    if ( v45 >= 0x10 )
      operator delete(v44);
    v9 = v99;
    v12 = v96;
LABEL_80:
    v7 = v97;
    v19 = v93;
    v18 = v95;
LABEL_81:
    v95 = ++v18;
  }
  while ( !v19 );
  if ( v93 )
    goto LABEL_213;
  v50 = v114;
  if ( v114 <= 1 )
    goto LABEL_211;
  v51 = v113;
  if ( v115 >= 8 )
    v51 = (void **)v113[0];
  while ( 1 )
  {
    v52 = v113;
    if ( v115 >= 8 )
      v52 = (void **)v113[0];
    v51 = (void **)((char *)v51 + 2);
    if ( v51 == (void **)((char *)v52 + 2 * v50) )
      break;
    if ( std::istreambuf_iterator<wchar_t>::equal(a3, v7)
      || *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3) != *(_WORD *)v51 )
    {
      v50 = v114;
      break;
    }
    std::istreambuf_iterator<unsigned short>::_Inc(a3);
    v50 = v114;
  }
  v90 = v113;
  if ( v115 >= 8 )
    v90 = (void **)v113[0];
  if ( v51 != (void **)((char *)v90 + 2 * v50) )
  {
LABEL_213:
    *((_QWORD *)v9 + 2) = 0LL;
    if ( *((_QWORD *)v9 + 3) < 0x10uLL )
      v91 = v9;
    else
      v91 = *(char **)v9;
    *v91 = 0;
  }
  else
  {
LABEL_211:
    if ( v94 )
      std::string::insert(v9, 0LL, 1uLL, 45);
  }
  if ( v115 >= 8 )
    operator delete(v113[0]);
  return v9;
}
