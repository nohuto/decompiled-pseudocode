/*
 * XREFs of xxxMetricsRecalc @ 0x1C01DA8E4
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00BA614 (xxxSystemParametersInfoWorker.c)
 *     ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x1C00E122C (-xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01DA188 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C00168A0 (IsNonImmersiveBand.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C00CB0E4 (xxxSetWindowPos.c)
 *     BuildHwndList @ 0x1C00CC820 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00CC9E0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall xxxMetricsRecalc(char a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  char v7; // r15
  __int64 v8; // rbx
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct tagBWL *v13; // r13
  unsigned __int64 *v14; // r14
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rsi
  int v18; // r12d
  __int64 v19; // rbx
  unsigned int v20; // r14d
  __int64 v21; // r8
  _DWORD *v22; // rdx
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rcx
  _DWORD *Prop; // rax
  __int64 v27; // r9
  int v28; // ecx
  __int64 v29; // rax
  char v30; // r8
  int v31; // ecx
  __int64 DesktopWindow; // rax
  __int64 v33; // rdx
  int v34; // r8d
  int v35; // r10d
  unsigned int v36; // r11d
  __int64 v37; // rax
  int v38; // r9d
  __int64 v39; // r10
  unsigned __int64 *v40; // [rsp+58h] [rbp-41h]
  struct tagBWL *v41; // [rsp+68h] [rbp-31h]
  __int128 v42; // [rsp+70h] [rbp-29h]
  __int64 v43; // [rsp+80h] [rbp-19h] BYREF
  __int64 v44; // [rsp+88h] [rbp-11h]
  __int64 v45; // [rsp+90h] [rbp-9h]

  v43 = 0LL;
  v7 = a1;
  v44 = 0LL;
  v45 = 0LL;
  v8 = gptiCurrent;
  result = BuildHwndList(*(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 24LL) + 112LL));
  v41 = (struct tagBWL *)result;
  v13 = (struct tagBWL *)result;
  if ( !result )
    return result;
  v14 = (unsigned __int64 *)(result + 32);
  v40 = (unsigned __int64 *)(result + 32);
  v15 = (*(_QWORD *)(result + 8) - result - 32) >> 3;
  if ( (int)v15 <= 0 )
    return FreeHwndList(v13);
  do
  {
    LOBYTE(v10) = 1;
    v16 = HMValidateHandleNoSecure(*v14, v10, v11, v12);
    v17 = v16;
    if ( !v16
      || !IsNonImmersiveBand(v16)
      || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 16) + 416LL) + 812LL) & 0x30) == 0x10 )
    {
      goto LABEL_47;
    }
    v43 = *(_QWORD *)(v8 + 408);
    *(_QWORD *)(v8 + 408) = &v43;
    v44 = v17;
    HMLockObject(v17);
    v18 = 0;
    v19 = v17 + 40;
    if ( (v7 & 4) != 0 && (*(_BYTE *)(*(_QWORD *)v19 + 31LL) & 0x20) != 0 )
    {
      v20 = *(_OWORD *)(*(_QWORD *)v19 + 88LL);
LABEL_36:
      v18 = 1;
      DesktopWindow = GetDesktopWindow(v17);
      if ( v33 != DesktopWindow )
      {
        v37 = *(_QWORD *)(v33 + 40);
        v34 -= *(_DWORD *)(v37 + 108);
        v20 -= *(_DWORD *)(v37 + 104);
        v36 -= *(_DWORD *)(v37 + 108);
        v35 -= *(_DWORD *)(v37 + 104);
      }
      xxxSetWindowPos((struct tagWND *)v17, 0LL, v20, v36, v35 - v20, v34 - v36, 316);
      v14 = v40;
      goto LABEL_28;
    }
    v21 = *(_QWORD *)v19;
    v22 = (_DWORD *)*(unsigned int *)(*(_QWORD *)v19 + 28LL);
    v25 = 0;
    if ( (*(_DWORD *)(*(_QWORD *)v19 + 28LL) & 0xC00000) == 12582912 || ((unsigned int)v22 & 0x40000) != 0 )
    {
      v23 = *(_QWORD *)(v17 + 16);
      v24 = *(_DWORD *)(v23 + 624) <= 0x9900u ? *(_DWORD *)(v23 + 640) : 0;
      if ( (v24 & 0x30000000) == 0 )
        v25 = 1;
    }
    if ( (a1 & 1) != 0 && ((*(_BYTE *)(v21 + 30) & 4) != 0 || (_DWORD)v25) )
    {
      Prop = (_DWORD *)GetProp(v17, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
      v27 = *(_QWORD *)v19;
      v22 = Prop;
      v28 = a6;
      if ( (*(_BYTE *)(*(_QWORD *)v19 + 30LL) & 4) == 0 )
        v28 = a7;
      v21 = (unsigned int)(v28 + a2);
      v25 = (unsigned int)(a3 + v28);
      if ( Prop && (Prop[12] & 0x40) != 0 )
      {
        Prop[10] -= v21;
        Prop[11] -= v25;
        v27 = *(_QWORD *)(v17 + 40);
      }
      if ( (*(_BYTE *)(v27 + 31) & 0x20) == 0 )
      {
        v20 = *(_DWORD *)(v27 + 88) - v21;
        v7 = a1;
        goto LABEL_36;
      }
      if ( Prop )
      {
        *Prop -= v21;
        Prop[2] += v21;
        Prop[1] -= v25;
        Prop[3] += v25;
      }
    }
    v7 = a1;
LABEL_28:
    if ( (v7 & 2) != 0 )
    {
      if ( a4 )
      {
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout((__int64 *)v17, 0x80u, (HWND)3, 0LL, 0, 0, 0LL, 1u, 1);
      }
      v29 = *(_QWORD *)v19;
      LOBYTE(v22) = *(_BYTE *)(*(_QWORD *)v19 + 31LL);
      if ( ((unsigned __int8)v22 & 0x20) == 0 && !v18 )
      {
        v30 = *(_BYTE *)(v29 + 16);
        v42 = *(_OWORD *)(v29 + 88);
        if ( (v30 & 1) != 0 )
          v31 = a5 + HIDWORD(v42);
        else
          v31 = HIDWORD(*(_OWORD *)(v29 + 88));
        if ( (v30 & 8) != 0
          && (v38 = v31 + a4, v31 += a4, ((unsigned __int8)v22 & 0x41) == 0x41)
          && (v39 = *(_QWORD *)(*(_QWORD *)(v17 + 104) + 40LL), (*(_WORD *)(v39 + 42) & 0x3FFF) == 0x2A7) )
        {
          xxxSetWindowPos(
            (struct tagWND *)v17,
            0LL,
            (unsigned int)(v42 - *(_DWORD *)(v39 + 88)),
            (unsigned int)(DWORD1(v42) - *(_DWORD *)(v39 + 92) - a4),
            DWORD2(v42) - v42,
            v38 - DWORD1(v42),
            60);
        }
        else
        {
          xxxSetWindowPos((struct tagWND *)v17, 0LL, 0LL, 0LL, DWORD2(v42) - v42, v31 - DWORD1(v42), 318);
        }
      }
      v7 = a1;
    }
    ThreadUnlock1(v25, v22, v21);
    v8 = gptiCurrent;
LABEL_47:
    ++v14;
    LODWORD(v15) = v15 - 1;
    v40 = v14;
  }
  while ( (int)v15 > 0 );
  v13 = v41;
  return FreeHwndList(v13);
}
