/*
 * XREFs of ?SetDisplayConfigDone@DXGSESSIONDATA@@QEAAXK@Z @ 0x1C003F92C
 * Callers:
 *     ?SendCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAJXZ @ 0x1C00C79FC (-SendCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAJXZ.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1C0234584 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGSESSIONDATA::SetDisplayConfigDone(DXGSESSIONDATA *this, int a2)
{
  int v4; // eax
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v5, (DXGSESSIONDATA *)((char *)this + 18824), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v5);
  v4 = *((_DWORD *)this + 4716);
  if ( a2 == v4 )
    *((_DWORD *)this + 4717) = v4;
  if ( v5[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v5);
}
