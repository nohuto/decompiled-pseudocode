/*
 * XREFs of ?DXGIFormatToPixelFormat@@YA?AW4Enum@MilPixelFormat@@W4DXGI_FORMAT@@_N@Z @ 0x18021B018
 * Callers:
 *     ?GetPixelFormat@CBitmap@@UEAAJPEAU_GUID@@@Z @ 0x1802140A0 (-GetPixelFormat@CBitmap@@UEAAJPEAU_GUID@@@Z.c)
 *     ?GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z @ 0x180214850 (-GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z.c)
 *     ?GetPixelFormat@CBitmapColorKey@@UEAAJPEAU_GUID@@@Z @ 0x180233A10 (-GetPixelFormat@CBitmapColorKey@@UEAAJPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGIFormatToPixelFormat(int a1, unsigned __int8 a2)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  if ( a1 <= 49 )
  {
    if ( a1 == 49 )
      return 11LL;
    if ( a1 == 2 )
      return (unsigned int)a2 + 25;
    if ( a1 > 9 )
    {
      if ( a1 <= 11 )
        return (unsigned int)a2 + 22;
      if ( a1 == 24 )
        return 20LL;
      if ( a1 == 28 )
        return (unsigned int)a2 + 68;
    }
    return 0LL;
  }
  v3 = a1 - 61;
  if ( !v3 )
    return 8LL;
  v4 = v3 - 26;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( !v5 )
      return 14LL;
    if ( v5 != 3 )
      return 0LL;
  }
  return (unsigned int)a2 + 15;
}
