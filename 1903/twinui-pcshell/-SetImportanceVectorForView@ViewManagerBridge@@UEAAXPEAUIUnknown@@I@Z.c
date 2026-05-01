/*
 * XREFs of ?SetImportanceVectorForView@ViewManagerBridge@@UEAAXPEAUIUnknown@@I@Z @ 0x18028A290
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewManagerBridge::SetImportanceVectorForView(
        ViewManagerBridge *this,
        struct IUnknown *a2,
        unsigned int a3)
{
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  __int64 v6; // rax
  const wchar_t *v7; // r8
  int v8; // edx
  int v9; // eax
  unsigned int v10; // [rsp+28h] [rbp-20h] BYREF
  const wchar_t *v11; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 *v13; // [rsp+50h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 145) )
  {
    v13 = 0LL;
    QueryInterface = a2->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 **))QueryInterface)(
      a2,
      &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
      &v13);
    v6 = *v13;
    v7 = L"ResourceImportanceVector";
    v11 = L"ResourceImportanceVector";
    v8 = 0;
    do
    {
      ++v7;
      ++v8;
    }
    while ( *v7 );
    v10 = v8 | 0x80000000;
    v9 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *, _QWORD))(v6 + 720))(v13, &v10, a3);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x103,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  }
}
