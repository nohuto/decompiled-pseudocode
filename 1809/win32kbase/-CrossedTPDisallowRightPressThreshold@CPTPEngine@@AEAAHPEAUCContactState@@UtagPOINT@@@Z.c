/*
 * XREFs of ?CrossedTPDisallowRightPressThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z @ 0x1C015A0EC
 * Callers:
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@PEAH@Z @ 0x1C015FBA8 (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CPTPEngine::CrossedTPDisallowRightPressThreshold(
        CPTPEngine *this,
        struct CContactState *a2,
        struct tagPOINT a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r9
  unsigned int v5; // r10d
  unsigned int v6; // r11d

  v3 = *((_QWORD *)a2 + 1);
  v4 = HIDWORD(v3);
  if ( SHIDWORD(v3) < a3.y )
    LODWORD(v4) = HIDWORD(*((_QWORD *)a2 + 1));
  v5 = *((_DWORD *)this + 82) * *((_DWORD *)this + 82);
  v6 = *((_DWORD *)this + 83) * *((_DWORD *)this + 83);
  return v5 * (__int64)(((int)v4 - a3.y) * ((int)v4 - a3.y))
       + (unsigned __int64)v6 * ((int)v3 - a3.x) * ((int)v3 - a3.x) >= v5 * (unsigned __int64)v6;
}
