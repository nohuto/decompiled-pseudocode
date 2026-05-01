/*
 * XREFs of WINRT_GetRestrictedErrorInfo @ 0x180085904
 * Callers:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Ufrom_abi_t@01@@Z @ 0x180384D44 (--0hresult_error@winrt@@QEAA@Uhresult@1@Ufrom_abi_t@01@@Z.c)
 *     ?originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z @ 0x180384E6C (-originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall WINRT_GetRestrictedErrorInfo(__int64 a1, __int64 a2)
{
  return GetRestrictedErrorInfo(a1, a2);
}
