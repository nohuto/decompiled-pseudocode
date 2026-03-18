/*
 * XREFs of ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C009ACEC
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00992C4 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z @ 0x1C0243EB4 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C008BC3C (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C009AF40 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bDisposeSrcDco(DEVLOCKBLTOBJ *this)
{
  struct XDCOBJ *v1; // rdi
  __int64 v3; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rbx
  DC *v8; // rcx
  __int64 v9; // rbx
  __int64 CurrentProcess; // rax

  v1 = (DEVLOCKBLTOBJ *)((char *)this + 96);
  v3 = *((_QWORD *)this + 12);
  if ( v3 )
  {
    v5 = *((unsigned int *)this + 18);
    v6 = *(_QWORD *)(v3 + 48);
    if ( (v5 & 0x20) != 0 )
    {
      *(_DWORD *)(v3 + 36) &= ~0x4000u;
      v8 = *(DC **)v1;
      *((_QWORD *)v8 + 63) = *(_QWORD *)(v6 + 2544);
      DC::vInheritSurfaceDpiScale(v8);
    }
    v7 = *((_QWORD *)this + 14);
    if ( v7 )
    {
      v9 = *(_QWORD *)(v7 + 72);
      CurrentProcess = PsGetCurrentProcess(v3, v5);
      MmUnmapViewOfSection(CurrentProcess, v9);
    }
    DEVLOCKBLTOBJ::vClearRenderState(this, v1);
    if ( *(_QWORD *)v1 )
      XDCOBJ::vUnlockFast(v1);
    *(_QWORD *)v1 = 0LL;
    *(_QWORD *)v1 = 0LL;
  }
  return 1LL;
}
