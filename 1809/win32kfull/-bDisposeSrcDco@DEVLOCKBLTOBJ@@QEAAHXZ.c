/*
 * XREFs of ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C004BCB8
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C004B574 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z @ 0x1C025BFE8 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0065A50 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C00E340C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?vUnlock@XDCOBJ@@IEAAXXZ @ 0x1C015F778 (-vUnlock@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bDisposeSrcDco(DEVLOCKBLTOBJ *this, __int64 a2, __int64 a3, __int64 a4)
{
  DC **v4; // rdi
  __int64 v6; // rcx
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 CurrentProcess; // rax

  v4 = (DC **)((char *)this + 168);
  v6 = *((_QWORD *)this + 21);
  if ( v6 )
  {
    v8 = *(_QWORD *)(v6 + 48);
    if ( (*((_DWORD *)this + 28) & 0x20) != 0 )
    {
      *(_DWORD *)(v6 + 36) &= ~0x4000u;
      DC::pSurface(*v4, *(struct SURFACE **)(v8 + 2552));
    }
    v9 = *((_QWORD *)this + 27);
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 72);
      CurrentProcess = PsGetCurrentProcess(v6, v8, a3, a4);
      MmUnmapViewOfSection(CurrentProcess, v10);
    }
    DEVLOCKBLTOBJ::vClearRenderState(this, (struct XDCOBJ *)v4);
    XDCOBJ::vUnlock((XDCOBJ *)v4);
    *v4 = 0LL;
  }
  return 1LL;
}
