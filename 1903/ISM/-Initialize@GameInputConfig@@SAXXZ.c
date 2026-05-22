/*
 * XREFs of ?Initialize@GameInputConfig@@SAXXZ @ 0x180029B44
 * Callers:
 *     ?HitTest@MPCInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x18000C7C0 (-HitTest@MPCInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z.c)
 *     ?DecideRoutingModeFromHitTestResult@@YA?AW4INPUT_DESTINATION_ROUTING_MODE@@_N0PEBU_InputHitTestRequest@@@Z @ 0x1800C32D0 (-DecideRoutingModeFromHitTestResult@@YA-AW4INPUT_DESTINATION_ROUTING_MODE@@_N0PEBU_InputHitTestR.c)
 * Callees:
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x18001616C (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002B220 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18002C79C (--2@YAPEAX_K@Z.c)
 */

void GameInputConfig::Initialize(void)
{
  __int64 *v0; // rbx
  std::_Ref_count_base *v1; // rcx
  HKEY v2; // rcx
  char *v3; // [rsp+40h] [rbp+8h]

  if ( !GameInputConfig::s_gameInputConfig )
  {
    v3 = (char *)operator new(0x20uLL);
    *((_DWORD *)v3 + 2) = 1;
    v0 = (__int64 *)(v3 + 16);
    *((_DWORD *)v3 + 3) = 1;
    *(_QWORD *)v3 = &std::_Ref_count_obj<GameInputConfig>::`vftable';
    *((_QWORD *)v3 + 2) = 0LL;
    *((_QWORD *)v3 + 3) = 0LL;
    *((_QWORD *)v3 + 2) = 0LL;
    v1 = qword_1801E15A0;
    GameInputConfig::s_gameInputConfig = v3 + 16;
    qword_1801E15A0 = (std::_Ref_count_base *)v3;
    if ( v1 )
    {
      std::_Ref_count_base::_Decref(v1);
      v0 = (__int64 *)GameInputConfig::s_gameInputConfig;
    }
    Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(v0);
    if ( (int)RegistryWatcher::Create(
                v2,
                L"Software\\Microsoft\\Input\\Settings\\GameInputConfig",
                GameInputConfig::s_gameInputConfig,
                lambda_e09d28e09ca09f56318dff9b60cb8a20_::_lambda_invoker_cdecl_,
                (struct RegistryWatcher **)v0) < 0 )
      *((_BYTE *)GameInputConfig::s_gameInputConfig + 8) = 0;
  }
}
