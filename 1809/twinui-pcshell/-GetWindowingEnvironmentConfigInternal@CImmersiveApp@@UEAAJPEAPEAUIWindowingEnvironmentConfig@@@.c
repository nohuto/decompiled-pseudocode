/*
 * XREFs of ?GetWindowingEnvironmentConfigInternal@CImmersiveApp@@UEAAJPEAPEAUIWindowingEnvironmentConfig@@@Z @ 0x18011C9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CImmersiveApp::GetWindowingEnvironmentConfigInternal(
        CImmersiveApp *this,
        struct IWindowingEnvironmentConfig **a2)
{
  struct IWindowingEnvironmentConfig **v2; // rbx

  *a2 = 0LL;
  v2 = (struct IWindowingEnvironmentConfig **)((char *)this + 648);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 81);
  *a2 = *v2;
  return 0LL;
}
