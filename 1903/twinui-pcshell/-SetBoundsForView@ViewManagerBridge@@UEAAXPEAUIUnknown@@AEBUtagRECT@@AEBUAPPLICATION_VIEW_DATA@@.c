/*
 * XREFs of ?SetBoundsForView@ViewManagerBridge@@UEAAXPEAUIUnknown@@AEBUtagRECT@@AEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180289D50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ViewPresentationMode@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18008D6CC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ViewPresentationMode@@@wil@@CAX_NW4R.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewManagerBridge::SetBoundsForView(
        ViewManagerBridge *this,
        struct IUnknown *a2,
        const struct tagRECT *a3,
        const struct APPLICATION_VIEW_DATA *a4)
{
  int v6; // edi
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  __int64 v8; // rax
  int v9; // eax
  __m256i v10; // [rsp+30h] [rbp-21h]
  __int64 v11; // [rsp+50h] [rbp-1h]
  __m256i v12; // [rsp+68h] [rbp+17h] BYREF
  __int64 v13; // [rsp+88h] [rbp+37h]
  int v14; // [rsp+90h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]
  __int64 *v16; // [rsp+B8h] [rbp+67h] BYREF

  if ( !*((_BYTE *)this + 145) )
  {
    v10.m256i_i32[0] = a3->right - a3->left;
    v10.m256i_i32[1] = a3->bottom - a3->top;
    v10.m256i_i32[2] = *((_DWORD *)a4 + 2);
    *(_OWORD *)((char *)&v10.m256i_u64[1] + 4) = *(unsigned int *)a4;
    v6 = *((_DWORD *)a4 + 8);
    HIDWORD(v11) = *((_DWORD *)a4 + 7);
    v10.m256i_i32[7] = *((_DWORD *)a4 + 4) != 0;
    wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::ReportUsageToService(
      (__int64)this,
      (__int64)a2,
      (__int64)a3);
    LODWORD(v11) = *((_DWORD *)a4 + 6);
    v16 = 0LL;
    QueryInterface = a2->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
    ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 **))QueryInterface)(
      a2,
      &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
      &v16);
    v8 = *v16;
    v12 = v10;
    v13 = v11;
    v14 = v6;
    v9 = (*(__int64 (__fastcall **)(__int64 *, __m256i *))(v8 + 192))(v16, &v12);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xF9,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  }
}
