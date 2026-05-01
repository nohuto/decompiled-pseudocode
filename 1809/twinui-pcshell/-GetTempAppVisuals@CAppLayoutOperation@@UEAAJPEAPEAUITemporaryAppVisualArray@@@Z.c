/*
 * XREFs of ?GetTempAppVisuals@CAppLayoutOperation@@UEAAJPEAPEAUITemporaryAppVisualArray@@@Z @ 0x1803B7E20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CAppLayoutOperation::GetTempAppVisuals(
        CAppLayoutOperation *this,
        struct ITemporaryAppVisualArray **a2)
{
  struct ITemporaryAppVisualArray **v2; // rbx
  __int64 result; // rax

  *a2 = 0LL;
  v2 = (struct ITemporaryAppVisualArray **)((char *)this + 64);
  result = 2147943568LL;
  if ( *((_QWORD *)this + 8) )
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 8);
    *a2 = *v2;
    return 0LL;
  }
  return result;
}
