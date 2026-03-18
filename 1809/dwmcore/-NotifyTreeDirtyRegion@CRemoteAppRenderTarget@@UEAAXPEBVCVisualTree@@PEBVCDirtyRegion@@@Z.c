/*
 * XREFs of ?NotifyTreeDirtyRegion@CRemoteAppRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x18015FA60
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReplaceInterface@VCDisplay@@V1@@@YAXAEAPEAVCDisplay@@PEAV0@@Z @ 0x1800D874C (--$ReplaceInterface@VCDisplay@@V1@@@YAXAEAPEAVCDisplay@@PEAV0@@Z.c)
 */

void __fastcall CRemoteAppRenderTarget::NotifyTreeDirtyRegion(
        CRemoteAppRenderTarget *this,
        const struct CVisualTree *a2,
        const struct CDirtyRegion *a3)
{
  ReplaceInterface<CDisplay,CDisplay>((__int64 *)this + 15, (__int64 (__fastcall ***)(_QWORD))a3);
  (*(void (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this - 9) + 64LL))((char *)this - 72, 0LL, 0LL);
}
