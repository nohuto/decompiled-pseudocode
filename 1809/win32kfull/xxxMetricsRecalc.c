/*
 * XREFs of xxxMetricsRecalc @ 0x1C01C752C
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 *     ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x1C00C1390 (-xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01C6DC4 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     FreeHwndList @ 0x1C0070D10 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0070DA0 (BuildHwndList.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     IsNonImmersiveBand @ 0x1C00CEDF0 (IsNonImmersiveBand.c)
 */

struct tagBWL *__fastcall xxxMetricsRecalc(char a1, int a2, int a3, int a4, int a5, unsigned int a6, unsigned int a7)
{
  char v7; // r12
  __int64 v8; // rbx
  struct tagBWL *result; // rax
  __int64 v10; // rdx
  struct tagBWL *v11; // r13
  unsigned __int64 *v12; // r15
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rsi
  int v16; // r14d
  __int64 v17; // rbx
  unsigned int v18; // r14d
  unsigned int v19; // r15d
  _DWORD *v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  BOOL v24; // eax
  _DWORD *Prop; // rax
  __int64 v26; // r9
  int v27; // r8d
  int v28; // r11d
  __int64 v29; // rax
  char v30; // r8
  int v31; // ecx
  __int64 DesktopWindow; // rax
  __int64 v33; // rdx
  int v34; // r8d
  int v35; // r10d
  __int64 v36; // rax
  int v37; // r9d
  __int64 v38; // r10
  unsigned __int64 *v39; // [rsp+60h] [rbp-49h]
  struct tagBWL *v40; // [rsp+70h] [rbp-39h]
  __int128 v41; // [rsp+78h] [rbp-31h]
  _QWORD v42[12]; // [rsp+88h] [rbp-21h] BYREF

  v7 = a1;
  v8 = gptiCurrent;
  result = BuildHwndList(*(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 464LL) + 24LL) + 88LL), 3, 0LL);
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
      || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 424LL) + 820LL) & 0x30) == 0x10 )
    {
      goto LABEL_47;
    }
    v42[0] = *(_QWORD *)(v8 + 416);
    *(_QWORD *)(v8 + 416) = v42;
    v42[1] = v15;
    _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
    v16 = 0;
    v17 = v15 + 40;
    if ( (v7 & 4) != 0 && (*(_BYTE *)(*(_QWORD *)v17 + 31LL) & 0x20) != 0 )
    {
      v18 = HIDWORD(*(_QWORD *)(*(_QWORD *)v17 + 88LL));
      v19 = *(_OWORD *)(*(_QWORD *)v17 + 88LL);
LABEL_36:
      DesktopWindow = GetDesktopWindow(v15);
      if ( v33 != DesktopWindow )
      {
        v36 = *(_QWORD *)(v33 + 40);
        v34 -= *(_DWORD *)(v36 + 108);
        v19 -= *(_DWORD *)(v36 + 104);
        v18 -= *(_DWORD *)(v36 + 108);
        v35 -= *(_DWORD *)(v36 + 104);
      }
      xxxSetWindowPos((struct tagWND *)v15, 0LL, v19, v18, v35 - v19, v34 - v18, 316);
      v16 = 1;
      v12 = v39;
      goto LABEL_28;
    }
    v21 = 12582912LL;
    v20 = (_DWORD *)*(unsigned int *)(*(_QWORD *)v17 + 28LL);
    LOBYTE(v21) = (*(_DWORD *)(*(_QWORD *)v17 + 28LL) & 0xC00000) != 12582912;
    v24 = 0;
    if ( ((unsigned __int8)v21 & (((unsigned int)v20 & 0x40000) == 0)) == 0 )
    {
      v22 = *(_QWORD *)(v15 + 16);
      v23 = *(_DWORD *)(v22 + 632) <= 0x9900u ? *(_DWORD *)(v22 + 648) : 0;
      if ( (v23 & 0x30000000) == 0 )
        v24 = 1;
    }
    if ( (a1 & 1) != 0 && ((*(_DWORD *)(*(_QWORD *)v17 + 28LL) & 0x40000) != 0 || v24) )
    {
      Prop = (_DWORD *)GetProp(v15, (unsigned __int16)atomCheckpointProp, 1LL);
      v26 = *(_QWORD *)v17;
      v20 = Prop;
      v21 = a6;
      if ( (*(_BYTE *)(*(_QWORD *)v17 + 30LL) & 4) == 0 )
        v21 = a7;
      v27 = v21 + a2;
      v28 = v21 + a3;
      if ( Prop && (Prop[12] & 0x40) != 0 )
      {
        Prop[10] -= v27;
        Prop[11] -= v28;
        v26 = *(_QWORD *)(v15 + 40);
      }
      if ( (*(_BYTE *)(v26 + 31) & 0x20) == 0 )
      {
        v19 = *(_DWORD *)(v26 + 88) - v27;
        v18 = *(_DWORD *)(v26 + 92) - v28;
        v7 = a1;
        goto LABEL_36;
      }
      if ( Prop )
      {
        *Prop -= v27;
        Prop[2] += v27;
        Prop[1] -= v28;
        Prop[3] += v28;
      }
    }
    v7 = a1;
LABEL_28:
    if ( (v7 & 2) != 0 )
    {
      if ( a4 )
      {
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout((__int64 *)v15, 0x80u, 3uLL, 0LL, 0, 0, 0LL, 1, 1);
      }
      v29 = *(_QWORD *)v17;
      LOBYTE(v20) = *(_BYTE *)(*(_QWORD *)v17 + 31LL);
      if ( ((unsigned __int8)v20 & 0x20) == 0 && !v16 )
      {
        v30 = *(_BYTE *)(v29 + 16);
        v41 = *(_OWORD *)(v29 + 88);
        if ( (v30 & 1) != 0 )
          v31 = a5 + HIDWORD(v41);
        else
          v31 = HIDWORD(*(_OWORD *)(v29 + 88));
        if ( (v30 & 8) != 0
          && (v37 = v31 + a4, v31 += a4, ((unsigned __int8)v20 & 0x41) == 0x41)
          && (v38 = *(_QWORD *)(*(_QWORD *)(v15 + 80) + 40LL), (*(_WORD *)(v38 + 42) & 0x2FFF) == 0x2A7) )
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
          xxxSetWindowPos((struct tagWND *)v15, 0LL, 0LL, 0LL, DWORD2(v41) - v41, v31 - DWORD1(v41), 318);
        }
      }
      v7 = a1;
    }
    ThreadUnlock1(v21, v20);
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
