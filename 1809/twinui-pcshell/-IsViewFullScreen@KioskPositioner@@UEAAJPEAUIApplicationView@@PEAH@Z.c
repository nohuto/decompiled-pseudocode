/*
 * XREFs of ?IsViewFullScreen@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x180098BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18007F754 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ?FindView@ApplicationViewCollection@@AEAA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@PEAUIApplicationView@@@Z @ 0x180097BE4 (-FindView@ApplicationViewCollection@@AEAA-AV-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_t.c)
 *     ??1CAutoSRWSharedLock@@QEAA@XZ @ 0x1800DE21C (--1CAutoSRWSharedLock@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KioskPositioner::IsViewFullScreen(RTL_SRWLOCK *this, struct IUnknown *a2, int *a3)
{
  RTL_SRWLOCK *v5; // rbx
  struct IUnknown **Ptr; // r14
  struct IUnknown **v7; // rbx
  const char *v8; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  RTL_SRWLOCK *v11; // [rsp+50h] [rbp+8h] BYREF
  struct IUnknown **v12; // [rsp+68h] [rbp+20h] BYREF

  v5 = this + 60;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 63, &v11);
  Ptr = (struct IUnknown **)v5[1].Ptr;
  try
  {
    v7 = *ApplicationViewCollection::FindView((struct IUnknown ***)v5, &v12, a2);
    CAutoSRWSharedLock::~CAutoSRWSharedLock((CAutoSRWSharedLock *)&v11);
    *a3 = v7 != Ptr;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x373,
                           (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           v8);
  }
  return result;
}
