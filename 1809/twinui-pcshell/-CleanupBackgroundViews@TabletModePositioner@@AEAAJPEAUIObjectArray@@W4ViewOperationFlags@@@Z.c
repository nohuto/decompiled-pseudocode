/*
 * XREFs of ?CleanupBackgroundViews@TabletModePositioner@@AEAAJPEAUIObjectArray@@W4ViewOperationFlags@@@Z @ 0x180344F50
 * Callers:
 *     ?InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ @ 0x180348244 (-InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ.c)
 *     ?InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ @ 0x1803483A4 (-InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ.c)
 *     ?SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z @ 0x18034F01C (-SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001C76C (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0?$ObjectArrayAdapterImpl@UISwitchItemElement@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18014439C (--0-$ObjectArrayAdapterImpl@UISwitchItemElement@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180145570 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ?CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x180345F50 (-CreateAndInitApplicationViewOperation@TabletModePositioner@@AEAAJPEAUIApplicationView@@PEAPEAUI.c)
 *     ?GetOperableViews@TabletModePositioner@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x1803472D8 (-GetOperableViews@TabletModePositioner@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z.c)
 */

__int64 __fastcall TabletModePositioner::CleanupBackgroundViews(__int64 a1, __int64 a2, char a3)
{
  HRESULT OperableViews; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 *v8; // rcx
  __int64 v9; // rdi
  struct IApplicationView *v10; // rdx
  TabletModePositioner *v11; // rcx
  int inited; // eax
  __int64 v13; // rdx
  void *v14; // rbx
  void *ppvOut; // [rsp+20h] [rbp-49h] BYREF
  struct IObjectArray *v17; // [rsp+28h] [rbp-41h] BYREF
  __int64 v18; // [rsp+30h] [rbp-39h] BYREF
  __int64 v19; // [rsp+38h] [rbp-31h] BYREF
  __int64 *v20; // [rsp+40h] [rbp-29h]
  __int64 v21; // [rsp+48h] [rbp-21h] BYREF
  __int64 v22; // [rsp+50h] [rbp-19h] BYREF
  int v23; // [rsp+58h] [rbp-11h]
  int v24; // [rsp+60h] [rbp-9h] BYREF
  __int64 v25; // [rsp+68h] [rbp-1h] BYREF
  __int64 *v26; // [rsp+70h] [rbp+7h]
  __int128 v27; // [rsp+78h] [rbp+Fh] BYREF
  int v28; // [rsp+88h] [rbp+1Fh]
  int v29; // [rsp+8Ch] [rbp+23h]
  __m128i si128; // [rsp+90h] [rbp+27h]
  int v31; // [rsp+A0h] [rbp+37h]
  int v32; // [rsp+A4h] [rbp+3Bh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v17 = 0LL;
  if ( a2 )
  {
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)&v17, a2);
LABEL_9:
    details::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>(
      (__int64)&v22,
      (__int64)v17);
    LODWORD(v18) = 0;
    v19 = 0LL;
    v20 = &v22;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v18);
    v8 = (__int64 *)&v24;
    v25 = 0LL;
    v24 = v23;
    v26 = &v22;
    while ( 1 )
    {
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(v8);
      if ( (_DWORD)v18 == v24 && v20 == v26 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
        v6 = 0;
        goto LABEL_23;
      }
      v9 = v19;
      v21 = v19;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v21);
      if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 248) + 184LL))(
              *(_QWORD *)(a1 + 248),
              v9) )
        break;
LABEL_21:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
      LODWORD(v18) = v18 + 1;
      v8 = &v18;
    }
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    inited = TabletModePositioner::CreateAndInitApplicationViewOperation(
               v11,
               v10,
               (struct IApplicationViewOperation **)&ppvOut);
    if ( inited >= 0 )
    {
      v14 = ppvOut;
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)ppvOut + 96LL))(ppvOut, 0LL);
      if ( (a3 & 1) != 0 )
      {
        v28 = 0;
        v31 = 0;
        v27 = 0LL;
        v29 = 1;
        si128 = _mm_load_si128((const __m128i *)&_xmm);
        v32 = 1;
        (*(void (__fastcall **)(void *, __int128 *))(*(_QWORD *)v14 + 128LL))(v14, &v27);
      }
      inited = (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)v9 + 320LL))(v9, v14);
      if ( inited >= 0 )
        goto LABEL_20;
      v13 = 1800LL;
    }
    else
    {
      v13 = 1787LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      v13,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)inited);
LABEL_20:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    goto LABEL_21;
  }
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  OperableViews = IUnknown_QueryService(
                    *(IUnknown **)(a1 + 16),
                    &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                    &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                    &ppvOut);
  v6 = OperableViews;
  if ( OperableViews >= 0 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
    OperableViews = TabletModePositioner::GetOperableViews(
                      (TabletModePositioner *)a1,
                      (struct IImmersiveMonitor *)ppvOut,
                      &v17);
    v6 = OperableViews;
    if ( OperableViews >= 0 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      goto LABEL_9;
    }
    v7 = 1776LL;
  }
  else
  {
    v7 = 1775LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)OperableViews);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
LABEL_23:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  return v6;
}
