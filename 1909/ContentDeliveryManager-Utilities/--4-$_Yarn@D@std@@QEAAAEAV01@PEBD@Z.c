/*
 * XREFs of ??4?$_Yarn@D@std@@QEAAAEAV01@PEBD@Z @ 0x18004A30C
 * Callers:
 *     ??0?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180049720 (--0-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator@D@2@@std.c)
 *     ??0_Locimp@locale@std@@AEAA@AEBV012@@Z @ 0x1800AEB20 (--0_Locimp@locale@std@@AEAA@AEBV012@@Z.c)
 *     ?_Init@locale@std@@CAPEAV_Locimp@12@_N@Z @ 0x1800AEC60 (-_Init@locale@std@@CAPEAV_Locimp@12@_N@Z.c)
 *     ?_Locinfo_ctor@_Locinfo@std@@SAXPEAV12@PEBD@Z @ 0x1800AEDA4 (-_Locinfo_ctor@_Locinfo@std@@SAXPEAV12@PEBD@Z.c)
 *     ?_New_Locimp@_Locimp@locale@std@@CAPEAV123@_N@Z @ 0x1800AEE78 (-_New_Locimp@_Locimp@locale@std@@CAPEAV123@_N@Z.c)
 *     ?_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x1800B34D8 (-_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 *     ??$_Getvals@G@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@IEAAXGAEBV_Locinfo@1@@Z @ 0x1800B85BC (--$_Getvals@G@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@IEAAXGAEBV_L.c)
 *     ??$_Getvals@D@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@IEAAXDAEBV_Locinfo@1@@Z @ 0x1800C4450 (--$_Getvals@D@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@IEAAXDAEBV_L.c)
 * Callees:
 *     memcpy_0 @ 0x1800CB1E8 (memcpy_0.c)
 */

void **__fastcall std::_Yarn<char>::operator=(void **a1, _BYTE *a2)
{
  _BYTE *v4; // rcx
  _BYTE *i; // rbx
  __int64 v6; // rbx
  void *v7; // rax

  v4 = *a1;
  if ( v4 != a2 )
  {
    if ( v4 )
      free(v4);
    *a1 = 0LL;
    if ( a2 )
    {
      for ( i = a2; *i; ++i )
        ;
      v6 = i - a2;
      v7 = malloc(v6 + 1);
      *a1 = v7;
      if ( v7 )
        memcpy_0(v7, a2, v6 + 1);
    }
  }
  return a1;
}
