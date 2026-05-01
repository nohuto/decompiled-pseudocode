/*
 * XREFs of ?GetAllApplicationsByAppID@CApplicationManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z @ 0x180111450
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAllApplicationsByAppIDSafe@CApplicationManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z @ 0x1801114E0 (-GetAllApplicationsByAppIDSafe@CApplicationManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GetAllApplicationsByAppID(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        struct IObjectArray **a3)
{
  RTL_SRWLOCK *v6; // rbx
  unsigned int AllApplicationsByAppIDSafe; // edi

  v6 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  AllApplicationsByAppIDSafe = CApplicationManager::GetAllApplicationsByAppIDSafe(
                                 (CApplicationManager *)((char *)this + 80),
                                 a2,
                                 a3);
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return AllApplicationsByAppIDSafe;
}
