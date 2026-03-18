/*
 * XREFs of ?GetSourceState@CSystemMemoryBitmap@@UEAA?AW4BitmapSourceState@IBitmapSource@@XZ @ 0x18015BEF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemMemoryBitmap::GetSourceState(__int64 a1)
{
  return (unsigned int)(*(_QWORD *)(a1 + 216) != 0LL) + 1;
}
