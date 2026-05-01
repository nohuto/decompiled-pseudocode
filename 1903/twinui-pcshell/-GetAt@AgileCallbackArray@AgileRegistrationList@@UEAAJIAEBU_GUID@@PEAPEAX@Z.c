/*
 * XREFs of ?GetAt@AgileCallbackArray@AgileRegistrationList@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x180059890
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AgileRegistrationList::AgileCallbackArray::GetAt(
        AgileRegistrationList::AgileCallbackArray *this,
        unsigned int a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v4; // r10
  int v5; // eax
  const char *v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    *a4 = 0LL;
    v4 = *((_QWORD *)this + 6);
    if ( a2 >= (unsigned __int64)((*((_QWORD *)this + 7) - v4) >> 3) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x64,
        (unsigned int)"internal\\shell\\private\\inc\\agileregistrationlist.h",
        (const char *)0x8000000BLL,
        -2);
      result = 2147483659LL;
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, void **))(**(_QWORD **)(v4 + 8LL * a2) + 24LL))(
             *(_QWORD *)(v4 + 8LL * a2),
             a3,
             a4);
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x4D5,
          (unsigned int)"internal\\sdk\\inc\\wil\\opensource/wil/com.h",
          (const char *)(unsigned int)v5,
          -2);
        JUMPOUT(0x1800EC060LL);
      }
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x68,
                           (unsigned int)"internal\\shell\\private\\inc\\agileregistrationlist.h",
                           v6);
  }
  return result;
}
