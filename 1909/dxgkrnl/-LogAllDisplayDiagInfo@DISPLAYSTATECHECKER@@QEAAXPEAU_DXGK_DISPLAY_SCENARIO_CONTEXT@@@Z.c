/*
 * XREFs of ?LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C029670C
 * Callers:
 *     DxgkCheckDisplayState @ 0x1C0296EC0 (DxgkCheckDisplayState.c)
 * Callees:
 *     ?CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@1@@Z @ 0x1C0295C20 (-CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@1@@.c)
 *     ?LogDisplayBlackBoxData@DISPLAYSTATECHECKER@@AEAAXPEAI@Z @ 0x1C02967A0 (-LogDisplayBlackBoxData@DISPLAYSTATECHECKER@@AEAAXPEAI@Z.c)
 *     ?LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ @ 0x1C02968CC (-LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ.c)
 *     ?LogDisplayTelemetryDiagData@DISPLAYSTATECHECKER@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@IW4DxgkrnlLiveDumpFailureReason@1@@Z @ 0x1C0296980 (-LogDisplayTelemetryDiagData@DISPLAYSTATECHECKER@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@IW4Dx.c)
 */

void __fastcall DISPLAYSTATECHECKER::LogAllDisplayDiagInfo(
        DISPLAYSTATECHECKER *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  int v2; // eax
  unsigned int v3; // edi
  unsigned int v4; // esi
  __int64 v7; // rdx
  __int64 v8; // r9
  int v9; // ecx
  unsigned __int64 v10; // [rsp+20h] [rbp-38h]
  unsigned __int64 v11; // [rsp+28h] [rbp-30h]
  unsigned int v12; // [rsp+60h] [rbp+8h] BYREF
  int v13; // [rsp+70h] [rbp+18h] BYREF

  v2 = *((_DWORD *)this + 453);
  v3 = 0;
  v12 = 0;
  v4 = 512;
  v13 = 512;
  if ( (_BYTE)v2 == 8 )
  {
    if ( (v2 & 0x100) != 0 )
    {
      DISPLAYSTATECHECKER::LogDisplayBlackBoxData(this, &v12);
      v3 = v12;
    }
  }
  else
  {
    DISPLAYSTATECHECKER::LogDisplayBlackScreenDiagPacket(this);
    v9 = *((_DWORD *)this + 453);
    if ( (v9 & 0x100) != 0 )
    {
      DISPLAYSTATECHECKER::CreateBlackScreenLiveDump(
        this,
        v7,
        (unsigned __int8)v9,
        v8,
        v10,
        v11,
        (enum DISPLAYSTATECHECKER::DxgkrnlLiveDumpFailureReason *)&v13);
      v4 = v13;
    }
  }
  DISPLAYSTATECHECKER::LogDisplayTelemetryDiagData(this, a2, v3, v4);
}
