/*
 * XREFs of ?CrossedTPTapWarpBackThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z @ 0x1C015A3C4
 * Callers:
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@PEAH@Z @ 0x1C015FBA8 (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CPTPEngine::CrossedTPTapWarpBackThreshold(
        CPTPEngine *this,
        struct CContactState *a2,
        struct tagPOINT a3)
{
  unsigned __int64 v4; // r9
  int v5; // r11d
  unsigned __int64 v6; // rcx
  unsigned int v7; // r11d
  unsigned int v8; // eax

  if ( (*((_DWORD *)this + 55) & 0x400) == 0 )
    return 1LL;
  v4 = *((_QWORD *)a2 + 1);
  v5 = *((_DWORD *)this + 51);
  v6 = HIDWORD(v4);
  v7 = v5 * v5;
  v8 = *((_DWORD *)this + 53) * *((_DWORD *)this + 53);
  if ( SHIDWORD(v4) < a3.y )
  {
    LODWORD(v6) = HIDWORD(*((_QWORD *)a2 + 1));
    v8 = *((_DWORD *)this + 54) * *((_DWORD *)this + 54);
  }
  return v8 * (__int64)(((int)v4 - a3.x) * ((int)v4 - a3.x))
       + (unsigned __int64)v7 * ((int)v6 - a3.y) * ((int)v6 - a3.y) >= v8 * (unsigned __int64)v7;
}
