/*
 * XREFs of ?SetSite@XamlLauncherState@@UEAAJPEAUIUnknown@@@Z @ 0x1802FD5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncherState::SetSite(XamlLauncherState *this, struct IUnknown *a2)
{
  __int64 *v2; // rdi
  HRESULT Service; // eax
  unsigned int v6; // ebp
  HRESULT v8; // edi
  __int64 v9; // rdx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  int v11; // eax
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (__int64 *)((char *)this + 280);
  if ( a2 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2);
    Service = IUnknown_QueryService(
                a2,
                &IID_IImmersiveWindowMessageService,
                &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
                (void **)v2);
    v6 = Service;
    if ( Service < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xEF,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)Service);
      return v6;
    }
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *, char *))(*(_QWORD *)*v2 + 24LL))(
           *v2,
           0LL,
           (char *)this + 40,
           (char *)this + 272);
    if ( v8 < 0 )
    {
      v9 = 240LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v8);
      return (unsigned int)v8;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 14);
    v8 = IUnknown_QueryService(
           a2,
           &IID_IImmersiveSessionIdleDetector,
           &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
           (void **)this + 14);
    if ( v8 < 0 )
    {
      v9 = 242LL;
      goto LABEL_6;
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 14) + 32LL))(
           *((_QWORD *)this + 14),
           (char *)this + 48,
           (char *)this + 276);
    if ( v8 < 0 )
    {
      v9 = 243LL;
      goto LABEL_6;
    }
    QueryInterface = a2->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 15);
    v11 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, char *))QueryInterface)(
            a2,
            &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
            (char *)this + 120);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF5,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v11);
      return v12;
    }
  }
  else
  {
    if ( *((_DWORD *)this + 68) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*v2 + 32LL))(*v2);
      *((_DWORD *)this + 68) = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2);
    if ( *((_DWORD *)this + 69) )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 40LL))(*((_QWORD *)this + 14));
      *((_DWORD *)this + 69) = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 14);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 15);
  }
  return 0LL;
}
