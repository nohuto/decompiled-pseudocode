/*
 * XREFs of ?__abi_GetIids@?$AsyncOperationCompletedHandler@_N@Foundation@Windows@@UE$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x18030E70C
 * Callers:
 *     ?__abi_GetIids@?$AsyncOperationCompletedHandler@_N@Foundation@Windows@@W7E$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x1800E07A0 (-__abi_GetIids@-$AsyncOperationCompletedHandler@_N@Foundation@Windows@@W7E$AAAJPEAKPEAPEAVGuid@P.c)
 *     ?__abi_GetIids@?$AsyncOperationCompletedHandler@_N@Foundation@Windows@@WBA@E$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x1800E07B0 (-__abi_GetIids@-$AsyncOperationCompletedHandler@_N@Foundation@Windows@@WBA@E$AAAJPEAKPEAPEAVGuid.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z @ 0x18008DE18 (-__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z.c)
 */

int __fastcall Windows::Foundation::AsyncOperationCompletedHandler<bool>::__abi_GetIids(
        __int64 a1,
        unsigned int *a2,
        struct Platform::Guid **a3)
{
  __int64 v4; // [rsp+20h] [rbp-20h] BYREF
  int v5; // [rsp+28h] [rbp-18h]
  int v6; // [rsp+2Ch] [rbp-14h]

  v5 = -1873978735;
  v6 = -1518122057;
  return __winRT::__getIids(
           (__winRT *)1,
           a2,
           (const struct __s_GUID *)&v4,
           a3,
           (struct Platform::Guid **)0x4478E5D8FCDCF02CLL);
}
