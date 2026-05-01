/*
 * XREFs of ?GetTargetApp@CAppLayoutOperation@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x180439D00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CAppLayoutOperation::GetTargetApp(CAppLayoutOperation *this, struct IImmersiveApplication **a2)
{
  struct IImmersiveApplication **v2; // rbx
  __int64 result; // rax

  *a2 = 0LL;
  v2 = (struct IImmersiveApplication **)((char *)this + 48);
  result = 2147943568LL;
  if ( *((_QWORD *)this + 6) )
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 6);
    *a2 = *v2;
    return 0LL;
  }
  return result;
}
