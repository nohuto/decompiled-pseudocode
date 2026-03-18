/*
 * XREFs of ?GetPixelFormat@CBitmapColorKey@@UEAAJPEAU_GUID@@@Z @ 0x180233A10
 * Callers:
 *     <none>
 * Callees:
 *     ?DXGIFormatToPixelFormat@@YA?AW4Enum@MilPixelFormat@@W4DXGI_FORMAT@@_N@Z @ 0x18021B018 (-DXGIFormatToPixelFormat@@YA-AW4Enum@MilPixelFormat@@W4DXGI_FORMAT@@_N@Z.c)
 */

__int64 __fastcall CBitmapColorKey::GetPixelFormat(CBitmapColorKey *this, struct _GUID *a2)
{
  GUID *v2; // r8
  int v3; // eax

  v2 = a2;
  if ( *((_DWORD *)this + 4) == 88 )
    v3 = 16;
  else
    v3 = DXGIFormatToPixelFormat(*((_DWORD *)this + 4), *((_DWORD *)this + 5) == 1);
  return MilPfToWic(v3, v2);
}
