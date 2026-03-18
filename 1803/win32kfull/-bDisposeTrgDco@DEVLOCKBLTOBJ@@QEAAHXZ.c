/*
 * XREFs of ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C009AE04
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00992C4 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z @ 0x1C0243EB4 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C008BC3C (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C008FCD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C009AF40 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bDisposeTrgDco(DEVLOCKBLTOBJ *this)
{
  unsigned int *v1; // rbx
  __int64 v3; // r8
  __int64 v4; // rax
  DC *v5; // rcx
  __int64 v6; // rdi
  DC *v8; // rcx
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = (unsigned int *)((char *)this + 80);
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
  {
    v4 = *(_QWORD *)(v3 + 48);
    if ( (*((_DWORD *)this + 18) & 0x10) != 0 )
    {
      *(_DWORD *)(v3 + 36) &= ~0x4000u;
      v8 = *(DC **)v1;
      *((_QWORD *)v8 + 63) = *(_QWORD *)(v4 + 2544);
      DC::vInheritSurfaceDpiScale(v8);
    }
    DEVLOCKBLTOBJ::vClearRenderState(this, (struct XDCOBJ *)v1);
    if ( *(_QWORD *)v1 )
    {
      XDCOBJ::RestoreAttributes((XDCOBJ *)v1);
      v5 = *(DC **)v1;
      v9 = 0;
      v6 = *(_QWORD *)v5;
      HmgDecrementExclusiveReferenceCountEx(v5, v1[3], &v9);
      if ( v9 )
        bDeleteDCInternalEx(v6, 0LL);
    }
    *(_QWORD *)v1 = 0LL;
    *(_QWORD *)v1 = 0LL;
  }
  return 1LL;
}
