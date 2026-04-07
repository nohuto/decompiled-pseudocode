/*
 * XREFs of ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJPEAUIDwmChannel@@K@Z @ 0x18002C880
 * Callers:
 *     ?CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z @ 0x18002C7A8 (-CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180006B6C (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180013D04 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x18002CA30 (-IsPPIEdition@@YA_NXZ.c)
 *     ?SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z @ 0x18002CA74 (-SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z.c)
 *     ?Create@CRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18002CB0C (-Create@CRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180071614 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AddPPIRectangleInstruction@CDesktopWindowReplacement@@AEAAJPEAUIDwmChannel@@KH@Z @ 0x180079CF0 (-_AddPPIRectangleInstruction@CDesktopWindowReplacement@@AEAAJPEAUIDwmChannel@@KH@Z.c)
 */

__int64 __fastcall CDesktopWindowReplacement::AddDrawSolidBackgroundInstructions(
        CDesktopWindowReplacement *this,
        struct IDwmChannel *a2,
        int a3)
{
  float SystemMetrics; // xmm6_4
  float v6; // xmm7_4
  int v7; // eax
  const char *v8; // r9
  int v9; // eax
  int v10; // eax
  unsigned int LastError; // edi
  CRectangleInstruction *v12; // rbx
  CRectangleInstruction *v13; // rcx
  unsigned int v14; // r8d
  int v15; // r9d
  __int64 v17; // rdx
  __int64 v18; // rdx
  CRectangleInstruction *v19; // [rsp+20h] [rbp-50h] BYREF
  __int128 v20; // [rsp+28h] [rbp-48h]
  struct _D3DCOLORVALUE v21; // [rsp+38h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v19 = 0LL;
  v21.a = FLOAT_1_0;
  v21.r = GammaLUT_sRGB_to_scRGB[(unsigned __int8)a3] / 255.0;
  v21.g = GammaLUT_sRGB_to_scRGB[(unsigned __int64)(unsigned __int16)a3 >> 8] / 255.0;
  v21.b = GammaLUT_sRGB_to_scRGB[BYTE2(a3)] / 255.0;
  SystemMetrics = (float)GetSystemMetrics(76);
  *(float *)&v20 = SystemMetrics;
  v6 = (float)GetSystemMetrics(77);
  *((float *)&v20 + 1) = v6;
  v7 = GetSystemMetrics(78);
  if ( !v7 )
  {
    v17 = 65LL;
LABEL_12:
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v17,
                  (unsigned int)"windows\\dwm\\udwm\\desktopmanager.cpp",
                  v8);
    goto LABEL_9;
  }
  *((float *)&v20 + 2) = (float)v7 + SystemMetrics;
  v9 = GetSystemMetrics(79);
  if ( !v9 )
  {
    v17 = 68LL;
    goto LABEL_12;
  }
  *((float *)&v20 + 3) = (float)v9 + v6;
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v19);
  v10 = CRectangleInstruction::Create(a2, &v19);
  LastError = v10;
  if ( v10 < 0 )
  {
    v18 = 71LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (unsigned int)"windows\\dwm\\udwm\\desktopmanager.cpp",
      (const char *)(unsigned int)v10,
      (int)v19);
    goto LABEL_9;
  }
  v12 = v19;
  v13 = v19;
  *(_OWORD *)((char *)v19 + 24) = v20;
  v10 = CRectangleInstruction::SetSolidFill(v13, &v21, 1.0);
  LastError = v10;
  if ( v10 < 0 )
  {
    v18 = 74LL;
    goto LABEL_16;
  }
  v10 = CRenderDataVisual::AddInstruction(this, v12);
  LastError = v10;
  if ( v10 < 0 )
  {
    v18 = 76LL;
    goto LABEL_16;
  }
  if ( IsPPIEdition() )
    CDesktopWindowReplacement::_AddPPIRectangleInstruction(this, a2, v14, v15);
  LastError = 0;
LABEL_9:
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v19);
  return LastError;
}
