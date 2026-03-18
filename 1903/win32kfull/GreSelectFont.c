/*
 * XREFs of GreSelectFont @ 0x1C008CDF0
 * Callers:
 *     xxxMNCompute @ 0x1C00218EC (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0022180 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0063810 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     DrawFrameControl @ 0x1C008CAFC (DrawFrameControl.c)
 *     NtGdiSelectFont @ 0x1C008CDD0 (NtGdiSelectFont.c)
 *     FinalUserInit @ 0x1C00E0598 (FinalUserInit.c)
 *     MNSetupAnimationDC @ 0x1C00E0A14 (MNSetupAnimationDC.c)
 *     xxxSetNCFonts @ 0x1C00E4B34 (xxxSetNCFonts.c)
 *     ValidateExternalLogFont @ 0x1C00E59CC (ValidateExternalLogFont.c)
 *     xxxMenuDraw @ 0x1C00F9420 (xxxMenuDraw.c)
 *     xxxDrawMenuItem @ 0x1C00F96F4 (xxxDrawMenuItem.c)
 *     _ServerFixupMenuDC @ 0x1C010C914 (_ServerFixupMenuDC.c)
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C012FA60 (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C01373E0 (xxxDrawMenuBarUnderlines.c)
 *     xxxDrawCaptionTemp @ 0x1C0157378 (xxxDrawCaptionTemp.c)
 *     CreateCompatiblePublicDC @ 0x1C0157E00 (CreateCompatiblePublicDC.c)
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1C01639E4 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 *     CreateScaledFont @ 0x1C01CCA70 (CreateScaledFont.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01F3A20 (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C02119D4 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C0218320 (SfnINLPKDRAWSWITCHWND.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C023F910 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C023FFEC (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     ?SelectFont@@YAXPEAU_SELECT_FONT@@@Z @ 0x1C0248E00 (-SelectFont@@YAXPEAU_SELECT_FONT@@@Z.c)
 *     xxxDrawState @ 0x1C0248F64 (xxxDrawState.c)
 *     xxxMNInvertItem @ 0x1C024A9E4 (xxxMNInvertItem.c)
 * Callees:
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0269A64 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreSelectFont(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rdx
  DC *v5; // r9
  struct _DC_ATTR *UserAttr; // rax
  __int64 *v7; // rax
  struct _DC_ATTR *v8; // rax
  __int64 v9; // rbx
  __int64 v11; // rax
  struct LFONT *v12; // rbx
  DC *v13; // [rsp+20h] [rbp-10h] BYREF
  int v14; // [rsp+28h] [rbp-8h]
  unsigned int v15; // [rsp+2Ch] [rbp-4h]
  int v16; // [rsp+50h] [rbp+20h] BYREF

  v2 = a2;
  v3 = 0LL;
  v14 = 0;
  LOBYTE(a2) = 1;
  v15 = 0;
  v13 = (DC *)HmgLockEx(a1, a2, 0LL);
  v5 = v13;
  if ( !v13 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
    goto LABEL_31;
  }
  if ( (*((_DWORD *)v13 + 11) & 2) == 0 )
  {
    UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v13);
    if ( UserAttr && !DC::SaveAttributes(v13, UserAttr) )
    {
      _InterlockedDecrement((volatile signed __int32 *)v13 + 3);
      return v3;
    }
    *((_DWORD *)v13 + 11) |= 2u;
    v5 = v13;
    v14 = 1;
  }
  if ( (*((_DWORD *)v5 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v5);
LABEL_31:
    v5 = v13;
  }
  if ( !v5 )
    return v3;
  v7 = (__int64 *)*((_QWORD *)v5 + 19);
  if ( v7 )
    v3 = *v7;
  if ( v2 != v3 )
  {
    LOBYTE(v4) = 10;
    v11 = HmgShareLockCheck(v2, v4);
    v12 = (struct LFONT *)v11;
    if ( v11 )
    {
      if ( (*(_BYTE *)(HmgPentryFromPobj(v11) + 15) & 2) == 0 )
      {
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct LFONT **)v13 + 19));
        *((_QWORD *)v13 + 19) = v12;
        *(_QWORD *)(*((_QWORD *)v13 + 122) + 296LL) = v2;
        *((_QWORD *)v13 + 216) = 0LL;
        *(_DWORD *)(*((_QWORD *)v13 + 122) + 152LL) |= 0x10u;
        *(_DWORD *)(*((_QWORD *)v13 + 122) + 152LL) &= ~0x20u;
LABEL_24:
        v5 = v13;
        goto LABEL_11;
      }
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v12);
    }
    v3 = 0LL;
    goto LABEL_24;
  }
LABEL_11:
  if ( v14 && (*((_DWORD *)v5 + 11) & 2) != 0 )
  {
    if ( !v15 )
    {
      v8 = XDCOBJ::GetUserAttr((XDCOBJ *)&v13);
      if ( v8 )
        DC::RestoreAttributes(v13, v8);
      v5 = v13;
    }
    *((_DWORD *)v5 + 11) &= ~2u;
    v14 = 0;
    v5 = v13;
  }
  v16 = 0;
  v9 = *(_QWORD *)v5;
  HmgDecrementExclusiveReferenceCountEx(v5, v15, &v16);
  if ( v16 )
    bDeleteDCInternalEx(v9, 0LL);
  return v3;
}
