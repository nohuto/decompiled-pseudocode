/*
 * XREFs of ?__abi_GetRuntimeClassName@?$AsyncOperationCompletedHandler@_N@Foundation@Windows@@UE$AAAJPEAPEAUHSTRING__@@@Z @ 0x18030E81C
 * Callers:
 *     ?__abi_GetRuntimeClassName@?$AsyncOperationCompletedHandler@_N@Foundation@Windows@@W7E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800E0800 (-__abi_GetRuntimeClassName@-$AsyncOperationCompletedHandler@_N@Foundation@Windows@@W7E$AAAJPEAPE.c)
 *     ?__abi_GetRuntimeClassName@?$AsyncOperationCompletedHandler@_N@Foundation@Windows@@WBA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800E0810 (-__abi_GetRuntimeClassName@-$AsyncOperationCompletedHandler@_N@Foundation@Windows@@WBA@E$AAAJPEA.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Foundation::AsyncOperationCompletedHandler<bool>::__abi_GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return __winRT::__windowsCreateString(L"Windows.Foundation.AsyncOperationCompletedHandler`1<Boolean>", 0x3Cu, a2);
}
