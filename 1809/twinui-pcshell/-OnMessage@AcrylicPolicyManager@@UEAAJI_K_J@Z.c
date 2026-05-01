/*
 * XREFs of ?OnMessage@AcrylicPolicyManager@@UEAAJI_K_J@Z @ 0x1800E66A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateAcrylicState@AcrylicPolicyManager@@AEAAJ_N@Z @ 0x1800E76B8 (-UpdateAcrylicState@AcrylicPolicyManager@@AEAAJ_N@Z.c)
 *     ?IsDeviceAcrylicCapable@@YA_NXZ @ 0x1800E7968 (-IsDeviceAcrylicCapable@@YA_NXZ.c)
 *     ?_IsHighContrast@AcrylicPolicyManager@@CA_NXZ @ 0x1800E79DC (-_IsHighContrast@AcrylicPolicyManager@@CA_NXZ.c)
 */

__int64 __fastcall AcrylicPolicyManager::OnMessage(AcrylicPolicyManager *this, int a2)
{
  int v3; // edx
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = a2 - 794;
  if ( v3 )
  {
    if ( v3 == 4 )
      *((_BYTE *)this + 324) = IsDeviceAcrylicCapable();
  }
  else
  {
    *((_BYTE *)this + 321) = AcrylicPolicyManager::_IsHighContrast();
  }
  updated = AcrylicPolicyManager::UpdateAcrylicState((AcrylicPolicyManager *)((char *)this - 128), 0);
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      236LL,
      (__int64)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
      (const char *)(unsigned int)updated);
  return 0LL;
}
