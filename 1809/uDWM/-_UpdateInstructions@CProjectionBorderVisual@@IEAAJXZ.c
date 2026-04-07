/*
 * XREFs of ?_UpdateInstructions@CProjectionBorderVisual@@IEAAJXZ @ 0x180084258
 * Callers:
 *     ?ValidateVisual@CProjectionBorderVisual@@UEAAJXZ @ 0x180083F70 (-ValidateVisual@CProjectionBorderVisual@@UEAAJXZ.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180020378 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?_AddBorderInstructions@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@@Z @ 0x180083FDC (-_AddBorderInstructions@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CProjectionBorderVisual::_UpdateInstructions(CProjectionBorderVisual *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // esi
  bool v5; // zf
  int v6; // eax
  int v7; // eax
  struct _D3DCOLORVALUE v9; // [rsp+30h] [rbp-48h] BYREF
  struct _D3DCOLORVALUE v10; // [rsp+40h] [rbp-38h] BYREF
  struct tagRECT rc; // [rsp+50h] [rbp-28h] BYREF

  rc = *(struct tagRECT *)((char *)this + 280);
  v2 = CRenderDataVisual::ClearInstructions(this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    if ( *((_BYTE *)this + 296) )
    {
      v4 = 2;
      v5 = *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 26) == 0;
      *(struct _D3DCOLORVALUE *)&v9.r = (struct _D3DCOLORVALUE)_xmm;
      *(struct _D3DCOLORVALUE *)&v10.r = (struct _D3DCOLORVALUE)xmmword_1800C47E0;
      if ( !v5 )
      {
        if ( !*((_DWORD *)this + 75) )
          v4 = 4;
        v9.a = FLOAT_1_0;
      }
      v6 = CProjectionBorderVisual::_AddBorderInstructions(this, &rc, v4, &v9);
      v3 = v6;
      if ( v6 >= 0 )
      {
        InflateRect(
          &rc,
          -(int)((double)v4 * *((double *)CDesktopManager::s_pDesktopManagerInstance + 60)),
          -(int)((double)v4 * *((double *)CDesktopManager::s_pDesktopManagerInstance + 60)));
        v7 = CProjectionBorderVisual::_AddBorderInstructions(this, &rc, 1, &v10);
        v3 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x82u);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x7Eu);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x6Bu);
  }
  return v3;
}
