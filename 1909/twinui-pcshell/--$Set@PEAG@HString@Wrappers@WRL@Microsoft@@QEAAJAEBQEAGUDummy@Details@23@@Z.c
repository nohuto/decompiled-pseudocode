/*
 * XREFs of ??$Set@PEAG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAGUDummy@Details@23@@Z @ 0x18024638C
 * Callers:
 *     ?GetAumid@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x18024EA50 (-GetAumid@@YA-AVHString@Wrappers@WRL@Microsoft@@PEAUIApplicationView@@@Z.c)
 *     ?InitializeHighContrastListener@DefaultIconManager@@AEAAJXZ @ 0x180272098 (-InitializeHighContrastListener@DefaultIconManager@@AEAAJXZ.c)
 *     ?OnMessage@DefaultIconManager@@UEAAJI_K_J@Z @ 0x1802721F0 (-OnMessage@DefaultIconManager@@UEAAJI_K_J@Z.c)
 *     _anonymous_namespace_::GetFriendlyNameForExe @ 0x18035DA28 (_anonymous_namespace_--GetFriendlyNameForExe.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Microsoft::WRL::Wrappers::HString::Set<unsigned short *>(HSTRING *a1, const wchar_t **a2)
{
  const wchar_t *v2; // rdx
  UINT32 v3; // r8d
  unsigned __int64 v4; // rax

  v2 = *a2;
  v3 = 0;
  if ( v2 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v2[v4] );
    if ( v4 > 0xFFFFFFFF )
      return -2147024362;
    v3 = v4;
  }
  else
  {
    v2 = &szAgent;
  }
  return Microsoft::WRL::Wrappers::HString::Set(a1, v2, v3);
}
