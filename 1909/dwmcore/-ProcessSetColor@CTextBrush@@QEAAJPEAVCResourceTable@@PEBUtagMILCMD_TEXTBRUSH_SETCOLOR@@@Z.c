/*
 * XREFs of ?ProcessSetColor@CTextBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_TEXTBRUSH_SETCOLOR@@@Z @ 0x1801FB47C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTextBrush::ProcessSetColor(
        CTextBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_TEXTBRUSH_SETCOLOR *a3)
{
  signed int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx

  v4 = ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180338B58)(
         (char *)this + SDWORD2(xmmword_180338B58),
         &CTextBrush::sc_Color,
         (char *)a3 + 8);
  v6 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x102u, 0LL);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 20);
  return v6;
}
