/*
 * XREFs of ??_GCAPOInstance@@QEAAPEAXI@Z @ 0x140035FFC
 * Callers:
 *     ??1CAPOProcessNode@@UEAA@XZ @ 0x140035E68 (--1CAPOProcessNode@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015B54 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 */

CAPOInstance *__fastcall CAPOInstance::`scalar deleting destructor'(CAPOInstance *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 5);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  operator delete(this);
  return this;
}
