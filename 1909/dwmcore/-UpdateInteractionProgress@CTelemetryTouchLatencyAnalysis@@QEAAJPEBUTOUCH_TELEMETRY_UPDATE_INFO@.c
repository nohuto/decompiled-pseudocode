/*
 * XREFs of ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K_NAEB_KIU_LUID@@2PEAPEAUTouchUpdateInfo@1@@Z @ 0x18001B5C8
 * Callers:
 *     ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x18001B390 (-TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_.c)
 * Callees:
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x18001BAAC (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 *     ?IsNewInteraction@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z @ 0x18001BB20 (-IsNewInteraction@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z.c)
 *     ?IsValid@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z @ 0x18001BB48 (-IsValid@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z.c)
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x18001BB98 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?IsVailContainer@@YAHXZ @ 0x1800DF934 (-IsVailContainer@@YAHXZ.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     McTemplateU0xq @ 0x18015D648 (McTemplateU0xq.c)
 *     ?ConvertHostTimeToContainerTimeline@CTelemetryTouchLatencyAnalysis@@CA_K_K0@Z @ 0x18018D714 (-ConvertHostTimeToContainerTimeline@CTelemetryTouchLatencyAnalysis@@CA_K_K0@Z.c)
 *     ?IsStartInertia@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z @ 0x18018DD88 (-IsStartInertia@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z.c)
 *     McTemplateU0xhhxqnttz @ 0x18019025C (McTemplateU0xhhxqnttz.c)
 *     McTemplateU0xxhhxqnttzqqxxqqxxq @ 0x180190380 (McTemplateU0xxhhxqnttzqqxxqqxxq.c)
 *     McTemplateU0xxxxxxxxqhqqxqntt @ 0x180190C40 (McTemplateU0xxxxxxxxqhqqxqntt.c)
 */

__int64 __fastcall CTelemetryTouchLatencyAnalysis::UpdateInteractionProgress(
        CTelemetryTouchLatencyAnalysis *this,
        const struct TOUCH_TELEMETRY_UPDATE_INFO *a2,
        unsigned __int64 a3,
        char a4,
        const unsigned __int64 *a5,
        unsigned int a6,
        struct _LUID a7,
        char a8,
        struct CTelemetryTouchLatencyAnalysis::TouchUpdateInfo **a9)
{
  const unsigned __int64 *v9; // rax
  unsigned int v12; // r15d
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *Scenario; // rax
  __int64 v16; // rdx
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v17; // rbx
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // r13
  int IsNewInteraction; // eax
  unsigned __int8 v21; // si
  unsigned __int8 v22; // al
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rcx
  _QWORD *v26; // rsi
  int v27; // r11d
  int v28; // r10d
  __int64 v29; // r9
  const unsigned __int64 *v30; // r8
  __int64 v31; // rdx
  __int64 v32; // r9
  int v34; // eax
  int IsValid; // eax
  CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo *v36; // r11
  __int64 v37; // rax
  unsigned int v38; // eax
  __int64 v39; // rcx
  char v40; // al
  int v41; // eax
  int v42; // eax
  unsigned __int64 v43; // rax
  bool v44; // r8
  int v45; // eax
  __int64 v46; // r11
  int v47; // eax
  __int64 v48; // rax
  int v49; // [rsp+38h] [rbp-A0h]
  int v50; // [rsp+40h] [rbp-98h]

  v9 = a5;
  v12 = 0;
  a5 = 0LL;
  *((_QWORD *)this + 497) = *v9;
  QueryPerformanceCounter((LARGE_INTEGER *)&a5);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
    McTemplateU0xxxxxxxxqhqqxqntt(
      (unsigned __int8)a8,
      a6,
      *(_QWORD *)a2,
      *((_QWORD *)a2 + 1),
      *((_QWORD *)a2 + 5),
      *((_QWORD *)a2 + 6),
      (char)a5,
      *((_QWORD *)a2 + 2),
      *((_QWORD *)a2 + 3),
      *((_QWORD *)a2 + 4),
      *((_DWORD *)a2 + 14),
      *((_WORD *)a2 + 30),
      *((_DWORD *)a2 + 16),
      *((_DWORD *)a2 + 17),
      a3,
      a6);
  Scenario = CTelemetryTouchLatencyAnalysis::FindScenario(this, *(_QWORD *)a2);
  v16 = 0LL;
  v17 = Scenario;
  if ( Scenario )
  {
    v18 = *((_QWORD *)a2 + 1);
    v19 = *((_QWORD *)a2 + 2);
    if ( *((_WORD *)a2 + 30) )
    {
      if ( (unsigned int)IsVailContainer() )
      {
        v18 = CTelemetryTouchLatencyAnalysis::ConvertHostTimeToContainerTimeline(v18, *((_QWORD *)a2 + 4));
        v43 = CTelemetryTouchLatencyAnalysis::ConvertHostTimeToContainerTimeline(
                *((_QWORD *)a2 + 2),
                *((_QWORD *)a2 + 4));
        v16 = 0LL;
        v19 = v43;
        if ( !v18 || !v43 )
          *(_BYTE *)v17 = 1;
      }
    }
    if ( *((_DWORD *)v17 + 23) == (_DWORD)v16
      || *((_QWORD *)v17 + 14) == v16
      || *((_WORD *)a2 + 30) <= (unsigned __int16)v16
      && (IsNewInteraction = CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo::IsNewInteraction(
                               (CTelemetryTouchLatencyAnalysis *)((char *)this + 3984),
                               a3),
          v16 = 0LL,
          !IsNewInteraction) )
    {
      if ( *(_BYTE *)v17 == (_BYTE)v16 )
        goto LABEL_10;
      v44 = 1;
    }
    else
    {
      v44 = v16;
    }
    CTelemetryTouchLatencyAnalysis::RetireScenario(this, v17, v44, 0);
    v16 = 0LL;
    if ( *(_BYTE *)v17 )
      return v12;
LABEL_10:
    if ( *((_DWORD *)v17 + 23) != (_DWORD)v16 )
      goto LABEL_11;
    *(_BYTE *)v17 = v16;
    *((_QWORD *)v17 + 1) = *(_QWORD *)a2;
    *((_DWORD *)v17 + 22) = 1;
    v34 = *((_DWORD *)a2 + 14);
    if ( v34 )
    {
      *((_DWORD *)v17 + 9) = v34;
      *((_DWORD *)v17 + 11) = *((_DWORD *)a2 + 18);
      v37 = *((_QWORD *)a2 + 1);
    }
    else
    {
      IsValid = CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo::IsValid(
                  (CTelemetryTouchLatencyAnalysis *)((char *)this + 3984),
                  a3);
      LODWORD(v16) = 0;
      if ( IsValid )
      {
        *((_DWORD *)v17 + 9) = *((_DWORD *)v36 + 6);
        v45 = CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo::IsValid(v36, a3);
        LODWORD(v16) = 0;
        if ( v45 )
          v47 = *(_DWORD *)(v46 + 28);
        else
          v47 = 0;
        *((_DWORD *)v17 + 11) = v47;
      }
      else
      {
        *((_DWORD *)v17 + 9) = 0;
        *((_DWORD *)v17 + 11) = 0;
      }
      v37 = *((_QWORD *)a2 + 5);
    }
    *((_QWORD *)v17 + 12) = v37;
    v38 = a6;
    *((_DWORD *)v17 + 12) = v16;
    *((_DWORD *)v17 + 18) = v38;
    *(struct _LUID *)((char *)v17 + 76) = a7;
    *((_BYTE *)v17 + 84) = a8;
    *((_WORD *)v17 + 60) = 0;
    *((_QWORD *)v17 + 16) = a3;
    *((_DWORD *)v17 + 34) = 0;
    memset_0((char *)v17 + 144, 0, 0x24uLL);
    *((_BYTE *)v17 + 140) = a4;
    *((_WORD *)v17 + 90) = 0;
    *((_BYTE *)v17 + 182) = 0;
    memset_0((char *)v17 + 184, 0, 0x48uLL);
    v16 = 0LL;
    *((_DWORD *)v17 + 64) = 0;
    *(_QWORD *)((char *)v17 + 260) = 0LL;
    *((_DWORD *)v17 + 69) = 0;
    *((_DWORD *)v17 + 67) = 0;
    *((_WORD *)v17 + 136) = 0;
    *((_QWORD *)v17 + 36) = 0LL;
    *((_QWORD *)v17 + 37) = 0LL;
    *((_QWORD *)v17 + 38) = *((unsigned int *)a2 + 16);
    *((_QWORD *)v17 + 13) = 0LL;
    *((_QWORD *)v17 + 14) = 0LL;
    *((_WORD *)v17 + 140) = 0;
    v40 = BYTE1(Microsoft_Windows_Dwm_CoreEnableBits);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
    {
      McTemplateU0xq(
        v39,
        &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATEREFERENCE_EVENT,
        *(_QWORD *)a2,
        *((unsigned int *)v17 + 22));
      v40 = BYTE1(Microsoft_Windows_Dwm_CoreEnableBits);
      v16 = 0LL;
    }
    if ( (v40 & 2) != 0 )
    {
      v21 = a8;
      McTemplateU0xhhxqnttz(
        *((unsigned __int8 *)v17 + 140),
        0,
        *(_QWORD *)a2,
        *((unsigned __int16 *)v17 + 34),
        *((_WORD *)v17 + 35),
        a3,
        a6,
        v49,
        (__int64)&a7,
        a8,
        *((_BYTE *)v17 + 140),
        *((_QWORD *)v17 + 2));
      v16 = 0LL;
    }
    else
    {
LABEL_11:
      v21 = a8;
    }
    *((_QWORD *)v17 + 37) = *((_QWORD *)v17 + 36);
    *((_QWORD *)v17 + 36) = a5;
    if ( *((_DWORD *)v17 + 23) != (_DWORD)v16 )
    {
      if ( *((_QWORD *)v17 + 14) != v16 )
      {
LABEL_14:
        v22 = *((_BYTE *)v17 + 120);
        v23 = *((_DWORD *)v17 + 76);
        if ( v22 <= *((_BYTE *)a2 + 60) )
          v22 = *((_BYTE *)a2 + 60);
        *((_BYTE *)v17 + 120) = v22;
        *((_BYTE *)v17 + 121) = *((_BYTE *)a2 + 60);
        *((_DWORD *)v17 + 77) = v23;
        v24 = *((_DWORD *)a2 + 16);
        *((_DWORD *)v17 + 76) = v24;
        *((_WORD *)v17 + 140) = *((_WORD *)a2 + 38);
        *((_DWORD *)v17 + 69) += *((unsigned __int16 *)a2 + 40);
        *((_DWORD *)v17 + 23) = 1;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
          McTemplateU0xxhhxqnttzqqxxqqxxq(
            *((unsigned __int8 *)v17 + 140),
            v21,
            *((_QWORD *)v17 + 1),
            (_DWORD)v17,
            *((_WORD *)v17 + 34),
            *((_WORD *)v17 + 35),
            a3,
            a6,
            v50,
            (__int64)&a7,
            v21,
            *((_BYTE *)v17 + 140),
            *((_QWORD *)v17 + 2),
            *((_DWORD *)v17 + 9),
            *((_DWORD *)v17 + 12),
            *((_QWORD *)v17 + 13),
            *((_QWORD *)v17 + 14),
            v24,
            v23,
            *((_QWORD *)v17 + 36),
            *((_QWORD *)v17 + 37),
            *((_DWORD *)v17 + 22));
        v26 = operator new(0x50uLL);
        if ( v26 )
        {
          v27 = *((_DWORD *)a2 + 17);
          v28 = *((_DWORD *)a2 + 16);
          v29 = *((_QWORD *)a2 + 3);
          v30 = a5;
          v31 = *((_QWORD *)a2 + 6);
          v25 = *((_QWORD *)a2 + 5);
          *v26 = *(_QWORD *)a2;
          v26[1] = v18;
          v26[2] = v25;
          v26[3] = v31;
          v26[4] = v30;
          v26[5] = v19;
          v26[6] = v29;
          *((_DWORD *)v26 + 14) = v28;
          *((_DWORD *)v26 + 15) = v27;
          *((_DWORD *)v26 + 16) = v27;
          v26[9] = this;
        }
        else
        {
          v26 = 0LL;
        }
        if ( v26 )
        {
          *a9 = (struct CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *)v26;
          if ( a3 >= *((_QWORD *)v17 + 16) )
          {
            v32 = (unsigned int)(*((_DWORD *)v17 + 22) + 1);
            *((_DWORD *)v17 + 22) = v32;
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
              McTemplateU0xq(v25, &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATEREFERENCE_EVENT, *(_QWORD *)a2, v32);
          }
        }
        else
        {
          v12 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, -2147024882, 0x5A5u, 0LL);
        }
        return v12;
      }
      v42 = *((_DWORD *)v17 + 9);
      if ( v42 )
      {
        if ( v42 <= 1 )
          goto LABEL_14;
        if ( v42 > 3 )
        {
          if ( v42 == 4 )
          {
LABEL_65:
            if ( !(unsigned int)CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo::IsStartInertia(
                                  (CTelemetryTouchLatencyAnalysis *)((char *)this + 3984),
                                  a3) )
              goto LABEL_14;
            goto LABEL_37;
          }
          if ( v42 != 5 )
          {
            if ( v42 != 6 )
              goto LABEL_14;
            goto LABEL_65;
          }
        }
      }
      if ( *((_WORD *)a2 + 30) != (_WORD)v16 )
        goto LABEL_14;
LABEL_37:
      *((_QWORD *)v17 + 14) = *((_QWORD *)a2 + 5);
      goto LABEL_14;
    }
    v41 = *((_DWORD *)v17 + 9);
    if ( v41 < 2 )
      goto LABEL_14;
    if ( v41 > 3 )
    {
      if ( v41 == 4 )
      {
LABEL_55:
        if ( !(unsigned int)CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo::IsNewInteraction(
                              (CTelemetryTouchLatencyAnalysis *)((char *)this + 3984),
                              a3) )
          goto LABEL_14;
        v48 = *((_QWORD *)a2 + 5);
LABEL_59:
        *((_QWORD *)v17 + 13) = v48;
        goto LABEL_14;
      }
      if ( v41 != 5 )
      {
        if ( v41 != 6 )
          goto LABEL_14;
        goto LABEL_55;
      }
    }
    if ( *((_WORD *)a2 + 30) <= (unsigned __int16)v16 )
      goto LABEL_14;
    v48 = *((_QWORD *)a2 + 1);
    goto LABEL_59;
  }
  return v12;
}
