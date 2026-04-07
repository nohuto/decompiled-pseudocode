/*
 * XREFs of ?SetSamplingMode@CVisual@@QEAAJW4Enum@CompositionResampleMode@@@Z @ 0x18004A42C
 * Callers:
 *     ?UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z @ 0x18004A33C (-UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z.c)
 *     ?OnSetDesktopMagnifierSamplingMode@CFullScreenMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@Z @ 0x18007A208 (-OnSetDesktopMagnifierSamplingMode@CFullScreenMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetSamplingMode(__int64 a1, unsigned int a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 16LL) + 1216LL))(
         *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL),
         *(unsigned int *)(*(_QWORD *)(a1 + 16) + 24LL),
         a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x205u);
  return v3;
}
