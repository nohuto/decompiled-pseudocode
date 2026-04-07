/*
 * XREFs of ?ActivateTimeline@CButton@@AEAAJPEAPEAV?$CTimeline@M@@NMMW4InterpolationMode@@@Z @ 0x180006D5C
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x180024E10 (-RedrawVisual@CButton@@AEAAJXZ.c)
 * Callees:
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x1800214F4 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180039E24 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qp @ 0x18007826C (McTemplateU0qp.c)
 */

__int64 __fastcall CButton::ActivateTimeline(struct CVisual *a1, __int64 *a2, double a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // r8

  v3 = 0;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qp(a1, &UdwmAnimation_Start, 7LL);
  v6 = *a2;
  if ( *a2 )
  {
    *(_QWORD *)(v6 + 48) = *(_QWORD *)(v6 + 32);
    *(double *)(v6 + 24) = a3;
    *(_WORD *)(v6 + 72) = 256;
    CDesktopManager::s_fTimelineDirty = 1;
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
           WPF::g_pProcessHeap,
           80LL);
    if ( v7 )
    {
      CTimelineBase::CTimelineBase(v7, v8, v7);
      *v9 = &CTimeline<float>::`vftable';
    }
    else
    {
      v9 = 0LL;
    }
    *a2 = (__int64)v9;
    if ( v9 )
    {
      CDesktopManager::RegisterForGlobalTimeChangeNotification(a1);
    }
    else
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1DAu);
    }
  }
  return v3;
}
