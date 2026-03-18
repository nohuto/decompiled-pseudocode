/*
 * XREFs of bDeleteDCInternal @ 0x1C0064FC0
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x1C0022090 (NtGdiDeleteObjectApp.c)
 *     hdcOpenDCW @ 0x1C003BC90 (hdcOpenDCW.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C006494C (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     GreDeleteDC @ 0x1C0064E70 (GreDeleteDC.c)
 *     DestroyCacheDC @ 0x1C0064E90 (DestroyCacheDC.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C00AE2E0 (-vCleanupDCs@@YAXK@Z.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C00B70AC (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 * Callees:
 *     bDeleteDCInternalEx @ 0x1C0021720 (bDeleteDCInternalEx.c)
 */

_BOOL8 __fastcall bDeleteDCInternal(__int64 a1, int a2, int a3, int a4)
{
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = (a2 != 0 ? 0x400000 : 0) | (a3 != 0 ? 0x800000 : 0) | (a4 != 0 ? 0x1000000 : 0);
  return bDeleteDCInternalEx(a1, (unsigned int *)&v5);
}
