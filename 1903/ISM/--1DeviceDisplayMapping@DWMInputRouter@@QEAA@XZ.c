/*
 * XREFs of ??1DeviceDisplayMapping@DWMInputRouter@@QEAA@XZ @ 0x1800C2B68
 * Callers:
 *     _DWMInputRouter::BindDevicesOfTypeToMonitor_::_1_::dtor$2 @ 0x1800C2EB6 (_DWMInputRouter--BindDevicesOfTypeToMonitor_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DWMInputRouter::DeviceDisplayMapping::~DeviceDisplayMapping(DWMInputRouter::DeviceDisplayMapping *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
