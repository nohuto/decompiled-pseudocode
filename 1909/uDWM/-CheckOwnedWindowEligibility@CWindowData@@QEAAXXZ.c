/*
 * XREFs of ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x180014F54
 * Callers:
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x1800145D8 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x180014E2C (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 *     ?CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ @ 0x180026EE4 (-CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ.c)
 * Callees:
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x180011D7C (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x180038D44 (-ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ.c)
 */

void __fastcall CWindowData::CheckOwnedWindowEligibility(CWindowData *this)
{
  __int64 v1; // rax
  char ShouldBeIncludedInOwnerSWR; // bl

  v1 = *((_QWORD *)this + 69);
  ShouldBeIncludedInOwnerSWR = 0;
  if ( v1 && (*(_BYTE *)(v1 + 605) & 0x40) != 0 )
    ShouldBeIncludedInOwnerSWR = CWindowData::ShouldBeIncludedInOwnerSWR(this);
  if ( *((_BYTE *)this + 605) >> 7 != ShouldBeIncludedInOwnerSWR )
    CWindowData::UpdateOwnerLists(this, !(*((_BYTE *)this + 605) >> 7));
}
