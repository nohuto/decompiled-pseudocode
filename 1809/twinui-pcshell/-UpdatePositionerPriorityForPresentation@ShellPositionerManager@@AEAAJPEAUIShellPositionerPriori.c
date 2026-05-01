/*
 * XREFs of ?UpdatePositionerPriorityForPresentation@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIInspectable@@@Z @ 0x1803370F4
 * Callers:
 *     ?PresentationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x180334F50 (-PresentationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellPositionerManager::UpdatePositionerPriorityForPresentation(
        ShellPositionerManager *this,
        struct IShellPositionerPriority *a2,
        struct IApplicationView *a3,
        IUnknown *a4,
        struct IInspectable *a5)
{
  char v8; // si
  HRESULT Service; // eax
  unsigned int v10; // ebx
  unsigned int v11; // edi
  void *v12; // rbx
  bool v13; // zf
  unsigned int (__fastcall *v14)(ShellPositionerManager *, struct IApplicationView *, struct IInspectable *); // rax
  void *ppvOut[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  ShellPositionerManager *v18; // [rsp+60h] [rbp+8h] BYREF

  v18 = this;
  ppvOut[1] = (void *)-2LL;
  v8 = 0;
  ppvOut[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppvOut);
  Service = IUnknown_QueryService(
              a4,
              &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
              &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
              ppvOut);
  v10 = Service;
  if ( Service >= 0 )
  {
    v11 = 0;
    while ( 1 )
    {
      v18 = 0LL;
      v12 = ppvOut[0];
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
      if ( (*(int (__fastcall **)(void *, _QWORD, GUID *, ShellPositionerManager **))(*(_QWORD *)v12 + 24LL))(
             v12,
             v11,
             &GUID_ee010e17_919a_4068_868b_675acf787303,
             &v18) >= 0 )
      {
        v13 = (*(unsigned int (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(*(_QWORD *)a2 + 32LL))(
                a2,
                v11) == 0;
        v14 = *(unsigned int (__fastcall **)(ShellPositionerManager *, struct IApplicationView *, struct IInspectable *))(*(_QWORD *)v18 + 72LL);
        if ( v13 )
        {
          if ( v14(v18, a3, a5) )
          {
            (*(void (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, v11);
LABEL_10:
            v8 = 1;
          }
        }
        else
        {
          if ( v14(v18, a3, a5) )
            goto LABEL_10;
          (*(void (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, v11);
        }
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
      if ( ++v11 >= 8 )
      {
        v10 = v8 == 0 ? 0x80070005 : 0;
        goto LABEL_13;
      }
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x47A,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)(unsigned int)Service);
LABEL_13:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppvOut);
  return v10;
}
