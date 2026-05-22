/*
 * XREFs of ?Process3DInput@MPCEyeGazeProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18013EDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180021360 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180082828 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCEyeGazeProcessor::Process3DInput(unsigned __int64 this, struct InputInfo *a2)
{
  MPCHolographicInputManager *Instance; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IMPCTarget *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  Instance = MPCHolographicInputManager::GetInstance();
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v9);
  v5 = MPCHolographicInputManager::Process3DInput(
         Instance,
         a2,
         (struct IMPCInputProviderBase *)(this & -(__int64)(this != 24)),
         &v9);
  v6 = v5;
  if ( v5 >= 0 )
    v6 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpceyegazeprocessor.cpp",
      (const char *)(unsigned int)v5);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v9);
  return v6;
}
