/*
 * XREFs of ?GetHashBitCount@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C000375C
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00D5770 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DXGADAPTERSOURCEHASH::GetHashBitCount(DXGADAPTERSOURCEHASH *this)
{
  unsigned int v2; // ebx
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v4, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v4);
  v2 = *((_DWORD *)this + 15);
  if ( v4[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v4);
  return v2;
}
