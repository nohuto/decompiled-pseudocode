/*
 * XREFs of ?xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AEAA_NPEAUtagWND@@@Z @ 0x1C0226F98
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0037588 (xxxProcessEventMessage.c)
 * Callees:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00057F0 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     INPUTDEST_FROM_PWND @ 0x1C013207C (INPUTDEST_FROM_PWND.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?xxxSetForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@PEAUtagTHREADINFO@@K@Z @ 0x1C01C31A0 (-xxxSetForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@PEAUtagTHREADINFO@@K@Z.c)
 *     SetMiPPromotion @ 0x1C01CF1E0 (SetMiPPromotion.c)
 *     PhysicalToLogicalPointForWindow @ 0x1C01D279C (PhysicalToLogicalPointForWindow.c)
 */

char __fastcall CMoveSizeRequest::xxxRevalidateAndTransferCapture(CMoveSizeRequest *this, struct tagWND *a2)
{
  __int64 v4; // rax
  int v5; // ecx
  __int128 *v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v10; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v11; // [rsp+28h] [rbp-D8h] BYREF
  _DWORD v12[44]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v13; // [rsp+E0h] [rbp-20h]
  __int128 v14; // [rsp+F0h] [rbp-10h]
  __int128 v15; // [rsp+100h] [rbp+0h]
  __int128 v16; // [rsp+110h] [rbp+10h]
  __int128 v17; // [rsp+120h] [rbp+20h]
  __int128 v18; // [rsp+130h] [rbp+30h]
  __int128 v19; // [rsp+140h] [rbp+40h]
  __int128 v20; // [rsp+150h] [rbp+50h]
  __int128 v21; // [rsp+160h] [rbp+60h]
  __int128 v22; // [rsp+170h] [rbp+70h]
  __int128 v23; // [rsp+180h] [rbp+80h]

  v4 = PtiFromThreadId(*((unsigned int *)this + 1));
  v11 = v4;
  if ( !v4 )
    return 0;
  v5 = *(_DWORD *)(v4 + 1212);
  if ( (v5 & 1) == 0 )
    return 0;
  *(_DWORD *)(v4 + 1212) = v5 & 0xFFFFFFFE;
  if ( *((_DWORD *)this + 4) != CMoveSizeRequest::cNextMoveSizeOpRequestId - 1
    || (*(_DWORD *)(v11 + 488) & 1) != 0
    || !(unsigned __int8)IsCapturedByThread(&v11)
    || *(struct tagWND **)(gpqForeground + 120LL) != a2
    && (!(unsigned int)CoreWindowProp::CompositeAppHasForeground(a2)
     || !xxxSetForegroundWindowNoRestoreFocus((LARGE_INTEGER *)a2, *((struct tagTHREADINFO **)a2 + 2), 0)) )
  {
    return 0;
  }
  *(_BYTE *)(*(_QWORD *)(gptiCurrent + 432LL) + 228LL) |= 4u;
  *(_BYTE *)(*(_QWORD *)(v11 + 432) + 228LL) &= ~4u;
  v6 = (__int128 *)INPUTDEST_FROM_PWND(v12, (__int64)a2);
  v13 = *v6;
  v14 = v6[1];
  v15 = v6[2];
  v16 = v6[3];
  v17 = v6[4];
  v18 = v6[5];
  v19 = v6[6];
  v20 = v6[7];
  v21 = v6[8];
  v22 = v6[9];
  v23 = v6[10];
  ForceCapture(2LL);
  v7 = *((_QWORD *)this + 1);
  v8 = *(_DWORD *)(gptiCurrent + 764LL);
  HIDWORD(v10) = *(_DWORD *)(gptiCurrent + 768LL);
  *(_QWORD *)(gptiCurrent + 776LL) = v7;
  LODWORD(v10) = v8;
  PhysicalToLogicalPointForWindow(v7, (__int64)a2, &v10);
  *(_QWORD *)(gptiCurrent + 764LL) = v10;
  SetMiPPromotion(gptiCurrent, 578);
  return 1;
}
