/*
 * XREFs of _lambda_2b98ef75b445f08568c37aeca5d9510e_::operator() @ 0x180152430
 * Callers:
 *     ?PrecacheProperties@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJXZ @ 0x18015B2E0 (-PrecacheProperties@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJXZ.c)
 * Callees:
 *     ?IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z @ 0x18015989C (-IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z.c)
 *     ?PrecachePropertiesElapsedTime_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@_K@Z @ 0x18015B448 (-PrecachePropertiesElapsedTime_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180161844 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

char __fastcall lambda_2b98ef75b445f08568c37aeca5d9510e_::operator()(__int64 a1)
{
  ULONGLONG TickCount64; // rdi
  _QWORD *v3; // rax
  __int64 v4; // rbx
  ULONGLONG v5; // rdi
  unsigned __int64 v6; // rdx
  unsigned __int8 v7; // cl
  char result; // al
  __int64 v9; // rcx
  __int64 v10; // rcx

  TickCount64 = GetTickCount64();
  v3 = *(_QWORD **)a1;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = TickCount64 - *v3;
  result = HolographicDriverClientTrace::IsEnabled(v7, v6);
  if ( result )
  {
    wil::details::static_lazy<HolographicDriverClientTrace>::get(
      v9,
      lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
    return HolographicDriverClientTrace::PrecachePropertiesElapsedTime_(v10, 1LL, v4 + 80, v5);
  }
  return result;
}
