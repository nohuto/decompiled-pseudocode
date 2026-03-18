/*
 * XREFs of ?GetSize@CSystemMemoryBitmap@@UEBAXPEAI0@Z @ 0x1800D9A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSystemMemoryBitmap::GetSize(CSystemMemoryBitmap *this, unsigned int *a2, unsigned int *a3)
{
  *a2 = *((_DWORD *)this - 14);
  *a3 = *((_DWORD *)this - 13);
}
