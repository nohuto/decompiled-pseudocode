/*
 * XREFs of ?GetBounds@CInk@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180216AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DInk@@@Z @ 0x180216830 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2D.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x180216CD0 (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 */

__int64 __fastcall CInk::GetBounds(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4)
{
  struct ID2D1Ink *v4; // rdi
  struct ID2D1InkStyle *v5; // rsi
  signed int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  signed int ID2D1InkAndInkStyle; // eax
  __int64 v11; // rcx
  signed int v12; // eax
  __int64 v13; // rcx
  struct ID2D1Ink *v15; // [rsp+30h] [rbp-30h] BYREF
  struct ID2D1InkStyle *v16; // [rsp+38h] [rbp-28h] BYREF
  CD2DInk *v17; // [rsp+40h] [rbp-20h] BYREF
  __int128 v18; // [rsp+48h] [rbp-18h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v7 = CDeviceResourceTable<CD2DInk,CInk,ID2DContext>::FindOrCreateResourceNoRef(
         (struct IDeviceResourceNotify *)(a1 + 56),
         0LL,
         &v17);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x16u, 0LL);
  }
  else
  {
    ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(v17, &v15, &v16);
    v9 = ID2D1InkAndInkStyle;
    if ( ID2D1InkAndInkStyle < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, ID2D1InkAndInkStyle, 0x18u, 0LL);
      v4 = v15;
      v5 = v16;
    }
    else
    {
      v4 = v15;
      v5 = v16;
      v12 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, struct ID2D1InkStyle *, _QWORD, __int128 *))(*(_QWORD *)v15 + 104LL))(
              v15,
              v16,
              0LL,
              &v18);
      v9 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x1Au, 0LL);
      else
        *a4 = v18;
    }
  }
  if ( v4 )
    (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v5 )
    (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)v5 + 16LL))(v5);
  return v9;
}
