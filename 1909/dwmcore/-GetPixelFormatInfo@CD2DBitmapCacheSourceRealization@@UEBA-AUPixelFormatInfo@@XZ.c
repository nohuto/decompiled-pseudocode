/*
 * XREFs of ?GetPixelFormatInfo@CD2DBitmapCacheSourceRealization@@UEBA?AUPixelFormatInfo@@XZ @ 0x180254BD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmapCacheSourceRealization::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 - 112) + 24LL))(*(_QWORD *)(a1 - 112));
  return a2;
}
