/*
 * XREFs of ??_GCResourceProxy@@MEAAPEAXI@Z @ 0x18008ADC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResourceProxy@@MEAA@XZ @ 0x1800170E8 (--1CResourceProxy@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

CResourceProxy *__fastcall CResourceProxy::`scalar deleting destructor'(CResourceProxy *this, char a2)
{
  CResourceProxy::~CResourceProxy(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CResourceProxy *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
