/*
 * XREFs of ?ResizeView@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@H@Z @ 0x1803DE710
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180076FD0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x18012DA54 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ??$As@UIAppLayoutItemBuilder@@@?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAppLayoutItemBuilder@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803DD874 (--$As@UIAppLayoutItemBuilder@@@-$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Co.c)
 *     ?FindAdjacentItem@TabletModePositionerOperation@@AEAAJPEAUIAppLayoutItem@@AEBU_GUID@@PEAPEAX@Z @ 0x1803DE324 (-FindAdjacentItem@TabletModePositionerOperation@@AEAAJPEAUIAppLayoutItem@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x18042E040 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x18043B250 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x18043B86C (-_MakeViewFullScreen@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x18043BBC4 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

__int64 __fastcall TabletModePositionerOperation::ResizeView(
        TabletModePositionerOperation *this,
        struct IApplicationView *a2,
        int a3)
{
  TabletModePositionerOperation *v3; // rdi
  CAppLayoutOperation *v7; // r15
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  const struct _GUID *v14; // r8
  int AdjacentItem; // eax
  __int64 v16; // rdx
  int v17; // ebx
  int v18; // esi
  const struct LAYOUT_ENVIRONMENT_DETAILS *v19; // rdx
  int v20; // eax
  void *v22; // [rsp+30h] [rbp-59h] BYREF
  struct IAppLayoutItem *v23; // [rsp+38h] [rbp-51h] BYREF
  __int64 v24; // [rsp+40h] [rbp-49h] BYREF
  signed __int64 v25; // [rsp+48h] [rbp-41h] BYREF
  int v26; // [rsp+50h] [rbp-39h]
  __int128 v27; // [rsp+58h] [rbp-31h] BYREF
  _QWORD v28[2]; // [rsp+68h] [rbp-21h] BYREF
  _DWORD v29[10]; // [rsp+78h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v3 = (TabletModePositionerOperation *)((char *)this - 176);
  v25 = ((unsigned __int64)this + 16) & -(__int64)(this != (TabletModePositionerOperation *)176);
  v7 = (TabletModePositionerOperation *)((char *)this - 152);
  v26 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v25, 1);
  v8 = CAppLayoutOperation::_VerifyAndPrepareLayout(v7, 0LL, 0);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v23 = 0LL;
    v10 = *((_QWORD *)this - 14);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
    v11 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *, struct IAppLayoutItem **, _QWORD))(*(_QWORD *)v10 + 152LL))(
            v10,
            a2,
            &v23,
            0LL);
    v9 = v11;
    if ( v11 < 0 )
    {
      v12 = 264LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
        (const char *)(unsigned int)v11);
LABEL_21:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
      goto LABEL_22;
    }
    if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this - 14) + 48LL))(*((_QWORD *)this - 14)) )
    {
      v24 = 0LL;
      v13 = Microsoft::WRL::ComPtr<IAppLayoutItem>::As<IAppLayoutItemBuilder>(&v23, &v24);
      v9 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x111,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
          (const char *)(unsigned int)v13);
LABEL_19:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
        goto LABEL_21;
      }
      v22 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
      AdjacentItem = TabletModePositionerOperation::FindAdjacentItem(v3, v23, v14, &v22);
      v9 = AdjacentItem;
      if ( AdjacentItem < 0 )
      {
        v16 = 275LL;
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
          (const char *)(unsigned int)AdjacentItem);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
        goto LABEL_19;
      }
      (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this - 14) + 24LL))(*((_QWORD *)this - 14), v29);
      v17 = v29[0];
      v18 = v29[2];
      v20 = ImmersiveApplicationLayout::ComputeGutterWidth((ImmersiveApplicationLayout *)v29, v19);
      if ( (int)(v20
               + a3
               + (*(__int64 (__fastcall **)(void *, _DWORD *, _QWORD))(*(_QWORD *)v22 + 72LL))(
                   v22,
                   v29,
                   (unsigned int)(v18 - v17 - v20))) > v18 - v17 )
      {
        AdjacentItem = CAppLayoutOperation::_MakeViewFullScreen((char *)this - 152, a2, 5LL);
        v9 = AdjacentItem;
        if ( AdjacentItem < 0 )
        {
          v16 = 300LL;
          goto LABEL_18;
        }
      }
      else
      {
        v27 = 0LL;
        (*(void (__fastcall **)(struct IAppLayoutItem *, _QWORD, __int128 *))(*(_QWORD *)v23 + 56LL))(v23, 0LL, &v27);
        DWORD2(v27) = a3 + v27;
        (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v24 + 104LL))(v24, 0LL, &v27);
        v28[0] = 0LL;
        v28[1] = 0LL;
        (*(void (__fastcall **)(void *, _QWORD, _QWORD *))(*(_QWORD *)v22 + 104LL))(v22, 0LL, v28);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    }
    *((_DWORD *)this - 18) = 1;
    v11 = CAppLayoutOperation::_FinalizeLayout((char *)this - 152, 0LL);
    v9 = v11;
    if ( v11 >= 0 )
    {
      v9 = 0;
      goto LABEL_21;
    }
    v12 = 305LL;
    goto LABEL_15;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x104,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
    (const char *)(unsigned int)v8);
LABEL_22:
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v25);
  return v9;
}
