/*
 * XREFs of ?TelemetrySetAnimationScenarioGUID@CAnimationResource@@UEAAJAEBU_GUID@@@Z @ 0x1800B27B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationResource::TelemetrySetAnimationScenarioGUID(
        CAnimationResource *this,
        const struct _GUID *a2)
{
  unsigned int v2; // ebx
  struct _GUID *v5; // rax

  v2 = 0;
  if ( *((_QWORD *)this + 4) )
  {
    return (unsigned int)-2147024891;
  }
  else
  {
    v5 = (struct _GUID *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                           WPF::g_pProcessHeap,
                           16LL);
    *((_QWORD *)this + 4) = v5;
    if ( v5 )
    {
      *v5 = *a2;
    }
    else
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x159u);
    }
  }
  return v2;
}
