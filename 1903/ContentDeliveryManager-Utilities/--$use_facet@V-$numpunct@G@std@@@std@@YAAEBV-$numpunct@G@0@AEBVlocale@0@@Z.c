/*
 * XREFs of ??$use_facet@V?$numpunct@G@std@@@std@@YAAEBV?$numpunct@G@0@AEBVlocale@0@@Z @ 0x18003688C
 * Callers:
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x180031AE0 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_180031AE0.c)
 *     ?_Getffld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x180032664 (-_Getffld@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 *     ?_Getifld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1HAEBVlocale@2@@Z @ 0x180032DC0 (-_Getifld@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 *     ?_Getffldx@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x18003395C (-_Getffldx@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$i.c)
 *     ?_Fput@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GPEBD_K333@Z @ 0x1800BA0E0 (-_Fput@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBA-AV-$ostreambuf_.c)
 *     ?_Iput@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GPEAD_K@Z @ 0x1800BD7F8 (-_Iput@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBA-AV-$ostreambuf_.c)
 *     ?_Makeushloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x1800BE018 (-_Makeushloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 *     ?do_put@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@G_N@Z @ 0x1800C2EF0 (-do_put@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_1800C2EF0.c)
 * Callees:
 *     ?_Getcat@?$numpunct@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x180037004 (-_Getcat@-$numpunct@G@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x1800AE8C4 (--0_Lockit@std@@QEAA@H@Z.c)
 *     ??1_Lockit@std@@QEAA@XZ @ 0x1800AE954 (--1_Lockit@std@@QEAA@XZ.c)
 *     ?_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z @ 0x1800AEA80 (-_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z.c)
 *     ?_Getgloballocale@locale@std@@CAPEAV_Locimp@12@XZ @ 0x1800AEAC0 (-_Getgloballocale@locale@std@@CAPEAV_Locimp@12@XZ.c)
 *     _CxxThrowException_0 @ 0x1800CB04C (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
struct std::_Facet_base *__fastcall std::use_facet<std::numpunct<unsigned short>>(__int64 *a1)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // rdi
  __int64 v4; // rcx
  struct std::_Facet_base *v5; // rbx
  struct std::locale::_Locimp *v6; // rax
  _BYTE pExceptionObject[48]; // [rsp+28h] [rbp-30h] BYREF
  char v9; // [rsp+60h] [rbp+8h] BYREF
  char v10; // [rsp+68h] [rbp+10h] BYREF
  struct std::_Facet_base *v11; // [rsp+70h] [rbp+18h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)&v10, 0);
  v2 = std::_Facetptr<std::numpunct<unsigned short>>::_Psave;
  v11 = (struct std::_Facet_base *)std::_Facetptr<std::numpunct<unsigned short>>::_Psave;
  v3 = std::numpunct<unsigned short>::id;
  if ( !std::numpunct<unsigned short>::id )
  {
    std::_Lockit::_Lockit((std::_Lockit *)&v9, 0);
    if ( !std::numpunct<unsigned short>::id )
      std::numpunct<unsigned short>::id = ++std::locale::id::_Id_cnt;
    std::_Lockit::~_Lockit((std::_Lockit *)&v9);
    v3 = std::numpunct<unsigned short>::id;
  }
  v4 = *a1;
  if ( v3 >= *(_QWORD *)(*a1 + 24) )
    v5 = 0LL;
  else
    v5 = *(struct std::_Facet_base **)(*(_QWORD *)(v4 + 16) + 8 * v3);
  if ( !v5 )
  {
    if ( *(_BYTE *)(v4 + 36) )
    {
      v6 = std::locale::_Getgloballocale();
      if ( v3 >= *((_QWORD *)v6 + 3) )
        v5 = 0LL;
      else
        v5 = *(struct std::_Facet_base **)(*((_QWORD *)v6 + 2) + 8 * v3);
    }
    if ( !v5 )
    {
      if ( v2 )
      {
        v5 = (struct std::_Facet_base *)v2;
      }
      else
      {
        if ( std::numpunct<unsigned short>::_Getcat(&v11, a1) == -1 )
        {
          bad_cast::bad_cast((bad_cast *)pExceptionObject, "bad cast");
          throw (bad_cast *)pExceptionObject;
        }
        v5 = v11;
        std::_Facetptr<std::numpunct<unsigned short>>::_Psave = (__int64)v11;
        (*(void (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v11 + 8LL))(v11);
        std::_Facet_Register(v5);
      }
    }
  }
  std::_Lockit::~_Lockit((std::_Lockit *)&v10);
  return v5;
}
