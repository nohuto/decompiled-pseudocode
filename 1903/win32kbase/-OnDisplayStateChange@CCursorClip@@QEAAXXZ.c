/*
 * XREFs of ?OnDisplayStateChange@CCursorClip@@QEAAXXZ @ 0x1C0065874
 * Callers:
 *     ?_NotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1C0065814 (-_NotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 *     ?BindMouse@CInputConfig@@QEAAJU_LUID@@@Z @ 0x1C0187C74 (-BindMouse@CInputConfig@@QEAAJU_LUID@@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0037C84 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C003FC60 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 *     ?GetUnionRect@Mouse@InputConfig@@SA?AUtagRECT@@XZ @ 0x1C00675F8 (-GetUnionRect@Mouse@InputConfig@@SA-AUtagRECT@@XZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C007DFD0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

void __fastcall CCursorClip::OnDisplayStateChange(CCursorClip *this)
{
  CCursorClip *v1; // rdi
  struct tagRECT *UnionRect; // rax
  struct tagRECT v3; // xmm0
  struct tagRECT v4; // [rsp+20h] [rbp-18h] BYREF

  v1 = gpCursorClip;
  CPushLock::AcquireLockExclusive((CCursorClip *)((char *)gpCursorClip + 32));
  *(_QWORD *)&v4.left = 0LL;
  *(_QWORD *)&v4.right = 0LL;
  *(_OWORD *)((char *)v1 + 56) = 0u;
  UnionRect = InputConfig::Mouse::GetUnionRect(&v4);
  v3 = *UnionRect;
  *(struct tagRECT *)v1 = *UnionRect;
  v4 = v3;
  CCursorClip::UpdateClipRect((const struct tagRECT *)v1, &v4);
  *((_BYTE *)v1 + 92) = **(_DWORD **)gpDispInfo > 1u;
  CPushLock::ReleaseLock((CCursorClip *)((char *)v1 + 32));
}
