/*
 * XREFs of ?__abi_GetIids@WindowActivatedEventHandler@Xaml@UI@Windows@@UE$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x180277F7C
 * Callers:
 *     ?__abi_GetIids@WindowActivatedEventHandler@Xaml@UI@Windows@@W7E$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x1800A4CF0 (-__abi_GetIids@WindowActivatedEventHandler@Xaml@UI@Windows@@W7E$AAAJPEAKPEAPEAVGuid@Platform@@@Z.c)
 *     ?__abi_GetIids@WindowActivatedEventHandler@Xaml@UI@Windows@@WBA@E$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x1800A4D00 (-__abi_GetIids@WindowActivatedEventHandler@Xaml@UI@Windows@@WBA@E$AAAJPEAKPEAPEAVGuid@Platform@@.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z @ 0x180088448 (-__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z.c)
 */

int __fastcall Windows::UI::Xaml::WindowActivatedEventHandler::__abi_GetIids(
        __int64 a1,
        unsigned int *a2,
        struct Platform::Guid **a3)
{
  __int64 v4; // [rsp+20h] [rbp-20h] BYREF
  int v5; // [rsp+28h] [rbp-18h]
  int v6; // [rsp+2Ch] [rbp-14h]

  v5 = -724683595;
  v6 = 434281821;
  return __winRT::__getIids(
           (__winRT *)1,
           a2,
           (const struct __s_GUID *)&v4,
           a3,
           (struct Platform::Guid **)0x4C7B861918026348LL);
}
