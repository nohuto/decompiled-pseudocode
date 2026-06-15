/*
 * XREFs of ?SetMultiStringValue@CRegKey@ATL@@QEAAJPEBG0@Z @ 0x140051120
 * Callers:
 *     ?AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z @ 0x14004E390 (-AddValue@CRegParser@ATL@@IEAAJAEAVCRegKey@2@PEBGPEAG@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14002A454 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

LSTATUS __fastcall ATL::CRegKey::SetMultiStringValue(HKEY *this, const unsigned __int16 *a2, const BYTE *lpData)
{
  DWORD cbData; // r9d
  const BYTE *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx

  if ( !lpData )
    ATL::AtlThrowImpl(-2147467259);
  cbData = 0;
  v6 = lpData;
  do
  {
    v7 = -1LL;
    do
      ++v7;
    while ( *(_WORD *)&v6[2 * v7] );
    v8 = (unsigned int)(v7 + 1);
    v6 += 2 * v8;
    cbData += 2 * v8;
  }
  while ( (_DWORD)v8 != 1 );
  return RegSetValueExW(*this, a2, 0, 7u, lpData, cbData);
}
