/*
 * XREFs of ?vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C004BD84
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C004B574 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z @ 0x1C025BFE8 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C004BDEC (-bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00FC050 (-bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 */

void __fastcall DEVLOCKBLTOBJ::vUnMap(DEVLOCKBLTOBJ *this)
{
  signed __int32 v2[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( (*((_DWORD *)this + 28) & 0x8000) != 0 )
  {
    if ( *((_QWORD *)this + 15) )
      DEVLOCKBLTOBJ::bUnMapTrgSurfaceView(this);
    _InterlockedOr(v2, 0);
    if ( *((_QWORD *)this + 21) )
      DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
  }
  else
  {
    if ( *((_QWORD *)this + 21) )
      DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
    _InterlockedOr(v2, 0);
    if ( *((_QWORD *)this + 15) )
      DEVLOCKBLTOBJ::bUnMapTrgSurfaceView(this);
  }
}
