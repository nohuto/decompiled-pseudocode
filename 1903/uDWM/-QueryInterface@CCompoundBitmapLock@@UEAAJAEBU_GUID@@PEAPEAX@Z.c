/*
 * XREFs of ?QueryInterface@CCompoundBitmapLock@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180043920
 * Callers:
 *     ?QueryInterface@CCompressedSourceBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004FF40 (-QueryInterface@CCompressedSourceBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmap@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004FF50 (-QueryInterface@CBitmap@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompressedSourceBitmap@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004FF60 (-QueryInterface@CCompressedSourceBitmap@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmap@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004FF70 (-QueryInterface@CBitmap@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompressedSourceBitmap@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004FF80 (-QueryInterface@CCompressedSourceBitmap@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompressedSourceBitmap@@WPA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180050040 (-QueryInterface@CCompressedSourceBitmap@@WPA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompressedSourceBitmap@@WPI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180050050 (-QueryInterface@CCompressedSourceBitmap@@WPI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmapLock@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180050120 (-QueryInterface@CBitmapLock@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmapLock@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180050130 (-QueryInterface@CBitmapLock@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompoundBitmapLock::QueryInterface(CCompoundBitmapLock *this, const struct _GUID *a2, void **a3)
{
  return CMILCOMBase::InternalQueryInterface(this, a2, a3);
}
