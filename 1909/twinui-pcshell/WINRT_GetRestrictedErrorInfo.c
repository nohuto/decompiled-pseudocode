/*
 * XREFs of WINRT_GetRestrictedErrorInfo @ 0x18008B20C
 * Callers:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Ufrom_abi_t@01@@Z @ 0x1801ED274 (--0hresult_error@winrt@@QEAA@Uhresult@1@Ufrom_abi_t@01@@Z.c)
 *     ?originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z @ 0x1801ED4E8 (-originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 WINRT_GetRestrictedErrorInfo()
{
  return GetRestrictedErrorInfo();
}
