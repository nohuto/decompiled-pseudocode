/*
 * XREFs of ?_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z @ 0x180068C68
 * Callers:
 *     _lambda_f6f69901abcf4556c2ac2b4f02b3e468_::operator() @ 0x18004DC4C (_lambda_f6f69901abcf4556c2ac2b4f02b3e468_--operator().c)
 *     ?_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@@@Z @ 0x180068BD0 (-_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_fdd7dd8b55d2d1fe60d2e8a8836eb722___1_long_::Invoke @ 0x180105220 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)___ea_180105220.c)
 *     ?LockAutoRotation@CRotationManagerSync@@UEAAJXZ @ 0x180105270 (-LockAutoRotation@CRotationManagerSync@@UEAAJXZ.c)
 *     ?UnlockAutoRotation@CRotationManagerSync@@UEAAJXZ @ 0x1801054A0 (-UnlockAutoRotation@CRotationManagerSync@@UEAAJXZ.c)
 * Callees:
 *     McTemplateU0 @ 0x180068CD8 (McTemplateU0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRotationManagerSync::_SetActiveProcessForRotation(CRotationManagerSync *this, unsigned int a2)
{
  __int64 v3; // rcx

  if ( *((_BYTE *)this + 128) )
  {
    *((_DWORD *)this + 33) = a2;
  }
  else
  {
    if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      McTemplateU0(this, &ImmersiveShell_AppManager_SetActiveProcess_Start);
    (*(void (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[16].Ptr + 32LL))(
      CApplicationManagerUtility::g_pIAMGlobals[16].Ptr,
      a2);
    if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      McTemplateU0(v3, &ImmersiveShell_AppManager_SetActiveProcess_Stop);
  }
}
