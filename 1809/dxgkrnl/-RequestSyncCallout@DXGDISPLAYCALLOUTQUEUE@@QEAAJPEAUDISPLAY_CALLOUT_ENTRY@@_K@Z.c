/*
 * XREFs of ?RequestSyncCallout@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z @ 0x1C0211D38
 * Callers:
 *     DxgkRequestSyncDisplaySwitchCallout @ 0x1C0212C64 (DxgkRequestSyncDisplaySwitchCallout.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??_GDISPLAY_CALLOUT_ENTRY@@QEAAPEAXI@Z @ 0x1C003B868 (--_GDISPLAY_CALLOUT_ENTRY@@QEAAPEAXI@Z.c)
 *     DpiGdiSyncDisplayCallout @ 0x1C0262D3C (DpiGdiSyncDisplayCallout.c)
 */

__int64 __fastcall DXGDISPLAYCALLOUTQUEUE::RequestSyncCallout(DXGDISPLAYCALLOUTQUEUE *this, _BYTE *P, __int64 a3)
{
  char **v6; // rax
  char *v7; // rbx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF

  P[20] = 1;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  v6 = (char **)*((_QWORD *)this + 6);
  v7 = (char *)this + 40;
  if ( *v6 != v7 )
    __fastfail(3u);
  *(_QWORD *)P = v7;
  *((_QWORD *)P + 1) = v6;
  *v6 = P;
  *((_QWORD *)v7 + 1) = P;
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  v8 = DpiGdiSyncDisplayCallout(a3);
  v10 = v8;
  if ( v8 < 0 )
  {
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = v10;
    WdLogEvent5_WdError(v11);
  }
  else
  {
    LODWORD(v10) = *((_DWORD *)P + 14);
  }
  DISPLAY_CALLOUT_ENTRY::`scalar deleting destructor'((DISPLAY_CALLOUT_ENTRY *)P);
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  return (unsigned int)v10;
}
