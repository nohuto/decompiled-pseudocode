/*
 * XREFs of ?GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@AEAAIXZ @ 0x1C0049BF8
 * Callers:
 *     ?CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@1@@Z @ 0x1C0295810 (-CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@1@@.c)
 *     ?GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET@@I@Z @ 0x1C0295C48 (-GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET@@I@Z.c)
 *     ?LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ @ 0x1C02964BC (-LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ.c)
 * Callees:
 *     ?GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z @ 0x1C0049C4C (-GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z.c)
 */

__int64 __fastcall DISPLAYSTATECHECKER::GetBlackScreenDiagDataSize(DISPLAYSTATECHECKER *this)
{
  int v1; // ebx
  unsigned int i; // edi

  v1 = 0;
  for ( i = 0; i < *((_DWORD *)this + 1470); ++i )
  {
    DISPLAYSTATECHECKER::GetDisplayAdapterDiagData(this, i);
    v1 += 1592;
  }
  return (unsigned int)(v1 + 72);
}
