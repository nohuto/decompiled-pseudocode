/*
 * XREFs of ?GetMonitorInternal@CImmersiveApp@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x18005A500
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::GetMonitorInternal(CImmersiveApp *this, struct IImmersiveMonitor **a2)
{
  struct IImmersiveMonitor **v2; // rbx
  struct IImmersiveMonitor *v5; // rcx

  v2 = (struct IImmersiveMonitor **)((char *)this + 640);
  if ( *((_QWORD *)this + 80) )
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((char *)this + 640);
    v5 = *v2;
  }
  else
  {
    v5 = (struct IImmersiveMonitor *)*((_QWORD *)this + 79);
    if ( v5 )
    {
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v5 + 8LL))(v5);
      v5 = (struct IImmersiveMonitor *)*((_QWORD *)this + 79);
    }
  }
  *a2 = v5;
  return 0LL;
}
