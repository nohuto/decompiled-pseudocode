/*
 * XREFs of ?vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C009B368
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00992C4 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z @ 0x1C0243EB4 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C009AB6C (-bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C009ABC8 (-bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 */

void __fastcall DEVLOCKBLTOBJ::vUnMap(DEVLOCKBLTOBJ *this)
{
  signed __int32 v2[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( (*((_DWORD *)this + 18) & 0x8000) != 0 )
  {
    if ( *((_QWORD *)this + 10) )
      DEVLOCKBLTOBJ::bUnMapTrgSurfaceView(this);
    _InterlockedOr(v2, 0);
    if ( *((_QWORD *)this + 12) )
      DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
  }
  else
  {
    if ( *((_QWORD *)this + 12) )
      DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
    _InterlockedOr(v2, 0);
    if ( *((_QWORD *)this + 10) )
      DEVLOCKBLTOBJ::bUnMapTrgSurfaceView(this);
  }
}
