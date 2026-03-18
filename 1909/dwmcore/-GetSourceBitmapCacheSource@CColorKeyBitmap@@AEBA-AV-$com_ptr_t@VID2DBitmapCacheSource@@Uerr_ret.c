/*
 * XREFs of ?GetSourceBitmapCacheSource@CColorKeyBitmap@@AEBA?AV?$com_ptr_t@VID2DBitmapCacheSource@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18025652C
 * Callers:
 *     ?GetDisplayId@CColorKeyBitmap@@UEBA?AVDisplayId@@XZ @ 0x1802564A0 (-GetDisplayId@CColorKeyBitmap@@UEBA-AVDisplayId@@XZ.c)
 *     ?LockForRead@CColorKeyBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1802565B0 (-LockForRead@CColorKeyBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall CColorKeyBitmap::GetSourceBitmapCacheSource(__int64 a1, _QWORD *a2)
{
  *a2 = 0LL;
  (***(void (__fastcall ****)(_QWORD, GUID *, _QWORD *))(a1 + 24))(
    *(_QWORD *)(a1 + 24),
    &GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3,
    a2);
  return a2;
}
