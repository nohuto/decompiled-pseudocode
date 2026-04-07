/*
 * XREFs of ??$CreateTouchVisual@VCPenPressHoldVisual@@@@YAJ_KPEAPEAVCPenPressHoldVisual@@@Z @ 0x180095BA0
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x1800973A8 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x180044A18 (--0CTouchVisual@@IEAA@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CPenPressHoldVisual@@MEAAJXZ @ 0x18009F280 (-Initialize@CPenPressHoldVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CreateTouchVisual<CPenPressHoldVisual>(__int64 a1, CTouchVisual **a2)
{
  unsigned int v3; // edi
  CTouchVisual *v4; // rax
  CTouchVisual *v5; // rbx
  int v6; // eax

  if ( a2 )
  {
    v4 = (CTouchVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                           WPF::g_pProcessHeap,
                           368LL);
    v5 = v4;
    if ( v4 )
    {
      CTouchVisual::CTouchVisual(v4);
      *(_QWORD *)v5 = &CPenPressHoldVisual::`vftable';
      *((_QWORD *)v5 + 41) = 0LL;
      *((_QWORD *)v5 + 42) = 0LL;
      *((_DWORD *)v5 + 86) = 0;
      *((_DWORD *)v5 + 87) = 0;
      *((_DWORD *)v5 + 88) = 0;
      *((_QWORD *)v5 + 38) = 0LL;
      *((_QWORD *)v5 + 39) = 0LL;
    }
    else
    {
      v5 = 0LL;
    }
    if ( v5 )
    {
      v6 = CPenPressHoldVisual::Initialize(v5);
      v3 = v6;
      if ( v6 >= 0 )
      {
        *a2 = v5;
        v5 = 0LL;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x3Fu);
      }
      if ( v5 )
        CBaseObject::Release(v5);
    }
    else
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x3Du);
    }
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x39u);
  }
  return v3;
}
