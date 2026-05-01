/*
 * XREFs of ?InitDropFeedback@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x1803C6144
 * Callers:
 *     ?Show@AppResizeView@@UEAAJAEBUtagPOINT@@@Z @ 0x1803C6950 (-Show@AppResizeView@@UEAAJAEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180129204 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?MakeDragGutterRect@AppResizeView@@AEAAXHPEAUtagRECT@@@Z @ 0x1803C63A8 (-MakeDragGutterRect@AppResizeView@@AEAAXHPEAUtagRECT@@@Z.c)
 *     ?CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803D3DD4 (-CDropFeedbackList_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CDropFeedback_CreateInstance@@YAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP_FEEDBACK_INIT_FLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x1803D4E1C (-CDropFeedback_CreateInstance@@YAJPEAUIUnknown@@AEBULAYOUT_ENVIRONMENT_DETAILS@@W4DROP_FEEDBACK_.c)
 */

__int64 __fastcall AppResizeView::InitDropFeedback(AppResizeView *this, const struct Geometry::CPoint *a2)
{
  int v4; // eax
  int Instance; // eax
  unsigned int v6; // ebx
  char v7; // di
  const struct _GUID *v8; // rcx
  int v9; // eax
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  int v13; // edx
  IUnknown **p_punk; // [rsp+20h] [rbp-49h]
  IUnknown *punk; // [rsp+30h] [rbp-39h] BYREF
  void *v17; // [rsp+38h] [rbp-31h] BYREF
  __int64 v18[2]; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v19[16]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v20; // [rsp+60h] [rbp-9h]
  _BYTE v21[40]; // [rsp+68h] [rbp-1h] BYREF
  struct tagRECT v22; // [rsp+90h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 9) + 24LL))(*((_QWORD *)this + 9), (char *)this + 100);
  v4 = *((_DWORD *)this + 29);
  punk = 0LL;
  *((_DWORD *)this + 37) = 10 * v4 / 100;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  p_punk = &punk;
  Instance = CDropFeedback_CreateInstance(*((_QWORD *)this + 2), (char *)this + 100, 0LL);
  v6 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x134,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
      (const char *)(unsigned int)Instance);
    goto LABEL_20;
  }
  v17 = 0LL;
  v7 = 1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  v9 = CDropFeedbackList_CreateInstance(v8, &v17);
  v6 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13B,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_18;
  }
  v18[0] = 0LL;
  v10 = *((_QWORD *)this + 9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v18);
  v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 128LL))(v10, v18);
  v6 = v11;
  if ( v11 >= 0 )
  {
    while ( (*(int (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v18[0] + 24LL))(v18[0], 1LL, v19) >= 0 )
      (*(void (__fastcall **)(void *, _QWORD, __int64, _BYTE *, IUnknown **))(*(_QWORD *)v17 + 64LL))(
        v17,
        (unsigned int)v20,
        v20,
        v21,
        p_punk);
    v13 = *(_DWORD *)a2;
    *(_QWORD *)&v22.left = 0LL;
    *(_QWORD *)&v22.right = 0LL;
    AppResizeView::MakeDragGutterRect(this, v13, &v22);
    v11 = (*(__int64 (__fastcall **)(void *, __int64, __int64, struct tagRECT *, IUnknown **))(*(_QWORD *)v17 + 72LL))(
            v17,
            100LL,
            2LL,
            &v22,
            p_punk);
    v6 = v11;
    if ( v11 >= 0 )
    {
      v11 = ((__int64 (__fastcall *)(IUnknown *, void *, _QWORD))punk->lpVtbl[1].AddRef)(punk, v17, 0LL);
      v6 = v11;
      if ( v11 >= 0 )
      {
        v11 = ((__int64 (__fastcall *)(IUnknown *))punk->lpVtbl[1].QueryInterface)(punk);
        v6 = v11;
        if ( v11 >= 0 )
        {
          Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 7, (__int64 *)&punk);
          v7 = 0;
          v6 = 0;
          goto LABEL_17;
        }
        v12 = 335LL;
      }
      else
      {
        v12 = 334LL;
      }
    }
    else
    {
      v12 = 331LL;
    }
  }
  else
  {
    v12 = 318LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizeview.cpp",
    (const char *)(unsigned int)v11);
LABEL_17:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v18);
LABEL_18:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  if ( v7 )
    IUnknown_SetSite(punk, 0LL);
LABEL_20:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  return v6;
}
