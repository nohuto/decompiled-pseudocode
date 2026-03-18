/*
 * XREFs of ?GetSize@CSectionBitmapRealization@@UEBAXPEAI0@Z @ 0x1800DC310
 * Callers:
 *     ?GetSize@CSectionBitmapRealization@@WBBA@EBAXPEAI0@Z @ 0x1800F15A0 (-GetSize@CSectionBitmapRealization@@WBBA@EBAXPEAI0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CSectionBitmapRealization::GetSize(CSectionBitmapRealization *this, unsigned int *a2, unsigned int *a3)
{
  *a2 = *((_DWORD *)this + 74);
  *a3 = *((_DWORD *)this + 75);
}
