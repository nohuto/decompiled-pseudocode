/*
 * XREFs of ?GetPersistingStateName@CImmersiveApp@@UEAAJPEAPEAG@Z @ 0x18006F9B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::GetPersistingStateName(CImmersiveApp *this, unsigned __int16 **a2)
{
  RTL_SRWLOCK *v4; // rbx
  unsigned int v5; // esi

  *a2 = 0LL;
  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = 0;
  *a2 = 0LL;
  if ( *((_QWORD *)this + 48) )
    v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 **))(***((_QWORD ***)this + 47) + 256LL))(
           **((_QWORD **)this + 47),
           a2);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v5;
}
