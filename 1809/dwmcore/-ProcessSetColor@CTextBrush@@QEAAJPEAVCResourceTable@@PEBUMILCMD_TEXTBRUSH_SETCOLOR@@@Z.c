/*
 * XREFs of ?ProcessSetColor@CTextBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TEXTBRUSH_SETCOLOR@@@Z @ 0x1801B523C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTextBrush::ProcessSetColor(
        CTextBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_TEXTBRUSH_SETCOLOR *a3)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx

  v4 = ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180307260)(
         (char *)this + SDWORD2(xmmword_180307260),
         &CTextBrush::sc_Color,
         (char *)a3 + 8);
  v6 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x104u);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 19);
  return v6;
}
