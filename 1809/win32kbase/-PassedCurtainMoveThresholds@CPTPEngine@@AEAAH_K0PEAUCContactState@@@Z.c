/*
 * XREFs of ?PassedCurtainMoveThresholds@CPTPEngine@@AEAAH_K0PEAUCContactState@@@Z @ 0x1C015CAEC
 * Callers:
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@PEAH@Z @ 0x1C015FBA8 (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CPTPEngine::PassedCurtainMoveThresholds(
        CPTPEngine *this,
        __int64 a2,
        __int64 a3,
        struct CContactState *a4)
{
  return a3 - a2 <= *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 71) / 0x3E8
      && (int)((HIDWORD(*((_QWORD *)this + 381)) - HIDWORD(*((_QWORD *)a4 + 3)))
             * (HIDWORD(*((_QWORD *)this + 381)) - HIDWORD(*((_QWORD *)a4 + 3)))
             + (*((_QWORD *)this + 381) - *((_QWORD *)a4 + 3)) * (*((_QWORD *)this + 381) - *((_QWORD *)a4 + 3))) > (unsigned __int64)*((unsigned int *)this + 72);
}
