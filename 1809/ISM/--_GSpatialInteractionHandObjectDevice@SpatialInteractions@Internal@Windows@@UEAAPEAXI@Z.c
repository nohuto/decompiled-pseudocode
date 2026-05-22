/*
 * XREFs of ??_GSpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z @ 0x1800BC580
 * Callers:
 *     <none>
 * Callees:
 *     ??1SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@MEAA@XZ @ 0x1800BBC80 (--1SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

RTL_SRWLOCK *__fastcall Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice::`scalar deleting destructor'(
        RTL_SRWLOCK *this,
        char a2)
{
  PVOID Ptr; // rcx
  PVOID v5; // rcx
  PVOID v6; // rcx

  Ptr = this[27].Ptr;
  if ( Ptr )
  {
    this[27].Ptr = 0LL;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  }
  v5 = this[26].Ptr;
  if ( v5 )
  {
    this[26].Ptr = 0LL;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = this[25].Ptr;
  if ( v6 )
  {
    this[25].Ptr = 0LL;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v6 + 16LL))(v6);
  }
  Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::~SpatialInteractionObjectDevice(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE8);
  return this;
}
