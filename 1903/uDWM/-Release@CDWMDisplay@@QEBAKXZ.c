/*
 * XREFs of ?Release@CDWMDisplay@@QEBAKXZ @ 0x18002EE84
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18002D258 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x18002E5A4 (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 *     ??_GCDWMDisplaySet@@QEAAPEAXI@Z @ 0x18002EDF4 (--_GCDWMDisplaySet@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1CDWMDisplay@@AEAA@XZ @ 0x18002EED4 (--1CDWMDisplay@@AEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
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
