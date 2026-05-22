/*
 * XREFs of ??$_Callback_once@V?$tuple@$$QEAV_lambda_4bfd0116db80ce4255855ce8af72e9c8_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x18003BDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003618 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0MPC3DStateHelper@@AEAA@XZ @ 0x18003AA4C (--0MPC3DStateHelper@@AEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall std::_Callback_once<std::tuple<_lambda_4bfd0116db80ce4255855ce8af72e9c8_ &&,std::exception_ptr &>,std::integer_sequence<unsigned __int64,0>,1>(
        __int64 a1,
        void **a2)
{
  MPC3DStateHelper *v2; // rcx
  const char *v3; // r9
  __int64 result; // rax
  void *v5; // rbx
  _BYTE v6[32]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  try
  {
    v2 = (MPC3DStateHelper *)operator new(0x50uLL);
    MPC3DStateHelper::s_instance = MPC3DStateHelper::MPC3DStateHelper(v2);
    if ( !SetEvent(MPC3DStateHelper::s_isInstanceCreatedEvent) )
    {
      wil::details::in1diag3::FailFast_GetLastError(
        retaddr,
        (void *)0x904,
        (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
        v3);
      JUMPOUT(0x18003BE46LL);
    }
    result = 1LL;
  }
  catch ( ... )
  {
    v5 = *a2;
    __ExceptionPtrCreate(v6);
    __ExceptionPtrCurrentException(v6);
    __ExceptionPtrAssign(v5, v6);
    __ExceptionPtrDestroy(v6);
    return 0LL;
  }
  return result;
}
