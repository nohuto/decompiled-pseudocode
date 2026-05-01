/*
 * XREFs of ?ShowAppResizeView@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@UtagPOINT@@@Z @ 0x1803B76E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?UpdateLayoutItemsSizeConstraints@TabletModeViewManager@@AEAAXXZ @ 0x1803B8894 (-UpdateLayoutItemsSizeConstraints@TabletModeViewManager@@AEAAXXZ.c)
 *     ?AppResizeView_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803C5AB8 (-AppResizeView_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?TabletModeInputHandler_CreateInstance@@YAJW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputCallback@@AEBU_GUID@@PEAPEAX@Z @ 0x1803C7F50 (-TabletModeInputHandler_CreateInstance@@YAJW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletMod.c)
 *     ?ComputeAdjacentDisplayEdges@ImmersiveApplicationLayout@@YAJPEBUtagRECT@@00PEAW4ADJACENT_DISPLAY_EDGES@@@Z @ 0x18040E7D8 (-ComputeAdjacentDisplayEdges@ImmersiveApplicationLayout@@YAJPEBUtagRECT@@00PEAW4ADJACENT_DISPLAY.c)
 */

__int64 __fastcall TabletModeViewManager::ShowAppResizeView(_QWORD *a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v7; // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  const struct _GUID *v17; // rcx
  int Instance; // eax
  unsigned int v19; // edi
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // eax
  IUnknown *v25; // rax
  IUnknown *v26; // rbx
  enum ADJACENT_DISPLAY_EDGES *v27; // [rsp+20h] [rbp-49h]
  IUnknown *punk; // [rsp+30h] [rbp-39h] BYREF
  __int64 v29; // [rsp+38h] [rbp-31h] BYREF
  IUnknown *v30; // [rsp+40h] [rbp-29h] BYREF
  struct tagRECT v31; // [rsp+48h] [rbp-21h] BYREF
  __int64 v32; // [rsp+58h] [rbp-11h] BYREF
  struct tagRECT v33; // [rsp+60h] [rbp-9h] BYREF
  _BYTE v34[40]; // [rsp+70h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v32 = a4;
  if ( a2 )
  {
    v7 = a1[4];
    v29 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 72LL))(v7, &v29);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = (unsigned int)v8;
      v11 = 280LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)v10);
LABEL_20:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
      return v9;
    }
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v29 + 48LL))(v29) )
    {
      v9 = -2147019873;
      v11 = 281LL;
      v10 = 2147947423LL;
      goto LABEL_6;
    }
    v30 = 0LL;
    v12 = v29;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
    v13 = (*(__int64 (__fastcall **)(__int64, __int64, IUnknown **, _QWORD))(*(_QWORD *)v12 + 152LL))(
            v12,
            a2,
            &v30,
            0LL);
    v9 = v13;
    if ( v13 < 0 )
    {
      v14 = (unsigned int)v13;
      v15 = 285LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
        (const char *)v14);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
      goto LABEL_20;
    }
    ((void (__fastcall *)(IUnknown *, _QWORD, struct tagRECT *))v30->lpVtbl[2].AddRef)(v30, 0LL, &v33);
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v29 + 24LL))(v29, v34);
    ImmersiveApplicationLayout::ComputeAdjacentDisplayEdges((ImmersiveApplicationLayout *)v34, &v33, &v33, &v31, v27);
    if ( (a3 != 4 || (v31.left & 1) == 0) && (a3 != 3 || (v31.left & 2) == 0) )
    {
      v9 = -2147418113;
      v15 = 300LL;
      v14 = 2147549183LL;
      goto LABEL_19;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
  }
  v16 = a1[7];
  if ( v16 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 32LL))(v16, 0LL);
  punk = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  Instance = AppResizeView_CreateInstance(v17, (void **)&punk);
  v19 = Instance;
  if ( Instance >= 0 )
  {
    *(_QWORD *)&v31.right = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31.right);
    v21 = ((__int64 (__fastcall *)(IUnknown *, GUID *, LONG *))punk->lpVtbl->QueryInterface)(
            punk,
            &GUID_bf49be29_71c8_427e_a671_fec22c61e5f1,
            &v31.right);
    v19 = v21;
    if ( v21 >= 0 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 8);
      v21 = TabletModeInputHandler_CreateInstance(1LL, *(_QWORD *)&v31.right, v23, a1 + 8);
      v19 = v21;
      if ( v21 >= 0 )
      {
        IUnknown_SetSite(punk, (IUnknown *)a1 - 11);
        v24 = ((__int64 (__fastcall *)(IUnknown *, __int64 *))punk->lpVtbl[1].QueryInterface)(punk, &v32);
        v19 = v24;
        if ( v24 >= 0 )
        {
          v25 = (IUnknown *)a1[7];
          v26 = punk;
          if ( v25 != punk )
          {
            if ( punk )
            {
              ((void (__fastcall *)(IUnknown *))punk->lpVtbl->AddRef)(punk);
              v25 = (IUnknown *)a1[7];
            }
            v30 = v25;
            a1[7] = v26;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
          }
          TabletModeViewManager::UpdateLayoutItemsSizeConstraints((TabletModeViewManager *)(a1 - 11));
          v19 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x147,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
            (const char *)(unsigned int)v24);
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)a1[8] + 56LL))(a1[8]);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 8);
          IUnknown_SetSite(punk, 0LL);
        }
        goto LABEL_33;
      }
      v22 = 316LL;
    }
    else
    {
      v22 = 315LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
      (const char *)(unsigned int)v21);
LABEL_33:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31.right);
    goto LABEL_34;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x139,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
    (const char *)(unsigned int)Instance);
LABEL_34:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  return v19;
}
