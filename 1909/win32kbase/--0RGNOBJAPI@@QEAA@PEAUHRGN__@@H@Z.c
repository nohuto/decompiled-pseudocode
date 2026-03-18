/*
 * XREFs of ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0027430
 * Callers:
 *     GreSetRectRgn @ 0x1C000F200 (GreSetRectRgn.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0017DEC (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     bDeleteRegion @ 0x1C00185B0 (bDeleteRegion.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0020A50 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     NtGdiDeleteObjectApp @ 0x1C00225E0 (NtGdiDeleteObjectApp.c)
 *     GreCombineRgn @ 0x1C00247C0 (GreCombineRgn.c)
 *     SetRectRgnIndirect @ 0x1C0026FE0 (SetRectRgnIndirect.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C00275A0 (SetOrCreateRectRgnIndirectPublic.c)
 *     GreRectInRegion @ 0x1C002C4B0 (GreRectInRegion.c)
 *     GreGetRegionData @ 0x1C003A8F0 (GreGetRegionData.c)
 *     GreOffsetRgn @ 0x1C0049CF0 (GreOffsetRgn.c)
 *     GreCopyVisRgn @ 0x1C0077730 (GreCopyVisRgn.c)
 *     GreGetRgnBox @ 0x1C00792B0 (GreGetRgnBox.c)
 *     GrePtInRegion @ 0x1C007ED00 (GrePtInRegion.c)
 *     GreIsValidRegion @ 0x1C0099FF0 (GreIsValidRegion.c)
 *     NtGdiEqualRgn @ 0x1C009A990 (NtGdiEqualRgn.c)
 *     EngDeleteRgn @ 0x1C012EC40 (EngDeleteRgn.c)
 *     EngEqualRgn @ 0x1C012ECB0 (EngEqualRgn.c)
 *     InitializeGre @ 0x1C0266238 (InitializeGre.c)
 * Callees:
 *     HmgLock @ 0x1C001DB10 (HmgLock.c)
 *     HmgPentryFromPobj @ 0x1C001F0B0 (HmgPentryFromPobj.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C00272C0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXXZ @ 0x1C002B130 (-vSet@RGNOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     ?GrepIsPreviousModeKernel@@YAHXZ @ 0x1C00BAB84 (-GrepIsPreviousModeKernel@@YAHXZ.c)
 */

RGNOBJAPI *__fastcall RGNOBJAPI::RGNOBJAPI(RGNOBJAPI *this, HRGN a2, int a3)
{
  _DWORD *v6; // rax
  BOOL v7; // ebx
  __int64 v8; // rdi
  char v9; // cl
  struct _RECTL v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]

  v6 = (_DWORD *)HmgLock((unsigned int)a2, 4);
  *(_QWORD *)this = v6;
  *((_QWORD *)this + 1) = a2;
  *((_DWORD *)this + 4) = a3;
  if ( !v6 )
    return this;
  v7 = 1;
  if ( v6[9] )
  {
    v7 = GrepIsPreviousModeKernel() != 0;
    goto LABEL_17;
  }
  v8 = *(_QWORD *)(HmgPentryFromPobj(v6) + 16);
  if ( v8 )
  {
    v11 = *(struct _RECTL *)v8;
    v12 = *(_QWORD *)(v8 + 16);
    v9 = _mm_cvtsi128_si32((__m128i)v11);
    if ( (v9 & 0x11) == 0x10 )
    {
      if ( (v9 & 0x20) == 0 )
        goto LABEL_17;
      if ( v11.top == 1 )
      {
        RGNOBJ::vSet(this);
LABEL_15:
        *(_DWORD *)v8 &= ~0x20u;
        goto LABEL_17;
      }
      if ( v11.top != 2 )
        goto LABEL_17;
      if ( (((v11.right & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((HIDWORD(v12) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((v12 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((v11.bottom & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
      {
        RGNOBJ::vSet(this, (struct _RECTL *)&v11.right);
        goto LABEL_15;
      }
    }
    v7 = 0;
  }
LABEL_17:
  if ( !v7 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = 0LL;
  }
  return this;
}
