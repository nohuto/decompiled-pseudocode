/*
 * XREFs of ?GetValueAt@ActivationHints@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x1803AB830
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?copy_to@?$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEBAXAEBU_GUID@@PEAPEAX@Z @ 0x1803ABA38 (-copy_to@-$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@wil@@QEBAXAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ActivationHints::GetValueAt(RTL_SRWLOCK *this, unsigned int a2, const struct _GUID *a3, void **a4)
{
  unsigned __int64 v6; // r15
  RTL_SRWLOCK *v8; // rbx
  char *Ptr; // r9
  const char *v10; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = a2;
  *a4 = 0LL;
  v8 = this + 6;
  AcquireSRWLockExclusive(this + 6);
  try
  {
    Ptr = (char *)this[7].Ptr;
    if ( v6 >= ((char *)this[8].Ptr - (char *)Ptr) / 80 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        55LL,
        (__int64)"pcshell\\twinui\\apppositioner\\lib\\activationhints.cpp",
        (const char *)0x8000000BLL);
    wil::com_ptr_t<IUnknown,wil::err_exception_policy>::copy_to(&Ptr[80 * v6 + 72], a3, a4);
    if ( v8 )
      ReleaseSRWLockExclusive(v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3C,
                           (__int64)"pcshell\\twinui\\apppositioner\\lib\\activationhints.cpp",
                           v10);
  }
  return result;
}
