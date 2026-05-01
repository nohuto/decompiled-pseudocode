/*
 * XREFs of ??_EAppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAPEAXI@Z @ 0x180006A50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180008DBC (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180009BE0 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000DDF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 */

Windows::System::AppMemoryUsageLimitChangingEventArgs *__fastcall Windows::System::AppMemoryUsageLimitChangingEventArgs::`vector deleting destructor'(
        Windows::System::AppMemoryUsageLimitChangingEventArgs *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  v4 = *((_QWORD *)this + 7);
  if ( v4 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(2 * v4);
  v5 = *((_QWORD *)this + 5);
  if ( v5 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
