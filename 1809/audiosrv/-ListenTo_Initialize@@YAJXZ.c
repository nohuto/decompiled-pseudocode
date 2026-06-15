/*
 * XREFs of ?ListenTo_Initialize@@YAJXZ @ 0x18005789C
 * Callers:
 *     ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x180057430 (-EndInitialization@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x180057924 (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ??0CMonitorManager@@QEAA@XZ @ 0x18005A2C0 (--0CMonitorManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 ListenTo_Initialize(void)
{
  CMonitorManager *v0; // rax
  unsigned int v1; // edx
  unsigned __int64 v2; // r8
  const unsigned int *v3; // r9
  CMonitorManager *v4; // rbx
  int v5; // edi

  if ( _MonitorManager )
    return 2147500037LL;
  v0 = (CMonitorManager *)operator new(0x178uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v0 )
    v4 = CMonitorManager::CMonitorManager(v0);
  else
    v4 = 0LL;
  if ( !v4 )
    return 2147942414LL;
  v5 = CMonitorManager::Initialize(v4, v1, v2, v3);
  if ( v5 < 0 )
  {
    (*(void (__fastcall **)(CMonitorManager *))(*(_QWORD *)v4 + 16LL))(v4);
    v4 = 0LL;
  }
  _MonitorManager = v4;
  return (unsigned int)v5;
}
