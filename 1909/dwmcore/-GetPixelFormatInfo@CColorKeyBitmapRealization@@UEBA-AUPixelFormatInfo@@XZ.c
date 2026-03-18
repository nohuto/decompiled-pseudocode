/*
 * XREFs of ?GetPixelFormatInfo@CColorKeyBitmapRealization@@UEBA?AUPixelFormatInfo@@XZ @ 0x1802553A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CColorKeyBitmapRealization::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 24LL))(*(_QWORD *)(a1 + 8) + 16LL);
  return a2;
}
