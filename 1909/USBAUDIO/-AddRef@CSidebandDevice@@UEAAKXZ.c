/*
 * XREFs of ?AddRef@CSidebandDevice@@UEAAKXZ @ 0x1C0007E70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00118E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSidebandDevice::AddRef(CSidebandDevice *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 8LL))(*((_QWORD *)this + 3));
}
