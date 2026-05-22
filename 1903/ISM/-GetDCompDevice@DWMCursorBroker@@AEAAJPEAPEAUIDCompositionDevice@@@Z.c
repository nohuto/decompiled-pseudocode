/*
 * XREFs of ?GetDCompDevice@DWMCursorBroker@@AEAAJPEAPEAUIDCompositionDevice@@@Z @ 0x180143AB8
 * Callers:
 *     ?SetPosition@DWMCursor@@UEAAJJJ@Z @ 0x1800071E0 (-SetPosition@DWMCursor@@UEAAJJJ@Z.c)
 *     ?EnsureDCompTransform@DWMCursor@@AEAAJXZ @ 0x1801446A8 (-EnsureDCompTransform@DWMCursor@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMCursorBroker::GetDCompDevice(DWMCursorBroker *this, struct IDCompositionDevice **a2)
{
  __int64 *v2; // rbx
  struct IDCompositionDevice *v3; // rcx
  int Device3; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v2 = (__int64 *)((char *)this + 40);
  v3 = (struct IDCompositionDevice *)*((_QWORD *)this + 5);
  if ( v3 )
    goto LABEL_5;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v2);
  Device3 = DCompositionCreateDevice3(0LL, &GUID_c37ea93a_e7aa_450d_b16f_9746cb0407f3, v2);
  v6 = Device3;
  if ( Device3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)Device3);
    return v6;
  }
  v3 = (struct IDCompositionDevice *)*v2;
  if ( *v2 )
  {
LABEL_5:
    (*(void (__fastcall **)(struct IDCompositionDevice *))(*(_QWORD *)v3 + 8LL))(v3);
    v3 = (struct IDCompositionDevice *)*v2;
  }
  *a2 = v3;
  return 0LL;
}
