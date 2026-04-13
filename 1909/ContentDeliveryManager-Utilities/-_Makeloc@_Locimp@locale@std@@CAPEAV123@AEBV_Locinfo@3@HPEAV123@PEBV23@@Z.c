/*
 * XREFs of ?_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x1800B34D8
 * Callers:
 *     ?_Locimp_ctor@_Locimp@locale@std@@CAXPEAV123@AEBV123@@Z @ 0x1800B33F4 (-_Locimp_ctor@_Locimp@locale@std@@CAXPEAV123@AEBV123@@Z.c)
 * Callees:
 *     ??4?$_Yarn@D@std@@QEAAAEAV01@PEBD@Z @ 0x18004A30C (--4-$_Yarn@D@std@@QEAAAEAV01@PEBD@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800ADED8 (--2@YAPEAX_K@Z.c)
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x1800AEA54 (--0_Lockit@std@@QEAA@H@Z.c)
 *     ??1_Lockit@std@@QEAA@XZ @ 0x1800AEAE4 (--1_Lockit@std@@QEAA@XZ.c)
 *     _Getctype @ 0x1800AF598 (_Getctype.c)
 *     ??$use_facet@V?$codecvt@DDH@std@@@std@@YAAEBV?$codecvt@DDH@0@AEBVlocale@0@@Z @ 0x1800AFDE8 (--$use_facet@V-$codecvt@DDH@std@@@std@@YAAEBV-$codecvt@DDH@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x1800AFF28 (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@@std@@YAAEBV?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@0@AEBVlocale@0@@Z @ 0x1800B0068 (--$use_facet@V-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@@std@@YAAEBV-.c)
 *     ??$use_facet@V?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@@std@@YAAEBV?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@0@AEBVlocale@0@@Z @ 0x1800B01A8 (--$use_facet@V-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@@std@@YAAEBV-.c)
 *     ??$use_facet@V?$numpunct@D@std@@@std@@YAAEBV?$numpunct@D@0@AEBVlocale@0@@Z @ 0x1800B02E8 (--$use_facet@V-$numpunct@D@std@@@std@@YAAEBV-$numpunct@D@0@AEBVlocale@0@@Z.c)
 *     ?_Init@?$numpunct@D@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x1800B2DE8 (-_Init@-$numpunct@D@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     ?_Locimp_Addfac@_Locimp@locale@std@@CAXPEAV123@PEAVfacet@23@_K@Z @ 0x1800B32F8 (-_Locimp_Addfac@_Locimp@locale@std@@CAXPEAV123@PEAVfacet@23@_K@Z.c)
 *     ?_Makeushloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x1800BE1A8 (-_Makeushloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 *     ?_Makewloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x1800BEE40 (-_Makewloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 *     ?_Makexloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x1800C6ECC (-_Makexloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 */

// Hidden C++ exception states: #wind=10
void **__fastcall std::locale::_Locimp::_Makeloc(
        const struct std::_Locinfo *a1,
        int a2,
        void **a3,
        const struct std::locale *a4)
{
  int v8; // r14d
  char *v9; // rax
  struct std::locale::facet *v10; // rbx
  unsigned __int64 v11; // r8
  struct std::locale::facet *v12; // rdx
  unsigned __int64 v13; // rbx
  struct std::_Facet_base *v14; // rax
  struct std::locale::facet *v15; // rax
  struct std::locale::facet *v16; // rbx
  unsigned __int64 v17; // r8
  struct std::locale::facet *v18; // rax
  struct std::locale::facet *v19; // rbx
  unsigned __int64 v20; // r8
  struct std::locale::facet *v21; // rax
  struct std::locale::facet *v22; // rbx
  unsigned __int64 v23; // r8
  struct std::locale::facet *v24; // rdx
  unsigned __int64 v25; // rbx
  struct std::_Facet_base *v26; // rax
  unsigned __int64 v27; // rbx
  struct std::_Facet_base *v28; // rax
  unsigned __int64 v29; // rbx
  struct std::_Facet_base *v30; // rax
  struct std::locale::facet *v31; // rax
  struct std::locale::facet *v32; // rbx
  unsigned __int64 v33; // r8
  struct std::locale::facet *v34; // rdx
  unsigned __int64 v35; // rbx
  struct std::_Facet_base *v36; // rax
  _BYTE *v37; // rdx
  _Ctypevec v39; // [rsp+28h] [rbp-28h] BYREF
  char v40; // [rsp+98h] [rbp+48h] BYREF

  v8 = a2 & 2;
  if ( (a2 & 2) != 0 )
  {
    if ( a4 )
    {
      v13 = std::ctype<char>::id;
      if ( !std::ctype<char>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v40, 0);
        if ( !std::ctype<char>::id )
          std::ctype<char>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v40);
        v13 = std::ctype<char>::id;
      }
      v14 = std::use_facet<std::ctype<char>>((__int64 *)a4);
      v11 = v13;
      v12 = v14;
    }
    else
    {
      v9 = (char *)operator new(0x30uLL);
      v10 = (struct std::locale::facet *)v9;
      if ( v9 )
      {
        *((_DWORD *)v9 + 2) = 0;
        *(_QWORD *)v9 = &std::ctype<char>::`vftable';
        *(_Ctypevec *)(v9 + 16) = *Getctype(&v39);
      }
      else
      {
        v10 = 0LL;
      }
      v11 = std::ctype<char>::id;
      if ( !std::ctype<char>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v40, 0);
        if ( !std::ctype<char>::id )
          std::ctype<char>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v40);
        v11 = std::ctype<char>::id;
      }
      v12 = v10;
    }
    std::locale::_Locimp::_Locimp_Addfac(a3, v12, v11);
  }
  if ( (a2 & 8) != 0 )
  {
    if ( a4 )
    {
      v25 = std::num_get<char,std::istreambuf_iterator<char>>::id;
      if ( !std::num_get<char,std::istreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v40, 0);
        if ( !std::num_get<char,std::istreambuf_iterator<char>>::id )
          std::num_get<char,std::istreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v40);
        v25 = std::num_get<char,std::istreambuf_iterator<char>>::id;
      }
      v26 = std::use_facet<std::num_get<char,std::istreambuf_iterator<char>>>((__int64 *)a4);
      std::locale::_Locimp::_Locimp_Addfac(a3, v26, v25);
      v27 = std::num_put<char,std::ostreambuf_iterator<char>>::id;
      if ( !std::num_put<char,std::ostreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v40, 0);
        if ( !std::num_put<char,std::ostreambuf_iterator<char>>::id )
          std::num_put<char,std::ostreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v40);
        v27 = std::num_put<char,std::ostreambuf_iterator<char>>::id;
      }
      v28 = std::use_facet<std::num_put<char,std::ostreambuf_iterator<char>>>((__int64 *)a4);
      std::locale::_Locimp::_Locimp_Addfac(a3, v28, v27);
      v29 = std::numpunct<char>::id;
      if ( !std::numpunct<char>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v40, 0);
        if ( !std::numpunct<char>::id )
          std::numpunct<char>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v40);
        v29 = std::numpunct<char>::id;
      }
      v30 = std::use_facet<std::numpunct<char>>((__int64 *)a4);
      v23 = v29;
      v24 = v30;
    }
    else
    {
      v15 = (struct std::locale::facet *)operator new(0x10uLL);
      v16 = v15;
      if ( v15 )
      {
        *((_DWORD *)v15 + 2) = 0;
        *(_QWORD *)v15 = &std::num_get<char,std::istreambuf_iterator<char>>::`vftable';
      }
      else
      {
        v16 = 0LL;
      }
      v17 = std::num_get<char,std::istreambuf_iterator<char>>::id;
      if ( !std::num_get<char,std::istreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v40, 0);
        if ( !std::num_get<char,std::istreambuf_iterator<char>>::id )
          std::num_get<char,std::istreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v40);
        v17 = std::num_get<char,std::istreambuf_iterator<char>>::id;
      }
      std::locale::_Locimp::_Locimp_Addfac(a3, v16, v17);
      v18 = (struct std::locale::facet *)operator new(0x10uLL);
      v19 = v18;
      if ( v18 )
      {
        *((_DWORD *)v18 + 2) = 0;
        *(_QWORD *)v18 = &std::num_put<char,std::ostreambuf_iterator<char>>::`vftable';
      }
      else
      {
        v19 = 0LL;
      }
      v20 = std::num_put<char,std::ostreambuf_iterator<char>>::id;
      if ( !std::num_put<char,std::ostreambuf_iterator<char>>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v40, 0);
        if ( !std::num_put<char,std::ostreambuf_iterator<char>>::id )
          std::num_put<char,std::ostreambuf_iterator<char>>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v40);
        v20 = std::num_put<char,std::ostreambuf_iterator<char>>::id;
      }
      std::locale::_Locimp::_Locimp_Addfac(a3, v19, v20);
      v21 = (struct std::locale::facet *)operator new(0x30uLL);
      v22 = v21;
      if ( v21 )
      {
        *((_DWORD *)v21 + 2) = 0;
        *(_QWORD *)v21 = &std::numpunct<char>::`vftable';
        std::numpunct<char>::_Init((__int64)v21, (__int64)a1, 0);
      }
      else
      {
        v22 = 0LL;
      }
      v23 = std::numpunct<char>::id;
      if ( !std::numpunct<char>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v40, 0);
        if ( !std::numpunct<char>::id )
          std::numpunct<char>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v40);
        v23 = std::numpunct<char>::id;
      }
      v24 = v22;
    }
    std::locale::_Locimp::_Locimp_Addfac(a3, v24, v23);
  }
  if ( v8 )
  {
    if ( a4 )
    {
      v35 = std::codecvt<char,char,int>::id;
      if ( !std::codecvt<char,char,int>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v40, 0);
        if ( !std::codecvt<char,char,int>::id )
          std::codecvt<char,char,int>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v40);
        v35 = std::codecvt<char,char,int>::id;
      }
      v36 = std::use_facet<std::codecvt<char,char,int>>((__int64 *)a4);
      v33 = v35;
      v34 = v36;
    }
    else
    {
      v31 = (struct std::locale::facet *)operator new(0x10uLL);
      v32 = v31;
      if ( v31 )
      {
        *((_DWORD *)v31 + 2) = 0;
        *(_QWORD *)v31 = &std::codecvt<char,char,int>::`vftable';
      }
      else
      {
        v32 = 0LL;
      }
      v33 = std::codecvt<char,char,int>::id;
      if ( !std::codecvt<char,char,int>::id )
      {
        std::_Lockit::_Lockit((std::_Lockit *)&v40, 0);
        if ( !std::codecvt<char,char,int>::id )
          std::codecvt<char,char,int>::id = ++std::locale::id::_Id_cnt;
        std::_Lockit::~_Lockit((std::_Lockit *)&v40);
        v33 = std::codecvt<char,char,int>::id;
      }
      v34 = v32;
    }
    std::locale::_Locimp::_Locimp_Addfac(a3, v34, v33);
  }
  std::locale::_Locimp::_Makexloc(a1, a2, (struct std::locale::_Locimp *)a3, a4);
  std::locale::_Locimp::_Makewloc(a1, a2, (struct std::locale::_Locimp *)a3, a4);
  std::locale::_Locimp::_Makeushloc(a1, a2, (struct std::locale::_Locimp *)a3, a4);
  *((_DWORD *)a3 + 8) |= a2;
  v37 = (_BYTE *)*((_QWORD *)a1 + 11);
  if ( !v37 )
    v37 = (char *)a1 + 96;
  std::_Yarn<char>::operator=(a3 + 5, v37);
  return a3;
}
