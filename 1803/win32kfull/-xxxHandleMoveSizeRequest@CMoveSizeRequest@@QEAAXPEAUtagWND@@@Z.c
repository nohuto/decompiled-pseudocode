/*
 * XREFs of ?xxxHandleMoveSizeRequest@CMoveSizeRequest@@QEAAXPEAUtagWND@@@Z @ 0x1C01FE0FC
 * Callers:
 *     xxxProcessEventMessage @ 0x1C003C798 (xxxProcessEventMessage.c)
 * Callees:
 *     zzzSetCursor @ 0x1C001574C (zzzSetCursor.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     INPUTDEST_FROM_PWND @ 0x1C00E78F0 (INPUTDEST_FROM_PWND.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     SetMiPPromotion @ 0x1C01ABFDC (SetMiPPromotion.c)
 *     PhysicalToLogicalPointForWindow @ 0x1C01AF9E4 (PhysicalToLogicalPointForWindow.c)
 */

void __fastcall CMoveSizeRequest::xxxHandleMoveSizeRequest(CMoveSizeRequest *this, struct tagWND *a2)
{
  __int64 v4; // rax
  int v5; // ecx
  __int128 *v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  unsigned __int64 v9; // r9
  __int64 v10; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v11; // [rsp+58h] [rbp-A8h] BYREF
  int v12[44]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v13; // [rsp+110h] [rbp+10h]
  __int128 v14; // [rsp+120h] [rbp+20h]
  __int128 v15; // [rsp+130h] [rbp+30h]
  __int128 v16; // [rsp+140h] [rbp+40h]
  __int128 v17; // [rsp+150h] [rbp+50h]
  __int128 v18; // [rsp+160h] [rbp+60h]
  __int128 v19; // [rsp+170h] [rbp+70h]
  __int128 v20; // [rsp+180h] [rbp+80h]
  __int128 v21; // [rsp+190h] [rbp+90h]
  __int128 v22; // [rsp+1A0h] [rbp+A0h]
  __int128 v23; // [rsp+1B0h] [rbp+B0h]

  v4 = PtiFromThreadId(*((unsigned int *)this + 1));
  v11 = v4;
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 1204);
    if ( (v5 & 1) != 0 )
    {
      *(_DWORD *)(v4 + 1204) = v5 & 0xFFFFFFFE;
      if ( (*(_DWORD *)(v11 + 480) & 1) == 0
        && *((_DWORD *)this + 4) == CMoveSizeRequest::cNextMoveSizeOpRequestId - 1
        && (unsigned __int8)IsCapturedByThread(&v11)
        && gpqForeground
        && *(struct tagWND **)(gpqForeground + 120LL) == a2 )
      {
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
        *(_BYTE *)(*(_QWORD *)(gptiCurrent + 424LL) + 228LL) |= 4u;
        *(_BYTE *)(*(_QWORD *)(v11 + 424) + 228LL) &= ~4u;
        v7 = *((_QWORD *)this + 1);
        v10 = *(_QWORD *)(gptiCurrent + 748LL);
        *(_QWORD *)(gptiCurrent + 760LL) = v7;
        PhysicalToLogicalPointForWindow(v7, (__int64)a2, &v10);
        *(_QWORD *)(gptiCurrent + 748LL) = v10;
        v11 = 0LL;
        SetMiPPromotion(gptiCurrent, 578);
        zzzSetCursor(*(_QWORD *)&gasyscur[8 * dword_1C02E66C0[*(int *)this] + 4]);
        v8 = dword_1C02E66E8[*(int *)this];
        SetOrClrWF(1, (__int64)a2, 55584, 0);
        v9 = *(unsigned __int16 *)(gptiCurrent + 748LL) | (unsigned __int64)(*(unsigned __int16 *)(gptiCurrent + 752LL) << 16);
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout((__int64 *)a2, 0x112u, (HWND)v8, v9, 0, 0, 0LL, 1, 0);
        SetOrClrWF(0, (__int64)a2, 55584, 1);
      }
    }
  }
}
