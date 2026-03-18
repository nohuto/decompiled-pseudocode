/*
 * XREFs of ?GetPixelFormatInfo@CBitmapSourceD2DCacheAdapter@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800D59F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapSourceD2DCacheAdapter::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 24LL))(*(_QWORD *)(a1 + 8));
  return a2;
}
