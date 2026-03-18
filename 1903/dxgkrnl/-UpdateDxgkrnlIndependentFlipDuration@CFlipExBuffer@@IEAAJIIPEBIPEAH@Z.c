/*
 * XREFs of ?UpdateDxgkrnlIndependentFlipDuration@CFlipExBuffer@@IEAAJIIPEBIPEAH@Z @ 0x1C005D2BC
 * Callers:
 *     ?SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IIPEBIPEAH@Z @ 0x1C001CD50 (-SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IIPEBIPEAH@Z.c)
 * Callees:
 *     DxgkSetIndependentFlipMode @ 0x1C015209C (DxgkSetIndependentFlipMode.c)
 */

__int64 __fastcall CFlipExBuffer::UpdateDxgkrnlIndependentFlipDuration(
        HANDLE *this,
        int a2,
        int a3,
        const unsigned int *a4,
        int *a5)
{
  __int64 result; // rax

  result = DxgkSetIndependentFlipMode(this[61], a2, a3, (__int64)a4, (__int64)a5, (__int64)(this + 60));
  if ( (int)result >= 0 )
    *((_DWORD *)this + 141) = a2;
  return result;
}
