/*
 * XREFs of ?CrossedTPMoveFilteringThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z @ 0x1C0194694
 * Callers:
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C0195BA8 (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z.c)
 *     ?FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z @ 0x1C019647C (-FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CPTPEngine::CrossedTPMoveFilteringThreshold(
        CPTPEngine *this,
        struct CContactState *a2,
        struct tagPOINT a3)
{
  __int64 v3; // rax
  unsigned int v4; // r11d
  unsigned int v5; // edx

  v3 = *((_QWORD *)a2 + 6);
  v5 = *((_DWORD *)this + 76) * *((_DWORD *)this + 76);
  if ( SHIDWORD(v3) < a3.y )
    v5 = *((_DWORD *)this + 77) * *((_DWORD *)this + 77);
  v4 = *((_DWORD *)this + 75) * *((_DWORD *)this + 75);
  return v5 * (__int64)(((int)v3 - a3.x) * ((int)v3 - a3.x))
       + (unsigned __int64)v4 * (HIDWORD(v3) - a3.y) * (HIDWORD(v3) - a3.y) >= v5 * (unsigned __int64)v4;
}
