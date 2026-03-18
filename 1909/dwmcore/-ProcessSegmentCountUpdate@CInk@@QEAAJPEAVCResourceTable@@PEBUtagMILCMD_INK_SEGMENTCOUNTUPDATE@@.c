/*
 * XREFs of ?ProcessSegmentCountUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INK_SEGMENTCOUNTUPDATE@@@Z @ 0x1802157C4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180026E1C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18006CB50 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x1802155E0 (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 */

__int64 __fastcall CInk::ProcessSegmentCountUpdate(
        CInk *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INK_SEGMENTCOUNTUPDATE *a3)
{
  int v3; // r12d
  struct ID2D1Ink *v4; // rsi
  struct ID2D1InkStyle *v5; // rdi
  unsigned int v6; // ebx
  int v7; // r12d
  unsigned int v9; // r13d
  unsigned int v10; // r15d
  signed int ID2D1InkAndInkStyle; // eax
  __int64 v12; // rcx
  signed int v13; // eax
  __int64 v14; // rcx
  signed int v15; // eax
  __int64 v16; // rcx
  struct ID2D1InkStyle *v18; // [rsp+70h] [rbp+40h] BYREF
  struct ID2D1Ink *v19; // [rsp+78h] [rbp+48h] BYREF
  const struct tagMILCMD_INK_SEGMENTCOUNTUPDATE *v20; // [rsp+80h] [rbp+50h]

  v20 = a3;
  v19 = a2;
  v3 = *((_DWORD *)a3 + 2);
  v4 = 0LL;
  v5 = 0LL;
  v19 = 0LL;
  v6 = 0;
  v18 = 0LL;
  v7 = v3 - *((_DWORD *)this + 40);
  if ( v7 >= 0 )
  {
    v15 = DynArrayImpl<0>::Grow((__int64)this + 136, 0x24u, v7, 0, 0LL);
    v6 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x9Cu, 0LL);
      goto LABEL_13;
    }
LABEL_11:
    *((_DWORD *)this + 40) = *((_DWORD *)v20 + 2);
    (*(void (__fastcall **)(CInk *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
    goto LABEL_13;
  }
  v9 = *((_DWORD *)this + 24);
  v10 = 0;
  if ( !v9 )
    goto LABEL_11;
  while ( 1 )
  {
    ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(*(CD2DInk **)((char *)v5 + *((_QWORD *)this + 9)), &v19, &v18);
    v6 = ID2D1InkAndInkStyle;
    if ( ID2D1InkAndInkStyle < 0 )
      break;
    v4 = v19;
    v13 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, _QWORD))(*(_QWORD *)v19 + 56LL))(v19, (unsigned int)-v7);
    v6 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x94u, 0LL);
      goto LABEL_9;
    }
    ReleaseInterface<IBitmapLock>((__int64 *)&v19);
    ReleaseInterface<IBitmapLock>((__int64 *)&v18);
    ++v10;
    v5 = (struct ID2D1InkStyle *)((char *)v5 + 8);
    if ( v10 >= v9 )
    {
      v4 = v19;
      v5 = v18;
      goto LABEL_11;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, ID2D1InkAndInkStyle, 0x92u, 0LL);
  v4 = v19;
LABEL_9:
  v5 = v18;
LABEL_13:
  if ( v4 )
    (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v5 )
    (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)v5 + 16LL))(v5);
  return v6;
}
