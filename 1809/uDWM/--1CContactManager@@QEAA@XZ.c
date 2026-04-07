/*
 * XREFs of ??1CContactManager@@QEAA@XZ @ 0x180091538
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x18007839C (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     ?Reset@CContactManager@@QEAAJXZ @ 0x18000B324 (-Reset@CContactManager@@QEAAJXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180025E70 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CContactManager::~CContactManager(CContactManager *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  CContactManager::Reset(this);
  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
  if ( *((_QWORD *)this + 1) )
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
  if ( *((_QWORD *)this + 2) )
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
  if ( *((_QWORD *)this + 3) )
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
  if ( *((_QWORD *)this + 4) )
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
  if ( *((_QWORD *)this + 5) )
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v2);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 35);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 31);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 27);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 23);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 19);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 15);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 11);
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 7);
}
