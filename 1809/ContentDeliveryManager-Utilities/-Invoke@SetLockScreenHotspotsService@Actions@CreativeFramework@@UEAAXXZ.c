/*
 * XREFs of ?Invoke@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800937C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetLockScreenRegistryKeys@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ @ 0x180093958 (-SetLockScreenRegistryKeys@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ.c)
 *     ?NotifyForLockScreenUpdates@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ @ 0x180093C98 (-NotifyForLockScreenUpdates@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ.c)
 */

void __fastcall CreativeFramework::Actions::SetLockScreenHotspotsService::Invoke(
        CreativeFramework::Actions::SetLockScreenHotspotsService *this)
{
  int v2; // eax
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CreativeFramework::Actions::SetLockScreenHotspotsService::SetLockScreenRegistryKeys(this);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x53,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  if ( *((_BYTE *)this + 124) )
  {
    v3 = CreativeFramework::Actions::SetLockScreenHotspotsService::NotifyForLockScreenUpdates(this);
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
        (const char *)(unsigned int)v3);
      JUMPOUT(0x18009381DLL);
    }
  }
}
