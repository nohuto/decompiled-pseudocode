/*
 * XREFs of ?SetActiveApp@CRealmActivationHistory@@UEAAJW4IAM_APPLICATION_REALM@@@Z @ 0x180074140
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetRealmForActivation@CRealmActivationHistory@@AEAA?AUREALM_ACTIVATION@@W4IAM_APPLICATION_REALM@@@Z @ 0x18007424C (-_GetRealmForActivation@CRealmActivationHistory@@AEAA-AUREALM_ACTIVATION@@W4IAM_APPLICATION_REAL.c)
 *     ?_EnsureLauncher@CRealmActivationHistory@@AEAAJXZ @ 0x1800742D4 (-_EnsureLauncher@CRealmActivationHistory@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_TrySwitchToMarkedWindow@CRealmActivationHistory@@AEAAJXZ @ 0x18013AB70 (-_TrySwitchToMarkedWindow@CRealmActivationHistory@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CRealmActivationHistory::SetActiveApp(_QWORD **a1, unsigned int a2)
{
  unsigned int v4; // ebx
  HRESULT Service; // ebx
  unsigned int v8; // esi
  int v9; // [rsp+20h] [rbp-30h] BYREF
  void *ppvOut[2]; // [rsp+28h] [rbp-28h] BYREF
  IUnknown *punk[2]; // [rsp+38h] [rbp-18h] BYREF

  ppvOut[1] = (void *)-2LL;
  v9 = 0;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = *(_DWORD *)CRealmActivationHistory::_GetRealmForActivation(a1 - 9, punk, a2);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( a2 == 16 && !v4 )
    v4 = 16;
  if ( (a2 & 4) != 0
    && v4 - 1 <= 1
    && (int)CRealmActivationHistory::_EnsureLauncher((CRealmActivationHistory *)(a1 - 9)) >= 0
    && (*(int (__fastcall **)(_QWORD *, int *))(*a1[42] + 56LL))(a1[42], &v9) >= 0
    && v9 )
  {
    v4 = 4;
  }
  switch ( v4 )
  {
    case 1u:
    case 2u:
      return (unsigned int)(*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1[41] + 128LL))(a1[41], v4, 0LL);
    case 4u:
      Service = CRealmActivationHistory::_EnsureLauncher((CRealmActivationHistory *)(a1 - 9));
      if ( Service < 0 )
        return (unsigned int)Service;
      Service = (*(__int64 (__fastcall **)(_QWORD *, int *))(*a1[42] + 56LL))(a1[42], &v9);
      if ( Service < 0 )
        return (unsigned int)Service;
      if ( v9 )
        return (unsigned int)(*(__int64 (__fastcall **)(_QWORD *))(*a1[42] + 72LL))(a1[42]);
      v8 = a2 & 0xFFFFFFFB;
      return ((unsigned int (__fastcall *)(_QWORD **, _QWORD))(*a1)[3])(a1, v8);
    case 8u:
      Service = CRealmActivationHistory::_TrySwitchToMarkedWindow((CRealmActivationHistory *)(a1 - 9));
      if ( Service >= 0 )
        return (unsigned int)Service;
      v8 = a2 & 0xFFFFFFF7;
      return ((unsigned int (__fastcall *)(_QWORD **, _QWORD))(*a1)[3])(a1, v8);
    case 0x10u:
      ppvOut[0] = 0LL;
      punk[0] = 0LL;
      v9 = 2;
      ((void (__fastcall *)(_QWORD **, GUID *, IUnknown **))(*(a1 - 5))[4])(
        a1 - 5,
        &GUID_00000000_0000_0000_c000_000000000046,
        punk);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppvOut);
      Service = IUnknown_QueryService(
                  punk[0],
                  &GUID_584fdf8e_cd5b_4cd6_ae98_502c34817e0e,
                  &GUID_584fdf8e_cd5b_4cd6_ae98_502c34817e0e,
                  ppvOut);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)punk);
      if ( Service >= 0 )
        Service = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ppvOut[0] + 56LL))(ppvOut[0]);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppvOut);
      break;
    default:
      Service = -2147319765;
      break;
  }
  return (unsigned int)Service;
}
