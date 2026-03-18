/*
 * XREFs of ?ProcessSetText@CTextBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_TEXTBRUSH_SETTEXT@@PEBXI@Z @ 0x1801FCDE0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?SetText@CTextBrush@@QEAAJPEBG_K@Z @ 0x1801FD044 (-SetText@CTextBrush@@QEAAJPEBG_K@Z.c)
 */

__int64 __fastcall CTextBrush::ProcessSetText(
        CTextBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_TEXTBRUSH_SETTEXT *a3,
        const unsigned __int16 *a4,
        unsigned int a5)
{
  __int64 v6; // rcx
  unsigned int v7; // edi
  unsigned __int64 v8; // r8
  signed int v9; // eax
  __int64 v10; // rcx

  v6 = *((unsigned int *)a3 + 2);
  if ( 2 * (unsigned __int64)(unsigned int)(v6 + 1) <= a5 )
  {
    v8 = *((unsigned int *)a3 + 2);
    if ( a4[v6] )
    {
      v7 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, 0x80070057, 0xC6u, 0LL);
    }
    else
    {
      v9 = CTextBrush::SetText(this, a4, v8);
      v7 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xC9u, 0LL);
    }
  }
  else
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, 0x80070057, 0xBFu, 0LL);
  }
  (*(void (__fastcall **)(CTextBrush *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 20);
  return v7;
}
