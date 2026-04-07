/*
 * XREFs of ??$CreateTouchVisual@VCTextTetherVisual@@@@YAJ_KPEAPEAVCTextTetherVisual@@@Z @ 0x180095E84
 * Callers:
 *     ?OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z @ 0x1800986B4 (-OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ??0CTextTetherVisual@@IEAA@_K@Z @ 0x18009AF34 (--0CTextTetherVisual@@IEAA@_K@Z.c)
 *     ?Initialize@CTextTetherVisual@@MEAAJXZ @ 0x18009B0B0 (-Initialize@CTextTetherVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CreateTouchVisual<CTextTetherVisual>(unsigned __int64 a1, CTextTetherVisual **a2)
{
  unsigned int v4; // edi
  CTextTetherVisual *v5; // rax
  CTextTetherVisual *v6; // rbx
  int v7; // eax

  if ( a2 )
  {
    v5 = (CTextTetherVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                                WPF::g_pProcessHeap,
                                432LL);
    if ( v5 )
      v6 = CTextTetherVisual::CTextTetherVisual(v5, a1);
    else
      v6 = 0LL;
    if ( v6 )
    {
      v7 = CTextTetherVisual::Initialize(v6);
      v4 = v7;
      if ( v7 >= 0 )
      {
        *a2 = v6;
        v6 = 0LL;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x3Fu);
      }
      if ( v6 )
        CBaseObject::Release(v6);
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x3Du);
    }
  }
  else
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x39u);
  }
  return v4;
}
