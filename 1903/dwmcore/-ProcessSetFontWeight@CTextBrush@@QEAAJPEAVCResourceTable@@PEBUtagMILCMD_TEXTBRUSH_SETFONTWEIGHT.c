/*
 * XREFs of ?ProcessSetFontWeight@CTextBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_TEXTBRUSH_SETFONTWEIGHT@@@Z @ 0x1801FCD9C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTextBrush::ProcessSetFontWeight(
        CTextBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_TEXTBRUSH_SETFONTWEIGHT *a3)
{
  *((_DWORD *)this + 35) = *((_DWORD *)a3 + 2);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 20);
  (*(void (__fastcall **)(CTextBrush *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  return 0LL;
}
