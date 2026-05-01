/*
 * XREFs of ?__abi_GetIids@BecameEmptyEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x180308EA4
 * Callers:
 *     ?__abi_GetIids@BecameEmptyEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x1800E03A0 (-__abi_GetIids@BecameEmptyEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E.c)
 *     ?__abi_GetIids@BecameEmptyEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAJPEAKPEAPEAVGuid@Platform@@@Z @ 0x1800E03B0 (-__abi_GetIids@BecameEmptyEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z @ 0x18008DE18 (-__getIids@__winRT@@YAJHPEAKPEBU__s_GUID@@PEAPEAVGuid@Platform@@@Z.c)
 */

int __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::BecameEmptyEventHandler::__abi_GetIids(
        __int64 a1,
        unsigned int *a2,
        struct Platform::Guid **a3)
{
  __int64 v4; // [rsp+20h] [rbp-20h] BYREF
  int v5; // [rsp+28h] [rbp-18h]
  int v6; // [rsp+2Ch] [rbp-14h]

  v5 = 992800909;
  v6 = 45768987;
  return __winRT::__getIids(
           (__winRT *)1,
           a2,
           (const struct __s_GUID *)&v4,
           a3,
           (struct Platform::Guid **)0x3CA85685E3170B3CLL);
}
