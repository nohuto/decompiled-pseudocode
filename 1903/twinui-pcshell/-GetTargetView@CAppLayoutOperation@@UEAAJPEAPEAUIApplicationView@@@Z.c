/*
 * XREFs of ?GetTargetView@CAppLayoutOperation@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x18041A680
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CAppLayoutOperation::GetTargetView(CAppLayoutOperation *this, struct IApplicationView **a2)
{
  struct IApplicationView **v2; // rbx

  *a2 = 0LL;
  v2 = (struct IApplicationView **)((char *)this + 56);
  if ( *((_QWORD *)this + 7) )
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 7);
    *a2 = *v2;
  }
  return 0LL;
}
