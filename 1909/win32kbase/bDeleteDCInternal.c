/*
 * XREFs of bDeleteDCInternal @ 0x1C0010100
 * Callers:
 *     DestroyCacheDC @ 0x1C000FFD0 (DestroyCacheDC.c)
 *     NtGdiDeleteObjectApp @ 0x1C00225E0 (NtGdiDeleteObjectApp.c)
 *     hdcOpenDCW @ 0x1C0039EC0 (hdcOpenDCW.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C004F6BC (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     GreDeleteDC @ 0x1C00A3AD0 (GreDeleteDC.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C00AB720 (-vCleanupDCs@@YAXK@Z.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C00B45CC (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 * Callees:
 *     bDeleteDCInternalEx @ 0x1C0022200 (bDeleteDCInternalEx.c)
 */

__int64 __fastcall bDeleteDCInternal(__int64 a1, int a2, int a3, int a4)
{
  __int64 v4; // r9
  __int64 v5; // r8
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v4 = (unsigned int)-a4;
  v5 = (unsigned int)-a3;
  v7 = (a2 != 0 ? 0x400000 : 0) | ((_DWORD)v5 != 0 ? 0x800000 : 0) | ((_DWORD)v4 != 0 ? 0x1000000 : 0);
  return bDeleteDCInternalEx(a1, &v7, v5, v4);
}
