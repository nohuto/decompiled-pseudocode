/*
 * XREFs of ??4?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBD@Z @ 0x1800BE59C
 * Callers:
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBDPEAUIAtlStringMgr@1@@Z @ 0x1800BE320 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBDPEAUIAtlStringMgr@1@@Z.c)
 * Callees:
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180013618 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x1800202E8 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18002B690 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 */

__int64 *__fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::operator=(
        __int64 *a1)
{
  signed int cchWideChar; // edi
  WCHAR *lpWideCharStr; // rdx

  cchWideChar = MultiByteToWideChar(3u, 0, MultiByteStr, -1, 0LL, 0) - 1;
  if ( cchWideChar <= 0 )
  {
    ATL::CSimpleStringT<unsigned short,0>::Empty(a1);
  }
  else
  {
    lpWideCharStr = (WCHAR *)*a1;
    if ( ((*(_DWORD *)(*a1 - 12) - cchWideChar) | (1 - *(_DWORD *)(*a1 - 8))) < 0 )
    {
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, cchWideChar);
      lpWideCharStr = (WCHAR *)*a1;
    }
    MultiByteToWideChar(3u, 0, MultiByteStr, -1, lpWideCharStr, cchWideChar);
    ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, cchWideChar);
  }
  return a1;
}
