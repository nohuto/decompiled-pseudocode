/*
 * XREFs of ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x18000BACC
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x18000AD9C (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_2f784ef15c303f2c8d3bec493a729414__0__wistd::details::function_allocator_wistd::_Func_class_bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil____bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x18000AED0 (wistd--_Func_impl_wistd--_Callable_obj__lambda_2f784ef15c303f2c8d3bec493a729414__0__wistd--detai.c)
 *     ?ReadWnfUsageBuffer@details_abi@wil@@YA_NPEBU__WIL__WNF_STATE_NAME@@PEAE_KAEAVRawUsageIndex@12@PEAK@Z @ 0x18000BA1C (-ReadWnfUsageBuffer@details_abi@wil@@YA_NPEBU__WIL__WNF_STATE_NAME@@PEAE_KAEAVRawUsageIndex@12@P.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800095D0 (--3@YAXPEAX@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800B3794 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details_abi::RawUsageIndex::SetBuffer(
        wil::details_abi::RawUsageIndex *this,
        _WORD *a2,
        unsigned __int64 a3,
        const char *a4)
{
  void *v8; // rcx
  bool v9; // cl
  char v10; // al
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned __int64)a4 < 0xA )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xD8C,
      (unsigned int)"internal\\sdk\\inc\\wil\\staging.h",
      a4);
    __debugbreak();
  }
  v8 = (void *)*((_QWORD *)this + 6);
  if ( v8 )
  {
    operator delete(v8);
    *((_QWORD *)this + 6) = 0LL;
  }
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = (char *)a2 + a3;
  *((_BYTE *)this + 57) = 0;
  *((_QWORD *)this + 5) = &a4[(_QWORD)a2];
  v9 = a3 >= 0xA;
  if ( a3 >= 0xA )
  {
    if ( *a2 || (v10 = 0, a2[1] > *(_WORD *)this) )
      v10 = 1;
    *((_BYTE *)this + 57) = v10;
    if ( *a2
      || a2[1] != *(_WORD *)this
      || a2[2] != *((_WORD *)this + 1)
      || *((_BYTE *)a2 + 8) != *((_BYTE *)this + 4)
      || a2[3] != *((_WORD *)this + 3)
      || *((_BYTE *)a2 + 9) != *((_BYTE *)this + 8) )
    {
      v9 = 0;
    }
  }
  if ( !v9 )
  {
    *a2 = 0;
    a2[1] = *(_WORD *)this;
    a2[2] = *((_WORD *)this + 1);
    *((_BYTE *)a2 + 8) = *((_BYTE *)this + 4);
    a2[3] = *((_WORD *)this + 3);
    *((_BYTE *)a2 + 9) = *((_BYTE *)this + 8);
    *((_QWORD *)this + 4) = *((_QWORD *)this + 3) + 10LL;
  }
}
