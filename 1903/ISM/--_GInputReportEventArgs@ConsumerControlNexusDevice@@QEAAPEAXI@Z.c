/*
 * XREFs of ??_GInputReportEventArgs@ConsumerControlNexusDevice@@QEAAPEAXI@Z @ 0x1800AFF5C
 * Callers:
 *     ?NotifyInputReportCallback@ConsumerControlNexusDevice@@CAJPEAX@Z @ 0x1800B0AD0 (-NotifyInputReportCallback@ConsumerControlNexusDevice@@CAJPEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

ConsumerControlNexusDevice::InputReportEventArgs *__fastcall ConsumerControlNexusDevice::InputReportEventArgs::`scalar deleting destructor'(
        ConsumerControlNexusDevice::InputReportEventArgs *this,
        const struct std::nothrow_t *a2)
{
  void *v3; // rcx
  __int64 v4; // rcx

  v3 = (void *)*((_QWORD *)this + 1);
  if ( v3 )
    operator delete(v3, a2);
  v4 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  operator delete(this, (const struct std::nothrow_t *)0x10);
  return this;
}
