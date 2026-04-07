/*
 * XREFs of ?_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ @ 0x180086B6C
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180008EA0 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x18000A510 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 * Callees:
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180013998 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001EB90 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCResource@@KM@Z @ 0x1800AC3D4 (-AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCResource@@KM@Z.c)
 */

__int64 __fastcall CThumbnailVisual::_AddBorderInstructions(CThumbnailVisual *this)
{
  struct CResource **v1; // rsi
  int v3; // eax
  unsigned int v4; // ebx
  void *Theme; // rbp
  HRESULT ThemeColor; // eax
  HRESULT ThemeInt; // eax
  int v8; // eax
  unsigned int pColor; // [rsp+20h] [rbp-28h]
  int piVal; // [rsp+50h] [rbp+8h] BYREF
  COLORREF v12; // [rsp+58h] [rbp+10h] BYREF

  v1 = (struct CResource **)((char *)this + 424);
  if ( !*((_QWORD *)this + 53) )
  {
    v3 = CResource::Create(0x1Au, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)this + 53);
    v4 = v3;
    if ( v3 < 0 )
    {
      pColor = 1328;
LABEL_14:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, pColor);
      return v4;
    }
  }
  Theme = (void *)CDesktopManager::GetTheme(0);
  ThemeColor = GetThemeColor(Theme, 63, 0, 3801, &v12);
  v4 = ThemeColor;
  if ( ThemeColor >= 0 )
  {
    ThemeInt = GetThemeInt(Theme, 63, 0, 2403, (int *)this + 124);
    v4 = ThemeInt;
    if ( ThemeInt >= 0 )
    {
      v3 = GetThemeInt(Theme, 63, 0, 2402, &piVal);
      v4 = v3;
      if ( v3 < 0 )
      {
        pColor = 1336;
        goto LABEL_14;
      }
      v8 = CThumbnailAnimatedVisual::AddSolidBrushInstruction(this, *v1, v12, (double)piVal / 255.0);
      v4 = v8;
      if ( v8 >= 0 )
      {
        v3 = CThumbnailAnimatedVisual::AddSolidBrushInstruction(this, *((struct CResource **)this + 52), 0, 1.0);
        v4 = v3;
        if ( v3 < 0 )
        {
          pColor = 1338;
          goto LABEL_14;
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x539u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ThemeInt, 0x537u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ThemeColor, 0x536u);
  }
  return v4;
}
