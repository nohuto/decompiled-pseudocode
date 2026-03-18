/*
 * XREFs of ?GetIntersectingMonitorTargets@CDesktopRenderTarget@@QEAAJAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@PEAV?$DynArray@PEAVCHwndRenderTarget@@$0A@@@@Z @ 0x18015A13C
 * Callers:
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18015FCF0 (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180068F08 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetDisplayRect@CHwndRenderTarget@@QEAAAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@XZ @ 0x1800D90C8 (-GetDisplayRect@CHwndRenderTarget@@QEAAAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfa.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopRenderTarget::GetIntersectingMonitorTargets(__int64 a1, _DWORD *a2, __int64 a3)
{
  int v3; // ebx
  __int64 v4; // rsi
  unsigned int v8; // ebp
  _DWORD *v9; // rdx
  _DWORD *v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // eax
  int v13; // eax
  CHwndRenderTarget *v15; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  v4 = 0LL;
  if ( *(_DWORD *)(a1 + 200) )
  {
    v8 = (unsigned int)v15;
    do
    {
      v15 = *(CHwndRenderTarget **)(*(_QWORD *)(a1 + 176) + 8 * v4);
      CHwndRenderTarget::GetDisplayRect(v15);
      if ( !TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(a2)
        && !TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(v9)
        && a2[2] > *v10
        && v10[2] > *a2
        && a2[3] > v10[1]
        && v10[3] > a2[1] )
      {
        v11 = *(unsigned int *)(a3 + 24);
        v12 = v11 + 1;
        if ( (int)v11 + 1 >= (unsigned int)v11 )
          v8 = v11 + 1;
        v3 = v12 < (unsigned int)v11 ? 0x80070216 : 0;
        if ( v12 < (unsigned int)v11 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v3, 0xB5u);
        }
        else if ( v8 > *(_DWORD *)(a3 + 20) )
        {
          v13 = DynArrayImpl<0>::AddMultipleAndSet(a3, 8, 1, &v15);
          v3 = v13;
          if ( v13 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v13, 0xC0u);
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)a3 + 8 * v11) = v15;
          *(_DWORD *)(a3 + 24) = v8;
        }
        if ( v3 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v3, 0xE8u);
          return (unsigned int)v3;
        }
        (*(void (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v15 + 8LL))(v15);
      }
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < *(_DWORD *)(a1 + 200) );
  }
  return (unsigned int)v3;
}
