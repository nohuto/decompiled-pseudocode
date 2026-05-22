/*
 * XREFs of ?GetTargetFromInputDest@DWMInputRouter@@UEAAJAEBUtagINPUTDEST@@PEAUIInputTarget@@PEAPEAU3@@Z @ 0x1800C3740
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z @ 0x180053740 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z.c)
 *     ?Create@InputDestTarget@@SAJAEBUtagINPUTDEST@@PEAPEAUIInputTarget@@@Z @ 0x1800C78A0 (-Create@InputDestTarget@@SAJAEBUtagINPUTDEST@@PEAPEAUIInputTarget@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMInputRouter::GetTargetFromInputDest(
        DWMInputRouter *this,
        const struct tagINPUTDEST *a2,
        void (__fastcall ***a3)(struct IInputTarget *, GUID *, __int64 *),
        struct IInputTarget **a4)
{
  struct IInputTarget *v7; // rcx
  void (__fastcall *v8)(struct IInputTarget *, GUID *, __int64 *); // rbx
  int v9; // eax
  unsigned int v10; // ebx
  struct IInputTarget *v11; // rax
  __int64 v13[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IInputTarget *v15; // [rsp+60h] [rbp+30h] BYREF

  v13[1] = -2LL;
  v7 = 0LL;
  v15 = 0LL;
  if ( !a3 )
    goto LABEL_5;
  v13[0] = 0LL;
  v8 = **a3;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v13);
  v8((struct IInputTarget *)a3, &GUID_245edb10_c010_455c_a24c_6780cdaecce8, v13);
  if ( (*(unsigned __int8 (__fastcall **)(__int64, const struct tagINPUTDEST *))(*(_QWORD *)v13[0] + 24LL))(v13[0], a2) )
    Microsoft::WRL::ComPtr<IInputTarget>::operator=((__int64 *)&v15, (__int64)a3);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v13);
  v7 = v15;
  if ( !v15 )
  {
LABEL_5:
    if ( v7 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v9 = InputDestTarget::Create(a2, &v15);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x65A,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v9);
      v11 = v15;
      goto LABEL_11;
    }
    v7 = v15;
  }
  v11 = 0LL;
  *a4 = v7;
  v10 = 0;
LABEL_11:
  if ( v11 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v10;
}
