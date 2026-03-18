/*
 * XREFs of ?xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AEAA_NPEAUtagWND@@@Z @ 0x1C023EC4C
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00CFC24 (xxxProcessEventMessage.c)
 * Callees:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0010414 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C001152C (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     INPUTDEST_FROM_PWND @ 0x1C013D0BC (INPUTDEST_FROM_PWND.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     SetMiPPromotion @ 0x1C01E3AC0 (SetMiPPromotion.c)
 *     PhysicalToLogicalPointForWindow @ 0x1C01E7384 (PhysicalToLogicalPointForWindow.c)
 */

char __fastcall CMoveSizeRequest::xxxRevalidateAndTransferCapture(CMoveSizeRequest *this, struct tagWND *a2)
{
  __int64 v4; // rax
  int v5; // ecx
  _DWORD *v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v10; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v11; // [rsp+28h] [rbp-D8h] BYREF
  _DWORD v12[32]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v13; // [rsp+B0h] [rbp-50h]
  __int128 v14; // [rsp+C0h] [rbp-40h]
  __int128 v15; // [rsp+D0h] [rbp-30h]
  __int128 v16; // [rsp+E0h] [rbp-20h]
  __int128 v17; // [rsp+F0h] [rbp-10h]
  __int128 v18; // [rsp+100h] [rbp+0h]
  __int128 v19; // [rsp+110h] [rbp+10h]
  __int64 v20; // [rsp+120h] [rbp+20h]

  v4 = PtiFromThreadId(*((unsigned int *)this + 1));
  v11 = v4;
  if ( !v4 )
    return 0;
  v5 = *(_DWORD *)(v4 + 1224);
  if ( (v5 & 0x20000000) == 0 )
    return 0;
  *(_DWORD *)(v4 + 1224) = v5 & 0xDFFFFFFF;
  if ( *((_DWORD *)this + 4) != CMoveSizeRequest::cNextMoveSizeOpRequestId - 1
    || (*(_DWORD *)(v11 + 480) & 1) != 0
    || !(unsigned __int8)IsCapturedByThread(&v11)
    || *(struct tagWND **)(gpqForeground + 128LL) != a2
    && (!(unsigned int)CoreWindowProp::CompositeAppHasForeground(a2)
     || !xxxForceForegroundWindowNoRestoreFocus((__int64)a2, 0)) )
  {
    return 0;
  }
  *(_BYTE *)(*(_QWORD *)(gptiCurrent + 424LL) + 236LL) |= 4u;
  *(_BYTE *)(*(_QWORD *)(v11 + 424) + 236LL) &= ~4u;
  v6 = INPUTDEST_FROM_PWND(v12, (__int64)a2);
  v13 = *(_OWORD *)v6;
  v14 = *((_OWORD *)v6 + 1);
  v15 = *((_OWORD *)v6 + 2);
  v16 = *((_OWORD *)v6 + 3);
  v17 = *((_OWORD *)v6 + 4);
  v18 = *((_OWORD *)v6 + 5);
  v19 = *((_OWORD *)v6 + 6);
  v20 = *((_QWORD *)v6 + 14);
  ForceCapture(2LL);
  v7 = *((_QWORD *)this + 1);
  v8 = *(_DWORD *)(gptiCurrent + 756LL);
  HIDWORD(v10) = *(_DWORD *)(gptiCurrent + 760LL);
  *(_QWORD *)(gptiCurrent + 768LL) = v7;
  LODWORD(v10) = v8;
  PhysicalToLogicalPointForWindow(v7, (__int64)a2, &v10);
  *(_QWORD *)(gptiCurrent + 756LL) = v10;
  SetMiPPromotion(gptiCurrent, 578);
  return 1;
}
