/*
 * XREFs of ??1CMuteHardware@@EEAA@XZ @ 0x1800C3C38
 * Callers:
 *     ??_GCMuteHardware@@EEAAPEAXI@Z @ 0x1800C3CE0 (--_GCMuteHardware@@EEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMuteHardware::~CMuteHardware(CMuteHardware *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CMuteHardware::`vftable';
  v2 = *((_QWORD *)this + 7);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  CMuteControlBase::~CMuteControlBase(this);
}
