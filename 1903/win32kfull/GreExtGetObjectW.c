/*
 * XREFs of GreExtGetObjectW @ 0x1C00338F8
 * Callers:
 *     GetScaledLogFontForDpi @ 0x1C0021E28 (GetScaledLogFontForDpi.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0022180 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C002F08C (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C0031130 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     NtGdiExtGetObjectW @ 0x1C00337F0 (NtGdiExtGetObjectW.c)
 *     EraseBitmap @ 0x1C0081880 (EraseBitmap.c)
 *     xxxCreateCaret @ 0x1C0086A94 (xxxCreateCaret.c)
 *     GetWindowNCMetrics @ 0x1C00911AC (GetWindowNCMetrics.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00BA614 (xxxSystemParametersInfoWorker.c)
 *     xxxSetNCFonts @ 0x1C00E4B34 (xxxSetNCFonts.c)
 *     UserSetAltScaleFont @ 0x1C00E5570 (UserSetAltScaleFont.c)
 *     CreateFontFromUserProfile @ 0x1C00E56D4 (CreateFontFromUserProfile.c)
 *     RecreateRedirectionBitmap @ 0x1C00ED748 (RecreateRedirectionBitmap.c)
 *     CreateCompatiblePublicDC @ 0x1C0157E00 (CreateCompatiblePublicDC.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C015C618 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     CreateScaledFont @ 0x1C01CCA70 (CreateScaledFont.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01D967C (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 *     ?GetCursorHeight@@YAHXZ @ 0x1C023F5E0 (-GetCursorHeight@@YAHXZ.c)
 *     xxxDrawState @ 0x1C0248F64 (xxxDrawState.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C024963C (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C024B514 (xxxRealDrawMenuItem.c)
 * Callees:
 *     GreGetDIBitsInternal @ 0x1C00340DC (GreGetDIBitsInternal.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00EE508 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0107FBC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?cjGetBrushOrPen@@YAJPEAXH0@Z @ 0x1C0147148 (-cjGetBrushOrPen@@YAJPEAXH0@Z.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     ?cjGetLogicalColorSpace@@YAHPEAXH0@Z @ 0x1C02AEE24 (-cjGetLogicalColorSpace@@YAHPEAXH0@Z.c)
 */

__int64 __fastcall GreExtGetObjectW(HBRUSH a1, __int64 a2, char *a3)
{
  HBRUSH v3; // r14
  unsigned __int64 v4; // r12
  int v5; // edi
  unsigned int v7; // ebp
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rbx
  _DWORD *v14; // rax
  _DWORD *v15; // rbx
  __int64 HDEV; // rax
  int v18; // r15d
  _QWORD *v19; // r13
  __int64 v20; // rdx
  int v21; // r15d
  int v22; // r15d
  int v24; // ecx
  int v25; // eax
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  int v28; // ecx
  __int64 v29; // rcx
  __int64 v30; // [rsp+90h] [rbp+8h] BYREF
  __int64 v31; // [rsp+A8h] [rbp+20h] BYREF

  v3 = a1;
  v4 = (int)a2;
  v5 = 0;
  v7 = 0;
  v8 = (((unsigned int)a1 >> 16) & 0x1F) - 5;
  if ( !v8 )
  {
    if ( !a3 )
      return 32;
    if ( (int)a2 < 32 )
      return v7;
    LOBYTE(a2) = 5;
    v14 = (_DWORD *)HmgShareLockCheck(v3, a2);
    v15 = v14;
    if ( !v14 )
      return v7;
    if ( (v14[28] & 0x4100000) == 0 )
      goto LABEL_17;
    *(_DWORD *)a3 = 0;
    *((_DWORD *)a3 + 1) = v14[14];
    *((_DWORD *)a3 + 2) = v14[15];
    if ( (v14[29] & 0x800) != 0 )
    {
      *((_DWORD *)a3 + 1) = v14[167];
      *((_DWORD *)a3 + 2) = v14[168];
    }
    v24 = *((unsigned __int16 *)&galBitsPerPixel + 2 * (unsigned int)v14[24]);
    *((_WORD *)a3 + 9) = v24;
    v25 = v14[14] * v24;
    *((_QWORD *)a3 + 3) = 0LL;
    *((_DWORD *)a3 + 3) = ((v25 + 15) >> 3) & 0xFFFFFFFE;
    *((_WORD *)a3 + 8) = 1;
    v7 = 32;
    if ( (*((_WORD *)v15 + 50) || !*((_QWORD *)v15 + 24)) && (v15[28] & 0x100000) == 0 )
      goto LABEL_17;
    v26 = *((_QWORD *)v15 + 9);
    if ( v26 < 0x10000 || v26 > (unsigned __int64)MmHighestUserAddress )
      v26 = 0LL;
    *((_QWORD *)a3 + 3) = v26;
    *((_DWORD *)a3 + 3) = ((v15[14] * v24 + 31) >> 3) & 0xFFFFFFFC;
    if ( (unsigned int)v4 < 0x68 )
    {
LABEL_17:
      DEC_SHARE_REF_CNT(v15);
      return v7;
    }
    *((_DWORD *)a3 + 8) = 40;
    *((_WORD *)a3 + 23) = 0;
    if ( (unsigned int)GreGetDIBitsInternal(0, (int)v3, 0, 0, 0LL, (struct tagBITMAPINFO *)(a3 + 32), 0, 0, 0x68u) )
    {
      v7 = 104;
      if ( (v15[28] & 0x100000) != 0 )
        *((_DWORD *)a3 + 13) = 0;
    }
    v27 = *((_QWORD *)v15 + 16);
    if ( v27 )
    {
      v28 = *(_DWORD *)(v27 + 24);
      if ( (v28 & 2) != 0 )
      {
        *((_DWORD *)a3 + 18) = **(_DWORD **)(v27 + 112);
        *((_DWORD *)a3 + 19) = *(_DWORD *)(*(_QWORD *)(v27 + 112) + 4LL);
        v5 = *(_DWORD *)(*(_QWORD *)(v27 + 112) + 8LL);
        goto LABEL_45;
      }
      if ( (v28 & 8) != 0 )
        *((_DWORD *)a3 + 12) = 0;
    }
    *((_QWORD *)a3 + 9) = 0LL;
LABEL_45:
    *((_DWORD *)a3 + 20) = v5;
    *((_QWORD *)a3 + 11) = *((_QWORD *)v15 + 23);
    *((_DWORD *)a3 + 24) = v15[53];
    goto LABEL_17;
  }
  v9 = v8 - 3;
  if ( !v9 )
  {
    v7 = 2;
    if ( a3 )
    {
      if ( (int)a2 >= 2 )
      {
        v31 = ghsemPalette;
        GreAcquireSemaphore(ghsemPalette);
        EPALOBJ::EPALOBJ((EPALOBJ *)&v30, (HPALETTE)v3);
        v29 = v30;
        if ( v30 )
        {
          *(_WORD *)a3 = *(_WORD *)(v30 + 28);
          DEC_SHARE_REF_CNT(v29);
        }
        else
        {
          v7 = 0;
        }
        SEMOBJ::vUnlock((SEMOBJ *)&v31);
      }
      else
      {
        return 0;
      }
    }
    return v7;
  }
  v10 = v9 - 1;
  if ( !v10 )
    return (unsigned int)cjGetLogicalColorSpace(v3, a2, a3);
  v11 = v10 - 1;
  if ( v11 )
  {
    if ( v11 != 6 )
      return v7;
    return (unsigned int)cjGetBrushOrPen(v3, a2, a3);
  }
  LOBYTE(a2) = 10;
  v12 = HmgShareLock(v3, a2);
  v13 = v12;
  if ( v12 )
  {
    if ( (*(_DWORD *)(v12 + 28) & 1) != 0 )
    {
      HDEV = UserGetHDEV();
      v18 = *(_DWORD *)(v13 + 24);
      v19 = (_QWORD *)HDEV;
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v13);
      if ( !v19 )
        return v7;
      v21 = v18 - 4;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          if ( v22 == 1 )
            v3 = (HBRUSH)v19[181];
        }
        else
        {
          v3 = (HBRUSH)v19[180];
        }
      }
      else
      {
        v3 = (HBRUSH)v19[179];
      }
      LOBYTE(v20) = 10;
      v13 = HmgShareLock(v3, v20);
    }
    if ( v13 )
    {
      if ( a3 )
      {
        v7 = v4;
        if ( v4 >= *(unsigned int *)(v13 + 272) )
          v7 = *(_DWORD *)(v13 + 272);
        memmove(a3, (const void *)(v13 + 276), v7);
      }
      else
      {
        v7 = *(_DWORD *)(v13 + 272);
      }
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v13);
    }
  }
  return v7;
}
