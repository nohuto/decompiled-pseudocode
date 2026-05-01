/*
 * XREFs of ?GetViewInFocus@CApplicationViewManager@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x180072D10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CApplicationViewManager::GetViewInFocus(RTL_SRWLOCK *this, struct IApplicationView **a2)
{
  RTL_SRWLOCK *v2; // rbx
  struct IApplicationView **v5; // rsi
  unsigned int v6; // edi

  *a2 = 0LL;
  v2 = this + 64;
  AcquireSRWLockShared(this + 64);
  v5 = (struct IApplicationView **)&this[69];
  if ( !this[69].Ptr || ((__int64)this[70].Ptr & 1) != 0 )
  {
    v6 = -2147023728;
  }
  else
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&this[69]);
    v6 = 0;
    *a2 = *v5;
  }
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v6;
}
