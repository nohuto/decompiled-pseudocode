/*
 * XREFs of ?ProcessSetText@CTextBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TEXTBRUSH_SETTEXT@@PEBXI@Z @ 0x1801B5498
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?SetText@CTextBrush@@QEAAJPEBG_K@Z @ 0x1801B56D8 (-SetText@CTextBrush@@QEAAJPEBG_K@Z.c)
 */

__int64 __fastcall CTextBrush::ProcessSetText(
        CTextBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_TEXTBRUSH_SETTEXT *a3,
        const unsigned __int16 *a4,
        unsigned int a5)
{
  __int64 v6; // rcx
  unsigned int v7; // ebx
  unsigned __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rcx

  v6 = *((unsigned int *)a3 + 2);
  if ( 2 * (unsigned __int64)(unsigned int)(v6 + 1) <= a5 )
  {
    v8 = *((unsigned int *)a3 + 2);
    if ( a4[v6] )
    {
      v7 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024809, 0xC8u);
    }
    else
    {
      v9 = CTextBrush::SetText(this, a4, v8);
      v7 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xCBu);
    }
  }
  else
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024809, 0xC1u);
  }
  (*(void (__fastcall **)(CTextBrush *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 19);
  return v7;
}
