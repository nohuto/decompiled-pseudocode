/*
 * XREFs of ?GetResourceSize@CD3DSurface@@MEBAIXZ @ 0x180076080
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180096A0C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CD3DSurface::GetResourceSize(enum DXGI_FORMAT *this)
{
  __int64 result; // rax
  unsigned __int8 PixelFormatSize; // al
  __int64 v3; // rdx

  result = 0LL;
  if ( *((_DWORD *)this + 42) != 2 )
  {
    PixelFormatSize = GetPixelFormatSize(this[39]);
    return *(_DWORD *)(v3 + 140) * *(_DWORD *)(v3 + 144) * (PixelFormatSize >> 3);
  }
  return result;
}
