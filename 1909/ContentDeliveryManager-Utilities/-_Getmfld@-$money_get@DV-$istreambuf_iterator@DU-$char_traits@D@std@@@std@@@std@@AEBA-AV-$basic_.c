/*
 * XREFs of ?_Getmfld@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0_NAEAVios_base@2@PEAD@Z @ 0x1800C5D44
 * Callers:
 *     ?do_get@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAO@Z @ 0x1800C7F00 (-do_get@-$money_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$istreamb.c)
 *     ?do_get@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z @ 0x1800C8000 (-do_get@-$money_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA_ea_1800C8000.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180034990 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18004A38C (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x1800AFF28 (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ?_Inc@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x1800B2D74 (-_Inc@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x1800B5464 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z @ 0x1800B5548 (-insert@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z.c)
 *     ??$use_facet@V?$moneypunct@D$00@std@@@std@@YAAEBV?$moneypunct@D$00@0@AEBVlocale@0@@Z @ 0x1800C4AB0 (--$use_facet@V-$moneypunct@D$00@std@@@std@@YAAEBV-$moneypunct@D$00@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$moneypunct@D$0A@@std@@@std@@YAAEBV?$moneypunct@D$0A@@0@AEBVlocale@0@@Z @ 0x1800C4BF0 (--$use_facet@V-$moneypunct@D$0A@@std@@@std@@YAAEBV-$moneypunct@D$0A@@0@AEBVlocale@0@@Z.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800CAF31 (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
char *__fastcall std::money_get<char,std::istreambuf_iterator<char>>::_Getmfld(
        __int64 a1,
        char *a2,
        __int64 a3,
        __int64 *a4,
        char a5,
        __int64 a6,
        char *a7)
{
  char *v8; // r15
  __int64 v9; // rbx
  int v10; // esi
  struct std::_Facet_base *v11; // r12
  void (__fastcall ***v12)(_QWORD, __int64); // rax
  int v13; // r14d
  char v14; // r13
  __int64 v15; // rsi
  __int64 v16; // rbx
  int v17; // r14d
  struct std::_Facet_base *v18; // rcx
  void (__fastcall ***v19)(_QWORD, __int64); // rax
  unsigned __int64 v20; // rbx
  char v21; // al
  char v22; // bl
  __int64 v23; // r15
  __int64 v24; // rcx
  unsigned __int8 *v25; // r8
  int v26; // edx
  int v27; // r13d
  struct std::_Facet_base *v28; // rsi
  int v29; // r12d
  __int64 v30; // rbx
  char v31; // r15
  void **v32; // rcx
  unsigned __int64 v33; // r14
  char v34; // al
  void **v35; // rsi
  char *v36; // r12
  __int64 v37; // rcx
  unsigned __int8 *v38; // r8
  int v39; // edx
  int v40; // eax
  char *v41; // rax
  char i; // cl
  unsigned __int64 v43; // rax
  void **v44; // rax
  void **v45; // rax
  void **v46; // rax
  __int64 v47; // rcx
  unsigned __int8 *v48; // r8
  int v49; // edx
  int v50; // eax
  void **v51; // rax
  char v52; // r15
  void **v53; // rcx
  void *v54; // r9
  unsigned __int64 v55; // r8
  void **v56; // r10
  char v57; // dl
  void **v58; // rax
  void **v59; // rax
  char *v60; // r14
  __int64 v61; // rcx
  unsigned __int8 *v62; // r8
  int v63; // edx
  int v64; // eax
  char *v65; // rax
  char j; // cl
  unsigned __int64 v67; // rax
  char v68; // bl
  __int64 v69; // rcx
  unsigned __int8 *v70; // r8
  int v71; // edx
  int v72; // eax
  __int64 v73; // rcx
  unsigned __int8 *v74; // r8
  int v75; // edx
  int v76; // eax
  char *v77; // rax
  char k; // cl
  unsigned __int64 v79; // rax
  __int64 v80; // rbx
  int v81; // r14d
  void **v82; // rbx
  __int64 v83; // rcx
  unsigned __int8 *v84; // r8
  int v85; // edx
  int v86; // eax
  bool v87; // zf
  char v88; // bl
  unsigned int v89; // r14d
  int v90; // r14d
  void **v91; // rbx
  __int64 v92; // rcx
  unsigned __int8 *v93; // r8
  int v94; // edx
  int v95; // eax
  char v96; // bl
  unsigned int v97; // r14d
  int v98; // r14d
  __int64 v99; // rbx
  __int64 v100; // rbx
  __int64 v101; // rcx
  unsigned __int8 *v102; // r8
  int v103; // edx
  int v104; // eax
  void **v105; // rax
  __int64 v106; // rcx
  unsigned __int8 *v107; // r8
  int v108; // edx
  int v109; // eax
  void **v110; // rax
  void **v111; // rax
  void **v112; // rbx
  void **v113; // rcx
  __int64 v114; // rcx
  unsigned __int8 *v115; // r9
  int v116; // edx
  int v117; // eax
  unsigned __int64 v118; // r10
  void **v119; // r8
  char v120; // al
  void **v121; // rdx
  int v122; // eax
  unsigned __int64 v123; // rcx
  void **v124; // rbx
  void **v125; // rax
  __int64 v126; // rcx
  unsigned __int8 *v127; // r8
  int v128; // edx
  int v129; // eax
  void **v130; // rax
  char *v131; // rax
  char v133; // [rsp+3Ch] [rbp-BDh]
  char v134; // [rsp+40h] [rbp-B9h]
  struct std::_Facet_base *v135; // [rsp+48h] [rbp-B1h]
  unsigned __int64 v136; // [rsp+50h] [rbp-A9h]
  int v137; // [rsp+58h] [rbp-A1h]
  struct std::_Facet_base *v139; // [rsp+68h] [rbp-91h] BYREF
  char *v140; // [rsp+70h] [rbp-89h]
  char *v141; // [rsp+78h] [rbp-81h]
  _BYTE v142[4]; // [rsp+80h] [rbp-79h] BYREF
  int v143; // [rsp+84h] [rbp-75h]
  int v144; // [rsp+88h] [rbp-71h]
  __int64 v145; // [rsp+90h] [rbp-69h]
  char *v146; // [rsp+98h] [rbp-61h]
  void *v147[2]; // [rsp+A0h] [rbp-59h] BYREF
  __int64 v148; // [rsp+B0h] [rbp-49h]
  unsigned __int64 v149; // [rsp+B8h] [rbp-41h]
  void *Src[2]; // [rsp+C0h] [rbp-39h] BYREF
  __int64 v151; // [rsp+D0h] [rbp-29h]
  unsigned __int64 v152; // [rsp+D8h] [rbp-21h]
  void *v153[2]; // [rsp+E0h] [rbp-19h] BYREF
  unsigned __int64 v154; // [rsp+F0h] [rbp-9h]
  unsigned __int64 v155; // [rsp+F8h] [rbp-1h]

  v145 = -2LL;
  v8 = a2;
  v140 = a2;
  v146 = a2;
  v141 = a7;
  v9 = **(_QWORD **)(a6 + 64);
  v139 = (struct std::_Facet_base *)v9;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  if ( a5 )
  {
    v10 = 32;
    v11 = std::use_facet<std::moneypunct<char,1>>((__int64 *)&v139);
  }
  else
  {
    v10 = 64;
    v11 = std::use_facet<std::moneypunct<char,0>>((__int64 *)&v139);
  }
  v135 = v11;
  if ( v9 )
  {
    v12 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v12 )
      (**v12)(v12, 1LL);
  }
  v13 = v10;
  v14 = 0;
  v134 = 0;
  v133 = 0;
  v155 = 15LL;
  v154 = 0LL;
  LOBYTE(v153[0]) = 0;
  (*(void (__fastcall **)(struct std::_Facet_base *, _BYTE *))(*(_QWORD *)v11 + 88LL))(v11, v142);
  *((_QWORD *)v8 + 3) = 15LL;
  *((_QWORD *)v8 + 2) = 0LL;
  *v8 = 0;
  v15 = a6;
  v16 = **(_QWORD **)(a6 + 64);
  v139 = (struct std::_Facet_base *)v16;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  v17 = v13 | 0x81;
  v137 = v17;
  v18 = std::use_facet<std::ctype<char>>((__int64 *)&v139);
  v139 = v18;
  if ( v16 )
  {
    v19 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    if ( v19 )
      (**v19)(v19, 1LL);
    v18 = v139;
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, const char *, char *, char *))(*(_QWORD *)v18 + 56LL))(
    v18,
    "0123456789-",
    "",
    v141);
  v20 = 0LL;
  v136 = 0LL;
  while ( v20 < 4 )
  {
    v21 = v142[v20];
    if ( v21 == 32 )
      goto LABEL_18;
    if ( v21 == 36 )
    {
      (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v11 + 48LL))(v11, v147);
      v137 = v17 | 0x100;
      if ( (*(_BYTE *)(v15 + 24) & 8) == 0 && !std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
      {
        if ( !*(_BYTE *)(a3 + 8) )
        {
          v101 = *(_QWORD *)a3;
          if ( !*(_QWORD *)a3
            || ((v102 = **(unsigned __int8 ***)(v101 + 56)) == 0LL ? (v103 = 0) : (v103 = **(_DWORD **)(v101 + 80)),
                v103 <= 0
              ? (v104 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v101 + 48LL))(v101))
              : (v104 = *v102),
                v104 == -1) )
          {
            *(_QWORD *)a3 = 0LL;
          }
          else
          {
            *(_BYTE *)(a3 + 9) = v104;
          }
          *(_BYTE *)(a3 + 8) = 1;
        }
        v105 = v147;
        if ( v149 >= 0x10 )
          v105 = (void **)v147[0];
        if ( *(_BYTE *)(a3 + 9) != *(_BYTE *)v105 )
          goto LABEL_274;
      }
      if ( v136 == 3 && v154 <= 1 )
      {
        if ( std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
          goto LABEL_274;
        if ( !*(_BYTE *)(a3 + 8) )
        {
          v106 = *(_QWORD *)a3;
          if ( !*(_QWORD *)a3
            || ((v107 = **(unsigned __int8 ***)(v106 + 56)) == 0LL ? (v108 = 0) : (v108 = **(_DWORD **)(v106 + 80)),
                v108 <= 0
              ? (v109 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v106 + 48LL))(v106))
              : (v109 = *v107),
                v109 == -1) )
          {
            *(_QWORD *)a3 = 0LL;
          }
          else
          {
            *(_BYTE *)(a3 + 9) = v109;
          }
          *(_BYTE *)(a3 + 8) = 1;
        }
        v110 = v147;
        if ( v149 >= 0x10 )
          v110 = (void **)v147[0];
        if ( *(_BYTE *)(a3 + 9) != *(_BYTE *)v110 )
        {
LABEL_274:
          v111 = v147;
          v148 = 0LL;
          if ( v149 >= 0x10 )
            v111 = (void **)v147[0];
          *(_BYTE *)v111 = 0;
        }
      }
      v112 = v147;
      if ( v149 >= 0x10 )
        v112 = (void **)v147[0];
      while ( 1 )
      {
        v120 = std::istreambuf_iterator<char>::equal((__int64 *)a3, a4);
        v118 = v149;
        v119 = (void **)v147[0];
        if ( v120 )
          break;
        v113 = v147;
        if ( v149 >= 0x10 )
          v113 = (void **)v147[0];
        if ( v112 == (void **)((char *)v113 + v148) )
          break;
        if ( !*(_BYTE *)(a3 + 8) )
        {
          v114 = *(_QWORD *)a3;
          if ( !*(_QWORD *)a3
            || ((v115 = **(unsigned __int8 ***)(v114 + 56)) == 0LL ? (v116 = 0) : (v116 = **(_DWORD **)(v114 + 80)),
                v116 <= 0
              ? (v117 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v114 + 48LL))(v114),
                 v118 = v149,
                 v119 = (void **)v147[0])
              : (void **)(v117 = *v115),
                v117 == -1) )
          {
            *(_QWORD *)a3 = 0LL;
          }
          else
          {
            *(_BYTE *)(a3 + 9) = v117;
          }
          *(_BYTE *)(a3 + 8) = 1;
        }
        if ( *(_BYTE *)(a3 + 9) != *(_BYTE *)v112 )
          break;
        v112 = (void **)((char *)v112 + 1);
        std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
      }
      v121 = v147;
      if ( v118 >= 0x10 )
        v121 = v119;
      if ( v112 != (void **)((char *)v121 + v148) )
        v14 = 1;
      v134 = v14;
      if ( v118 >= 0x10 )
        operator delete(v119);
      goto LABEL_108;
    }
    if ( v21 != 43 )
    {
      if ( v21 == 118 )
      {
        v27 = 0;
        v144 = 0;
        v28 = v135;
        v29 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v135 + 72LL))(v135);
        v143 = v29;
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v28 + 40LL))(v28, Src);
        v137 = v17 | 0x20000;
        v30 = 0LL;
        if ( v151 )
        {
          v31 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v135 + 32LL))(v135);
          if ( v31 )
          {
            v32 = Src;
            if ( v152 >= 0x10 )
              v32 = (void **)Src[0];
            if ( *(_BYTE *)v32 < 0x7Fu )
            {
              v33 = 15LL;
              v149 = 15LL;
              LOWORD(v147[0]) = 0;
              v148 = 1LL;
              v34 = std::istreambuf_iterator<char>::equal((__int64 *)a3, a4);
              v35 = (void **)v147[0];
              if ( v34 )
                goto LABEL_80;
              v36 = v140;
              while ( 2 )
              {
                if ( !*(_BYTE *)(a3 + 8) )
                {
                  v37 = *(_QWORD *)a3;
                  if ( !*(_QWORD *)a3
                    || ((v38 = **(unsigned __int8 ***)(v37 + 56)) == 0LL ? (v39 = 0) : (v39 = **(_DWORD **)(v37 + 80)),
                        v39 <= 0
                      ? (v40 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 48LL))(v37))
                      : (v40 = *v38),
                        v40 == -1) )
                  {
                    *(_QWORD *)a3 = 0LL;
                  }
                  else
                  {
                    *(_BYTE *)(a3 + 9) = v40;
                  }
                  *(_BYTE *)(a3 + 8) = 1;
                }
                v41 = v141;
                for ( i = *v141; i && i != *(_BYTE *)(a3 + 9); i = *v41 )
                  ++v41;
                v43 = v41 - v141;
                if ( v43 >= 0xA )
                {
                  v46 = v147;
                  if ( v33 >= 0x10 )
                    v46 = v35;
                  if ( !*((_BYTE *)v46 + v30) )
                    goto LABEL_74;
                  if ( !*(_BYTE *)(a3 + 8) )
                  {
                    v47 = *(_QWORD *)a3;
                    if ( !*(_QWORD *)a3
                      || ((v48 = **(unsigned __int8 ***)(v47 + 56)) == 0LL ? (v49 = 0) : (v49 = **(_DWORD **)(v47 + 80)),
                          v49 <= 0
                        ? (v50 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 48LL))(v47))
                        : (v50 = *v48),
                          v50 == -1) )
                    {
                      *(_QWORD *)a3 = 0LL;
                    }
                    else
                    {
                      *(_BYTE *)(a3 + 9) = v50;
                    }
                    *(_BYTE *)(a3 + 8) = 1;
                  }
                  if ( *(_BYTE *)(a3 + 9) != v31 )
                  {
LABEL_74:
                    v29 = v143;
                    v27 = v144;
                    if ( !v30 )
                      goto LABEL_80;
                    v51 = v147;
                    if ( v33 >= 0x10 )
                      v51 = v35;
                    if ( *((char *)v51 + v30) <= (char)v144 )
                    {
                      v52 = 1;
                      v134 = 1;
                    }
                    else
                    {
                      ++v30;
LABEL_80:
                      v52 = v134;
                    }
                    v53 = Src;
                    v54 = Src[0];
                    v55 = v152;
                    if ( v152 >= 0x10 )
                      v53 = (void **)Src[0];
                    if ( !v52 )
                    {
                      while ( 1 )
                      {
                        v56 = v53;
                        if ( !v30 )
                          break;
                        v57 = *(_BYTE *)v53;
                        if ( *(_BYTE *)v53 == 127 )
                          break;
                        if ( --v30 )
                        {
                          v58 = v147;
                          if ( v33 >= 0x10 )
                            v58 = v35;
                          if ( v57 != *((_BYTE *)v58 + v30) )
                            goto LABEL_97;
                        }
                        if ( !v30 )
                        {
                          v59 = v147;
                          if ( v33 >= 0x10 )
                            v59 = v35;
                          if ( v57 < *(char *)v59 )
                          {
LABEL_97:
                            v14 = 1;
                            v134 = 1;
                            goto LABEL_102;
                          }
                        }
                        v53 = (void **)((char *)v53 + 1);
                        if ( *(char *)v53 <= 0 )
                          v53 = v56;
                      }
                      if ( v33 >= 0x10 )
                        operator delete(v35);
                      v28 = v135;
LABEL_132:
                      v60 = v141;
                      goto LABEL_133;
                    }
                    v14 = v134;
LABEL_102:
                    if ( v33 >= 0x10 )
                    {
                      operator delete(v35);
                      v55 = v152;
                      v54 = Src[0];
                    }
                    if ( v55 >= 0x10 )
                      operator delete(v54);
                    v8 = v140;
                    goto LABEL_107;
                  }
                  std::string::append((char *)v147, 1uLL, 0);
                  ++v30;
LABEL_72:
                  v35 = (void **)v147[0];
                  v33 = v149;
                }
                else
                {
                  std::string::append(
                    v36,
                    1uLL,
                    `std::money_get<char,std::istreambuf_iterator<char>>::_Getmfld'::`2'::_Src[v43]);
                  v44 = v147;
                  if ( v33 >= 0x10 )
                    v44 = v35;
                  if ( *((_BYTE *)v44 + v30) != 127 )
                  {
                    v45 = v147;
                    if ( v33 >= 0x10 )
                      v45 = v35;
                    ++*((_BYTE *)v45 + v30);
                    goto LABEL_72;
                  }
                }
                std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
                if ( std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
                  goto LABEL_74;
                continue;
              }
            }
          }
          v8 = v140;
        }
        if ( std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
        {
          v52 = v134;
          goto LABEL_132;
        }
        v60 = v141;
        do
        {
          if ( !*(_BYTE *)(a3 + 8) )
          {
            v61 = *(_QWORD *)a3;
            if ( !*(_QWORD *)a3
              || ((v62 = **(unsigned __int8 ***)(v61 + 56)) == 0LL ? (v63 = 0) : (v63 = **(_DWORD **)(v61 + 80)),
                  v63 <= 0 ? (v64 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v61 + 48LL))(v61)) : (v64 = *v62),
                  v64 == -1) )
            {
              *(_QWORD *)a3 = 0LL;
            }
            else
            {
              *(_BYTE *)(a3 + 9) = v64;
            }
            *(_BYTE *)(a3 + 8) = 1;
          }
          v65 = v60;
          for ( j = *v60; j && j != *(_BYTE *)(a3 + 9); j = *v65 )
            ++v65;
          v67 = v65 - v60;
          if ( v67 >= 0xA )
            break;
          std::string::append(v8, 1uLL, `std::money_get<char,std::istreambuf_iterator<char>>::_Getmfld'::`2'::_Src[v67]);
          std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
        }
        while ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) );
        v28 = v135;
        v52 = v134;
LABEL_133:
        v68 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v28 + 24LL))(v28);
        if ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) && v68 )
        {
          if ( !*(_BYTE *)(a3 + 8) )
          {
            v69 = *(_QWORD *)a3;
            if ( !*(_QWORD *)a3
              || ((v70 = **(unsigned __int8 ***)(v69 + 56)) == 0LL ? (v71 = 0) : (v71 = **(_DWORD **)(v69 + 80)),
                  v71 <= 0 ? (v72 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v69 + 48LL))(v69)) : (v72 = *v70),
                  v72 == -1) )
            {
              *(_QWORD *)a3 = 0LL;
            }
            else
            {
              *(_BYTE *)(a3 + 9) = v72;
            }
            *(_BYTE *)(a3 + 8) = 1;
          }
          if ( *(_BYTE *)(a3 + 9) == v68 )
          {
            std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
            if ( std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
            {
LABEL_168:
              if ( v27 < v29 )
                v52 = 1;
              v134 = v52;
            }
            else
            {
              while ( v27 < v29 )
              {
                if ( !*(_BYTE *)(a3 + 8) )
                {
                  v73 = *(_QWORD *)a3;
                  if ( !*(_QWORD *)a3
                    || ((v74 = **(unsigned __int8 ***)(v73 + 56)) == 0LL ? (v75 = 0) : (v75 = **(_DWORD **)(v73 + 80)),
                        v75 <= 0
                      ? (v76 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v73 + 48LL))(v73))
                      : (v76 = *v74),
                        v76 == -1) )
                  {
                    *(_QWORD *)a3 = 0LL;
                  }
                  else
                  {
                    *(_BYTE *)(a3 + 9) = v76;
                  }
                  *(_BYTE *)(a3 + 8) = 1;
                }
                v77 = v60;
                for ( k = *v60; k && k != *(_BYTE *)(a3 + 9); k = *v77 )
                  ++v77;
                v79 = v77 - v60;
                if ( v79 < 0xA )
                {
                  std::string::append(
                    v140,
                    1uLL,
                    `std::money_get<char,std::istreambuf_iterator<char>>::_Getmfld'::`2'::_Src[v79]);
                  ++v27;
                  std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
                  if ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
                    continue;
                }
                goto LABEL_168;
              }
            }
          }
        }
        v8 = v140;
        if ( *((_QWORD *)v140 + 2) )
        {
          if ( v27 < v29 )
          {
            v80 = (unsigned int)(v29 - v27);
            do
            {
              std::string::append(v8, 1uLL, 48);
              --v80;
            }
            while ( v80 );
          }
          v14 = v134;
        }
        else
        {
          v14 = 1;
          v134 = 1;
        }
        goto LABEL_177;
      }
      if ( v21 != 120 )
        goto LABEL_321;
LABEL_18:
      if ( v20 != 3 )
      {
        v22 = 0;
        if ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
        {
          v23 = (__int64)v139;
          do
          {
            if ( !*(_BYTE *)(a3 + 8) )
            {
              v24 = *(_QWORD *)a3;
              if ( !*(_QWORD *)a3
                || ((v25 = **(unsigned __int8 ***)(v24 + 56)) == 0LL ? (v26 = 0) : (v26 = **(_DWORD **)(v24 + 80)),
                    v26 <= 0
                  ? (v122 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 48LL))(v24))
                  : (v122 = *v25),
                    v122 == -1) )
              {
                *(_QWORD *)a3 = 0LL;
              }
              else
              {
                *(_BYTE *)(a3 + 9) = v122;
              }
              *(_BYTE *)(a3 + 8) = 1;
            }
            if ( (*(_BYTE *)(*(_QWORD *)(v23 + 24) + 2LL * *(unsigned __int8 *)(a3 + 9)) & 0x48) == 0 )
              break;
            v22 = 1;
            std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
          }
          while ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) );
          v8 = v140;
          v11 = v135;
        }
        if ( v142[v136] == 32 )
        {
          if ( !v22 )
            v14 = 1;
          v134 = v14;
        }
        v20 = v136;
        goto LABEL_320;
      }
      goto LABEL_321;
    }
    if ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
    {
      (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v135 + 56LL))(v135, v147);
      v81 = v17 | 0x202;
      if ( !v148 )
        goto LABEL_196;
      (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v135 + 56LL))(v135, Src);
      v81 |= 0x404u;
      v82 = Src;
      if ( v152 >= 0x10 )
        v82 = (void **)Src[0];
      if ( !*(_BYTE *)(a3 + 8) )
      {
        v83 = *(_QWORD *)a3;
        if ( !*(_QWORD *)a3
          || ((v84 = **(unsigned __int8 ***)(v83 + 56)) == 0LL ? (v85 = 0) : (v85 = **(_DWORD **)(v83 + 80)),
              v85 <= 0 ? (v86 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v83 + 48LL))(v83)) : (v86 = *v84),
              v86 == -1) )
        {
          *(_QWORD *)a3 = 0LL;
        }
        else
        {
          *(_BYTE *)(a3 + 9) = v86;
        }
        *(_BYTE *)(a3 + 8) = 1;
      }
      v87 = *(_BYTE *)v82 == *(_BYTE *)(a3 + 9);
      v88 = 1;
      if ( !v87 )
LABEL_196:
        v88 = 0;
      if ( (v81 & 4) != 0 )
      {
        v81 &= ~4u;
        if ( v152 >= 0x10 )
          operator delete(Src[0]);
        v152 = 15LL;
        v151 = 0LL;
        LOBYTE(Src[0]) = 0;
      }
      v89 = v81 & 0xFFFFFFFD;
      if ( v149 >= 0x10 )
        operator delete(v147[0]);
      if ( v88 )
      {
        std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v135 + 56LL))(v135, Src);
        v137 = v89 | 0x800;
        std::string::operator=(v153, Src);
LABEL_177:
        if ( v152 >= 0x10 )
          operator delete(Src[0]);
        goto LABEL_107;
      }
      (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v135 + 64LL))(v135, v147);
      v90 = v89 | 0x1008;
      if ( !v148 )
        goto LABEL_221;
      (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v135 + 64LL))(v135, Src);
      v90 |= 0x2010u;
      v91 = Src;
      if ( v152 >= 0x10 )
        v91 = (void **)Src[0];
      if ( !*(_BYTE *)(a3 + 8) )
      {
        v92 = *(_QWORD *)a3;
        if ( !*(_QWORD *)a3
          || ((v93 = **(unsigned __int8 ***)(v92 + 56)) == 0LL ? (v94 = 0) : (v94 = **(_DWORD **)(v92 + 80)),
              v94 <= 0 ? (v95 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v92 + 48LL))(v92)) : (v95 = *v93),
              v95 == -1) )
        {
          *(_QWORD *)a3 = 0LL;
        }
        else
        {
          *(_BYTE *)(a3 + 9) = v95;
        }
        *(_BYTE *)(a3 + 8) = 1;
      }
      v87 = *(_BYTE *)v91 == *(_BYTE *)(a3 + 9);
      v96 = 1;
      if ( !v87 )
LABEL_221:
        v96 = 0;
      if ( (v90 & 0x10) != 0 )
      {
        v90 &= ~0x10u;
        if ( v152 >= 0x10 )
          operator delete(Src[0]);
        v152 = 15LL;
        v151 = 0LL;
        LOBYTE(Src[0]) = 0;
      }
      v97 = v90 & 0xFFFFFFF7;
      if ( v149 >= 0x10 )
        operator delete(v147[0]);
      if ( v96 )
      {
        std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v135 + 64LL))(v135, Src);
        v137 = v97 | 0x4000;
        std::string::operator=(v153, Src);
        if ( v152 >= 0x10 )
          operator delete(Src[0]);
        v133 = 1;
        goto LABEL_107;
      }
      (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v135 + 56LL))(v135, Src);
      v98 = v97 | 0x8000;
      v137 = v98;
      v99 = v151;
      if ( v152 >= 0x10 )
        operator delete(Src[0]);
      if ( v99 )
      {
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v135 + 64LL))(v135, Src);
        v137 = v98 | 0x10000;
        v100 = v151;
        if ( v152 >= 0x10 )
          operator delete(Src[0]);
        v11 = v135;
        v15 = a6;
        v87 = v100 == 0;
        v20 = v136;
        if ( v87 )
          v133 = 1;
        goto LABEL_321;
      }
LABEL_107:
      v11 = v135;
LABEL_108:
      v20 = v136;
LABEL_320:
      v15 = a6;
    }
LABEL_321:
    v136 = ++v20;
    v17 = v137;
    if ( v14 )
      break;
  }
  if ( v14 )
    goto LABEL_350;
  v123 = v154;
  if ( v154 <= 1 )
    goto LABEL_348;
  v124 = v153;
  if ( v155 >= 0x10 )
    v124 = (void **)v153[0];
  while ( 1 )
  {
    v125 = v153;
    if ( v155 >= 0x10 )
      v125 = (void **)v153[0];
    v124 = (void **)((char *)v124 + 1);
    if ( v124 == (void **)((char *)v125 + v123) )
      break;
    if ( std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
      goto LABEL_344;
    if ( !*(_BYTE *)(a3 + 8) )
    {
      v126 = *(_QWORD *)a3;
      if ( !*(_QWORD *)a3
        || ((v127 = **(unsigned __int8 ***)(v126 + 56)) == 0LL ? (v128 = 0) : (v128 = **(_DWORD **)(v126 + 80)),
            v128 <= 0 ? (v129 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v126 + 48LL))(v126)) : (v129 = *v127),
            v129 == -1) )
      {
        *(_QWORD *)a3 = 0LL;
      }
      else
      {
        *(_BYTE *)(a3 + 9) = v129;
      }
      *(_BYTE *)(a3 + 8) = 1;
    }
    if ( *(_BYTE *)(a3 + 9) != *(_BYTE *)v124 )
    {
LABEL_344:
      v123 = v154;
      break;
    }
    std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
    v123 = v154;
  }
  v130 = v153;
  if ( v155 >= 0x10 )
    v130 = (void **)v153[0];
  if ( v124 != (void **)((char *)v130 + v123) )
  {
LABEL_350:
    *((_QWORD *)v8 + 2) = 0LL;
    if ( *((_QWORD *)v8 + 3) < 0x10uLL )
      v131 = v8;
    else
      v131 = *(char **)v8;
    *v131 = 0;
  }
  else
  {
LABEL_348:
    if ( v133 )
      std::string::insert(v8, 0LL, 1uLL, 45);
  }
  if ( v155 >= 0x10 )
    operator delete(v153[0]);
  return v8;
}
