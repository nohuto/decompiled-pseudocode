/*
 * XREFs of ?OnProcessTerminated@DynamicAudioEndpointManager@@UEAAXPEAUIAudioProcess@@PEAUIUnknown@@@Z @ 0x18012AF60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY08_N@Z @ 0x18012B6AC (-RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY08_N@Z.c)
 */

void __fastcall DynamicAudioEndpointManager::OnProcessTerminated(
        DynamicAudioEndpointManager *this,
        struct IAudioProcess *a2,
        struct IUnknown *a3)
{
  __int128 v3; // [rsp+30h] [rbp-28h] BYREF
  __int16 v4; // [rsp+40h] [rbp-18h]

  v3 = 0uLL;
  v4 = 0;
  DynamicAudioEndpointManager::RemoveRule(this, a2, a3, 1, (bool (*const)[9])&v3);
}
