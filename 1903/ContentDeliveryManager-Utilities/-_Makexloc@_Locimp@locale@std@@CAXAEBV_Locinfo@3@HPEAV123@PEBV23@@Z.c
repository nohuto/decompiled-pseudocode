/*
 * XREFs of ?_Makexloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x1800C6D3C
 * Callers:
 *     ?_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x1800B3348 (-_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800ADD48 (--2@YAPEAX_K@Z.c)
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x1800AE8C4 (--0_Lockit@std@@QEAA@H@Z.c)
 *     ??1_Lockit@std@@QEAA@XZ @ 0x1800AE954 (--1_Lockit@std@@QEAA@XZ.c)
 *     ?_Locimp_Addfac@_Locimp@locale@std@@CAXPEAV123@PEAVfacet@23@_K@Z @ 0x1800B3168 (-_Locimp_Addfac@_Locimp@locale@std@@CAXPEAV123@PEAVfacet@23@_K@Z.c)
 *     ??$use_facet@V?$collate@D@std@@@std@@YAAEBV?$collate@D@0@AEBVlocale@0@@Z @ 0x1800C4420 (--$use_facet@V-$collate@D@std@@@std@@YAAEBV-$collate@D@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$messages@D@std@@@std@@YAAEBV?$messages@D@0@AEBVlocale@0@@Z @ 0x1800C4560 (--$use_facet@V-$messages@D@std@@@std@@YAAEBV-$messages@D@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@@std@@YAAEBV?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@0@AEBVlocale@0@@Z @ 0x1800C46A0 (--$use_facet@V-$money_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@@std@@YAAEB.c)
 *     ??$use_facet@V?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@@std@@YAAEBV?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@0@AEBVlocale@0@@Z @ 0x1800C47E0 (--$use_facet@V-$money_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@@std@@YAAEB.c)
 *     ??$use_facet@V?$moneypunct@D$00@std@@@std@@YAAEBV?$moneypunct@D$00@0@AEBVlocale@0@@Z @ 0x1800C4920 (--$use_facet@V-$moneypunct@D$00@std@@@std@@YAAEBV-$moneypunct@D$00@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$moneypunct@D$0A@@std@@@std@@YAAEBV?$moneypunct@D$0A@@0@AEBVlocale@0@@Z @ 0x1800C4A60 (--$use_facet@V-$moneypunct@D$0A@@std@@@std@@YAAEBV-$moneypunct@D$0A@@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@@std@@YAAEBV?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@0@AEBVlocale@0@@Z @ 0x1800C4BA0 (--$use_facet@V-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@@std@@YAAEBV.c)
 *     ??$use_facet@V?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@@std@@YAAEBV?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@0@AEBVlocale@0@@Z @ 0x1800C4CE0 (--$use_facet@V-$time_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@@std@@YAAEBV.c)
 *     ?_Getcat@?$collate@D@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x1800C4F90 (-_Getcat@-$collate@D@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 *     ?_Init@?$_Mpunct@D@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x1800C6B4C (-_Init@-$_Mpunct@D@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     ?_Init@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@IEAAXAEBV_Locinfo@2@@Z @ 0x1800C6CF8 (-_Init@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@IEAAXAEBV_Locinfo@2.c)
 *     _Getcoll @ 0x1800C9EE4 (_Getcoll.c)
 */

// Hidden C++ exception states: #wind=22
void __fastcall std::locale::_Locimp::_Makexloc(
        const struct std::_Locinfo *a1,
        int a2,
        void **a3,
        const struct std::locale *a4)
{
  char v6; // r14
  _Collvec *v8; // rax
  struct std::locale::facet *v9; // rbx
  unsigned __int64 v10; // r8
  struct std::locale::facet *v11; // rdx
  unsigned __int64 v12; // rbx
  struct std::_Facet_base *v13; // rax
  struct std::locale::facet *v14; // rax
  struct std::locale::facet *v15; // rbx
  unsigned __int64 v16; // r8
  struct std::locale::facet *v17; // rdx
  unsigned __int64 v18; // rbx
  struct std::_Facet_base *v19; // rax
  struct std::locale::facet *v20; // rax
  struct std::locale::facet *v21; // rbx
  unsigned __int64 v22; // r8
  struct std::locale::facet *v23; // rax
  struct std::locale::facet *v24; // rbx
  unsigned __int64 v25; // r8
  _DWORD *v26; // rbx
  unsigned __int64 v27; // r8
  struct std::locale::facet *v28; // rax
  struct std::locale::facet *v29; // rbx
  unsigned __int64 v30; // r8
  struct std::locale::facet *v31; // rdx
  unsigned __int64 v32; // rbx
  struct std::_Facet_base *v33; // rax
  unsigned __int64 v34; // rbx
  struct std::_Facet_base *v35; // rax
  unsigned __int64 v36; // rbx
  struct std::_Facet_base *v37; // rax
  unsigned __int64 v38; // rbx
  struct std::_Facet_base *v39; // rax
  struct std::locale::facet *v40; // rax
  struct std::locale::facet *v41; // rbx
  unsigned __int64 v42; // r8
  struct std::locale::facet *v43; // rax
  struct std::locale::facet *v44; // rbx
  unsigned __int64 v45; // r8
  struct std::locale::facet *v46; // rdx
  unsigned __int64 v47; // rbx
  struct std::_Facet_base *v48; // rax
  unsigned __int64 v49; // rbx
  struct std::_Facet_base *v50; // rax
  _Collvec v51; // [rsp+28h] [rbp-18h] BYREF
  char v52; // [rsp+78h] [rbp+38h] BYREF

  v6 = a2;
  if ( ((1 << std::collate<char>::_Getcat(0LL, 0LL) >> 1) & a2) != 0 )
  {
    if ( a4 )
    {
      v12 = std::collate<char>::id;
      if ( !std::collate<char>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v52, 0);
        if ( !std::collate<char>::id )
          std::collate<char>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v52);
        v12 = std::collate<char>::id;
      }
      v13 = std::use_facet<std::collate<char>>((__int64 *)a4);
      v10 = v12;
      v11 = v13;
    }
    else
    {
      v8 = (_Collvec *)operator new(0x20uLL);
      v9 = (struct std::locale::facet *)v8;
      *(_QWORD *)&v51._Page = v8;
      if ( v8 )
      {
        LODWORD(v8->_LocaleName) = 0;
        *(_QWORD *)&v8->_Page = &std::collate<char>::`vftable';
        v8[1] = *Getcoll(&v51);
      }
      else
      {
        v9 = 0LL;
      }
      v10 = std::collate<char>::id;
      if ( !std::collate<char>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v52, 0);
        if ( !std::collate<char>::id )
          std::collate<char>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v52);
        v10 = std::collate<char>::id;
      }
      v11 = v9;
    }
    std::locale::_Locimp::_Locimp_Addfac(a3, v11, v10);
  }
  if ( (v6 & 0x20) != 0 )
  {
    if ( a4 )
    {
      v18 = std::messages<char>::id;
      if ( !std::messages<char>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v52, 0);
        if ( !std::messages<char>::id )
          std::messages<char>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v52);
        v18 = std::messages<char>::id;
      }
      v19 = std::use_facet<std::messages<char>>((__int64 *)a4);
      v16 = v18;
      v17 = v19;
    }
    else
    {
      v14 = (struct std::locale::facet *)operator new(0x10uLL);
      v15 = v14;
      *(_QWORD *)&v51._Page = v14;
      if ( v14 )
      {
        *((_DWORD *)v14 + 2) = 0;
        *(_QWORD *)v14 = &std::messages<char>::`vftable';
      }
      else
      {
        v15 = 0LL;
      }
      v16 = std::messages<char>::id;
      if ( !std::messages<char>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v52, 0);
        if ( !std::messages<char>::id )
          std::messages<char>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v52);
        v16 = std::messages<char>::id;
      }
      v17 = v15;
    }
    std::locale::_Locimp::_Locimp_Addfac(a3, v17, v16);
  }
  if ( (v6 & 4) != 0 )
  {
    if ( a4 )
    {
      v32 = std::money_get<char,std::istreambuf_iterator<char>>::id;
      if ( !std::money_get<char,std::istreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v52, 0);
        if ( !std::money_get<char,std::istreambuf_iterator<char>>::id )
          std::money_get<char,std::istreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v52);
        v32 = std::money_get<char,std::istreambuf_iterator<char>>::id;
      }
      v33 = std::use_facet<std::money_get<char,std::istreambuf_iterator<char>>>((__int64 *)a4);
      std::locale::_Locimp::_Locimp_Addfac(a3, v33, v32);
      v34 = std::money_put<char,std::ostreambuf_iterator<char>>::id;
      if ( !std::money_put<char,std::ostreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v52, 0);
        if ( !std::money_put<char,std::ostreambuf_iterator<char>>::id )
          std::money_put<char,std::ostreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v52);
        v34 = std::money_put<char,std::ostreambuf_iterator<char>>::id;
      }
      v35 = std::use_facet<std::money_put<char,std::ostreambuf_iterator<char>>>((__int64 *)a4);
      std::locale::_Locimp::_Locimp_Addfac(a3, v35, v34);
      v36 = std::moneypunct<char,0>::id;
      if ( !std::moneypunct<char,0>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v52, 0);
        if ( !std::moneypunct<char,0>::id )
          std::moneypunct<char,0>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v52);
        v36 = std::moneypunct<char,0>::id;
      }
      v37 = std::use_facet<std::moneypunct<char,0>>((__int64 *)a4);
      std::locale::_Locimp::_Locimp_Addfac(a3, v37, v36);
      v38 = std::moneypunct<char,1>::id;
      if ( !std::moneypunct<char,1>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v52, 0);
        if ( !std::moneypunct<char,1>::id )
          std::moneypunct<char,1>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v52);
        v38 = std::moneypunct<char,1>::id;
      }
      v39 = std::use_facet<std::moneypunct<char,1>>((__int64 *)a4);
      v30 = v38;
      v31 = v39;
    }
    else
    {
      v20 = (struct std::locale::facet *)operator new(0x10uLL);
      v21 = v20;
      *(_QWORD *)&v51._Page = v20;
      if ( v20 )
      {
        *((_DWORD *)v20 + 2) = 0;
        *(_QWORD *)v20 = &std::money_get<char,std::istreambuf_iterator<char>>::`vftable';
      }
      else
      {
        v21 = 0LL;
      }
      v22 = std::money_get<char,std::istreambuf_iterator<char>>::id;
      if ( !std::money_get<char,std::istreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v52, 0);
        if ( !std::money_get<char,std::istreambuf_iterator<char>>::id )
          std::money_get<char,std::istreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v52);
        v22 = std::money_get<char,std::istreambuf_iterator<char>>::id;
      }
      std::locale::_Locimp::_Locimp_Addfac(a3, v21, v22);
      v23 = (struct std::locale::facet *)operator new(0x10uLL);
      v24 = v23;
      *(_QWORD *)&v51._Page = v23;
      if ( v23 )
      {
        *((_DWORD *)v23 + 2) = 0;
        *(_QWORD *)v23 = &std::money_put<char,std::ostreambuf_iterator<char>>::`vftable';
      }
      else
      {
        v24 = 0LL;
      }
      v25 = std::money_put<char,std::ostreambuf_iterator<char>>::id;
      if ( !std::money_put<char,std::ostreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v52, 0);
        if ( !std::money_put<char,std::ostreambuf_iterator<char>>::id )
          std::money_put<char,std::ostreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v52);
        v25 = std::money_put<char,std::ostreambuf_iterator<char>>::id;
      }
      std::locale::_Locimp::_Locimp_Addfac(a3, v24, v25);
      v26 = operator new(0x78uLL);
      *(_QWORD *)&v51._Page = v26;
      if ( v26 )
      {
        v26[2] = 0;
        *(_QWORD *)v26 = &std::moneypunct<char,1>::`vftable';
        *((_BYTE *)v26 + 68) = 0;
        std::_Mpunct<char>::_Init((__int64)v26, (__int64)a1, 0);
        *(_QWORD *)v26 = &std::moneypunct<char,1>::`vftable';
      }
      else
      {
        v26 = 0LL;
      }
      v27 = std::moneypunct<char,0>::id;
      if ( !std::moneypunct<char,0>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v52, 0);
        if ( !std::moneypunct<char,0>::id )
          std::moneypunct<char,0>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v52);
        v27 = std::moneypunct<char,0>::id;
      }
      std::locale::_Locimp::_Locimp_Addfac(a3, (struct std::locale::facet *)v26, v27);
      v28 = (struct std::locale::facet *)operator new(0x78uLL);
      v29 = v28;
      *(_QWORD *)&v51._Page = v28;
      if ( v28 )
      {
        *((_DWORD *)v28 + 2) = 0;
        *(_QWORD *)v28 = &std::moneypunct<char,1>::`vftable';
        *((_BYTE *)v28 + 68) = 1;
        std::_Mpunct<char>::_Init((__int64)v28, (__int64)a1, 0);
        *(_QWORD *)v29 = &std::moneypunct<char,1>::`vftable';
      }
      else
      {
        v29 = 0LL;
      }
      v30 = std::moneypunct<char,1>::id;
      if ( !std::moneypunct<char,1>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v52, 0);
        if ( !std::moneypunct<char,1>::id )
          std::moneypunct<char,1>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v52);
        v30 = std::moneypunct<char,1>::id;
      }
      v31 = v29;
    }
    std::locale::_Locimp::_Locimp_Addfac(a3, v31, v30);
  }
  if ( (v6 & 0x10) != 0 )
  {
    if ( a4 )
    {
      v47 = std::time_get<char,std::istreambuf_iterator<char>>::id;
      if ( !std::time_get<char,std::istreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v52, 0);
        if ( !std::time_get<char,std::istreambuf_iterator<char>>::id )
          std::time_get<char,std::istreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v52);
        v47 = std::time_get<char,std::istreambuf_iterator<char>>::id;
      }
      v48 = std::use_facet<std::time_get<char,std::istreambuf_iterator<char>>>((__int64 *)a4);
      std::locale::_Locimp::_Locimp_Addfac(a3, v48, v47);
      v49 = std::time_put<char,std::ostreambuf_iterator<char>>::id;
      if ( !std::time_put<char,std::ostreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v52, 0);
        if ( !std::time_put<char,std::ostreambuf_iterator<char>>::id )
          std::time_put<char,std::ostreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v52);
        v49 = std::time_put<char,std::ostreambuf_iterator<char>>::id;
      }
      v50 = std::use_facet<std::time_put<char,std::ostreambuf_iterator<char>>>((__int64 *)a4);
      v45 = v49;
      v46 = v50;
    }
    else
    {
      v40 = (struct std::locale::facet *)operator new(0x60uLL);
      v41 = v40;
      *(_QWORD *)&v51._Page = v40;
      if ( v40 )
      {
        *((_DWORD *)v40 + 2) = 0;
        *(_QWORD *)v40 = &std::time_get<char,std::istreambuf_iterator<char>>::`vftable';
        std::time_get<char,std::istreambuf_iterator<char>>::_Init((__int64)v40, (__int64)a1);
      }
      else
      {
        v41 = 0LL;
      }
      v42 = std::time_get<char,std::istreambuf_iterator<char>>::id;
      if ( !std::time_get<char,std::istreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v52, 0);
        if ( !std::time_get<char,std::istreambuf_iterator<char>>::id )
          std::time_get<char,std::istreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v52);
        v42 = std::time_get<char,std::istreambuf_iterator<char>>::id;
      }
      std::locale::_Locimp::_Locimp_Addfac(a3, v41, v42);
      v43 = (struct std::locale::facet *)operator new(0x18uLL);
      v44 = v43;
      *(_QWORD *)&v51._Page = v43;
      if ( v43 )
      {
        *((_DWORD *)v43 + 2) = 0;
        *(_QWORD *)v43 = &std::time_put<char,std::ostreambuf_iterator<char>>::`vftable';
        *((_QWORD *)v43 + 2) = 0LL;
        *((_QWORD *)v43 + 2) = _Gettnames();
        free(0LL);
      }
      else
      {
        v44 = 0LL;
      }
      v45 = std::time_put<char,std::ostreambuf_iterator<char>>::id;
      if ( !std::time_put<char,std::ostreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v52, 0);
        if ( !std::time_put<char,std::ostreambuf_iterator<char>>::id )
          std::time_put<char,std::ostreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v52);
        v45 = std::time_put<char,std::ostreambuf_iterator<char>>::id;
      }
      v46 = v44;
    }
    std::locale::_Locimp::_Locimp_Addfac(a3, v46, v45);
  }
}
