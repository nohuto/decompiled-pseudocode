/*
 * XREFs of ?Present@CHwCompSwapChainTarget@@UEAAJ_N@Z @ 0x180200EB0
 * Callers:
 *     ?Present@CHwCompSwapChainTarget@@WBBA@EAAJ_N@Z @ 0x1800F0C90 (-Present@CHwCompSwapChainTarget@@WBBA@EAAJ_N@Z.c)
 * Callees:
 *     ??$AppendAllRectangles@V?$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@UtagRECT@@$03$0A@@@@Z @ 0x18002AEBC (--$AppendAllRectangles@V-$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAJPEAV-$DynArrayIA@UtagRECT.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A@@@QEAA@XZ @ 0x1801B5D8C (--0-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A.c)
 *     ?PresentSwapChain@CD3DDeviceLevel1@@QEAAJPEAUIDXGISwapChain1@@IIAEBUDXGI_PRESENT_PARAMETERS@@@Z @ 0x1801FD088 (-PresentSwapChain@CD3DDeviceLevel1@@QEAAJPEAUIDXGISwapChain1@@IIAEBUDXGI_PRESENT_PARAMETERS@@@Z.c)
 *     ?RotateFrameInvalidRegions@CHwCompSwapChainTarget@@IEAAJXZ @ 0x1802010E4 (-RotateFrameInvalidRegions@CHwCompSwapChainTarget@@IEAAJXZ.c)
 */

__int64 __fastcall CHwCompSwapChainTarget::Present(CHwCompSwapChainTarget *this, char a2)
{
  unsigned int v2; // ebx
  int v4; // eax
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  CD3DDeviceLevel1 *v14; // [rsp+30h] [rbp-49h] BYREF
  DXGI_PRESENT_PARAMETERS v15; // [rsp+38h] [rbp-41h] BYREF
  void *v16[3]; // [rsp+60h] [rbp-19h] BYREF
  UINT v17; // [rsp+78h] [rbp-1h]

  v2 = 0;
  if ( a2 || **((_DWORD **)this + 38) )
  {
    memset_0(&v15, 0, sizeof(v15));
    DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,4,0>::DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,4,0>((__int64)v16);
    if ( **((_DWORD **)this + 38) )
    {
      v17 = 0;
      if ( (int)CRegion::AppendAllRectangles<DynArrayIA<tagRECT,4,0>>(
                  (CHwCompSwapChainTarget *)((char *)this + 304),
                  (__int64)v16) >= 0 )
      {
        v15.DirtyRectsCount = v17;
        v15.pDirtyRects = (RECT *)v16[0];
      }
    }
    v4 = (*(__int64 (__fastcall **)(CHwCompSwapChainTarget *, CD3DDeviceLevel1 **))(*(_QWORD *)this + 248LL))(
           this,
           &v14);
    v2 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_1802BDA64, 1u, v4, 0x16Cu);
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 34) + 48LL))((char *)this + 272);
      v2 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1802BDA64, 1u, v6, 0x16Eu);
      }
      else
      {
        v9 = CD3DDeviceLevel1::PresentSwapChain(
               v14,
               *((struct IDXGISwapChain1 **)this + 35),
               v8,
               *((_DWORD *)this + 131),
               &v15);
        v2 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_1802BDA64, 1u, v9, 0x173u);
        }
        else
        {
          v11 = CHwCompSwapChainTarget::RotateFrameInvalidRegions(this);
          v2 = v11;
          if ( v11 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v12, &dword_1802BDA64, 1u, v11, 0x175u);
        }
      }
    }
    DynArrayImpl<1>::~DynArrayImpl<1>(v16);
  }
  return v2;
}
