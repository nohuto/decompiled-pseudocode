/*
 * XREFs of ?NotifyTreeDirtyRegion@CLocalAppRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x180250720
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReplaceInterface@$$CBVCDirtyRegion@@$$CBV1@@@YAXAEAPEBVCDirtyRegion@@PEBV0@@Z @ 0x1801685B0 (--$ReplaceInterface@$$CBVCDirtyRegion@@$$CBV1@@@YAXAEAPEBVCDirtyRegion@@PEBV0@@Z.c)
 */

void __fastcall CLocalAppRenderTarget::NotifyTreeDirtyRegion(
        CLocalAppRenderTarget *this,
        const struct CVisualTree *a2,
        const struct CDirtyRegion *a3)
{
  ReplaceInterface<CDirtyRegion const,CDirtyRegion const>((__int64 *)this + 14, (__int64 (__fastcall ***)(_QWORD))a3);
  (*(void (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this - 9) + 64LL))((char *)this - 72, 0LL, 0LL);
}
