/*
 * XREFs of ?Present@CHwCompSwapChainTarget@@UEAAJ_N@Z @ 0x1802401F0
 * Callers:
 *     ?Present@CHwCompSwapChainTarget@@WNA@EAAJ_N@Z @ 0x1800ED7D0 (-Present@CHwCompSwapChainTarget@@WNA@EAAJ_N@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A@@@@Z @ 0x18008CE68 (--$AppendAllRectangles@V-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Rec.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?PresentSwapChain@CD3DDeviceLevel1@@QEAAJPEAUIDXGISwapChain1@@IIAEBUDXGI_PRESENT_PARAMETERS@@@Z @ 0x18015E084 (-PresentSwapChain@CD3DDeviceLevel1@@QEAAJPEAUIDXGISwapChain1@@IIAEBUDXGI_PRESENT_PARAMETERS@@@Z.c)
 *     ??0?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A@@@QEAA@XZ @ 0x1801C22F8 (--0-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A.c)
 *     ?RotateFrameInvalidRegions@CHwCompSwapChainTarget@@IEAAJXZ @ 0x180240404 (-RotateFrameInvalidRegions@CHwCompSwapChainTarget@@IEAAJXZ.c)
 */

__int64 __fastcall CHwCompSwapChainTarget::Present(CHwCompSwapChainTarget *this, char a2)
{
  unsigned int v2; // ebx
  signed int v4; // eax
  __int64 v5; // rcx
  signed int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // r8
  signed int v9; // eax
  __int64 v10; // rcx
  signed int v11; // eax
  __int64 v12; // rcx
  CD3DDeviceLevel1 *v14; // [rsp+30h] [rbp-49h] BYREF
  DXGI_PRESENT_PARAMETERS v15; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v16[3]; // [rsp+60h] [rbp-19h] BYREF
  UINT v17; // [rsp+78h] [rbp-1h]

  v2 = 0;
  if ( a2 || **((_DWORD **)this + 30) )
  {
    memset_0(&v15, 0, sizeof(v15));
    DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,4,0>::DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,4,0>((__int64)v16);
    if ( **((_DWORD **)this + 30) )
    {
      v17 = 0;
      if ( (int)CRegion::AppendAllRectangles<DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,4,0>>(
                  (FastRegion::Internal::CRgnData **)this + 30,
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
      MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_1802E4148, 1u, v4, 0x169u, 0LL);
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 26) + 48LL))((char *)this + 208);
      v2 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1802E4148, 1u, v6, 0x16Bu, 0LL);
      }
      else
      {
        v9 = CD3DDeviceLevel1::PresentSwapChain(
               v14,
               *((struct IDXGISwapChain1 **)this + 27),
               v8,
               *((_DWORD *)this + 115),
               &v15);
        v2 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_1802E4148, 1u, v9, 0x170u, 0LL);
        }
        else
        {
          v11 = CHwCompSwapChainTarget::RotateFrameInvalidRegions(this);
          v2 = v11;
          if ( v11 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v12, &dword_1802E4148, 1u, v11, 0x172u, 0LL);
        }
      }
    }
    DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v16);
  }
  return v2;
}
