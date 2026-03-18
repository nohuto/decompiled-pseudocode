/*
 * XREFs of ?IsPlaneEnabled@ADAPTER_DISPLAY@@QEAAEII@Z @ 0x1C01C38B4
 * Callers:
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C01C1920 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C0122D40 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 */

bool __fastcall ADAPTER_DISPLAY::IsPlaneEnabled(ADAPTER_DISPLAY *this, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rbx
  bool v6; // si
  DISPLAY_SOURCE *v7; // rcx
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a2;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (ADAPTER_DISPLAY *)((char *)this + 400), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  v6 = 0;
  v7 = (DISPLAY_SOURCE *)(*((_QWORD *)this + 14) + 3760 * v3);
  if ( a3 < *((_DWORD *)v7 + 934) )
  {
    LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal(v7, a3);
    if ( LatestPlaneConfigInternal )
      v6 = (*((_BYTE *)LatestPlaneConfigInternal + 8) & 3) != 0;
  }
  if ( v10[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
  return v6;
}
