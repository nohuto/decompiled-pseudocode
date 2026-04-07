/*
 * XREFs of ?Release@CDWMDisplay@@QEBAKXZ @ 0x18002C4A4
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18002A878 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x18002BBC4 (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 *     ??_GCDWMDisplaySet@@QEAAPEAXI@Z @ 0x18002C414 (--_GCDWMDisplaySet@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1CDWMDisplay@@AEAA@XZ @ 0x18002C4F4 (--1CDWMDisplay@@AEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMDisplay::Release(CDWMDisplay *this)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this);
  if ( !v2 && this )
  {
    CDWMDisplay::~CDWMDisplay(this);
    (*(void (__fastcall **)(WPF::HeapBase *, CDWMDisplay *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  }
  return v2;
}
