/*
 * XREFs of ??1Completer@?$static_lazy@VTouchKeyboardExperienceTelemetryLogger@@@details@wil@@QEAA@XZ @ 0x18031DDC4
 * Callers:
 *     ??$CoreInputViewOcclusionChanged@AEAIAEAW4CoreInputViewOcclusionKind@Core@ViewManagement@UI@Windows@@PEAGAEAURect@Foundation@5@AEAU675@AEAU675@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAIAEAW4CoreInputViewOcclusionKind@Core@ViewManagement@UI@Windows@@$$QEAPEAGAEAURect@Foundation@5@33@Z @ 0x18031B994 (--$CoreInputViewOcclusionChanged@AEAIAEAW4CoreInputViewOcclusionKind@Core@ViewManagement@UI@Wind.c)
 *     ??$EditControlPositionChanged@PEAGAEAURect@Foundation@Windows@@AEAU123@@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEAGAEAURect@Foundation@Windows@@1@Z @ 0x18031BB24 (--$EditControlPositionChanged@PEAGAEAURect@Foundation@Windows@@AEAU123@@TouchKeyboardExperienceT.c)
 *     ?IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z @ 0x1803208F4 (-IsEnabled@TouchKeyboardExperienceTelemetryLogger@@SA_NE_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x18031B654 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 */

BOOL __fastcall wil::details::static_lazy<TouchKeyboardExperienceTelemetryLogger>::Completer::~Completer(__int64 a1)
{
  DWORD v1; // edx
  LPINIT_ONCE v3; // rbx
  union _RTL_RUN_ONCE v4; // rdx
  union _RTL_RUN_ONCE v5; // rax

  v1 = *(_DWORD *)(a1 + 8);
  if ( !v1 )
  {
    v3 = *(LPINIT_ONCE *)a1;
    v4.Ptr = (PVOID)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                      a1,
                      (void (__cdecl *)())lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
    v5.Ptr = v3[1].Ptr;
    v3[2].Ptr = v4.Ptr;
    LOBYTE(v3[3].Ptr) = 0;
    HIDWORD(v3[3].Ptr) = 1;
    (*((void (__fastcall **)(LPINIT_ONCE))v5.Ptr + 1))(v3 + 1);
    v1 = *(_DWORD *)(a1 + 8);
  }
  return InitOnceComplete(*(LPINIT_ONCE *)a1, v1, (LPVOID)(*(_QWORD *)a1 + 8LL));
}
