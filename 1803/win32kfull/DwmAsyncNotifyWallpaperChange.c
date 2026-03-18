/*
 * XREFs of DwmAsyncNotifyWallpaperChange @ 0x1C010D1BC
 * Callers:
 *     ?NotifyDWMOfWallpaperChange@@YAHXZ @ 0x1C010D174 (-NotifyDWMOfWallpaperChange@@YAHXZ.c)
 * Callees:
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall DwmAsyncNotifyWallpaperChange(PVOID Object)
{
  unsigned int v2; // edi
  _DWORD v4[14]; // [rsp+20h] [rbp-38h] BYREF

  v2 = -1073741823;
  if ( Object )
  {
    memset(v4, 0, 0x2CuLL);
    v4[0] = 2883588;
    LOWORD(v4[1]) = 0x8000;
    v4[10] = 1073741834;
    v2 = LpcRequestPort(Object, v4);
    ObfDereferenceObject(Object);
  }
  return v2;
}
