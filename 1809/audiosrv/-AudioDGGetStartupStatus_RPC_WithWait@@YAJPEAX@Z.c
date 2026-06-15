/*
 * XREFs of ?AudioDGGetStartupStatus_RPC_WithWait@@YAJPEAX@Z @ 0x180042DB0
 * Callers:
 *     ?CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ @ 0x180042D40 (-CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800C2BC4 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall AudioDGGetStartupStatus_RPC_WithWait(void *a1)
{
  int Pointer; // eax
  unsigned int v2; // ebx
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Pointer = (unsigned int)NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 0, 0LL, a1).Pointer;
  v2 = Pointer;
  if ( Pointer >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD2,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
    (const char *)(unsigned int)Pointer,
    v4);
  return v2;
}
