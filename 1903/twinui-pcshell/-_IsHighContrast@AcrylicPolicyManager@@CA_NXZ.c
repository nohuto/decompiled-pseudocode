/*
 * XREFs of ?_IsHighContrast@AcrylicPolicyManager@@CA_NXZ @ 0x1801097C4
 * Callers:
 *     ?OnMessage@AcrylicPolicyManager@@UEAAJI_K_J@Z @ 0x180108830 (-OnMessage@AcrylicPolicyManager@@UEAAJI_K_J@Z.c)
 *     ?SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180109370 (-SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL AcrylicPolicyManager::_IsHighContrast(void)
{
  BOOL result; // eax
  int pvParam; // [rsp+20h] [rbp-18h] BYREF
  __int64 v2; // [rsp+24h] [rbp-14h]
  int v3; // [rsp+2Ch] [rbp-Ch]

  pvParam = 16;
  v2 = 0LL;
  v3 = 0;
  result = SystemParametersInfoW(0x42u, 0x10u, &pvParam, 0);
  if ( result )
    return v2 & 1;
  return result;
}
