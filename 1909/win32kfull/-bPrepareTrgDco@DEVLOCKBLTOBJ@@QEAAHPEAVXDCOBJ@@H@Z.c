/*
 * XREFs of ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C00EE354
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0031A18 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00B8F80 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00AB3B0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00ACE88 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00BCA9C (-bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00C06B0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00DFFAC (-bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C00F8610 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bPrepareTrgDco(DEVLOCKBLTOBJ *this, struct XDCOBJ *a2, int a3)
{
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rbx
  DC **v9; // r14
  __int64 v10; // rcx
  int v11; // edx
  __int64 v12; // r8
  struct SURFACE *v14; // rax

  v6 = 1;
  if ( !a2 )
    goto LABEL_10;
  v7 = *(_QWORD *)a2;
  if ( (*(_DWORD *)(v7 + 36) & 0x200) == 0 )
    goto LABEL_10;
  v8 = *(_QWORD *)(v7 + 48);
  v9 = (DC **)((char *)this + 80);
  XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 80), *(HDC *)v7);
  v10 = *(_QWORD *)(v8 + 1408);
  if ( !*v9 || !*((_BYTE *)v9 + 17) )
  {
LABEL_9:
    v6 = 0;
LABEL_10:
    *((_QWORD *)this + 10) = 0LL;
    return v6;
  }
  v11 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
  if ( (v11 & 1) != 0 && (v11 & 0x4000) == 0 && v10 && !*((_QWORD *)this + 17) )
  {
    *((_DWORD *)*v9 + 9) |= 0x4000u;
    v14 = (struct SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v10);
    DC::pSurface(*v9, v14);
    *((_DWORD *)this + 18) |= 0x10u;
  }
  if ( !DEVLOCKBLTOBJ::bMapTrgSurfaceView(this) )
  {
    if ( a3 )
    {
      *((_DWORD *)*v9 + 11) |= 1u;
      return 0;
    }
    if ( (*((_DWORD *)this + 18) & 0x1000) != 0 && *((_QWORD *)this + 13) && *((_BYTE *)this + 121) )
      DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
    DEVLOCKBLTOBJ::vClearRenderState(this, v9, v12);
    DLODCOBJ::vUnlock((DLODCOBJ *)v9);
    goto LABEL_9;
  }
  return v6;
}
