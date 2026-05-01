/*
 * XREFs of ?InitLayoutOperationHelper@TabletModePositioner@@AEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180347EE0
 * Callers:
 *     ?AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@01@Z @ 0x1803440B8 (-AppToAppSwitchHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_SIZE_P.c)
 *     ?ChangeLayoutEnvironmentHelper@TabletModePositioner@@AEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x180344E90 (-ChangeLayoutEnvironmentHelper@TabletModePositioner@@AEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x18034656C (-EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?InitLayoutOperation@TabletModePositioner@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180347E90 (-InitLayoutOperation@TabletModePositioner@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?OnShellHookMessage@TabletModePositioner@@UEAAJ_K_J@Z @ 0x180349420 (-OnShellHookMessage@TabletModePositioner@@UEAAJ_K_J@Z.c)
 *     ?ResizeViewHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@H@Z @ 0x180349D3C (-ResizeViewHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@H@Z.c)
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x18034EB68 (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 *     ?SwitchToCustomLayoutHelper@TabletModePositioner@@AEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFlags@@@Z @ 0x18034EE9C (-SwitchToCustomLayoutHelper@TabletModePositioner@@AEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFla.c)
 *     ?SwitchToEmptyLayoutHelper@TabletModePositioner@@AEAAJW4SwitchToEmptyLayoutFlags@@@Z @ 0x18034EF64 (-SwitchToEmptyLayoutHelper@TabletModePositioner@@AEAAJW4SwitchToEmptyLayoutFlags@@@Z.c)
 *     ?SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z @ 0x18034F01C (-SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?AppSwitchOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180355978 (-AppSwitchOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?WindowArrangementOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180357584 (-WindowArrangementOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?AppResizeOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180357710 (-AppResizeOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?BackOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180358164 (-BackOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?TabletModePositionerOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180359880 (-TabletModePositionerOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?PPILayoutOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180359FC0 (-PPILayoutOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall TabletModePositioner::InitLayoutOperationHelper(
        IUnknown *punkSite,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v5; // rax
  __int64 v8; // rax
  const struct _GUID *v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rax
  const struct _GUID *v15; // rcx
  int v16; // eax
  __int64 v17; // rax
  const struct _GUID *v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  const struct _GUID *v21; // rcx
  int v22; // eax
  __int64 v23; // rax
  const struct _GUID *v24; // rcx
  int v25; // eax
  __int64 v26; // rax
  const struct _GUID *v27; // rcx
  int Instance; // eax
  struct IUnknownVtbl *lpVtbl; // rbx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v33[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  IUnknown *punk; // [rsp+68h] [rbp+38h] BYREF

  *a4 = 0LL;
  v5 = *(_QWORD *)&a2->Data1;
  punk = 0LL;
  v8 = v5 - *(_QWORD *)&CLSID_AppSwitchOperation.Data1;
  if ( !v8 )
    v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)CLSID_AppSwitchOperation.Data4;
  if ( v8 )
  {
    v14 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&CLSID_WindowArrangementOperation.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&CLSID_WindowArrangementOperation.Data1 )
      v14 = *(_QWORD *)a2->Data4 - *(_QWORD *)CLSID_WindowArrangementOperation.Data4;
    if ( v14 )
    {
      v17 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&CLSID_AppResizeOperation.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&CLSID_AppResizeOperation.Data1 )
        v17 = *(_QWORD *)a2->Data4 - *(_QWORD *)CLSID_AppResizeOperation.Data4;
      if ( v17 )
      {
        v20 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&CLSID_BackOperation.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&CLSID_BackOperation.Data1 )
          v20 = *(_QWORD *)a2->Data4 - *(_QWORD *)CLSID_BackOperation.Data4;
        if ( v20 )
        {
          v23 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&CLSID_TabletModePositionerOperation.Data1;
          if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&CLSID_TabletModePositionerOperation.Data1 )
            v23 = *(_QWORD *)a2->Data4 - *(_QWORD *)CLSID_TabletModePositionerOperation.Data4;
          if ( v23 )
          {
            v26 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&CLSID_PPILayoutOperation.Data1;
            if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&CLSID_PPILayoutOperation.Data1 )
              v26 = *(_QWORD *)a2->Data4 - *(_QWORD *)CLSID_PPILayoutOperation.Data4;
            if ( v26 )
            {
              v11 = -2147024809;
              v13 = 2316LL;
              v12 = 2147942487LL;
              goto LABEL_39;
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
            Instance = PPILayoutOperation_CreateInstance(v27, (void **)&punk);
            v11 = Instance;
            if ( Instance < 0 )
            {
              v12 = (unsigned int)Instance;
              v13 = 2311LL;
              goto LABEL_39;
            }
          }
          else
          {
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
            v25 = TabletModePositionerOperation_CreateInstance(v24, (void **)&punk);
            v11 = v25;
            if ( v25 < 0 )
            {
              v12 = (unsigned int)v25;
              v13 = 2307LL;
              goto LABEL_39;
            }
          }
        }
        else
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
          v22 = BackOperation_CreateInstance(v21, (void **)&punk);
          v11 = v22;
          if ( v22 < 0 )
          {
            v12 = (unsigned int)v22;
            v13 = 2303LL;
            goto LABEL_39;
          }
        }
      }
      else
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
        v19 = AppResizeOperation_CreateInstance(v18, (void **)&punk);
        v11 = v19;
        if ( v19 < 0 )
        {
          v12 = (unsigned int)v19;
          v13 = 2299LL;
          goto LABEL_39;
        }
      }
    }
    else
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
      v16 = WindowArrangementOperation_CreateInstance(v15, (void **)&punk);
      v11 = v16;
      if ( v16 < 0 )
      {
        v12 = (unsigned int)v16;
        v13 = 2295LL;
        goto LABEL_39;
      }
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
    v10 = AppSwitchOperation_CreateInstance(v9, (void **)&punk);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = (unsigned int)v10;
      v13 = 2291LL;
LABEL_39:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)v12);
      goto LABEL_40;
    }
  }
  v33[0] = 0LL;
  lpVtbl = punkSite[31].lpVtbl;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v33);
  v30 = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, GUID *, __int64 *))lpVtbl->QueryInterface + 24))(
          lpVtbl,
          &GUID_7baad876_2fc5_4561_93e1_17e868a174ed,
          v33);
  v11 = v30;
  if ( v30 >= 0 )
  {
    ((void (__fastcall *)(IUnknown *, __int64))punk->lpVtbl[1].QueryInterface)(punk, v33[0]);
    IUnknown_SetSite(punk, punkSite);
    v30 = ((__int64 (__fastcall *)(IUnknown *, const struct _GUID *, void **))punk->lpVtbl->QueryInterface)(
            punk,
            a3,
            a4);
    v11 = v30;
    if ( v30 >= 0 )
    {
      v11 = 0;
      goto LABEL_37;
    }
    v31 = 2330LL;
  }
  else
  {
    v31 = 2321LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v31,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v30);
LABEL_37:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v33);
LABEL_40:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  return v11;
}
