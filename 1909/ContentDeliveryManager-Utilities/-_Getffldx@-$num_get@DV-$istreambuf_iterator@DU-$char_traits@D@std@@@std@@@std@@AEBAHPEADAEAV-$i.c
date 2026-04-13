/*
 * XREFs of ?_Getffldx@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x1800B1A54
 * Callers:
 *     ?_Getffld@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x1800B0F3C (-_Getffld@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180034990 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x1800AFF28 (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$numpunct@D@std@@@std@@YAAEBV?$numpunct@D@0@AEBVlocale@0@@Z @ 0x1800B02E8 (--$use_facet@V-$numpunct@D@std@@@std@@YAAEBV-$numpunct@D@0@AEBVlocale@0@@Z.c)
 *     ?_Inc@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x1800B2D74 (-_Inc@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x1800B5464 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800CAF31 (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::num_get<char,std::istreambuf_iterator<char>>::_Getffldx(
        __int64 a1,
        _BYTE *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        int *a6)
{
  __int64 v6; // r13
  __int64 v9; // rbx
  void (__fastcall ***v10)(_QWORD, __int64); // r8
  struct std::_Facet_base *v11; // r14
  void (__fastcall ***v12)(_QWORD, __int64); // rax
  __int64 v13; // rbx
  struct std::_Facet_base *v14; // rsi
  void (__fastcall ***v15)(_QWORD, __int64); // rax
  _WORD *v16; // r15
  __int64 v17; // rcx
  unsigned __int8 *v18; // r8
  int v19; // edx
  int v20; // eax
  char v21; // cl
  char *v22; // r15
  __int64 v23; // rbx
  int v24; // esi
  __int64 v25; // rcx
  unsigned __int8 *v26; // r8
  int v27; // edx
  int v28; // eax
  __int64 v29; // rcx
  unsigned __int8 *v30; // r8
  int v31; // edx
  int v32; // eax
  char v33; // cl
  void **v34; // r12
  char v35; // r13
  unsigned __int64 v36; // r14
  char v37; // al
  void **v38; // rsi
  int v39; // r12d
  __int64 v40; // rcx
  unsigned __int8 *v41; // r8
  int v42; // edx
  int v43; // eax
  char *v44; // rax
  char j; // cl
  unsigned __int64 v46; // rax
  void **v47; // rax
  void **v48; // rax
  void **v49; // rax
  __int64 v50; // rcx
  unsigned __int8 *v51; // r8
  int v52; // edx
  int v53; // eax
  void **v54; // rax
  void **v55; // rdx
  char v56; // cl
  void **v57; // rax
  void **v58; // rax
  char v59; // si
  __int64 v60; // rcx
  unsigned __int8 *v61; // r8
  int v62; // edx
  __int64 v63; // rcx
  unsigned __int8 *v64; // r8
  int v65; // edx
  int v66; // eax
  char *v67; // rax
  char i; // cl
  unsigned __int64 v69; // rax
  int v70; // eax
  int v71; // ebx
  __int64 v72; // rcx
  unsigned __int8 *v73; // r8
  int v74; // edx
  int v75; // eax
  int v76; // r14d
  __int64 v77; // rcx
  unsigned __int8 *v78; // r8
  int v79; // edx
  int v80; // eax
  char *v81; // rax
  char k; // cl
  unsigned __int64 v83; // rax
  __int64 v84; // rcx
  unsigned __int8 *v85; // r8
  int v86; // edx
  int v87; // eax
  char v88; // cl
  int v89; // ebx
  __int64 v90; // rcx
  unsigned __int8 *v91; // r8
  int v92; // edx
  int v93; // eax
  char v94; // cl
  __int64 v95; // rcx
  unsigned __int8 *v96; // r8
  int v97; // edx
  int v98; // eax
  __int64 v99; // rcx
  unsigned __int8 *v100; // r8
  int v101; // edx
  int v102; // eax
  char *v103; // rax
  char m; // cl
  unsigned __int64 v105; // rax
  char v107; // [rsp+38h] [rbp-99h]
  char v108; // [rsp+39h] [rbp-98h]
  int v109; // [rsp+3Ch] [rbp-95h]
  __int64 v110; // [rsp+40h] [rbp-91h] BYREF
  struct std::_Facet_base *v111; // [rsp+48h] [rbp-89h] BYREF
  __int64 v112; // [rsp+50h] [rbp-81h]
  void **v113; // [rsp+58h] [rbp-79h]
  char *v114; // [rsp+60h] [rbp-71h]
  int *v115; // [rsp+68h] [rbp-69h]
  __int64 v116; // [rsp+70h] [rbp-61h]
  void *v117[3]; // [rsp+78h] [rbp-59h] BYREF
  __int64 v118; // [rsp+90h] [rbp-41h]
  void *v119[3]; // [rsp+98h] [rbp-39h] BYREF
  unsigned __int64 v120; // [rsp+B0h] [rbp-21h]
  _BYTE v121[22]; // [rsp+B8h] [rbp-19h] BYREF
  char v122; // [rsp+CEh] [rbp-3h]
  char v123; // [rsp+CFh] [rbp-2h]
  char v124; // [rsp+D0h] [rbp-1h]
  char v125; // [rsp+D1h] [rbp+0h]
  char v126; // [rsp+D2h] [rbp+1h]
  char v127; // [rsp+D3h] [rbp+2h]

  v116 = -2LL;
  v6 = a4;
  v112 = a4;
  v114 = a2;
  v115 = a6;
  v9 = **(_QWORD **)(a5 + 64);
  v111 = (struct std::_Facet_base *)v9;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v11 = std::use_facet<std::numpunct<char>>((__int64 *)&v111);
  v111 = v11;
  if ( v9 )
  {
    v12 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v10 = v12;
    if ( v12 )
      (**v12)(v12, 1LL);
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, void **, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v11 + 40LL))(
    v11,
    v119,
    v10);
  v13 = **(_QWORD **)(a5 + 64);
  v110 = v13;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  v14 = std::use_facet<std::ctype<char>>(&v110);
  if ( v13 )
  {
    v15 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v15 )
      (**v15)(v15, 1LL);
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, const char *, char *, _BYTE *))(*(_QWORD *)v14 + 56LL))(
    v14,
    "0123456789ABCDEFabcdef-+XxPp",
    "",
    v121);
  v16 = a2;
  v108 = 0;
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    if ( !*((_BYTE *)a3 + 8) )
    {
      v17 = *a3;
      if ( !*a3
        || ((v18 = **(unsigned __int8 ***)(v17 + 56)) == 0LL ? (v19 = 0) : (v19 = **(_DWORD **)(v17 + 80)),
            v19 <= 0 ? (v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 48LL))(v17)) : (v20 = *v18),
            v20 == -1) )
      {
        *a3 = 0LL;
      }
      else
      {
        *((_BYTE *)a3 + 9) = v20;
      }
      *((_BYTE *)a3 + 8) = 1;
    }
    v21 = *((_BYTE *)a3 + 9);
    if ( v21 == v123 )
    {
      *a2 = 43;
    }
    else
    {
      if ( v21 != v122 )
        goto LABEL_25;
      *a2 = 45;
    }
    v16 = a2 + 1;
    std::istreambuf_iterator<char>::_Inc(a3);
  }
LABEL_25:
  *v16 = 30768;
  v22 = (char *)(v16 + 1);
  v107 = 0;
  v23 = 0LL;
  LODWORD(v110) = 0;
  v24 = 0;
  v109 = 0;
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    if ( !*((_BYTE *)a3 + 8) )
    {
      v25 = *a3;
      if ( !*a3
        || ((v26 = **(unsigned __int8 ***)(v25 + 56)) == 0LL ? (v27 = 0) : (v27 = **(_DWORD **)(v25 + 80)),
            v27 <= 0 ? (v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 48LL))(v25)) : (v28 = *v26),
            v28 == -1) )
      {
        *a3 = 0LL;
      }
      else
      {
        *((_BYTE *)a3 + 9) = v28;
      }
      *((_BYTE *)a3 + 8) = 1;
    }
    if ( *((_BYTE *)a3 + 9) == v121[0] )
    {
      std::istreambuf_iterator<char>::_Inc(a3);
      if ( (unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
        goto LABEL_55;
      if ( !*((_BYTE *)a3 + 8) )
      {
        v29 = *a3;
        if ( !*a3
          || ((v30 = **(unsigned __int8 ***)(v29 + 56)) == 0LL ? (v31 = 0) : (v31 = **(_DWORD **)(v29 + 80)),
              v31 <= 0 ? (v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 48LL))(v29)) : (v32 = *v30),
              v32 == -1) )
        {
          *a3 = 0LL;
        }
        else
        {
          *((_BYTE *)a3 + 9) = v32;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      v33 = *((_BYTE *)a3 + 9);
      if ( v33 == v125 || v33 == v124 )
        std::istreambuf_iterator<char>::_Inc(a3);
      else
LABEL_55:
        v107 = 1;
    }
  }
  v34 = v119;
  if ( v120 >= 0x10 )
    v34 = (void **)v119[0];
  v113 = v34;
  if ( (unsigned __int8)(*(_BYTE *)v34 - 1) > 0x7Du )
  {
    if ( (unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
      goto LABEL_135;
    do
    {
      if ( !*((_BYTE *)a3 + 8) )
      {
        v63 = *a3;
        if ( !*a3
          || ((v64 = **(unsigned __int8 ***)(v63 + 56)) == 0LL ? (v65 = 0) : (v65 = **(_DWORD **)(v63 + 80)),
              v65 <= 0 ? (v66 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v63 + 48LL))(v63)) : (v66 = *v64),
              v66 == -1) )
        {
          *a3 = 0LL;
        }
        else
        {
          *((_BYTE *)a3 + 9) = v66;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      v67 = v121;
      for ( i = v121[0]; i && i != *((_BYTE *)a3 + 9); i = *v67 )
        ++v67;
      v69 = v67 - v121;
      if ( v69 >= 0x16 )
        break;
      if ( (int)v23 < 36 )
      {
        if ( v69 || (_DWORD)v23 )
        {
          *v22++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffldx'::`2'::_Src[v69];
          LODWORD(v23) = v23 + 1;
        }
      }
      else
      {
        ++v24;
      }
      v107 = 1;
      std::istreambuf_iterator<char>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
    v109 = v24;
    LODWORD(v110) = v23;
  }
  else
  {
    if ( v119[2] )
      v35 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v11 + 32LL))(v11);
    else
      v35 = 0;
    v36 = 15LL;
    v118 = 15LL;
    LOWORD(v117[0]) = 0;
    v117[2] = (void *)1;
    v37 = std::istreambuf_iterator<char>::equal(a3, v112);
    v38 = (void **)v117[0];
    if ( !v37 )
    {
      v39 = v110;
      while ( 1 )
      {
        if ( !*((_BYTE *)a3 + 8) )
        {
          v40 = *a3;
          if ( !*a3
            || ((v41 = **(unsigned __int8 ***)(v40 + 56)) == 0LL ? (v42 = 0) : (v42 = **(_DWORD **)(v40 + 80)),
                v42 <= 0 ? (v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v40 + 48LL))(v40)) : (v43 = *v41),
                v43 == -1) )
          {
            *a3 = 0LL;
          }
          else
          {
            *((_BYTE *)a3 + 9) = v43;
          }
          *((_BYTE *)a3 + 8) = 1;
        }
        v44 = v121;
        for ( j = v121[0]; j && j != *((_BYTE *)a3 + 9); j = *v44 )
          ++v44;
        v46 = v44 - v121;
        if ( v46 >= 0x16 )
        {
          v49 = v117;
          if ( v36 >= 0x10 )
            v49 = v38;
          if ( !*((_BYTE *)v49 + v23) || !v35 )
            goto LABEL_112;
          if ( !*((_BYTE *)a3 + 8) )
          {
            v50 = *a3;
            if ( !*a3
              || ((v51 = **(unsigned __int8 ***)(v50 + 56)) == 0LL ? (v52 = 0) : (v52 = **(_DWORD **)(v50 + 80)),
                  v52 <= 0 ? (v53 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v50 + 48LL))(v50)) : (v53 = *v51),
                  v53 == -1) )
            {
              *a3 = 0LL;
            }
            else
            {
              *((_BYTE *)a3 + 9) = v53;
            }
            *((_BYTE *)a3 + 8) = 1;
          }
          if ( *((_BYTE *)a3 + 9) != v35 )
          {
LABEL_112:
            LODWORD(v110) = v39;
            v34 = v113;
            if ( !v23 )
              break;
            v54 = v117;
            if ( v36 >= 0x10 )
              v54 = v38;
            if ( *((char *)v54 + v23) > 0 )
            {
              ++v23;
              break;
            }
LABEL_130:
            v108 = 1;
            goto LABEL_131;
          }
          std::string::append((char *)v117, 1uLL, 0);
          ++v23;
        }
        else
        {
          v107 = 1;
          if ( v39 < 36 )
          {
            if ( v46 || v39 )
            {
              *v22++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffldx'::`2'::_Src[v46];
              ++v39;
            }
          }
          else
          {
            ++v109;
          }
          v47 = v117;
          if ( v36 >= 0x10 )
            v47 = v38;
          if ( *((_BYTE *)v47 + v23) == 127 )
            goto LABEL_111;
          v48 = v117;
          if ( v36 >= 0x10 )
            v48 = v38;
          ++*((_BYTE *)v48 + v23);
        }
        v38 = (void **)v117[0];
        v36 = v118;
LABEL_111:
        std::istreambuf_iterator<char>::_Inc(a3);
        if ( (unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v112) )
          goto LABEL_112;
      }
    }
    while ( 1 )
    {
      v55 = v34;
      if ( !v23 )
        break;
      v56 = *(_BYTE *)v34;
      if ( *(_BYTE *)v34 == 127 )
        break;
      if ( --v23 )
      {
        v57 = v117;
        if ( v36 >= 0x10 )
          v57 = v38;
        if ( v56 != *((_BYTE *)v57 + v23) )
          goto LABEL_130;
      }
      if ( !v23 )
      {
        v58 = v117;
        if ( v36 >= 0x10 )
          v58 = v38;
        if ( v56 < *(char *)v58 )
          goto LABEL_130;
      }
      v34 = (void **)((char *)v34 + 1);
      if ( *(char *)v34 <= 0 )
        v34 = v55;
    }
LABEL_131:
    if ( v36 >= 0x10 )
      operator delete(v38);
    v6 = v112;
    LODWORD(v23) = v110;
  }
  v11 = v111;
LABEL_135:
  v59 = v107;
  if ( v107 && !(_DWORD)v23 )
    *v22++ = 48;
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    if ( !*((_BYTE *)a3 + 8) )
    {
      v60 = *a3;
      if ( !*a3
        || ((v61 = **(unsigned __int8 ***)(v60 + 56)) == 0LL ? (v62 = 0) : (v62 = **(_DWORD **)(v60 + 80)),
            v62 <= 0 ? (v70 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v60 + 48LL))(v60)) : (v70 = *v61),
            v70 == -1) )
      {
        *a3 = 0LL;
      }
      else
      {
        *((_BYTE *)a3 + 9) = v70;
      }
      *((_BYTE *)a3 + 8) = 1;
    }
    if ( *((_BYTE *)a3 + 9) == (*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v11 + 24LL))(v11) )
    {
      *v22++ = *localeconv()->decimal_point;
      std::istreambuf_iterator<char>::_Inc(a3);
    }
  }
  if ( (_DWORD)v23 )
  {
    v76 = v109;
  }
  else
  {
    if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
    {
      v71 = v109;
      do
      {
        if ( !*((_BYTE *)a3 + 8) )
        {
          v72 = *a3;
          if ( !*a3
            || ((v73 = **(unsigned __int8 ***)(v72 + 56)) == 0LL ? (v74 = 0) : (v74 = **(_DWORD **)(v72 + 80)),
                v74 <= 0 ? (v75 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v72 + 48LL))(v72)) : (v75 = *v73),
                v75 == -1) )
          {
            *a3 = 0LL;
          }
          else
          {
            *((_BYTE *)a3 + 9) = v75;
          }
          *((_BYTE *)a3 + 8) = 1;
        }
        if ( *((_BYTE *)a3 + 9) != v121[0] )
          break;
        --v71;
        v59 = 1;
        std::istreambuf_iterator<char>::_Inc(a3);
      }
      while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
      v109 = v71;
      LODWORD(v23) = v110;
    }
    v76 = v109;
    if ( v109 < 0 )
    {
      *v22++ = 48;
      v76 = ++v109;
    }
  }
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    do
    {
      if ( !*((_BYTE *)a3 + 8) )
      {
        v77 = *a3;
        if ( !*a3
          || ((v78 = **(unsigned __int8 ***)(v77 + 56)) == 0LL ? (v79 = 0) : (v79 = **(_DWORD **)(v77 + 80)),
              v79 <= 0 ? (v80 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v77 + 48LL))(v77)) : (v80 = *v78),
              v80 == -1) )
        {
          *a3 = 0LL;
        }
        else
        {
          *((_BYTE *)a3 + 9) = v80;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      v81 = v121;
      for ( k = v121[0]; k && k != *((_BYTE *)a3 + 9); k = *v81 )
        ++v81;
      v83 = v81 - v121;
      if ( v83 >= 0x16 )
        break;
      if ( (int)v23 < 36 )
      {
        *v22++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffldx'::`2'::_Src[v83];
        LODWORD(v23) = v23 + 1;
      }
      v59 = 1;
      std::istreambuf_iterator<char>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
    v76 = v109;
  }
  if ( v59 && !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    if ( !*((_BYTE *)a3 + 8) )
    {
      v84 = *a3;
      if ( !*a3
        || ((v85 = **(unsigned __int8 ***)(v84 + 56)) == 0LL ? (v86 = 0) : (v86 = **(_DWORD **)(v84 + 80)),
            v86 <= 0 ? (v87 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v84 + 48LL))(v84)) : (v87 = *v85),
            v87 == -1) )
      {
        *a3 = 0LL;
      }
      else
      {
        *((_BYTE *)a3 + 9) = v87;
      }
      *((_BYTE *)a3 + 8) = 1;
    }
    v88 = *((_BYTE *)a3 + 9);
    if ( v88 == v127 || v88 == v126 )
    {
      *v22++ = 112;
      std::istreambuf_iterator<char>::_Inc(a3);
      v59 = 0;
      v89 = 0;
      if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
      {
        if ( !*((_BYTE *)a3 + 8) )
        {
          v90 = *a3;
          if ( !*a3
            || ((v91 = **(unsigned __int8 ***)(v90 + 56)) == 0LL ? (v92 = 0) : (v92 = **(_DWORD **)(v90 + 80)),
                v92 <= 0 ? (v93 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v90 + 48LL))(v90)) : (v93 = *v91),
                v93 == -1) )
          {
            *a3 = 0LL;
          }
          else
          {
            *((_BYTE *)a3 + 9) = v93;
          }
          *((_BYTE *)a3 + 8) = 1;
        }
        v94 = *((_BYTE *)a3 + 9);
        if ( v94 == v123 )
        {
          *v22 = 43;
LABEL_254:
          ++v22;
          std::istreambuf_iterator<char>::_Inc(a3);
          goto LABEL_255;
        }
        if ( v94 == v122 )
        {
          *v22 = 45;
          goto LABEL_254;
        }
      }
LABEL_255:
      if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
      {
        do
        {
          if ( !*((_BYTE *)a3 + 8) )
          {
            v95 = *a3;
            if ( !*a3
              || ((v96 = **(unsigned __int8 ***)(v95 + 56)) == 0LL ? (v97 = 0) : (v97 = **(_DWORD **)(v95 + 80)),
                  v97 <= 0 ? (v98 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v95 + 48LL))(v95)) : (v98 = *v96),
                  v98 == -1) )
            {
              *a3 = 0LL;
            }
            else
            {
              *((_BYTE *)a3 + 9) = v98;
            }
            *((_BYTE *)a3 + 8) = 1;
          }
          if ( *((_BYTE *)a3 + 9) != v121[0] )
            break;
          v59 = 1;
          std::istreambuf_iterator<char>::_Inc(a3);
        }
        while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
        if ( v59 )
          *v22++ = 48;
      }
      if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
      {
        do
        {
          if ( !*((_BYTE *)a3 + 8) )
          {
            v99 = *a3;
            if ( !*a3
              || ((v100 = **(unsigned __int8 ***)(v99 + 56)) == 0LL ? (v101 = 0) : (v101 = **(_DWORD **)(v99 + 80)),
                  v101 <= 0
                ? (v102 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v99 + 48LL))(v99))
                : (v102 = *v100),
                  v102 == -1) )
            {
              *a3 = 0LL;
            }
            else
            {
              *((_BYTE *)a3 + 9) = v102;
            }
            *((_BYTE *)a3 + 8) = 1;
          }
          v103 = v121;
          for ( m = v121[0]; m && m != *((_BYTE *)a3 + 9); m = *v103 )
            ++v103;
          v105 = v103 - v121;
          if ( v105 >= 0x16 )
            break;
          if ( v89 < 8 )
          {
            *v22++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffldx'::`2'::_Src[v105];
            ++v89;
          }
          v59 = 1;
          std::istreambuf_iterator<char>::_Inc(a3);
        }
        while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
        v76 = v109;
      }
    }
  }
  if ( v108 || !v59 )
    v22 = v114;
  *v22 = 0;
  *v115 = v76;
  if ( v120 >= 0x10 )
    operator delete(v119[0]);
  return 0LL;
}
