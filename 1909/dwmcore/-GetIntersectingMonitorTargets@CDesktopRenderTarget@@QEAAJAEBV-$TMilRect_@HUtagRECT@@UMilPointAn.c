/*
 * XREFs of ?GetIntersectingMonitorTargets@CDesktopRenderTarget@@QEAAJAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@PEAV?$DynArray@PEAVCHwndRenderTarget@@$0A@@@@Z @ 0x1801A6AEC
 * Callers:
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJXZ @ 0x1801A46F0 (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?GetDisplayRect@CHwndRenderTarget@@QEAAAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@XZ @ 0x18002A970 (-GetDisplayRect@CHwndRenderTarget@@QEAAAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfa.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x18003A6C8 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopRenderTarget::GetIntersectingMonitorTargets(__int64 a1, _DWORD *a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rbp
  _DWORD *v8; // rdx
  _DWORD *v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rcx
  signed int v14; // eax
  CHwndRenderTarget *v16; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  v4 = 0LL;
  if ( *(_DWORD *)(a1 + 200) )
  {
    while ( 1 )
    {
      v16 = *(CHwndRenderTarget **)(*(_QWORD *)(a1 + 176) + 8 * v4);
      CHwndRenderTarget::GetDisplayRect(v16);
      if ( TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(a2)
        || TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(v8)
        || a2[2] <= *v9
        || v9[2] <= *a2
        || a2[3] <= v9[1]
        || v9[3] <= a2[1] )
      {
        goto LABEL_16;
      }
      v11 = *(_DWORD *)(a3 + 24);
      v12 = v11 + 1;
      if ( v11 + 1 < v11 )
        break;
      if ( v12 > *(_DWORD *)(a3 + 20) )
      {
        v14 = DynArrayImpl<0>::AddMultipleAndSet(a3, 8, 1, &v16);
        v3 = v14;
        if ( v14 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v14, 0xC3u, 0LL);
LABEL_14:
        if ( (v3 & 0x80000000) != 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v3, 0xF4u, 0LL);
          return v3;
        }
        goto LABEL_15;
      }
      v3 = 0;
      *(_QWORD *)(*(_QWORD *)a3 + 8LL * *(unsigned int *)(a3 + 24)) = v16;
      *(_DWORD *)(a3 + 24) = v12;
LABEL_15:
      (*(void (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v16 + 8LL))(v16);
LABEL_16:
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 200) )
        return v3;
    }
    v3 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, 0x80070216, 0xB8u, 0LL);
    goto LABEL_14;
  }
  return v3;
}
