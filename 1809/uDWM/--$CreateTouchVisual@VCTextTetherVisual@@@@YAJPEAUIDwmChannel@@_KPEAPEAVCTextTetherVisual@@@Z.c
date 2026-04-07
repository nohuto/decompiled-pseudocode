/*
 * XREFs of ??$CreateTouchVisual@VCTextTetherVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTextTetherVisual@@@Z @ 0x18009129C
 * Callers:
 *     ?OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z @ 0x180093BB8 (-OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ??0CTextTetherVisual@@IEAA@_K@Z @ 0x1800964E4 (--0CTextTetherVisual@@IEAA@_K@Z.c)
 *     ?Initialize@CTextTetherVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180096660 (-Initialize@CTextTetherVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 */

__int64 __fastcall CreateTouchVisual<CTextTetherVisual>(
        struct IDwmChannel *a1,
        unsigned __int64 a2,
        CTextTetherVisual **a3)
{
  unsigned int v6; // edi
  CTextTetherVisual *v7; // rax
  CTextTetherVisual *v8; // rbx
  int v9; // eax

  if ( a3 )
  {
    v7 = (CTextTetherVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                                WPF::g_pProcessHeap,
                                432LL);
    if ( v7 )
      v8 = CTextTetherVisual::CTextTetherVisual(v7, a2);
    else
      v8 = 0LL;
    if ( v8 )
    {
      v9 = CTextTetherVisual::Initialize(v8, a1);
      v6 = v9;
      if ( v9 >= 0 )
      {
        *a3 = v8;
        v8 = 0LL;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x3Fu);
      }
      if ( v8 )
        CBaseObject::Release(v8);
    }
    else
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x3Du);
    }
  }
  else
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x39u);
  }
  return v6;
}
