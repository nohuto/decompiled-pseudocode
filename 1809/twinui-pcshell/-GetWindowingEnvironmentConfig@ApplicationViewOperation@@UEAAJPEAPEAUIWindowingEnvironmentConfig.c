/*
 * XREFs of ?GetWindowingEnvironmentConfig@ApplicationViewOperation@@UEAAJPEAPEAUIWindowingEnvironmentConfig@@@Z @ 0x180141950
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall ApplicationViewOperation::GetWindowingEnvironmentConfig(
        ApplicationViewOperation *this,
        struct IWindowingEnvironmentConfig **a2)
{
  struct IWindowingEnvironmentConfig **v2; // rbx

  *a2 = 0LL;
  v2 = (struct IWindowingEnvironmentConfig **)((char *)this + 184);
  if ( !*((_QWORD *)this + 23) )
    return 2147943568LL;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 23);
  *a2 = *v2;
  return 0LL;
}
