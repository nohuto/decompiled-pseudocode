/*
 * XREFs of ?DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z @ 0x1C022E4F4
 * Callers:
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01246E4 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     DxgkDestroyOverlay @ 0x1C0254D40 (DxgkDestroyOverlay.c)
 * Callees:
 *     ??_GDXGOVERLAY@@QEAAPEAXI@Z @ 0x1C003F1E4 (--_GDXGOVERLAY@@QEAAPEAXI@Z.c)
 */

void __fastcall DXGDEVICE::DestroyOverlay(DXGDEVICE *this, struct DXGOVERLAY ***a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  struct DXGOVERLAY **v6; // rax
  struct DXGOVERLAY **v7; // rcx

  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13)) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4, v3);
    *(_QWORD *)(v5 + 24) = 3949LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = *a2;
  if ( (*a2)[1] != (struct DXGOVERLAY *)a2 || (v7 = a2[1], *v7 != (struct DXGOVERLAY *)a2) )
    __fastfail(3u);
  *v7 = (struct DXGOVERLAY *)v6;
  v6[1] = (struct DXGOVERLAY *)v7;
  DXGOVERLAY::`scalar deleting destructor'((DXGOVERLAY *)a2);
}
