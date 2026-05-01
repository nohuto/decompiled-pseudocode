/*
 * XREFs of ?originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z @ 0x180384E6C
 * Callers:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Ufrom_abi_t@01@@Z @ 0x180384D44 (--0hresult_error@winrt@@QEAA@Uhresult@1@Ufrom_abi_t@01@@Z.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@@Z @ 0x180396EA0 (--0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@@Z.c)
 * Callees:
 *     RoOriginateLanguageException_0 @ 0x180088C21 (RoOriginateLanguageException_0.c)
 */

__int64 __fastcall winrt::hresult_error::originate(__int64 a1)
{
  __int64 v2; // rdx

  RoOriginateLanguageException_0();
  return WINRT_GetRestrictedErrorInfo(a1 + 16, v2);
}
