/*
 * XREFs of ?CopyChars@?$CSimpleStringT@G$0A@@ATL@@SAXPEAG_KPEBGH@Z @ 0x18000D318
 * Callers:
 *     ??4?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBG@Z @ 0x18000C27C (--4-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBG@Z.c)
 *     ?Fork@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18000C4C4 (-Fork@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z @ 0x18000D39C (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ?Left@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@H@Z @ 0x18002FCA0 (-Left@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@H@Z.c)
 * Callees:
 *     memset_0 @ 0x18003508E (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x18003514E (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x180035A93 (memcpy_0.c)
 */

void __fastcall ATL::CSimpleStringT<unsigned short,0>::CopyChars(void *a1, __int64 a2, const void *a3, int a4)
{
  size_t v4; // rdi
  unsigned __int64 v6; // rbx

  v4 = 2 * a2;
  v6 = 2LL * a4;
  if ( v6 )
  {
    if ( !a1 )
      goto LABEL_3;
    if ( a3 && v4 >= v6 )
    {
      memcpy_0(a1, a3, 2LL * a4);
      return;
    }
    memset_0(a1, 0, v4);
    if ( a3 )
    {
      if ( v4 >= v6 )
        return;
      *(_DWORD *)_o__errno(a1, a2) = 34;
    }
    else
    {
LABEL_3:
      *(_DWORD *)_o__errno(a1, a2) = 22;
    }
    invalid_parameter_noinfo();
  }
}
