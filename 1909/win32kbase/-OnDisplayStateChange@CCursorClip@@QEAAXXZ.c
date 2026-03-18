/*
 * XREFs of ?OnDisplayStateChange@CCursorClip@@QEAAXXZ @ 0x1C0051384
 * Callers:
 *     ?_NotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1C0051324 (-_NotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 *     ?BindMouse@CInputConfig@@QEAAJU_LUID@@@Z @ 0x1C0185A84 (-BindMouse@CInputConfig@@QEAAJU_LUID@@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0036C14 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C004A358 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 *     ?GetUnionRect@Mouse@InputConfig@@SA?AUtagRECT@@XZ @ 0x1C0052D88 (-GetUnionRect@Mouse@InputConfig@@SA-AUtagRECT@@XZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C007A7D0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
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
