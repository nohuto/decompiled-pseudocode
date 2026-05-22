/*
 * XREFs of wistd::__function::__func__lambda_8db0ce862824541f40dfb767113f1e28__bool___cdecl(void___unsigned___int64_void___unsigned___int64_unsigned_int)_::operator() @ 0x18004EC90
 * Callers:
 *     <none>
 * Callees:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x1800509BC (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 */

char __fastcall wistd::__function::__func__lambda_8db0ce862824541f40dfb767113f1e28__bool___cdecl_void___unsigned___int64_void___unsigned___int64_unsigned_int__::operator()(
        __int64 a1,
        void **a2,
        unsigned __int64 *a3,
        void **a4,
        unsigned __int64 *a5,
        unsigned int *a6)
{
  bool v7; // al
  char v8; // dl

  if ( **(_QWORD **)(a1 + 8) < **(_QWORD **)(a1 + 16)
    || (v7 = wil::details_abi::RawUsageIndex::RecordUsage(
               *(wil::details_abi::RawUsageIndex **)(a1 + 24),
               *a2,
               *a3,
               *a4,
               *a5,
               *a6),
        v8 = 0,
        v7) )
  {
    v8 = 1;
    ++**(_QWORD **)(a1 + 8);
  }
  return v8;
}
