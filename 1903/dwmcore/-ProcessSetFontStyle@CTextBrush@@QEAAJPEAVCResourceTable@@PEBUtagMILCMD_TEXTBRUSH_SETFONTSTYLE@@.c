/*
 * XREFs of ?ProcessSetFontStyle@CTextBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_TEXTBRUSH_SETFONTSTYLE@@@Z @ 0x1801FCD58
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTextBrush::ProcessSetFontStyle(
        CTextBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_TEXTBRUSH_SETFONTSTYLE *a3)
{
  *((_DWORD *)this + 36) = *((_DWORD *)a3 + 2);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 20);
  (*(void (__fastcall **)(CTextBrush *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  return 0LL;
}
