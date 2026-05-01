/*
 * XREFs of ?InitDragVisual@WindowArrangementView@@AEAAJPEAUIUnknown@@PEAUtagRECT@@AEBUtagPOINT@@1@Z @ 0x1803E1548
 * Callers:
 *     ?ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x1803E2E08 (-ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?BuildSingleViewLayout@AppLayoutHelpers@@YAJPEAUIApplicationView@@PEAPEAUIAppLayout@@@Z @ 0x1803E05B4 (-BuildSingleViewLayout@AppLayoutHelpers@@YAJPEAUIApplicationView@@PEAPEAUIAppLayout@@@Z.c)
 *     ?CreateInstance@CDragVisual@@SAJW4DragVisualMode@@PEAUIDragVisualHost@@AEBU_GUID@@PEAPEAX@Z @ 0x1803F6E8C (-CreateInstance@CDragVisual@@SAJW4DragVisualMode@@PEAUIDragVisualHost@@AEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall WindowArrangementView::InitDragVisual(
        WindowArrangementView *this,
        struct IUnknown *a2,
        struct tagRECT *a3,
        const struct tagPOINT *a4,
        struct tagRECT *a5)
{
  int v5; // eax
  unsigned int v10; // ebx
  __int64 v11; // r8
  int v12; // eax
  unsigned int v13; // ebx
  char v14; // r15
  int v15; // eax
  __int64 v16; // rdx
  struct IUnknownVtbl *lpVtbl; // rax
  HRESULT Service; // eax
  struct IAppLayout **v19; // r8
  int v20; // eax
  __int64 v21; // rdx
  IUnknown *v22; // rax
  IUnknown *v23; // rbx
  __int64 v25; // [rsp+20h] [rbp-30h] BYREF
  __int64 v26; // [rsp+28h] [rbp-28h] BYREF
  void *ppvOut[2]; // [rsp+30h] [rbp-20h] BYREF
  __int128 v28; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  IUnknown *punk; // [rsp+80h] [rbp+30h] BYREF

  v5 = *((_DWORD *)this + 72);
  if ( v5 == 2 )
  {
    v10 = 6;
  }
  else if ( v5 == 3 )
  {
    v10 = 5;
  }
  else
  {
    v10 = *((_DWORD *)this + 73) != 0 ? 1 : 4;
  }
  punk = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  v12 = CDragVisual::CreateInstance(v10, (char *)this + 48, v11, &punk);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x440,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_33;
  }
  IUnknown_SetSite(punk, a2);
  v26 = 0LL;
  v14 = 1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
  v15 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
          a2,
          &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
          &v26);
  v13 = v15;
  if ( v15 < 0 )
  {
    v16 = 1099LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_31;
  }
  ((void (__fastcall *)(IUnknown *, __int64))punk->lpVtbl[5].Release)(punk, v26);
  ((void (__fastcall *)(IUnknown *))punk->lpVtbl[6].QueryInterface)(punk);
  v15 = ((__int64 (__fastcall *)(IUnknown *))punk->lpVtbl[7].Release)(punk);
  v13 = v15;
  if ( v15 < 0 )
  {
    v16 = 1103LL;
    goto LABEL_12;
  }
  if ( a3 )
  {
    lpVtbl = punk->lpVtbl;
    v28 = (__int128)*a3;
    ((void (__fastcall *)(IUnknown *, __int128 *))lpVtbl[2].QueryInterface)(punk, &v28);
  }
  ((void (__fastcall *)(IUnknown *, _QWORD))punk->lpVtbl[1].Release)(punk, *a4);
  ppvOut[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppvOut);
  Service = IUnknown_QueryService(
              *((IUnknown **)this + 2),
              &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
              &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
              ppvOut);
  v13 = Service;
  if ( Service >= 0 )
  {
    v25 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    v20 = AppLayoutHelpers::BuildSingleViewLayout(
            *((AppLayoutHelpers **)this + 11),
            (struct IApplicationView *)&v25,
            v19);
    v13 = v20;
    if ( v20 >= 0 )
    {
      v20 = ((__int64 (__fastcall *)(IUnknown *, __int64, struct tagRECT *))punk->lpVtbl[3].QueryInterface)(
              punk,
              v25,
              a5);
      v13 = v20;
      if ( v20 >= 0 )
      {
        if ( *((_DWORD *)this + 72) != 2 )
          ((void (__fastcall *)(IUnknown *, _QWORD, _QWORD))punk->lpVtbl[2].AddRef)(punk, *a4, 0LL);
        v22 = (IUnknown *)*((_QWORD *)this + 10);
        v23 = punk;
        if ( v22 != punk )
        {
          if ( punk )
          {
            ((void (__fastcall *)(IUnknown *))punk->lpVtbl->AddRef)(punk);
            v22 = (IUnknown *)*((_QWORD *)this + 10);
          }
          *(_QWORD *)&v28 = v22;
          *((_QWORD *)this + 10) = v23;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
        }
        v14 = 0;
        v13 = 0;
        goto LABEL_29;
      }
      v21 = 1117LL;
    }
    else
    {
      v21 = 1115LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
      (const char *)(unsigned int)v20);
LABEL_29:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    goto LABEL_30;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x458,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
    (const char *)(unsigned int)Service);
LABEL_30:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppvOut);
LABEL_31:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v26);
  if ( v14 )
  {
    ((void (__fastcall *)(IUnknown *, __int64))punk->lpVtbl[1].AddRef)(punk, 4LL);
    IUnknown_SetSite(punk, 0LL);
  }
LABEL_33:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
  return v13;
}
