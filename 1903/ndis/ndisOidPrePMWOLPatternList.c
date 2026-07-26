/*
 * XREFs of ndisOidPrePMWOLPatternList @ 0x1C0074890
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqqL @ 0x1C0002F40 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     ndisQueryWakeUpPatternList @ 0x1C0075D38 (ndisQueryWakeUpPatternList.c)
 *     ndisQueryWolPatternList @ 0x1C0075F14 (ndisQueryWolPatternList.c)
 */

char __fastcall ndisOidPrePMWOLPatternList(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v6; // r14
  char v7; // bl
  _DWORD *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int8 v11; // al
  __int64 v12; // r8
  __int64 v13; // rcx
  unsigned __int8 v14; // al
  int v15; // ecx
  __int64 v16; // rcx
  unsigned __int8 v17; // al
  int WakeUpPatternList; // eax

  v4 = *a1;
  v6 = a1[3];
  v7 = 0;
  v8 = (_DWORD *)a1[4];
  v9 = v6;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      11,
      88,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      v4,
      v6,
      (char)v8);
    v9 = a1[3];
  }
  LOBYTE(a4) = 6;
  if ( v9
    && (v10 = *(_QWORD *)(v9 + 24), v11 = *(_BYTE *)(v10 + 56), v11 <= 6u)
    && (v11 != 6 || *(_BYTE *)(v10 + 57) < 0x14u)
    || (v12 = a1[1]) != 0
    && (v8[22] & 0x4000) == 0
    && (v13 = *(_QWORD *)(v12 + 16), v14 = *(_BYTE *)(v13 + 100), v14 <= 6u)
    && (v14 != 6 || *(_BYTE *)(v13 + 101) < 0x14u)
    || (v15 = v8[1], (v15 & 0xFFFFFFFD) != 0) )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
LABEL_30:
    v7 = 1;
    goto LABEL_31;
  }
  if ( v9 && !v15 )
  {
    v16 = *(_QWORD *)(v6 + 504);
    goto LABEL_28;
  }
  if ( v12 && (v8[22] & 0x4000) == 0 && !v15 )
  {
    v16 = *(_QWORD *)(v12 + 720);
    goto LABEL_28;
  }
  if ( !a1[2] && *a1 )
  {
    v17 = *(_BYTE *)(v4 + 32);
    if ( v17 <= 6u && (v17 != 6 || *(_BYTE *)(v4 + 33) < 0x14u) )
    {
      v8[8] = -50265851;
      WakeUpPatternList = ndisQueryWakeUpPatternList(0, v4, (char)v8);
LABEL_29:
      *((_DWORD *)a1 + 10) = WakeUpPatternList;
      goto LABEL_30;
    }
    v16 = *(_QWORD *)(v4 + 968);
LABEL_28:
    WakeUpPatternList = ndisQueryWolPatternList(v16, v8, v12, a4);
    goto LABEL_29;
  }
LABEL_31:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      0xBu,
      0x59u,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      v4,
      v6,
      (char)v8,
      *((_DWORD *)a1 + 10));
  return v7;
}
