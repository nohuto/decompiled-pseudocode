/*
 * XREFs of ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0137D98
 * Callers:
 *     ?bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ @ 0x1C0057D00 (-bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ.c)
 *     DEVLOCKOBJ_bDisposeTrgDcoWrap @ 0x1C0057D40 (DEVLOCKOBJ_bDisposeTrgDcoWrap.c)
 *     NtGdiGetPixel @ 0x1C005E7C0 (NtGdiGetPixel.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C00E41B0 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 * Callees:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C0058EF0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C0137E24 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C0137E68 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 */

void __fastcall DEVLOCKOBJ::vClearRenderState(DEVLOCKOBJ *this)
{
  __int64 v1; // rax
  int v3; // ecx
  __int64 v4; // rdx
  DCVISRGNSHARELOCK *v5; // rcx
  __int64 ThreadWin32Thread; // rax
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 4);
  if ( v1 )
  {
    v3 = *((_DWORD *)this + 6);
    if ( (v3 & 0x801000) != 0 )
    {
      *(_DWORD *)(v1 + 40) &= ~2u;
      v3 = *((_DWORD *)this + 6);
    }
    if ( (v3 & 0x1000) != 0 && (*(_DWORD *)(*((_QWORD *)this + 4) + 36LL) & 0x200) != 0 )
    {
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v7);
      if ( !*((_QWORD *)this + 10) )
        DC::vClearRendering(*((DC **)this + 4));
      if ( (*(_DWORD *)(*((_QWORD *)this + 4) + 36LL) & 0x4000) == 0 )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4);
        if ( ThreadWin32Thread )
          *(_BYTE *)(ThreadWin32Thread + 328) = 0;
      }
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v5);
    }
  }
}
