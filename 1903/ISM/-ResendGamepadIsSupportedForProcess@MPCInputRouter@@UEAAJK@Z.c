/*
 * XREFs of ?ResendGamepadIsSupportedForProcess@MPCInputRouter@@UEAAJK@Z @ 0x180055C30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?GetSupportedInputTargetForProcessId@DWMInputRouter@@IEAAPEAUIDWMSupportedInputTarget@@K@Z @ 0x1800C37F4 (-GetSupportedInputTargetForProcessId@DWMInputRouter@@IEAAPEAUIDWMSupportedInputTarget@@K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCInputRouter::ResendGamepadIsSupportedForProcess(MPCInputRouter *this, unsigned int a2)
{
  char *v2; // rdi
  struct IDWMSupportedInputTarget *SupportedInputTargetForProcessId; // rax
  struct IDWMSupportedInputTarget *v4; // rbx
  struct IDWMSupportedInputTarget *v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = (char *)this - 808;
  SupportedInputTargetForProcessId = DWMInputRouter::GetSupportedInputTargetForProcessId(
                                       (MPCInputRouter *)((char *)this - 808),
                                       a2);
  v4 = SupportedInputTargetForProcessId;
  v6 = SupportedInputTargetForProcessId;
  if ( SupportedInputTargetForProcessId )
    (*(void (__fastcall **)(struct IDWMSupportedInputTarget *))(*(_QWORD *)SupportedInputTargetForProcessId + 8LL))(SupportedInputTargetForProcessId);
  if ( v4 )
    (*(void (__fastcall **)(char *, struct IDWMSupportedInputTarget *))(*(_QWORD *)v2 + 120LL))(v2, v4);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v6);
  return 0LL;
}
