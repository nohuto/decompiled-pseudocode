/*
 * XREFs of ?CrossedTPButtonWarpBackThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z @ 0x1C015A058
 * Callers:
 *     ?DoTPButtonWarpBack@CPTPEngine@@AEAA?AUtagPOINT@@PEAUPTPInput@@@Z @ 0x1C015B274 (-DoTPButtonWarpBack@CPTPEngine@@AEAA-AUtagPOINT@@PEAUPTPInput@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CPTPEngine::CrossedTPButtonWarpBackThreshold(
        CPTPEngine *this,
        struct CContactState *a2,
        struct tagPOINT a3)
{
  unsigned __int64 v4; // r9
  int v5; // r11d
  unsigned __int64 v6; // rcx
  unsigned int v7; // r11d
  unsigned int v8; // eax

  if ( (*((_DWORD *)this + 55) & 0x200) == 0 )
    return 1LL;
  v4 = *((_QWORD *)a2 + 6);
  v5 = *((_DWORD *)this + 78);
  v6 = HIDWORD(v4);
  v7 = v5 * v5;
  v8 = *((_DWORD *)this + 79) * *((_DWORD *)this + 79);
  if ( SHIDWORD(v4) < a3.y )
  {
    LODWORD(v6) = HIDWORD(*((_QWORD *)a2 + 6));
    v8 = *((_DWORD *)this + 80) * *((_DWORD *)this + 80);
  }
  return v8 * (__int64)(((int)v4 - a3.x) * ((int)v4 - a3.x))
       + (unsigned __int64)v7 * ((int)v6 - a3.y) * ((int)v6 - a3.y) >= v8 * (unsigned __int64)v7;
}
