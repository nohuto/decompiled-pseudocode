/*
 * XREFs of ?_EnsureLauncher@CRealmActivationHistory@@AEAAJXZ @ 0x18006F464
 * Callers:
 *     ?SetActiveApp@CRealmActivationHistory@@UEAAJW4IAM_APPLICATION_REALM@@@Z @ 0x18006F2D0 (-SetActiveApp@CRealmActivationHistory@@UEAAJW4IAM_APPLICATION_REALM@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CRealmActivationHistory::_EnsureLauncher(CRealmActivationHistory *this)
{
  unsigned int Service; // edi
  __int64 *v2; // rsi
  char *v3; // rbx
  IUnknown *punk; // [rsp+48h] [rbp+10h] BYREF

  Service = 0;
  v2 = (__int64 *)((char *)this + 408);
  if ( !*((_QWORD *)this + 51) )
  {
    v3 = (char *)this + 32;
    punk = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
    (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*(_QWORD *)v3 + 32LL))(
      v3,
      &GUID_00000000_0000_0000_c000_000000000046,
      &punk);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2);
    Service = IUnknown_QueryService(
                punk,
                (const GUID *const)&SID_ImmersiveLauncher,
                &GUID_d8d60399_a0f1_f987_5551_321fd1b49864,
                (void **)v2);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  }
  return Service;
}
