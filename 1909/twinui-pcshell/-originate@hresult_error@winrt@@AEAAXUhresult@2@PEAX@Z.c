/*
 * XREFs of ?originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z @ 0x1801ED4E8
 * Callers:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Ufrom_abi_t@01@@Z @ 0x1801ED274 (--0hresult_error@winrt@@QEAA@Uhresult@1@Ufrom_abi_t@01@@Z.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@@Z @ 0x1801FD834 (--0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@@Z.c)
 * Callees:
 *     RoOriginateLanguageException_0 @ 0x18008E779 (RoOriginateLanguageException_0.c)
 */

__int64 winrt::hresult_error::originate()
{
  RoOriginateLanguageException_0();
  return WINRT_GetRestrictedErrorInfo();
}
