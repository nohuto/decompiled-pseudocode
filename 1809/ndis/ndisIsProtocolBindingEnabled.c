/*
 * XREFs of ndisIsProtocolBindingEnabled @ 0x1C01061F8
 * Callers:
 *     ?ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z @ 0x1C0105B18 (-ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     ?netsetupBuildBindingRegistryPath@@YAXW4NetSetupStoreType@@W4NetSetupSubkeyType@@AEBU_GUID@@PEBU3@33PEA_W@Z @ 0x1C0103B7C (-netsetupBuildBindingRegistryPath@@YAXW4NetSetupStoreType@@W4NetSetupSubkeyType@@AEBU_GUID@@PEBU.c)
 *     ndisIsBindPathEnabled @ 0x1C0105F70 (ndisIsBindPathEnabled.c)
 */

__int64 __fastcall ndisIsProtocolBindingEnabled(unsigned int *a1, __int64 a2, bool *a3)
{
  int v6; // ecx
  wchar_t v8[256]; // [rsp+40h] [rbp-218h] BYREF

  if ( a1[16] || (v6 = 0, *(_DWORD *)(a2 + 60)) )
    v6 = 1;
  netsetupBuildBindingRegistryPath(v6, 0LL, a1, (_DWORD *)a2, 0LL, 0LL, v8);
  return ndisIsBindPathEnabled(v8, *(_BYTE *)(a2 + 56), a3);
}
