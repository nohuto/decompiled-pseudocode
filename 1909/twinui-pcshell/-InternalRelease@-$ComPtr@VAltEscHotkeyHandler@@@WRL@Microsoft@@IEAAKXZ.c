/*
 * XREFs of ?InternalRelease@?$ComPtr@VAltEscHotkeyHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x180378858
 * Callers:
 *     ??$MakeAndInitialize@VAltEscHotkeyHandler@@V1@AEAPEAUIWeakReference@WeakReference@@@Details@WRL@Microsoft@@YAJPEAPEAVAltEscHotkeyHandler@@AEAPEAUIWeakReference@WeakReference@@@Z @ 0x180378510 (--$MakeAndInitialize@VAltEscHotkeyHandler@@V1@AEAPEAUIWeakReference@WeakReference@@@Details@WRL@.c)
 *     ?AltEscHotkeyHandler_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x180378748 (-AltEscHotkeyHandler_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800944E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILig_ea_1800944E0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<AltEscHotkeyHandler>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,IInputHostLayoutChanges>::Release(v1);
  }
  return result;
}
