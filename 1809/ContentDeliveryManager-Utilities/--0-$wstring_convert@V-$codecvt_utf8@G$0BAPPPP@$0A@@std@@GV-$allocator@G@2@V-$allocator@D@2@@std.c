/*
 * XREFs of ??0?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180048398
 * Callers:
 *     ?WStringToUtf8String@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBG@Z @ 0x180045100 (-WStringToUtf8String@StringUtils@CommonHelper@CreativeFramework@@YA-AV-$basic_string@DU-$char_tr.c)
 *     ?GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA?AV?$com_ptr_t@UIUserActivityPayload@UserActivities@Internal@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180045CA8 (-GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA-AV-$com_ptr_t@UIUserActivityPay.c)
 * Callees:
 *     ??0_Locinfo@std@@QEAA@PEBD@Z @ 0x180023E98 (--0_Locinfo@std@@QEAA@PEBD@Z.c)
 *     ??1_Locinfo@std@@QEAA@XZ @ 0x180023F34 (--1_Locinfo@std@@QEAA@XZ.c)
 *     ??4?$_Yarn@D@std@@QEAAAEAV01@PEBD@Z @ 0x180048F34 (--4-$_Yarn@D@std@@QEAAAEAV01@PEBD@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800A9DC8 (--2@YAPEAX_K@Z.c)
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x1800AA948 (--0_Lockit@std@@QEAA@H@Z.c)
 *     ??1_Lockit@std@@QEAA@XZ @ 0x1800AA9D8 (--1_Lockit@std@@QEAA@XZ.c)
 *     ?_Init@locale@std@@CAPEAV_Locimp@12@_N@Z @ 0x1800AAB50 (-_Init@locale@std@@CAPEAV_Locimp@12@_N@Z.c)
 *     ?_New_Locimp@_Locimp@locale@std@@CAPEAV123@AEBV123@@Z @ 0x1800AAD28 (-_New_Locimp@_Locimp@locale@std@@CAPEAV123@AEBV123@@Z.c)
 *     _Getcvt @ 0x1800AB6B0 (_Getcvt.c)
 *     ?_Locimp_Addfac@_Locimp@locale@std@@CAXPEAV123@PEAVfacet@23@_K@Z @ 0x1800AF1C4 (-_Locimp_Addfac@_Locimp@locale@std@@CAXPEAV123@PEAVfacet@23@_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall std::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>(
        __int64 a1)
{
  struct std::locale::facet *v2; // rax
  struct std::locale::facet *v3; // rsi
  _Cvtvec *v4; // rax
  struct std::locale::_Locimp *v5; // rbx
  unsigned __int64 v6; // r8
  struct std::locale::_Locimp *v7; // rcx
  void (__fastcall ***v8)(_QWORD, __int64); // rax
  __int64 v9; // rdx
  void (__fastcall ***v10)(_QWORD, __int64); // r8
  void (__fastcall ***v11)(_QWORD, __int64); // rax
  _Cvtvec v13; // [rsp+28h] [rbp-C0h] BYREF
  _BYTE v14[136]; // [rsp+60h] [rbp-88h] BYREF
  struct std::locale::facet *v15; // [rsp+F8h] [rbp+10h] BYREF

  *(_QWORD *)a1 = &std::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::`vftable';
  *(_QWORD *)(a1 + 16) = std::locale::_Init(1);
  *(_QWORD *)(a1 + 48) = 15LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_BYTE *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 80) = 7LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_WORD *)(a1 + 56) = 0;
  *(_WORD *)(a1 + 92) = 0;
  *(_BYTE *)(a1 + 94) = 0;
  v2 = (struct std::locale::facet *)operator new(0x40uLL);
  v3 = v2;
  v15 = v2;
  if ( v2 )
  {
    *((_DWORD *)v2 + 2) = 0;
    *(_QWORD *)v2 = &std::codecvt<unsigned short,char,int>::`vftable';
    std::_Locinfo::_Locinfo((std::_Locinfo *)v14, "C");
    v4 = Getcvt(&v13);
    *((_OWORD *)v3 + 1) = *(_OWORD *)&v4->_Page;
    *((_OWORD *)v3 + 2) = *(_OWORD *)&v4->_Isleadbyte[4];
    *((_OWORD *)v3 + 3) = *(_OWORD *)&v4->_Isleadbyte[20];
    std::_Locinfo::~_Locinfo((std::_Locinfo *)v14);
    *(_QWORD *)v3 = &std::codecvt_utf8<unsigned short,1114111,0>::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  *(_DWORD *)(a1 + 88) = `std::wstring_convert<std::codecvt_utf8<unsigned short,1114111,0>,unsigned short,std::allocator<unsigned short>,std::allocator<char>>::_Init'::`2'::_State0;
  *(_QWORD *)(a1 + 8) = v3;
  v5 = std::locale::_Locimp::_New_Locimp(*(const struct std::locale::_Locimp **)(a1 + 16));
  if ( v3 )
  {
    v6 = std::codecvt<unsigned short,char,int>::id;
    if ( !std::codecvt<unsigned short,char,int>::id )
    {
      std::_Lockit::_Lockit((std::_Lockit *)&v15, 0);
      if ( !std::codecvt<unsigned short,char,int>::id )
        std::codecvt<unsigned short,char,int>::id = ++std::locale::id::_Id_cnt;
      std::_Lockit::~_Lockit((std::_Lockit *)&v15);
      v6 = std::codecvt<unsigned short,char,int>::id;
    }
    std::locale::_Locimp::_Locimp_Addfac(v5, v3, v6);
    *((_DWORD *)v5 + 8) = 0;
    std::_Yarn<char>::operator=((char *)v5 + 40, "*");
  }
  v7 = *(struct std::locale::_Locimp **)(a1 + 16);
  if ( v7 != v5 )
  {
    v8 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(struct std::locale::_Locimp *))(*(_QWORD *)v7 + 16LL))(v7);
    v10 = v8;
    if ( v8 )
      (**v8)(v8, 1LL);
    *(_QWORD *)(a1 + 16) = v5;
    (*(void (__fastcall **)(struct std::locale::_Locimp *, __int64, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v5 + 8LL))(
      v5,
      v9,
      v10);
  }
  if ( v5 )
  {
    v11 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(struct std::locale::_Locimp *))(*(_QWORD *)v5 + 16LL))(v5);
    if ( v11 )
      (**v11)(v11, 1LL);
  }
  *(_QWORD *)(a1 + 96) = 0LL;
  return a1;
}
