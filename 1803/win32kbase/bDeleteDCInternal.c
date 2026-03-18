/*
 * XREFs of bDeleteDCInternal @ 0x1C0059000
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C002F158 (-vCleanupDCs@@YAXK@Z.c)
 *     hdcOpenDCW @ 0x1C0044DB0 (hdcOpenDCW.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C0058D90 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     GreDeleteDC @ 0x1C0058FE0 (GreDeleteDC.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C00A8D7C (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 * Callees:
 *     bDeleteDCInternalEx @ 0x1C0030D10 (bDeleteDCInternalEx.c)
 */

__int64 __fastcall bDeleteDCInternal(HDC a1, int a2, int a3, int a4)
{
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = (a2 != 0 ? 0x400000 : 0) | (a3 != 0 ? 0x800000 : 0) | (a4 != 0 ? 0x1000000 : 0);
  return bDeleteDCInternalEx(a1, &v5);
}
