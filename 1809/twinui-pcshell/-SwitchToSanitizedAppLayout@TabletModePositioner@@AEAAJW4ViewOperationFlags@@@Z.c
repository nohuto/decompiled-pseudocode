/*
 * XREFs of ?SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z @ 0x18034F01C
 * Callers:
 *     ?InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ @ 0x180348244 (-InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ.c)
 *     ?InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ @ 0x1803483A4 (-InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x180344260 (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?CleanupBackgroundViews@TabletModePositioner@@AEAAJPEAUIObjectArray@@W4ViewOperationFlags@@@Z @ 0x180344F50 (-CleanupBackgroundViews@TabletModePositioner@@AEAAJPEAUIObjectArray@@W4ViewOperationFlags@@@Z.c)
 *     ?GetForegroundOperableView@TabletModePositioner@@AEAAJPEAPEAUIApplicationView@@@Z @ 0x180347180 (-GetForegroundOperableView@TabletModePositioner@@AEAAJPEAPEAUIApplicationView@@@Z.c)
 *     ?GetOperableViews@TabletModePositioner@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x1803472D8 (-GetOperableViews@TabletModePositioner@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z.c)
 *     ?GetTopOperableView@TabletModePositioner@@AEAAJPEAUIObjectArray@@PEAPEAUIApplicationView@@@Z @ 0x180347634 (-GetTopOperableView@TabletModePositioner@@AEAAJPEAUIObjectArray@@PEAPEAUIApplicationView@@@Z.c)
 *     ?InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180347EE0 (-InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 */

__int64 __fastcall TabletModePositioner::SwitchToSanitizedAppLayout(IUnknown **a1, char a2)
{
  HRESULT v4; // eax
  unsigned int v5; // ebx
  HRESULT v6; // eax
  int OperableViews; // eax
  void *v8; // rbx
  int v9; // eax
  int inited; // eax
  __int64 v11; // rdx
  int v12; // eax
  __int64 v14; // [rsp+30h] [rbp-20h] BYREF
  struct IApplicationView *v15; // [rsp+38h] [rbp-18h] BYREF
  struct IApplicationView *v16; // [rsp+40h] [rbp-10h] BYREF
  void *v17; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  struct IObjectArray *v19; // [rsp+70h] [rbp+20h] BYREF
  struct IUnknown *v20; // [rsp+80h] [rbp+30h] BYREF
  void *ppvOut; // [rsp+88h] [rbp+38h] BYREF

  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v4 = IUnknown_QueryService(
         a1[2],
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &ppvOut);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v17 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
    v6 = IUnknown_QueryService(
           a1[2],
           &GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab,
           &GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab,
           &v17);
    v5 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6AC,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v6);
LABEL_22:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
      goto LABEL_23;
    }
    v19 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
    OperableViews = TabletModePositioner::GetOperableViews(
                      (TabletModePositioner *)a1,
                      (struct IImmersiveMonitor *)ppvOut,
                      &v19);
    v5 = OperableViews;
    if ( OperableViews < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6AF,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)OperableViews);
LABEL_21:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
      goto LABEL_22;
    }
    v16 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
    TabletModePositioner::GetTopOperableView((TabletModePositioner *)a1, v19, &v16);
    v15 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
    TabletModePositioner::GetForegroundOperableView((TabletModePositioner *)a1, &v15);
    v14 = 0LL;
    v8 = v17;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    v9 = (*(__int64 (__fastcall **)(void *, void *, struct IObjectArray *, __int64 *))(*(_QWORD *)v8 + 24LL))(
           v8,
           ppvOut,
           v19,
           &v14);
    v5 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6BF,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v9);
LABEL_20:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
      goto LABEL_21;
    }
    v20 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    inited = TabletModePositioner::InitLayoutOperationHelper(
               (IUnknown *)a1,
               &CLSID_TabletModePositionerOperation,
               &GUID_ef9dff78_5b41_4081_a5aa_407c9421d1b6,
               (void **)&v20);
    v5 = inited;
    if ( inited >= 0 )
    {
      inited = ((__int64 (__fastcall *)(struct IUnknown *, struct IApplicationView *, struct IApplicationView *, __int64, int))v20->lpVtbl[1].Release)(
                 v20,
                 v16,
                 v15,
                 v14,
                 a2 & 1);
      v5 = inited;
      if ( inited >= 0 )
      {
        inited = TabletModePositioner::ApplyLayoutOperationHelper((TabletModePositioner *)a1, v20);
        v5 = inited;
        if ( inited >= 0 )
        {
          v12 = TabletModePositioner::CleanupBackgroundViews((__int64)a1, (__int64)v19, a2);
          if ( v12 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              1740LL,
              (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
              (const char *)(unsigned int)v12);
          v5 = 0;
          goto LABEL_19;
        }
        v11 = 1736LL;
      }
      else
      {
        v11 = 1735LL;
      }
    }
    else
    {
      v11 = 1731LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)inited);
LABEL_19:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6A9,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v4);
LABEL_23:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return v5;
}
