/*
 * XREFs of ndisIsLwfBindingEnabled_0 @ 0x1C01264AC
 * Callers:
 *     ?ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z @ 0x1C0125E24 (-ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z.c)
 *     ndisBuildMonitoringLwfBindings @ 0x1C0126020 (ndisBuildMonitoringLwfBindings.c)
 *     ndisIsLwfBindingEnabled @ 0x1C0126408 (ndisIsLwfBindingEnabled.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     ?netsetupBuildBindingRegistryPath@@YAXW4NetSetupStoreType@@W4NetSetupSubkeyType@@AEBU_GUID@@PEBU3@33PEA_W@Z @ 0x1C0123FDC (-netsetupBuildBindingRegistryPath@@YAXW4NetSetupStoreType@@W4NetSetupSubkeyType@@AEBU_GUID@@PEBU.c)
 *     ndisIsBindPathEnabled @ 0x1C01262B4 (ndisIsBindPathEnabled.c)
 */

__int64 __fastcall ndisIsLwfBindingEnabled_0(unsigned int *a1, __int64 a2, bool *a3)
{
  int v6; // ecx
  wchar_t v8[256]; // [rsp+40h] [rbp-218h] BYREF

  if ( a1[16] || (v6 = 0, *(_DWORD *)(a2 + 56)) )
    v6 = 1;
  netsetupBuildBindingRegistryPath(v6, 0LL, a1, 0LL, (_DWORD *)a2, 0LL, v8);
  return ndisIsBindPathEnabled(v8, *(_BYTE *)(a2 + 52), a3);
}
