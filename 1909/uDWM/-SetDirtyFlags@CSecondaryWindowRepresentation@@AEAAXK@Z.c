/*
 * XREFs of ?SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z @ 0x180012814
 * Callers:
 *     ?OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x1800124D0 (-OnSourceConstantAlphaUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180013190 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18002548C (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x180026954 (-OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?OnSWRInvalidated@CSecondaryWindowRepresentation@@UEAAXPEBV1@@Z @ 0x18008B020 (-OnSWRInvalidated@CSecondaryWindowRepresentation@@UEAAXPEBV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSecondaryWindowRepresentation::SetDirtyFlags(CSecondaryWindowRepresentation *this, int a2)
{
  int v3; // ecx

  v3 = *((_DWORD *)this + 6);
  if ( (a2 & v3) != a2 )
  {
    *((_DWORD *)this + 6) = a2 | v3;
    (***((void (__fastcall ****)(_QWORD, CSecondaryWindowRepresentation *))this + 21))(*((_QWORD *)this + 21), this);
  }
}
