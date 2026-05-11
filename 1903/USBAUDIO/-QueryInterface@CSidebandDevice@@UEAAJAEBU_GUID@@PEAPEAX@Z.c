/*
 * XREFs of ?QueryInterface@CSidebandDevice@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1C0007E50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00117A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSidebandDevice::QueryInterface(CSidebandDevice *this, const struct _GUID *a2, void **a3)
{
  return (***((__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))this + 3))(
           *((_QWORD *)this + 3),
           a2,
           a3);
}
