/*
 * XREFs of ?GetOperableViews@TabletModePositioner@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x1803ACDC0
 * Callers:
 *     ?CleanupBackgroundViews@TabletModePositioner@@AEAAJPEAUIObjectArray@@W4ViewOperationFlags@@@Z @ 0x1803AA7D8 (-CleanupBackgroundViews@TabletModePositioner@@AEAAJPEAUIObjectArray@@W4ViewOperationFlags@@@Z.c)
 *     ?SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z @ 0x1803B4ED0 (-SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z.c)
 * Callees:
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x180026898 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0?$ObjectArrayAdapterImpl@UISwitchItemElement@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18016FDFC (--0-$ObjectArrayAdapterImpl@UISwitchItemElement@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180170FE8 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ?IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18035E070 (-IsOperableView@TabletModePositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall TabletModePositioner::GetOperableViews(
        TabletModePositioner *this,
        struct IImmersiveMonitor *a2,
        struct IObjectArray **a3)
{
  __int64 v3; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  const struct _GUID *v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 *v12; // rcx
  __int64 (__fastcall ***v13)(ApplicationViewHelpers *, GUID *, __int64 *); // rbx
  struct IApplicationView *v14; // rdx
  int v15; // eax
  TabletModePositionerHelpers *v17; // [rsp+30h] [rbp-50h] BYREF
  __int64 v18; // [rsp+38h] [rbp-48h] BYREF
  int v19; // [rsp+40h] [rbp-40h]
  __int64 v20; // [rsp+48h] [rbp-38h] BYREF
  TabletModePositionerHelpers *v21; // [rsp+50h] [rbp-30h] BYREF
  __int64 *v22; // [rsp+58h] [rbp-28h]
  int v23; // [rsp+60h] [rbp-20h] BYREF
  __int64 v24; // [rsp+68h] [rbp-18h] BYREF
  __int64 *v25; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  void *v27; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v28; // [rsp+B8h] [rbp+38h] BYREF

  v3 = *((_QWORD *)this + 45);
  v28 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, struct IImmersiveMonitor *, __int64 *))(*(_QWORD *)v3 + 64LL))(
         v3,
         1LL,
         a2,
         &v28);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v27 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
    v10 = CEnumerableObjectCollection::CreateInstance(v9, v8, &v27);
    v7 = v10;
    if ( v10 >= 0 )
    {
      details::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>(
        (__int64)&v18,
        v28);
      LODWORD(v20) = 0;
      v21 = 0LL;
      v22 = &v18;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v20);
      v12 = (__int64 *)&v23;
      v24 = 0LL;
      v23 = v19;
      v25 = &v18;
      while ( 1 )
      {
        details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(v12);
        if ( (_DWORD)v20 == v23 && v22 == v25 )
          break;
        v13 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v21;
        v17 = v21;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v17);
        if ( TabletModePositionerHelpers::IsOperableView(v13, v14) )
        {
          v15 = (*(__int64 (__fastcall **)(void *, __int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *)))(*(_QWORD *)v27 + 40LL))(
                  v27,
                  v13);
          v7 = v15;
          if ( v15 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x85D,
              (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
              (const char *)(unsigned int)v15);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
            goto LABEL_16;
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
        LODWORD(v20) = v20 + 1;
        v12 = &v20;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
      v10 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IObjectArray **))v27)(
              v27,
              &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
              a3);
      v7 = v10;
      if ( v10 < 0 )
      {
        v11 = 2144LL;
        goto LABEL_5;
      }
      v7 = 0;
    }
    else
    {
      v11 = 2135LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v10);
    }
LABEL_16:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x854,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v6);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
  return v7;
}
