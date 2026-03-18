/*
 * XREFs of ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0026F10
 * Callers:
 *     GreGetRgnBox @ 0x1C0015570 (GreGetRgnBox.c)
 *     GreOffsetRgn @ 0x1C0015600 (GreOffsetRgn.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C001649C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     bDeleteRegion @ 0x1C0016D00 (bDeleteRegion.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C001F930 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     NtGdiDeleteObjectApp @ 0x1C0022090 (NtGdiDeleteObjectApp.c)
 *     GreCombineRgn @ 0x1C00242A0 (GreCombineRgn.c)
 *     SetRectRgnIndirect @ 0x1C0026AC0 (SetRectRgnIndirect.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C0027080 (SetOrCreateRectRgnIndirectPublic.c)
 *     GreRectInRegion @ 0x1C002CB60 (GreRectInRegion.c)
 *     GreCopyVisRgn @ 0x1C003D6D0 (GreCopyVisRgn.c)
 *     GreGetRegionData @ 0x1C003E380 (GreGetRegionData.c)
 *     GreSetRectRgn @ 0x1C0053B00 (GreSetRectRgn.c)
 *     GrePtInRegion @ 0x1C0082620 (GrePtInRegion.c)
 *     GreIsValidRegion @ 0x1C009B3F0 (GreIsValidRegion.c)
 *     NtGdiEqualRgn @ 0x1C009C270 (NtGdiEqualRgn.c)
 *     EngDeleteRgn @ 0x1C01313F0 (EngDeleteRgn.c)
 *     EngEqualRgn @ 0x1C0131460 (EngEqualRgn.c)
 *     InitializeGre @ 0x1C0266080 (InitializeGre.c)
 * Callees:
 *     ?vSet@RGNOBJ@@QEAAXXZ @ 0x1C00181D0 (-vSet@RGNOBJ@@QEAAXXZ.c)
 *     HmgLock @ 0x1C001C7D0 (HmgLock.c)
 *     HmgPentryFromPobj @ 0x1C001CD20 (HmgPentryFromPobj.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0026DA0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     ?GrepIsPreviousModeKernel@@YAHXZ @ 0x1C00BDBF0 (-GrepIsPreviousModeKernel@@YAHXZ.c)
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
