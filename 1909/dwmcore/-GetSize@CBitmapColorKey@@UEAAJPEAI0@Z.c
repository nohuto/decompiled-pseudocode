/*
 * XREFs of ?GetSize@CBitmapColorKey@@UEAAJPEAI0@Z @ 0x1800BE850
 * Callers:
 *     ?GetSize@CBitmapColorKey@@W7EAAJPEAI0@Z @ 0x1800F16D0 (-GetSize@CBitmapColorKey@@W7EAAJPEAI0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapColorKey::GetSize(CBitmapColorKey *this, unsigned int *a2, unsigned int *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *, unsigned int *))(**((_QWORD **)this + 2) + 32LL))(
           *((_QWORD *)this + 2),
           a2,
           a3);
}
