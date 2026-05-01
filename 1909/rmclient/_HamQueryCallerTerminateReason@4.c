/*
 * XREFs of _HamQueryCallerTerminateReason@4 @ 0x10005CB0
 * Callers:
 *     <none>
 * Callees:
 *     _CempGetTokenHostInfo@8 @ 0x10005D60 (_CempGetTokenHostInfo@8.c)
 *     ?HampUtilQueryRegistryTerminateReason@@YGJPBGPAXPAW4_HAM_TERMINATE_REASON@@@Z @ 0x10005F90 (-HampUtilQueryRegistryTerminateReason@@YGJPBGPAXPAW4_HAM_TERMINATE_REASON@@@Z.c)
 *     @__security_check_cookie@4 @ 0x1000C990 (@__security_check_cookie@4.c)
 */

NTSTATUS __stdcall HamQueryCallerTerminateReason(unsigned __int16 *a1)
{
  NTSTATUS TokenHostInfo; // esi
  void *v3; // [esp+0h] [ebp-240h]
  enum _HAM_TERMINATE_REASON *v4; // [esp+4h] [ebp-23Ch]
  void *TokenHandle; // [esp+Ch] [ebp-234h] BYREF
  _BYTE v6[464]; // [esp+10h] [ebp-230h] BYREF

  TokenHandle = 0;
  TokenHostInfo = NtOpenProcessToken((HANDLE)0xFFFFFFFF, 8u, &TokenHandle);
  if ( TokenHostInfo >= 0 )
    TokenHostInfo = CempGetTokenHostInfo(TokenHandle);
  if ( TokenHandle )
    NtClose(TokenHandle);
  if ( TokenHostInfo >= 0 )
  {
    if ( (unsigned __int8)PsmIsDynamicKey(v6) )
    {
      *(_DWORD *)a1 = 0;
      return 0;
    }
    TokenHostInfo = HampUtilQueryRegistryTerminateReason(a1, v3, v4);
    if ( TokenHostInfo >= 0 )
      return 0;
  }
  return TokenHostInfo;
}
