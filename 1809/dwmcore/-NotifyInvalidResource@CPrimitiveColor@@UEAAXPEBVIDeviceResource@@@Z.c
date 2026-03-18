/*
 * XREFs of ?NotifyInvalidResource@CPrimitiveColor@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801AAFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleasePrimitiveProperties@CPrimitiveColor@@QEAAXXZ @ 0x1801AB0F0 (-ReleasePrimitiveProperties@CPrimitiveColor@@QEAAXXZ.c)
 */

void __fastcall CPrimitiveColor::NotifyInvalidResource(CPrimitiveColor *this, const struct IDeviceResource *a2)
{
  CPrimitiveColor::ReleasePrimitiveProperties(this);
  (*(void (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this + 1) + 64LL))((char *)this + 8, 0LL, 0LL);
}
