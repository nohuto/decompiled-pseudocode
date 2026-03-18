/*
 * XREFs of xxxMetricsRecalc @ 0x1C01DA764
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 *     ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x1C0116FBC (-xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01DA008 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C006C7B4 (xxxSetWindowPos.c)
 *     BuildHwndList @ 0x1C006DEF0 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006E0B0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     IsNonImmersiveBand @ 0x1C012FC10 (IsNonImmersiveBand.c)
 */

__int64 __fastcall xxxMetricsRecalc(char a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  char v7; // r15
  __int64 v8; // rbx
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  struct tagBWL *v12; // r13
  unsigned __int64 *v13; // r14
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rsi
  int v17; // r12d
  __int64 v18; // rbx
  unsigned int v19; // r14d
  __int64 v20; // r8
  _DWORD *v21; // rdx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  _DWORD *Prop; // rax
  __int64 v26; // r9
  int v27; // ecx
  __int64 v28; // rax
  char v29; // r8
  int v30; // ecx
  __int64 DesktopWindow; // rax
  __int64 v32; // rdx
  int v33; // r8d
  int v34; // r10d
  unsigned int v35; // r11d
  __int64 v36; // rax
  int v37; // r9d
  __int64 v38; // r10
  unsigned __int64 *v39; // [rsp+58h] [rbp-41h]
  struct tagBWL *v40; // [rsp+68h] [rbp-31h]
  __int128 v41; // [rsp+70h] [rbp-29h]
  __int64 v42; // [rsp+80h] [rbp-19h] BYREF
  __int64 v43; // [rsp+88h] [rbp-11h]
  __int64 v44; // [rsp+90h] [rbp-9h]

  v42 = 0LL;
  v7 = a1;
  v43 = 0LL;
  v44 = 0LL;
  v8 = gptiCurrent;
  result = BuildHwndList(*(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 24LL) + 112LL));
  v40 = (struct tagBWL *)result;
  v12 = (struct tagBWL *)result;
  if ( !result )
    return result;
  v13 = (unsigned __int64 *)(result + 32);
  v39 = (unsigned __int64 *)(result + 32);
  v14 = (*(_QWORD *)(result + 8) - result - 32) >> 3;
  if ( (int)v14 <= 0 )
    return FreeHwndList(v12);
  do
  {
    LOBYTE(v10) = 1;
    v15 = HMValidateHandleNoSecure(*v13, v10, v11);
    v16 = v15;
    if ( !v15
      || !IsNonImmersiveBand(v15)
      || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 416LL) + 812LL) & 0x30) == 0x10 )
    {
      goto LABEL_47;
    }
    v42 = *(_QWORD *)(v8 + 408);
    *(_QWORD *)(v8 + 408) = &v42;
    v43 = v16;
    HMLockObject(v16);
    v17 = 0;
    v18 = v16 + 40;
    if ( (v7 & 4) != 0 && (*(_BYTE *)(*(_QWORD *)v18 + 31LL) & 0x20) != 0 )
    {
      v19 = *(_OWORD *)(*(_QWORD *)v18 + 88LL);
LABEL_36:
      v17 = 1;
      DesktopWindow = GetDesktopWindow(v16);
      if ( v32 != DesktopWindow )
      {
        v36 = *(_QWORD *)(v32 + 40);
        v33 -= *(_DWORD *)(v36 + 108);
        v19 -= *(_DWORD *)(v36 + 104);
        v35 -= *(_DWORD *)(v36 + 108);
        v34 -= *(_DWORD *)(v36 + 104);
      }
      xxxSetWindowPos((struct tagWND *)v16, 0LL, v19, v35, v34 - v19, v33 - v35, 316);
      v13 = v39;
      goto LABEL_28;
    }
    v20 = *(_QWORD *)v18;
    v21 = (_DWORD *)*(unsigned int *)(*(_QWORD *)v18 + 28LL);
    v24 = 0;
    if ( (*(_DWORD *)(*(_QWORD *)v18 + 28LL) & 0xC00000) == 12582912 || ((unsigned int)v21 & 0x40000) != 0 )
    {
      v22 = *(_QWORD *)(v16 + 16);
      v23 = *(_DWORD *)(v22 + 624) <= 0x9900u ? *(_DWORD *)(v22 + 640) : 0;
      if ( (v23 & 0x30000000) == 0 )
        v24 = 1;
    }
    if ( (a1 & 1) != 0 && ((*(_BYTE *)(v20 + 30) & 4) != 0 || (_DWORD)v24) )
    {
      Prop = (_DWORD *)GetProp(v16, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
      v26 = *(_QWORD *)v18;
      v21 = Prop;
      v27 = a6;
      if ( (*(_BYTE *)(*(_QWORD *)v18 + 30LL) & 4) == 0 )
        v27 = a7;
      v20 = (unsigned int)(v27 + a2);
      v24 = (unsigned int)(a3 + v27);
      if ( Prop && (Prop[12] & 0x40) != 0 )
      {
        Prop[10] -= v20;
        Prop[11] -= v24;
        v26 = *(_QWORD *)(v16 + 40);
      }
      if ( (*(_BYTE *)(v26 + 31) & 0x20) == 0 )
      {
        v19 = *(_DWORD *)(v26 + 88) - v20;
        v7 = a1;
        goto LABEL_36;
      }
      if ( Prop )
      {
        *Prop -= v20;
        Prop[2] += v20;
        Prop[1] -= v24;
        Prop[3] += v24;
      }
    }
    v7 = a1;
LABEL_28:
    if ( (v7 & 2) != 0 )
    {
      if ( a4 )
      {
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout((__int64 *)v16, 0x80u, 3uLL, 0LL, 0, 0, 0LL, 1u, 1);
      }
      v28 = *(_QWORD *)v18;
      LOBYTE(v21) = *(_BYTE *)(*(_QWORD *)v18 + 31LL);
      if ( ((unsigned __int8)v21 & 0x20) == 0 && !v17 )
      {
        v29 = *(_BYTE *)(v28 + 16);
        v41 = *(_OWORD *)(v28 + 88);
        if ( (v29 & 1) != 0 )
          v30 = a5 + HIDWORD(v41);
        else
          v30 = HIDWORD(*(_OWORD *)(v28 + 88));
        if ( (v29 & 8) != 0
          && (v37 = v30 + a4, v30 += a4, ((unsigned __int8)v21 & 0x41) == 0x41)
          && (v38 = *(_QWORD *)(*(_QWORD *)(v16 + 104) + 40LL), (*(_WORD *)(v38 + 42) & 0x3FFF) == 0x2A7) )
        {
          xxxSetWindowPos(
            (struct tagWND *)v16,
            0LL,
            (unsigned int)(v41 - *(_DWORD *)(v38 + 88)),
            (unsigned int)(DWORD1(v41) - *(_DWORD *)(v38 + 92) - a4),
            DWORD2(v41) - v41,
            v37 - DWORD1(v41),
            60);
        }
        else
        {
          xxxSetWindowPos((struct tagWND *)v16, 0LL, 0LL, 0LL, DWORD2(v41) - v41, v30 - DWORD1(v41), 318);
        }
      }
      v7 = a1;
    }
    ThreadUnlock1(v24, v21, v20);
    v8 = gptiCurrent;
LABEL_47:
    ++v13;
    LODWORD(v14) = v14 - 1;
    v39 = v13;
  }
  while ( (int)v14 > 0 );
  v12 = v40;
  return FreeHwndList(v12);
}
