/*
 * XREFs of ?OnGazeUpdate@MPCSixDofProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180130F00
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x180057368 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800863AC (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800868F0 (-OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 */

void __fastcall MPCSixDofProcessor::OnGazeUpdate(unsigned __int64 this, struct InputInfo *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 *v5; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  MPCGestureHandlerManager::GetInstance();
  v4 = v3;
  v5 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
         &v6,
         this & -(__int64)(this != 24));
  MPCGestureHandlerManager::OnGazeUpdate(v4, v5);
}
