/*
 * XREFs of ?RequestSyncCallout@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z @ 0x1C0245A3C
 * Callers:
 *     DxgkRequestSyncDisplaySwitchCallout @ 0x1C02468D4 (DxgkRequestSyncDisplaySwitchCallout.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_GDISPLAY_CALLOUT_ENTRY@@QEAAPEAXI@Z @ 0x1C0041F50 (--_GDISPLAY_CALLOUT_ENTRY@@QEAAPEAXI@Z.c)
 *     DpiGdiSyncDisplayCallout @ 0x1C029C81C (DpiGdiSyncDisplayCallout.c)
 */

__int64 __fastcall DXGDISPLAYCALLOUTQUEUE::RequestSyncCallout(DXGDISPLAYCALLOUTQUEUE *this, _BYTE *P, __int64 a3)
{
  char **v6; // rax
  char *v7; // rbx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rax
  _BYTE v15[24]; // [rsp+20h] [rbp-18h] BYREF

  P[20] = 1;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  v6 = (char **)*((_QWORD *)this + 6);
  v7 = (char *)this + 40;
  if ( *v6 != v7 )
    __fastfail(3u);
  *(_QWORD *)P = v7;
  *((_QWORD *)P + 1) = v6;
  *v6 = P;
  *((_QWORD *)v7 + 1) = P;
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  v8 = DpiGdiSyncDisplayCallout(a3);
  v12 = v8;
  if ( v8 < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v13 + 24) = v12;
    WdLogEvent5_WdError(v13);
  }
  else
  {
    LODWORD(v12) = *((_DWORD *)P + 14);
  }
  DISPLAY_CALLOUT_ENTRY::`scalar deleting destructor'((DISPLAY_CALLOUT_ENTRY *)P);
  if ( v15[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  return (unsigned int)v12;
}
