/*
 * XREFs of ??$CreateTouchVisual@VCPenPressHoldVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCPenPressHoldVisual@@@Z @ 0x180090F90
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18009281C (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x180045A58 (--0CTouchVisual@@IEAA@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CPenPressHoldVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18009A910 (-Initialize@CPenPressHoldVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 */

__int64 __fastcall CreateTouchVisual<CPenPressHoldVisual>(struct IDwmChannel *a1, __int64 a2, CTouchVisual **a3)
{
  unsigned int v5; // edi
  CTouchVisual *v6; // rax
  CTouchVisual *v7; // rbx
  int v8; // eax

  if ( a3 )
  {
    v6 = (CTouchVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                           WPF::g_pProcessHeap,
                           368LL);
    v7 = v6;
    if ( v6 )
    {
      CTouchVisual::CTouchVisual(v6);
      *(_QWORD *)v7 = &CPenPressHoldVisual::`vftable';
      *((_QWORD *)v7 + 41) = 0LL;
      *((_QWORD *)v7 + 42) = 0LL;
      *((_DWORD *)v7 + 86) = 0;
      *((_DWORD *)v7 + 87) = 0;
      *((_DWORD *)v7 + 88) = 0;
      *((_QWORD *)v7 + 38) = 0LL;
      *((_QWORD *)v7 + 39) = 0LL;
    }
    else
    {
      v7 = 0LL;
    }
    if ( v7 )
    {
      v8 = CPenPressHoldVisual::Initialize(v7, a1);
      v5 = v8;
      if ( v8 >= 0 )
      {
        *a3 = v7;
        v7 = 0LL;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x3Fu);
      }
      if ( v7 )
        CBaseObject::Release(v7);
    }
    else
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x3Du);
    }
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x39u);
  }
  return v5;
}
