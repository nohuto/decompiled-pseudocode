/*
 * XREFs of ?SetBoundsForView@ViewManagerBridge@@UEAAXPEAUIUnknown@@AEBUtagRECT@@AEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1802348E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ViewPresentationMode@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18011F42C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ViewPresentationMode@@@wil@@CAX_NW4R.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewManagerBridge::SetBoundsForView(
        ViewManagerBridge *this,
        struct IUnknown *a2,
        const struct tagRECT *a3,
        const struct APPLICATION_VIEW_DATA *a4)
{
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  __int128 v12; // [rsp+30h] [rbp-11h] BYREF
  __int128 v13; // [rsp+40h] [rbp-1h]
  __int64 v14; // [rsp+50h] [rbp+Fh]
  _OWORD v15[2]; // [rsp+68h] [rbp+27h] BYREF
  __int64 v16; // [rsp+88h] [rbp+47h]
  int v17; // [rsp+90h] [rbp+4Fh]
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]
  __int64 v19; // [rsp+A8h] [rbp+67h] BYREF

  if ( !*((_BYTE *)this + 145) )
  {
    memset_0(&v12, 0, 0x2CuLL);
    LODWORD(v12) = a3->right - a3->left;
    DWORD1(v12) = a3->bottom - a3->top;
    DWORD2(v12) = *((_DWORD *)a4 + 2);
    HIDWORD(v12) = *(_DWORD *)a4;
    v7 = *((_DWORD *)a4 + 8);
    HIDWORD(v14) = *((_DWORD *)a4 + 7);
    BYTE12(v13) = *((_DWORD *)a4 + 4) != 0;
    wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::ReportUsageToService(v9, v8, v10);
    LODWORD(v14) = *((_DWORD *)a4 + 6);
    v19 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
      a2,
      &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
      &v19);
    v15[0] = v12;
    v15[1] = v13;
    v16 = v14;
    v17 = v7;
    v11 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v19 + 192LL))(v19, v15);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        249LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v11);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  }
}
