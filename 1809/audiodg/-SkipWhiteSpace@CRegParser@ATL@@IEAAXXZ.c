/*
 * XREFs of ?SkipWhiteSpace@CRegParser@ATL@@IEAAXXZ @ 0x140053688
 * Callers:
 *     ?AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z @ 0x1400507F0 (-AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z.c)
 *     ?NextToken@CRegParser@ATL@@IEAAJPEAG@Z @ 0x140051CAC (-NextToken@CRegParser@ATL@@IEAAJPEAG@Z.c)
 *     ?RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z @ 0x140052B2C (-RegisterBuffer@CRegParser@ATL@@QEAAJPEAGH@Z.c)
 *     ?SkipAssignment@CRegParser@ATL@@IEAAJPEAG@Z @ 0x1400535FC (-SkipAssignment@CRegParser@ATL@@IEAAJPEAG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CRegParser::SkipWhiteSpace(const WCHAR **this)
{
  const WCHAR *v2; // rcx

  while ( 1 )
  {
    v2 = *this;
    if ( **this < 9u || *v2 > 0xAu && *v2 != 13 && *v2 != 32 )
      break;
    *this = CharNextW(v2);
  }
}
