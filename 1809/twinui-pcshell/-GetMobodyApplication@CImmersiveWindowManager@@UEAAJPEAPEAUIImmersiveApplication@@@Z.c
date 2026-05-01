/*
 * XREFs of ?GetMobodyApplication@CImmersiveWindowManager@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x1800FF6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveWindowManager::GetMobodyApplication(
        CImmersiveWindowManager *this,
        struct IImmersiveApplication **a2)
{
  int v4; // ebx
  __int64 (__fastcall ***v6)(_QWORD, GUID *, struct IImmersiveApplication **); // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v6 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v6);
  v4 = (*(__int64 (__fastcall **)(char *, __int64 (__fastcall ****)(_QWORD, GUID *, struct IImmersiveApplication **)))(*((_QWORD *)this + 2) + 24LL))(
         (char *)this + 16,
         &v6);
  if ( v4 >= 0 )
    v4 = (**v6)(v6, &GUID_8b14e88b_5663_4caf_b196_c31479262831, a2);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v6);
  return (unsigned int)v4;
}
