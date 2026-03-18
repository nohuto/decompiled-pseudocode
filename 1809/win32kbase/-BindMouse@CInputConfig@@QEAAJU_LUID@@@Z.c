/*
 * XREFs of ?BindMouse@CInputConfig@@QEAAJU_LUID@@@Z @ 0x1C01533C8
 * Callers:
 *     NtSetCursorInputSpace @ 0x1C00EDFA0 (NtSetCursorInputSpace.c)
 * Callees:
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXXZ @ 0x1C003BFA0 (-OnDisplayStateChange@CCursorClip@@QEAAXXZ.c)
 *     ?FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ @ 0x1C003C484 (-FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ.c)
 *     ??1CEResourceLockExclusive@@QEAA@XZ @ 0x1C00AD1D4 (--1CEResourceLockExclusive@@QEAA@XZ.c)
 *     ??0CEResourceLockExclusive@@QEAA@AEAUCEResource@@@Z @ 0x1C00AD7F8 (--0CEResourceLockExclusive@@QEAA@AEAUCEResource@@@Z.c)
 */

__int64 __fastcall CInputConfig::BindMouse(PERESOURCE *this, struct _LUID a2)
{
  CInputConfig *v2; // rdi
  struct CEResource *v4; // rdx
  CCursorClip *v5; // rcx
  PERESOURCE *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = this;
  v2 = gpInputConfig;
  CEResourceLockExclusive::CEResourceLockExclusive((CEResourceLockExclusive *)&v7, *(struct CEResource **)&a2);
  *((struct _LUID *)v2 + 2) = a2;
  CInputConfig::CMouseConfig::FindInputSpace((CInputConfig *)((char *)v2 + 16), v4);
  CEResourceLockExclusive::~CEResourceLockExclusive(&v7);
  CCursorClip::OnDisplayStateChange(v5);
  return 0LL;
}
