/*
 * XREFs of ?SkipAssignment@CRegParser@ATL@@IEAAJPEAG@Z @ 0x140051278
 * Callers:
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x140050B54 (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140017D00 (_alloca_probe.c)
 *     ?NextToken@CRegParser@ATL@@IEAAJPEAG@Z @ 0x14004F954 (-NextToken@CRegParser@ATL@@IEAAJPEAG@Z.c)
 *     ?SkipWhiteSpace@CRegParser@ATL@@IEAAXXZ @ 0x140051304 (-SkipWhiteSpace@CRegParser@ATL@@IEAAXXZ.c)
 */

__int64 __fastcall ATL::CRegParser::SkipAssignment(ATL::CRegParser *this, unsigned __int16 *a2)
{
  __int64 result; // rax
  unsigned __int16 v5[4096]; // [rsp+20h] [rbp-2018h] BYREF

  if ( *a2 != 61 )
    return 0LL;
  result = ATL::CRegParser::NextToken(this, a2);
  if ( (int)result >= 0 )
  {
    ATL::CRegParser::SkipWhiteSpace(this);
    result = ATL::CRegParser::NextToken(this, v5);
    if ( (int)result >= 0 )
    {
      result = ATL::CRegParser::NextToken(this, a2);
      if ( (int)result >= 0 )
        return 0LL;
    }
  }
  return result;
}
