/*
 * XREFs of ??$MakeAndInitializeOrThrow@VShellHookRegistration@details@AppViewEventHelpers@@AEAPEAUIImmersiveShellHookNotification@@@wil@@YA?AV?$ComPtr@VShellHookRegistration@details@AppViewEventHelpers@@@WRL@Microsoft@@AEAPEAUIImmersiveShellHookNotification@@@Z @ 0x1802A8CC8
 * Callers:
 *     ?Register@?$EventListener@UIImmersiveShellHookService@@UIImmersiveShellHookNotification@@VShellHookRegistration@details@AppViewEventHelpers@@@AppViewEventHelpers@@QEAAJPEAUIImmersiveShellHookService@@@Z @ 0x1802AE588 (-Register@-$EventListener@UIImmersiveShellHookService@@UIImmersiveShellHookNotification@@VShellH.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VShellHookRegistration@details@AppViewEventHelpers@@V123@AEAPEAUIImmersiveShellHookNotification@@@Details@WRL@Microsoft@@YAJPEAPEAVShellHookRegistration@details@AppViewEventHelpers@@AEAPEAUIImmersiveShellHookNotification@@@Z @ 0x1802A893C (--$MakeAndInitialize@VShellHookRegistration@details@AppViewEventHelpers@@V123@AEAPEAUIImmersiveS.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeAndInitializeOrThrow<AppViewEventHelpers::details::ShellHookRegistration,IImmersiveShellHookNotification * &>(
        __int64 *a1,
        __int64 *a2)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<AppViewEventHelpers::details::ShellHookRegistration,AppViewEventHelpers::details::ShellHookRegistration,IImmersiveShellHookNotification * &>(
         a1,
         a2);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      36LL,
      (__int64)"internal\\sdk\\inc\\wil/wrl.h",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  return a1;
}
