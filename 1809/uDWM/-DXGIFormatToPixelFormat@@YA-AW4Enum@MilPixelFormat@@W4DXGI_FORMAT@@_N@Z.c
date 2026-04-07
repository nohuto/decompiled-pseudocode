/*
 * XREFs of ?DXGIFormatToPixelFormat@@YA?AW4Enum@MilPixelFormat@@W4DXGI_FORMAT@@_N@Z @ 0x1800B198C
 * Callers:
 *     ?GetPixelFormat@CBitmap@@UEAAJPEAU_GUID@@@Z @ 0x1800B2FB0 (-GetPixelFormat@CBitmap@@UEAAJPEAU_GUID@@@Z.c)
 *     ?GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z @ 0x1800B35C0 (-GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGIFormatToPixelFormat(int a1, unsigned __int8 a2)
{
  __int64 result; // rax

  if ( a1 == 2 )
    return (unsigned int)(a2 != 0) + 25;
  if ( a1 > 9 )
  {
    result = 11LL;
    if ( a1 <= 11 )
      return (unsigned int)a2 + 22;
    switch ( a1 )
    {
      case 24:
        return 20LL;
      case 28:
        return (unsigned int)a2 + 68;
      case 49:
        return result;
      case 61:
        return 8LL;
      case 87:
        return (unsigned int)a2 + 15;
      case 88:
        return 14LL;
    }
  }
  return 0LL;
}
