/*
 * XREFs of ?vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C0270E9C
 * Callers:
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z @ 0x1C02756A8 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0103E9C (-bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C01042BC (-bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 */

void __fastcall DEVLOCKBLTOBJ::vUnMap(DEVLOCKBLTOBJ *this)
{
  signed __int32 v2[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( (*((_DWORD *)this + 18) & 0x8000) != 0 )
  {
    if ( *((_QWORD *)this + 10) && *((_BYTE *)this + 97) )
      DEVLOCKBLTOBJ::bUnMapTrgSurfaceView(this);
    _InterlockedOr(v2, 0);
    if ( *((_QWORD *)this + 13) )
    {
      if ( *((_BYTE *)this + 121) )
        DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
    }
  }
  else
  {
    if ( *((_QWORD *)this + 13) && *((_BYTE *)this + 121) )
      DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
    _InterlockedOr(v2, 0);
    if ( *((_QWORD *)this + 10) && *((_BYTE *)this + 97) )
      DEVLOCKBLTOBJ::bUnMapTrgSurfaceView(this);
  }
}
