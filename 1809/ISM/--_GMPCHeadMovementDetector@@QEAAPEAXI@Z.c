/*
 * XREFs of ??_GMPCHeadMovementDetector@@QEAAPEAXI@Z @ 0x180057E70
 * Callers:
 *     ??1MPCRawInputProvider@@MEAA@XZ @ 0x18005746C (--1MPCRawInputProvider@@MEAA@XZ.c)
 *     ?OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z @ 0x180057A80 (-OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180030C74 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

struct _TP_TIMER **__fastcall MPCHeadMovementDetector::`scalar deleting destructor'(struct _TP_TIMER **this)
{
  struct _TP_TIMER *v2; // rcx
  struct _TP_TIMER *v3; // rcx
  struct _TP_TIMER *v4; // rcx
  struct _TP_TIMER *v5; // rcx
  struct _TP_TIMER *v6; // rdi

  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
    this + 1,
    0LL);
  v2 = this[9];
  if ( v2 )
    (*(void (__fastcall **)(struct _TP_TIMER *))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = this[8];
  if ( v3 )
    (*(void (__fastcall **)(struct _TP_TIMER *))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = this[7];
  if ( v4 )
    (*(void (__fastcall **)(struct _TP_TIMER *))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = this[6];
  if ( v5 )
    (*(void (__fastcall **)(struct _TP_TIMER *))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = this[1];
  if ( v6 )
  {
    SetThreadpoolTimer(this[1], 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(v6, 1);
    CloseThreadpoolTimer(v6);
  }
  if ( *this )
    (*(void (__fastcall **)(struct _TP_TIMER *))(*(_QWORD *)*this + 16LL))(*this);
  operator delete(this, (const struct std::nothrow_t *)0x90);
  return this;
}
