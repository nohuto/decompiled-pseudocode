/*
 * XREFs of ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C0016EF0
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x1C00225E0 (NtGdiDeleteObjectApp.c)
 *     GreCreateRectRgnIndirect @ 0x1C0028030 (GreCreateRectRgnIndirect.c)
 *     GreCreateRectRgn @ 0x1C012F350 (GreCreateRectRgn.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 */

void __fastcall RGNOBJ::vDeleteRGNOBJ(__int16 **this)
{
  __int16 *v1; // rbx
  __int64 v3; // rsi

  v1 = *this;
  if ( !*this || v1 == (__int16 *)prgnDefault )
  {
    *this = 0LL;
  }
  else if ( v1[7] >= 0 )
  {
    Win32FreePool((__int64)*this);
    *this = 0LL;
  }
  else
  {
    v3 = qword_1C02128D0;
    if ( (int)IsWin32FreeToPagedLookasideListImplSupported() >= 0 )
      Win32FreeToPagedLookasideListImpl(v3, v1);
    *this = 0LL;
  }
}
