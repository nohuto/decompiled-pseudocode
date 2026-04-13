/*
 * XREFs of ?_Getffld@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x1800B0DAC
 * Callers:
 *     ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHAEAM@Z @ 0x1800B3E80 (-do_get@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_1800B3E80.c)
 *     ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHAEAN@Z @ 0x1800B3F80 (-do_get@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_1800B3F80.c)
 *     ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHAEAO@Z @ 0x1800B4070 (-do_get@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_1800B4070.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180034550 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x1800AFD98 (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$numpunct@D@std@@@std@@YAAEBV?$numpunct@D@0@AEBVlocale@0@@Z @ 0x1800B0158 (--$use_facet@V-$numpunct@D@std@@@std@@YAAEBV-$numpunct@D@0@AEBVlocale@0@@Z.c)
 *     ?_Getffldx@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x1800B18C4 (-_Getffldx@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV-$i.c)
 *     ?_Inc@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x1800B2BE4 (-_Inc@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x1800B52D4 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800CADA1 (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::num_get<char,std::istreambuf_iterator<char>>::_Getffld(
        int a1,
        char *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r13
  __int64 v10; // rbx
  void (__fastcall ***v11)(_QWORD, __int64); // r8
  struct std::_Facet_base *v12; // r15
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  char *v14; // r14
  __int64 v15; // rbx
  struct std::_Facet_base *v16; // rsi
  void (__fastcall ***v17)(_QWORD, __int64); // rax
  __int64 v18; // rcx
  unsigned __int8 *v19; // r8
  int v20; // edx
  int v21; // eax
  char v22; // cl
  char v23; // si
  int v24; // ebx
  void **v25; // r12
  char v26; // r13
  unsigned __int64 v27; // r15
  __int64 v28; // rbx
  char v29; // al
  void **v30; // rsi
  int v31; // r12d
  __int64 v32; // rcx
  unsigned __int8 *v33; // r8
  int v34; // edx
  int v35; // eax
  char *v36; // rax
  char j; // cl
  unsigned __int64 v38; // rax
  void **v39; // rax
  void **v40; // rax
  void **v41; // rax
  __int64 v42; // rcx
  unsigned __int8 *v43; // r8
  int v44; // edx
  int v45; // eax
  void **v46; // rax
  void **v47; // rdx
  char v48; // cl
  void **v49; // rax
  void **v50; // rax
  __int64 v51; // rcx
  unsigned __int8 *v52; // r8
  int v53; // edx
  int v54; // r15d
  __int64 v55; // rcx
  unsigned __int8 *v56; // r8
  int v57; // edx
  int v58; // eax
  char *v59; // rax
  char i; // cl
  unsigned __int64 v61; // rax
  int v62; // eax
  int v63; // ebx
  __int64 v64; // rcx
  unsigned __int8 *v65; // r8
  int v66; // edx
  int v67; // eax
  unsigned int v68; // r15d
  __int64 v69; // rcx
  unsigned __int8 *v70; // r8
  int v71; // edx
  int v72; // eax
  char *v73; // rax
  char k; // cl
  unsigned __int64 v75; // rax
  __int64 v76; // rcx
  unsigned __int8 *v77; // r8
  int v78; // edx
  int v79; // eax
  char v80; // cl
  int v81; // ebx
  __int64 v82; // rcx
  unsigned __int8 *v83; // r8
  int v84; // edx
  int v85; // eax
  char v86; // cl
  __int64 v87; // rcx
  unsigned __int8 *v88; // r8
  int v89; // edx
  int v90; // eax
  __int64 v91; // rcx
  unsigned __int8 *v92; // r8
  int v93; // edx
  int v94; // eax
  char *v95; // rax
  char m; // cl
  unsigned __int64 v97; // rax
  char v98; // [rsp+38h] [rbp-79h]
  char v99; // [rsp+39h] [rbp-78h]
  int v100; // [rsp+3Ch] [rbp-75h]
  __int64 v101; // [rsp+40h] [rbp-71h] BYREF
  struct std::_Facet_base *v102; // [rsp+48h] [rbp-69h] BYREF
  __int64 v103; // [rsp+50h] [rbp-61h]
  void **v104; // [rsp+58h] [rbp-59h]
  char *v105; // [rsp+60h] [rbp-51h]
  __int64 v106; // [rsp+68h] [rbp-49h]
  void *v107[3]; // [rsp+70h] [rbp-41h] BYREF
  __int64 v108; // [rsp+88h] [rbp-29h]
  void *v109[3]; // [rsp+90h] [rbp-21h] BYREF
  unsigned __int64 v110; // [rsp+A8h] [rbp-9h]
  _BYTE v111[10]; // [rsp+B0h] [rbp-1h] BYREF
  char v112; // [rsp+BAh] [rbp+9h]
  char v113; // [rsp+BBh] [rbp+Ah]
  char v114; // [rsp+BCh] [rbp+Bh]
  char v115; // [rsp+BDh] [rbp+Ch]

  v106 = -2LL;
  v6 = a4;
  v103 = a4;
  v105 = a2;
  if ( (*(_DWORD *)(a5 + 24) & 0x3000) == 0x3000 )
    return std::num_get<char,std::istreambuf_iterator<char>>::_Getffldx(a1, (_DWORD)a2, (_DWORD)a3, a4, a5, a6);
  v10 = **(_QWORD **)(a5 + 64);
  v102 = (struct std::_Facet_base *)v10;
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v10 + 8LL))(v10, 12288LL, a6);
  v12 = std::use_facet<std::numpunct<char>>((__int64 *)&v102);
  v102 = v12;
  if ( v10 )
  {
    v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v11 = v13;
    if ( v13 )
      (**v13)(v13, 1LL);
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, void **, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v12 + 40LL))(
    v12,
    v109,
    v11);
  v14 = a2;
  v99 = 0;
  v15 = **(_QWORD **)(a5 + 64);
  v101 = v15;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v16 = std::use_facet<std::ctype<char>>(&v101);
  if ( v15 )
  {
    v17 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( v17 )
      (**v17)(v17, 1LL);
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, const char *, char *, _BYTE *))(*(_QWORD *)v16 + 56LL))(
    v16,
    "0123456789-+Ee",
    "",
    v111);
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    if ( !*((_BYTE *)a3 + 8) )
    {
      v18 = *a3;
      if ( !*a3
        || ((v19 = **(unsigned __int8 ***)(v18 + 56)) == 0LL ? (v20 = 0) : (v20 = **(_DWORD **)(v18 + 80)),
            v20 <= 0 ? (v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 48LL))(v18)) : (v21 = *v19),
            v21 == -1) )
      {
        *a3 = 0LL;
      }
      else
      {
        *((_BYTE *)a3 + 9) = v21;
      }
      *((_BYTE *)a3 + 8) = 1;
    }
    v22 = *((_BYTE *)a3 + 9);
    if ( v22 == v113 )
    {
      *a2 = 43;
    }
    else
    {
      if ( v22 != v112 )
        goto LABEL_27;
      *a2 = 45;
    }
    v14 = a2 + 1;
    std::istreambuf_iterator<char>::_Inc(a3);
  }
LABEL_27:
  v23 = 0;
  v98 = 0;
  v24 = 0;
  LODWORD(v101) = 0;
  v100 = 0;
  v25 = v109;
  if ( v110 >= 0x10 )
    v25 = (void **)v109[0];
  v104 = v25;
  if ( (unsigned __int8)(*(_BYTE *)v25 - 1) > 0x7Du )
  {
    if ( (unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
      goto LABEL_108;
    v54 = 0;
    do
    {
      if ( !*((_BYTE *)a3 + 8) )
      {
        v55 = *a3;
        if ( !*a3
          || ((v56 = **(unsigned __int8 ***)(v55 + 56)) == 0LL ? (v57 = 0) : (v57 = **(_DWORD **)(v55 + 80)),
              v57 <= 0 ? (v58 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 48LL))(v55)) : (v58 = *v56),
              v58 == -1) )
        {
          *a3 = 0LL;
        }
        else
        {
          *((_BYTE *)a3 + 9) = v58;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      v59 = v111;
      for ( i = v111[0]; i && i != *((_BYTE *)a3 + 9); i = *v59 )
        ++v59;
      v61 = v59 - v111;
      if ( v61 >= 0xA )
        break;
      if ( v24 < 36 )
      {
        if ( v61 || v24 )
        {
          *v14++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffld'::`2'::_Src[v61];
          ++v24;
        }
      }
      else
      {
        ++v54;
      }
      v23 = 1;
      std::istreambuf_iterator<char>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
    v100 = v54;
    LODWORD(v101) = v24;
  }
  else
  {
    if ( v109[2] )
      v26 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v12 + 32LL))(v12);
    else
      v26 = 0;
    v27 = 15LL;
    v108 = 15LL;
    LOWORD(v107[0]) = 0;
    v107[2] = (void *)1;
    v28 = 0LL;
    v29 = std::istreambuf_iterator<char>::equal(a3, v103);
    v30 = (void **)v107[0];
    if ( !v29 )
    {
      v31 = 0;
      while ( 1 )
      {
        if ( !*((_BYTE *)a3 + 8) )
        {
          v32 = *a3;
          if ( !*a3
            || ((v33 = **(unsigned __int8 ***)(v32 + 56)) == 0LL ? (v34 = 0) : (v34 = **(_DWORD **)(v32 + 80)),
                v34 <= 0 ? (v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 48LL))(v32)) : (v35 = *v33),
                v35 == -1) )
          {
            *a3 = 0LL;
          }
          else
          {
            *((_BYTE *)a3 + 9) = v35;
          }
          *((_BYTE *)a3 + 8) = 1;
        }
        v36 = v111;
        for ( j = v111[0]; j && j != *((_BYTE *)a3 + 9); j = *v36 )
          ++v36;
        v38 = v36 - v111;
        if ( v38 >= 0xA )
        {
          v41 = v107;
          if ( v27 >= 0x10 )
            v41 = v30;
          if ( !*((_BYTE *)v41 + v28) || !v26 )
            goto LABEL_83;
          if ( !*((_BYTE *)a3 + 8) )
          {
            v42 = *a3;
            if ( !*a3
              || ((v43 = **(unsigned __int8 ***)(v42 + 56)) == 0LL ? (v44 = 0) : (v44 = **(_DWORD **)(v42 + 80)),
                  v44 <= 0 ? (v45 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v42 + 48LL))(v42)) : (v45 = *v43),
                  v45 == -1) )
            {
              *a3 = 0LL;
            }
            else
            {
              *((_BYTE *)a3 + 9) = v45;
            }
            *((_BYTE *)a3 + 8) = 1;
          }
          if ( *((_BYTE *)a3 + 9) != v26 )
          {
LABEL_83:
            LODWORD(v101) = v31;
            v25 = v104;
            if ( !v28 )
              break;
            v46 = v107;
            if ( v27 >= 0x10 )
              v46 = v30;
            if ( *((char *)v46 + v28) > 0 )
            {
              ++v28;
              break;
            }
LABEL_101:
            v99 = 1;
            goto LABEL_102;
          }
          std::string::append((char *)v107, 1uLL, 0);
          ++v28;
        }
        else
        {
          v98 = 1;
          if ( v31 < 36 )
          {
            if ( v38 || v31 )
            {
              *v14++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffld'::`2'::_Src[v38];
              ++v31;
            }
          }
          else
          {
            ++v100;
          }
          v39 = v107;
          if ( v27 >= 0x10 )
            v39 = v30;
          if ( *((_BYTE *)v39 + v28) == 127 )
            goto LABEL_82;
          v40 = v107;
          if ( v27 >= 0x10 )
            v40 = v30;
          ++*((_BYTE *)v40 + v28);
        }
        v30 = (void **)v107[0];
        v27 = v108;
LABEL_82:
        std::istreambuf_iterator<char>::_Inc(a3);
        if ( (unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v103) )
          goto LABEL_83;
      }
    }
    while ( 1 )
    {
      v47 = v25;
      if ( !v28 )
        break;
      v48 = *(_BYTE *)v25;
      if ( *(_BYTE *)v25 == 127 )
        break;
      if ( --v28 )
      {
        v49 = v107;
        if ( v27 >= 0x10 )
          v49 = v30;
        if ( v48 != *((_BYTE *)v49 + v28) )
          goto LABEL_101;
      }
      if ( !v28 )
      {
        v50 = v107;
        if ( v27 >= 0x10 )
          v50 = v30;
        if ( v48 < *(char *)v50 )
          goto LABEL_101;
      }
      v25 = (void **)((char *)v25 + 1);
      if ( *(char *)v25 <= 0 )
        v25 = v47;
    }
LABEL_102:
    if ( v27 >= 0x10 )
      operator delete(v30);
    v6 = v103;
    v23 = v98;
    v24 = v101;
  }
  v12 = v102;
  if ( v23 && !v24 )
    *v14++ = 48;
LABEL_108:
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    if ( !*((_BYTE *)a3 + 8) )
    {
      v51 = *a3;
      if ( !*a3
        || ((v52 = **(unsigned __int8 ***)(v51 + 56)) == 0LL ? (v53 = 0) : (v53 = **(_DWORD **)(v51 + 80)),
            v53 <= 0 ? (v62 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v51 + 48LL))(v51)) : (v62 = *v52),
            v62 == -1) )
      {
        *a3 = 0LL;
      }
      else
      {
        *((_BYTE *)a3 + 9) = v62;
      }
      *((_BYTE *)a3 + 8) = 1;
    }
    if ( *((_BYTE *)a3 + 9) == (*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v12 + 24LL))(v12) )
    {
      *v14++ = *localeconv()->decimal_point;
      std::istreambuf_iterator<char>::_Inc(a3);
    }
  }
  if ( v24 )
  {
    v68 = v100;
  }
  else
  {
    if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
    {
      v63 = v100;
      do
      {
        if ( !*((_BYTE *)a3 + 8) )
        {
          v64 = *a3;
          if ( !*a3
            || ((v65 = **(unsigned __int8 ***)(v64 + 56)) == 0LL ? (v66 = 0) : (v66 = **(_DWORD **)(v64 + 80)),
                v66 <= 0 ? (v67 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v64 + 48LL))(v64)) : (v67 = *v65),
                v67 == -1) )
          {
            *a3 = 0LL;
          }
          else
          {
            *((_BYTE *)a3 + 9) = v67;
          }
          *((_BYTE *)a3 + 8) = 1;
        }
        if ( *((_BYTE *)a3 + 9) != v111[0] )
          break;
        --v63;
        v23 = 1;
        std::istreambuf_iterator<char>::_Inc(a3);
      }
      while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
      v100 = v63;
      v24 = v101;
    }
    v68 = v100;
    if ( v100 < 0 )
    {
      *v14++ = 48;
      v68 = ++v100;
    }
  }
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    do
    {
      if ( !*((_BYTE *)a3 + 8) )
      {
        v69 = *a3;
        if ( !*a3
          || ((v70 = **(unsigned __int8 ***)(v69 + 56)) == 0LL ? (v71 = 0) : (v71 = **(_DWORD **)(v69 + 80)),
              v71 <= 0 ? (v72 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v69 + 48LL))(v69)) : (v72 = *v70),
              v72 == -1) )
        {
          *a3 = 0LL;
        }
        else
        {
          *((_BYTE *)a3 + 9) = v72;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      v73 = v111;
      for ( k = v111[0]; k && k != *((_BYTE *)a3 + 9); k = *v73 )
        ++v73;
      v75 = v73 - v111;
      if ( v75 >= 0xA )
        break;
      if ( v24 < 36 )
      {
        *v14++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffld'::`2'::_Src[v75];
        ++v24;
      }
      v23 = 1;
      std::istreambuf_iterator<char>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
    v68 = v100;
  }
  if ( !v23 || (unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
    goto LABEL_265;
  if ( !*((_BYTE *)a3 + 8) )
  {
    v76 = *a3;
    if ( !*a3
      || ((v77 = **(unsigned __int8 ***)(v76 + 56)) == 0LL ? (v78 = 0) : (v78 = **(_DWORD **)(v76 + 80)),
          v78 <= 0 ? (v79 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v76 + 48LL))(v76)) : (v79 = *v77),
          v79 == -1) )
    {
      *a3 = 0LL;
    }
    else
    {
      *((_BYTE *)a3 + 9) = v79;
    }
    *((_BYTE *)a3 + 8) = 1;
  }
  v80 = *((_BYTE *)a3 + 9);
  if ( v80 != v115 && v80 != v114 )
    goto LABEL_265;
  *v14++ = 101;
  std::istreambuf_iterator<char>::_Inc(a3);
  v23 = 0;
  v81 = 0;
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    if ( !*((_BYTE *)a3 + 8) )
    {
      v82 = *a3;
      if ( !*a3
        || ((v83 = **(unsigned __int8 ***)(v82 + 56)) == 0LL ? (v84 = 0) : (v84 = **(_DWORD **)(v82 + 80)),
            v84 <= 0 ? (v85 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v82 + 48LL))(v82)) : (v85 = *v83),
            v85 == -1) )
      {
        *a3 = 0LL;
      }
      else
      {
        *((_BYTE *)a3 + 9) = v85;
      }
      *((_BYTE *)a3 + 8) = 1;
    }
    v86 = *((_BYTE *)a3 + 9);
    if ( v86 == v113 )
    {
      *v14 = 43;
LABEL_225:
      ++v14;
      std::istreambuf_iterator<char>::_Inc(a3);
      goto LABEL_226;
    }
    if ( v86 == v112 )
    {
      *v14 = 45;
      goto LABEL_225;
    }
  }
LABEL_226:
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    do
    {
      if ( !*((_BYTE *)a3 + 8) )
      {
        v87 = *a3;
        if ( !*a3
          || ((v88 = **(unsigned __int8 ***)(v87 + 56)) == 0LL ? (v89 = 0) : (v89 = **(_DWORD **)(v87 + 80)),
              v89 <= 0 ? (v90 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v87 + 48LL))(v87)) : (v90 = *v88),
              v90 == -1) )
        {
          *a3 = 0LL;
        }
        else
        {
          *((_BYTE *)a3 + 9) = v90;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      if ( *((_BYTE *)a3 + 9) != v111[0] )
        break;
      v23 = 1;
      std::istreambuf_iterator<char>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
    if ( v23 )
      *v14++ = 48;
  }
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) )
  {
    do
    {
      if ( !*((_BYTE *)a3 + 8) )
      {
        v91 = *a3;
        if ( !*a3
          || ((v92 = **(unsigned __int8 ***)(v91 + 56)) == 0LL ? (v93 = 0) : (v93 = **(_DWORD **)(v91 + 80)),
              v93 <= 0 ? (v94 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v91 + 48LL))(v91)) : (v94 = *v92),
              v94 == -1) )
        {
          *a3 = 0LL;
        }
        else
        {
          *((_BYTE *)a3 + 9) = v94;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      v95 = v111;
      for ( m = v111[0]; m && m != *((_BYTE *)a3 + 9); m = *v95 )
        ++v95;
      v97 = v95 - v111;
      if ( v97 >= 0xA )
        break;
      if ( v81 < 8 )
      {
        *v14++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffld'::`2'::_Src[v97];
        ++v81;
      }
      v23 = 1;
      std::istreambuf_iterator<char>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v6) );
    v68 = v100;
  }
LABEL_265:
  if ( v99 || !v23 )
    v14 = v105;
  *v14 = 0;
  if ( v110 >= 0x10 )
    operator delete(v109[0]);
  return v68;
}
