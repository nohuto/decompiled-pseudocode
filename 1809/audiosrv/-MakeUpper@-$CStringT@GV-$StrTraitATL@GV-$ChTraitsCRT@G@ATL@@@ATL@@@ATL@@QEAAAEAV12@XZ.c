/*
 * XREFs of ?MakeUpper@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV12@XZ @ 0x180020360
 * Callers:
 *     ?GetNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEBAPEAVCNode@12@AEBVCAudioSessionInstanceId@@AEAI1AEAPEAV312@@Z @ 0x18001E300 (-GetNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@.c)
 * Callees:
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180013618 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18002B690 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 */

__int64 *__fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::MakeUpper(
        __int64 *a1)
{
  __int64 v2; // rcx
  unsigned int v3; // edi

  v2 = *a1;
  v3 = *(_DWORD *)(v2 - 16);
  if ( (((*(_DWORD *)(v2 - 12) - v3) | (1 - *(_DWORD *)(v2 - 8))) & 0x80000000) != 0 )
  {
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, v3);
    v2 = *a1;
  }
  _o__wcsupr_s(v2, (int)(v3 + 1));
  ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, v3);
  return a1;
}
