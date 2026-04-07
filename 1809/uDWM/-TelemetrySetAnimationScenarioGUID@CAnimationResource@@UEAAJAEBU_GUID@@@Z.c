/*
 * XREFs of ?TelemetrySetAnimationScenarioGUID@CAnimationResource@@UEAAJAEBU_GUID@@@Z @ 0x1800AE550
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationResource::TelemetrySetAnimationScenarioGUID(
        CAnimationResource *this,
        const struct _GUID *a2)
{
  unsigned int v4; // ebx
  struct _GUID *v5; // rax

  v4 = *((_QWORD *)this + 4) != 0LL ? 0x80070005 : 0;
  if ( !*((_QWORD *)this + 4) )
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
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x174u);
    }
  }
  return v4;
}
