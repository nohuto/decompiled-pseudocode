/*
 * XREFs of ?IsViewFullScreen@KioskPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x18039D650
 * Callers:
 *     <none>
 * Callees:
 *     ?FindView@ApplicationViewCollection@@AEAA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@PEAUIApplicationView@@@Z @ 0x18039C664 (-FindView@ApplicationViewCollection@@AEAA-AV-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_t.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KioskPositioner::IsViewFullScreen(RTL_SRWLOCK *this, struct IUnknown *a2, int *a3)
{
  struct IUnknown ***v5; // rbx
  RTL_SRWLOCK *v6; // rdi
  struct IUnknown ***View; // rax
  const char *v8; // r9
  struct IUnknown **v9; // r14
  struct IUnknown **v10; // r15
  int v11; // ebx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IUnknown **v14; // [rsp+68h] [rbp+20h] BYREF

  v5 = (struct IUnknown ***)&this[63];
  v6 = this + 66;
  AcquireSRWLockShared(this + 66);
  try
  {
    View = ApplicationViewCollection::FindView(v5, &v14, a2);
    v9 = v5[1];
    v10 = *View;
    v11 = 0;
    if ( v6 )
      ReleaseSRWLockShared(v6);
    LOBYTE(v11) = v10 != v9;
    *a3 = v11;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x35E,
                           (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           v8);
  }
  return result;
}
