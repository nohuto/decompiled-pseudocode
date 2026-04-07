/*
 * XREFs of ?OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x180026D54
 * Callers:
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800142F0 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180023F94 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ?SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z @ 0x1800240A8 (-SetDirtyFlags@CSecondaryWindowRepresentation@@AEAAXK@Z.c)
 *     ?GetOffsetToOwner@CWindowData@@QEAA?AUtagPOINT@@XZ @ 0x180026DB8 (-GetOffsetToOwner@CWindowData@@QEAA-AUtagPOINT@@XZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18002B57C (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 */

void __fastcall CSecondaryWindowRepresentation::OnWindowOffsetUpdated(CSecondaryWindowRepresentation *this)
{
  __int64 i; // rdi
  const struct tagPOINT *v3; // rax
  __int64 v4; // rcx
  const struct tagPOINT *OffsetToOwner; // rax
  CVisual *v6; // r9

  if ( *((_QWORD *)this + 4) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 38); i = (unsigned int)(i + 1) )
    {
      v4 = *(_QWORD *)(*((_QWORD *)this + 16) + 8 * i);
      if ( *(_QWORD *)(v4 + 48) )
      {
        OffsetToOwner = (const struct tagPOINT *)CWindowData::GetOffsetToOwner(*(CWindowData **)(v4 + 32));
        CVisual::SetOffset(v6, OffsetToOwner);
      }
    }
    if ( *((_QWORD *)this + 6) )
    {
      v3 = (const struct tagPOINT *)CWindowData::GetOffsetToOwner(*((CWindowData **)this + 4));
      CVisual::SetOffset(*((CVisual **)this + 6), v3);
      if ( *(_DWORD *)(*((_QWORD *)this + 6) + 80LL) )
        CSecondaryWindowRepresentation::SetDirtyFlags(this, 8);
    }
  }
}
