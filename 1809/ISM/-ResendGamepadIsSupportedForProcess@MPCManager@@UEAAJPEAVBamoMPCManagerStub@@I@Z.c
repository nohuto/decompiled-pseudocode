/*
 * XREFs of ?ResendGamepadIsSupportedForProcess@MPCManager@@UEAAJPEAVBamoMPCManagerStub@@I@Z @ 0x18003CF10
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FCE0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCManager::ResendGamepadIsSupportedForProcess(
        MPCManager *this,
        struct BamoMPCManagerStub *a2,
        unsigned int a3)
{
  struct MPCHolographicInputManager *Instance; // rax
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)MPCHolographicInputManager::GetInstance() + 227) )
  {
    Instance = MPCHolographicInputManager::GetInstance();
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)Instance + 227) + 24LL))(
           *((_QWORD *)Instance + 227),
           a3);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xBF,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v5);
      JUMPOUT(0x18003CF68LL);
    }
  }
  return 0LL;
}
