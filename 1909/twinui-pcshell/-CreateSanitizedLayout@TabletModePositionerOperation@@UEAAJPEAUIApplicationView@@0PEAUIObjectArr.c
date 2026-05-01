/*
 * XREFs of ?CreateSanitizedLayout@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@0PEAUIObjectArray@@W4CreateSanitizedLayoutFlags@@@Z @ 0x1803DDE20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180076FD0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x18012DA54 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x18037D83C (-GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 *     ?AddViewToNewLayout@TabletModePositionerOperation@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@W4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x1803DDAE8 (-AddViewToNewLayout@TabletModePositionerOperation@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@W4APP.c)
 *     ?GetLeftAndRightSnappedViews@TabletModePositionerOperation@@AEAAJPEAUIObjectArray@@PEAPEAUIApplicationView@@1@Z @ 0x1803DE3DC (-GetLeftAndRightSnappedViews@TabletModePositionerOperation@@AEAAJPEAUIObjectArray@@PEAPEAUIAppli.c)
 *     ?IsViewInArray@TabletModePositionerOperation@@AEAA_NPEAUIApplicationView@@PEAUIObjectArray@@@Z @ 0x1803DE610 (-IsViewInArray@TabletModePositionerOperation@@AEAA_NPEAUIApplicationView@@PEAUIObjectArray@@@Z.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x18042E040 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x18043B250 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x18043BBC4 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

__int64 __fastcall TabletModePositionerOperation::CreateSanitizedLayout(
        __int64 a1,
        struct IApplicationView *a2,
        struct IApplicationView *a3,
        struct IObjectArray *a4,
        char a5)
{
  TabletModePositionerOperation *v5; // r12
  CAppLayoutOperation *v10; // r13
  int ViewLayoutBehaviorFlags; // eax
  unsigned int v12; // esi
  __int64 v13; // rdx
  TabletModePositionerOperation *v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 *v17; // rcx
  __int64 *v18; // rcx
  struct IApplicationView *v19; // rdi
  int v20; // eax
  __int64 v21; // rdx
  struct IApplicationView *v22; // rbx
  int v23; // ecx
  int v24; // eax
  const struct LAYOUT_ENVIRONMENT_DETAILS *v25; // rdx
  int v26; // eax
  int v27; // eax
  __int64 v28; // rdx
  unsigned int v30; // [rsp+30h] [rbp-71h] BYREF
  struct IApplicationView *v31; // [rsp+38h] [rbp-69h] BYREF
  struct IApplicationView *v32; // [rsp+40h] [rbp-61h] BYREF
  int v33; // [rsp+48h] [rbp-59h] BYREF
  __int64 v34; // [rsp+50h] [rbp-51h] BYREF
  int v35; // [rsp+58h] [rbp-49h]
  struct IApplicationView *v36[2]; // [rsp+60h] [rbp-41h] BYREF
  __int128 v37; // [rsp+70h] [rbp-31h] BYREF
  _BYTE v38[40]; // [rsp+80h] [rbp-21h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+57h]

  v5 = (TabletModePositionerOperation *)(a1 - 176);
  v34 = (a1 + 16) & -(__int64)(a1 != 176);
  v10 = (CAppLayoutOperation *)(a1 - 152);
  v35 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v34, 1);
  ViewLayoutBehaviorFlags = CAppLayoutOperation::_VerifyAndPrepareLayout(v10, 0LL, 0);
  v12 = ViewLayoutBehaviorFlags;
  if ( ViewLayoutBehaviorFlags < 0 )
  {
    v13 = 77LL;
LABEL_55:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
      (const char *)(unsigned int)ViewLayoutBehaviorFlags);
    goto LABEL_56;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 - 112) + 264LL))(*(_QWORD *)(a1 - 112), 7LL);
  ViewLayoutBehaviorFlags = ((__int64 (__fastcall *)(struct IObjectArray *, int *))a4->lpVtbl->GetCount)(a4, &v33);
  v12 = ViewLayoutBehaviorFlags;
  if ( ViewLayoutBehaviorFlags < 0 )
  {
    v13 = 83LL;
    goto LABEL_55;
  }
  if ( a3 && !TabletModePositionerOperation::IsViewInArray(v14, a3, a4) )
  {
    ViewLayoutBehaviorFlags = GetViewLayoutBehaviorFlags(a3, (enum APP_LAYOUT_ITEM_BEHAVIOR_FLAGS *)&v30);
    v12 = ViewLayoutBehaviorFlags;
    if ( ViewLayoutBehaviorFlags < 0 )
    {
      v13 = 89LL;
      goto LABEL_55;
    }
    ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 - 112) + 232LL))(
                                *(_QWORD *)(a1 - 112),
                                a3,
                                0LL,
                                v30,
                                0LL);
    v12 = ViewLayoutBehaviorFlags;
    if ( ViewLayoutBehaviorFlags < 0 )
    {
      v13 = 90LL;
      goto LABEL_55;
    }
    goto LABEL_53;
  }
  if ( a2 && !TabletModePositionerOperation::IsViewInArray(v14, a2, a4) )
  {
    ViewLayoutBehaviorFlags = GetViewLayoutBehaviorFlags(a2, (enum APP_LAYOUT_ITEM_BEHAVIOR_FLAGS *)&v30);
    v12 = ViewLayoutBehaviorFlags;
    if ( ViewLayoutBehaviorFlags < 0 )
    {
      v13 = 96LL;
      goto LABEL_55;
    }
    ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 - 112) + 232LL))(
                                *(_QWORD *)(a1 - 112),
                                a2,
                                0LL,
                                v30,
                                0LL);
    v12 = ViewLayoutBehaviorFlags;
    if ( ViewLayoutBehaviorFlags < 0 )
    {
      v13 = 97LL;
      goto LABEL_55;
    }
    goto LABEL_53;
  }
  if ( !v33 )
  {
    ViewLayoutBehaviorFlags = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 - 112) + 240LL))(
                                *(_QWORD *)(a1 - 112),
                                0LL,
                                0LL,
                                0LL);
    v12 = ViewLayoutBehaviorFlags;
    if ( ViewLayoutBehaviorFlags < 0 )
    {
      v13 = 102LL;
      goto LABEL_55;
    }
    goto LABEL_53;
  }
  if ( v33 != 1 )
  {
    v32 = 0LL;
    v31 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v32);
    if ( (int)TabletModePositionerOperation::GetLeftAndRightSnappedViews(v5, a4, &v32, &v31) >= 0 )
    {
      v19 = v32;
      *(_OWORD *)v36 = 0LL;
      v20 = (*(__int64 (__fastcall **)(struct IApplicationView *, struct IApplicationView **))(*(_QWORD *)v32 + 128LL))(
              v32,
              v36);
      v12 = v20;
      if ( v20 < 0 )
      {
        v21 = 125LL;
LABEL_40:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v21,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
          (const char *)(unsigned int)v20);
LABEL_48:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
        v17 = (__int64 *)&v32;
        goto LABEL_49;
      }
      v22 = v31;
      v37 = 0LL;
      v20 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int128 *))(*(_QWORD *)v31 + 128LL))(v31, &v37);
      v12 = v20;
      if ( v20 < 0 )
      {
        v21 = 127LL;
        goto LABEL_40;
      }
      v23 = (int)v36[1];
      v24 = v37 - LODWORD(v36[1]);
      if ( (int)v37 - LODWORD(v36[1]) > 0 )
      {
        LODWORD(v36[1]) += v24 / 2;
        LODWORD(v37) = v24 / 2 + v23;
      }
      (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 - 112) + 24LL))(*(_QWORD *)(a1 - 112), v38);
      v26 = ImmersiveApplicationLayout::ComputeGutterWidth((ImmersiveApplicationLayout *)v38, v25);
      LODWORD(v36[1]) += v26 / -2;
      LODWORD(v37) = LODWORD(v36[1]) + v26;
      v20 = TabletModePositionerOperation::AddViewToNewLayout((__int64)v5, v19, (__int64)v36, 0);
      v12 = v20;
      if ( v20 < 0 )
      {
        v21 = 146LL;
        goto LABEL_40;
      }
      v20 = TabletModePositionerOperation::AddViewToNewLayout((__int64)v5, v22, (__int64)&v37, 1u);
      v12 = v20;
      if ( v20 < 0 )
      {
        v21 = 147LL;
        goto LABEL_40;
      }
LABEL_51:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
      v18 = (__int64 *)&v32;
      goto LABEL_52;
    }
    v36[0] = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v36);
    v27 = ((__int64 (__fastcall *)(struct IObjectArray *, _QWORD, GUID *, struct IApplicationView **))a4->lpVtbl->GetAt)(
            a4,
            0LL,
            &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
            v36);
    v12 = v27;
    if ( v27 >= 0 )
    {
      v27 = GetViewLayoutBehaviorFlags(v36[0], (enum APP_LAYOUT_ITEM_BEHAVIOR_FLAGS *)&v30);
      v12 = v27;
      if ( v27 >= 0 )
      {
        v27 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 - 112) + 232LL))(
                *(_QWORD *)(a1 - 112),
                v36[0],
                0LL,
                v30,
                0LL);
        v12 = v27;
        if ( v27 >= 0 )
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v36);
          goto LABEL_51;
        }
        v28 = 157LL;
      }
      else
      {
        v28 = 156LL;
      }
    }
    else
    {
      v28 = 153LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v28,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
      (const char *)(unsigned int)v27);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v36);
    goto LABEL_48;
  }
  v36[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v36);
  v15 = ((__int64 (__fastcall *)(struct IObjectArray *, _QWORD, GUID *, struct IApplicationView **))a4->lpVtbl->GetAt)(
          a4,
          0LL,
          &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
          v36);
  v12 = v15;
  if ( v15 < 0 )
  {
    v16 = 108LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
      (const char *)(unsigned int)v15);
    v17 = (__int64 *)v36;
LABEL_49:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v17);
    goto LABEL_56;
  }
  v15 = GetViewLayoutBehaviorFlags(v36[0], (enum APP_LAYOUT_ITEM_BEHAVIOR_FLAGS *)&v30);
  v12 = v15;
  if ( v15 < 0 )
  {
    v16 = 111LL;
    goto LABEL_27;
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 - 112)
                                                                                             + 232LL))(
          *(_QWORD *)(a1 - 112),
          v36[0],
          0LL,
          v30,
          0LL);
  v12 = v15;
  if ( v15 < 0 )
  {
    v16 = 112LL;
    goto LABEL_27;
  }
  v18 = (__int64 *)v36;
LABEL_52:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v18);
LABEL_53:
  *(_DWORD *)(a1 - 72) = 8 * (a5 & 1) + 1;
  ViewLayoutBehaviorFlags = CAppLayoutOperation::_FinalizeLayout(a1 - 152, 0LL);
  v12 = ViewLayoutBehaviorFlags;
  if ( ViewLayoutBehaviorFlags < 0 )
  {
    v13 = 164LL;
    goto LABEL_55;
  }
LABEL_56:
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v34);
  return v12;
}
