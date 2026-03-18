/*
 * XREFs of ?ProcessSetFontWeight@CTextBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TEXTBRUSH_SETFONTWEIGHT@@@Z @ 0x1801B5454
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTextBrush::ProcessSetFontWeight(
        CTextBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_TEXTBRUSH_SETFONTWEIGHT *a3)
{
  *((_DWORD *)this + 33) = *((_DWORD *)a3 + 2);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 19);
  (*(void (__fastcall **)(CTextBrush *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  return 0LL;
}
