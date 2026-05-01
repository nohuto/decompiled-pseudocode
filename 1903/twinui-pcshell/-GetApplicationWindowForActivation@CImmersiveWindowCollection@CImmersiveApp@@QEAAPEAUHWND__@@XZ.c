/*
 * XREFs of ?GetApplicationWindowForActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAPEAUHWND__@@XZ @ 0x180143A24
 * Callers:
 *     ?GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAUHWND__@@@Z @ 0x180016210 (-GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAU.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindowForActivation(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  __int64 v2; // rbx

  v2 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 21) + 128LL))(**((_QWORD **)this + 21)) )
    return (*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 21) + 32LL))(**((_QWORD **)this + 21));
  return v2;
}
