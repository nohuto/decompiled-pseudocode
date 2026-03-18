/*
 * XREFs of ?GetPixelFormatInfo@CColorKeyBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x180257C60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall CColorKeyBitmap::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 24LL))(*(_QWORD *)(a1 + 8));
  if ( *a2 == 88 )
    *a2 = 87;
  a2[1] = 1;
  return a2;
}
