/*
 * XREFs of xxxMetricsRecalc @ 0x1C01A55FC
 * Callers:
 *     ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x1C005068C (-xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00675F4 (xxxSystemParametersInfoWorker.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01A4C48 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     FreeHwndList @ 0x1C002A0E0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C002A170 (BuildHwndList.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     IsNonImmersiveBand @ 0x1C005F640 (IsNonImmersiveBand.c)
 */

struct tagBWL *__fastcall xxxMetricsRecalc(char a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  char v7; // r15
  __int64 v8; // rbx
  struct tagBWL *result; // rax
  __int64 v10; // rdx
  struct tagBWL *v11; // r13
  unsigned __int64 *v12; // r14
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rsi
  int v16; // r12d
  __int64 *v17; // rbx
  unsigned int v18; // r14d
  _DWORD *v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  BOOL v24; // eax
  _DWORD *Prop; // rax
  __int64 v26; // r9
  int v27; // ecx
  char v28; // al
  char v29; // dl
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
  _QWORD v42[11]; // [rsp+80h] [rbp-19h] BYREF

  v7 = a1;
  v8 = gptiCurrent;
  result = BuildHwndList(*(_QWORD **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 24LL) + 88LL), 3, 0LL);
  v40 = result;
  v11 = result;
  if ( !result )
    return result;
  v12 = (unsigned __int64 *)((char *)result + 32);
  v39 = (unsigned __int64 *)((char *)result + 32);
  v13 = (*((_QWORD *)result + 1) - (_QWORD)result - 32LL) >> 3;
  if ( (int)v13 <= 0 )
    return (struct tagBWL *)FreeHwndList(v11);
  do
  {
    LOBYTE(v10) = 1;
    v14 = HMValidateHandleNoSecure(*v12, v10);
    v15 = v14;
    if ( !v14
      || !IsNonImmersiveBand(v14)
      || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 416LL) + 812LL) & 0x30) == 0x10 )
    {
      goto LABEL_47;
    }
    v42[0] = *(_QWORD *)(v8 + 408);
    *(_QWORD *)(v8 + 408) = v42;
    v42[1] = v15;
    _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
    v16 = 0;
    v17 = (__int64 *)(v15 + 40);
    if ( (v7 & 4) != 0 && (*(_BYTE *)(*v17 + 31) & 0x20) != 0 )
    {
      v18 = *(_OWORD *)(*v17 + 88);
LABEL_36:
      v16 = 1;
      DesktopWindow = GetDesktopWindow(v15);
      if ( v32 != DesktopWindow )
      {
        v36 = *(_QWORD *)(v32 + 40);
        v33 -= *(_DWORD *)(v36 + 108);
        v18 -= *(_DWORD *)(v36 + 104);
        v35 -= *(_DWORD *)(v36 + 108);
        v34 -= *(_DWORD *)(v36 + 104);
      }
      xxxSetWindowPos((struct tagWND *)v15, 0LL, v18, v35, v34 - v18, v33 - v35, 316);
      v12 = v39;
      goto LABEL_28;
    }
    v21 = 12582912LL;
    v19 = (_DWORD *)*(unsigned int *)(*v17 + 28);
    v20 = HIWORD(*(_DWORD *)(*v17 + 28));
    LOBYTE(v21) = (*(_DWORD *)(*v17 + 28) & 0xC00000) != 12582912;
    v24 = 0;
    if ( ((unsigned __int8)v21 & (((unsigned int)v19 & 0x40000) == 0)) == 0 )
    {
      v22 = *(_QWORD *)(v15 + 16);
      v23 = *(_DWORD *)(v22 + 624) <= 0x9900u ? *(_DWORD *)(v22 + 640) : 0;
      if ( (v23 & 0x30000000) == 0 )
        v24 = 1;
    }
    if ( (a1 & 1) != 0 && ((*(_DWORD *)(*v17 + 28) & 0x40000) != 0 || v24) )
    {
      Prop = (_DWORD *)RealGetProp(*(_QWORD *)(v15 + 120), (unsigned __int16)atomCheckpointProp, 1LL);
      v26 = *v17;
      v19 = Prop;
      v27 = a6;
      if ( (*(_BYTE *)(*v17 + 30) & 4) == 0 )
        v27 = a7;
      v20 = (unsigned int)(v27 + a2);
      v21 = (unsigned int)(a3 + v27);
      if ( Prop && (Prop[12] & 0x40) != 0 )
      {
        Prop[10] -= v20;
        Prop[11] -= v21;
        v26 = *(_QWORD *)(v15 + 40);
      }
      if ( (*(_BYTE *)(v26 + 31) & 0x20) == 0 )
      {
        v18 = *(_DWORD *)(v26 + 88) - v20;
        v7 = a1;
        goto LABEL_36;
      }
      if ( Prop )
      {
        *Prop -= v20;
        Prop[2] += v20;
        Prop[1] -= v21;
        Prop[3] += v21;
      }
    }
    v7 = a1;
LABEL_28:
    if ( (v7 & 2) != 0 )
    {
      if ( a4 )
      {
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout((__int64 *)v15, 0x80u, (HWND)3, 0LL, 0, 0, 0LL, 1, 1);
      }
      v21 = *v17;
      v28 = *(_BYTE *)(*v17 + 31);
      if ( (v28 & 0x20) == 0 && !v16 )
      {
        v29 = *(_BYTE *)(v21 + 16);
        v41 = *(_OWORD *)(v21 + 88);
        if ( (v29 & 1) != 0 )
          v30 = a5 + HIDWORD(v41);
        else
          v30 = HIDWORD(*(_OWORD *)(v21 + 88));
        if ( (v29 & 8) != 0
          && (v37 = v30 + a4, v30 += a4, (v28 & 0x41) == 0x41)
          && (v38 = *(_QWORD *)(*(_QWORD *)(v15 + 80) + 40LL), (*(_WORD *)(v38 + 42) & 0x3FFF) == 0x2A7) )
        {
          xxxSetWindowPos(
            (struct tagWND *)v15,
            0LL,
            (unsigned int)(v41 - *(_DWORD *)(v38 + 88)),
            (unsigned int)(DWORD1(v41) - *(_DWORD *)(v38 + 92) - a4),
            DWORD2(v41) - v41,
            v37 - DWORD1(v41),
            60);
        }
        else
        {
          xxxSetWindowPos((struct tagWND *)v15, 0LL, 0LL, 0LL, DWORD2(v41) - v41, v30 - DWORD1(v41), 318);
        }
      }
      v7 = a1;
    }
    ThreadUnlock1(v21, v19, v20);
    v8 = gptiCurrent;
LABEL_47:
    ++v12;
    LODWORD(v13) = v13 - 1;
    v39 = v12;
  }
  while ( (int)v13 > 0 );
  v11 = v40;
  return (struct tagBWL *)FreeHwndList(v11);
}
