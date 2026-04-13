/*
 * XREFs of ?_Init@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@IEAAXAEBV_Locinfo@2@@Z @ 0x1800B9834
 * Callers:
 *     ?_Getcat@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x1800B7884 (-_Getcat@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@SA_KPEAPEBVfacet@.c)
 *     ?_Makeushloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x1800BA0A8 (-_Makeushloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 * Callees:
 *     ??$_Getvals@G@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@IEAAXGAEBV_Locinfo@1@@Z @ 0x1800B44B8 (--$_Getvals@G@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@IEAAXGAEBV_L.c)
 *     _Getdateorder @ 0x1800C6120 (_Getdateorder.c)
 */

__int64 __fastcall std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Init(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  try
  {
    std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getvals<unsigned short>(a1, 0LL, a2);
    result = Getdateorder(v3);
    *(_DWORD *)(a1 + 40) = result;
  }
  catch ( ... )
  {
    std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Tidy(a1);
    throw;
  }
  return result;
}
