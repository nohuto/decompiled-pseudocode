/*
 * XREFs of ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C00182B4
 * Callers:
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00107FC (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     xxxShowWindowEx @ 0x1C002E00C (xxxShowWindowEx.c)
 *     xxxMinMaximizeEx @ 0x1C00841D4 (xxxMinMaximizeEx.c)
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 *     ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01184B0 (-xxxActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C012EA54 (-xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0150F68 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01F28C0 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C02124D4 (xxxHandleNCMouseGuys.c)
 *     xxxMenuWindowProc @ 0x1C0227440 (xxxMenuWindowProc.c)
 * Callees:
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C00117A8 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C0018C90 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     WPP_RECORDER_SF_s @ 0x1C0019388 (WPP_RECORDER_SF_s.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C001BBFC (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     WPP_RECORDER_SF_q @ 0x1C0025A2C (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0088D5C (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C008AB44 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     _anonymous_namespace_::ComputeWindowToActivate @ 0x1C0100B3C (_anonymous_namespace_--ComputeWindowToActivate.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall xxxActivateWindowWithOptions(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // r14
  bool v6; // r9
  int v7; // r12d
  char v8; // r13
  int v9; // ebx
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rcx
  char v13; // bl
  int v15; // ebx
  unsigned int v16; // r12d
  const char *v17; // rax
  int v18; // eax
  int v19; // r9d
  int v20; // r9d
  bool v21; // [rsp+30h] [rbp-30h]
  bool v22; // [rsp+31h] [rbp-2Fh]
  bool v23; // [rsp+32h] [rbp-2Eh]
  char v24; // [rsp+33h] [rbp-2Dh]
  __int64 v25; // [rsp+38h] [rbp-28h] BYREF
  __int64 v26; // [rsp+40h] [rbp-20h]
  __int64 v27; // [rsp+48h] [rbp-18h] BYREF
  __int64 v28; // [rsp+50h] [rbp-10h]
  __int64 v29; // [rsp+58h] [rbp-8h]
  struct tagWND *v30; // [rsp+A0h] [rbp+40h]

  v30 = (struct tagWND *)a1;
  v4 = a1;
  v6 = 0;
  v22 = 0;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v7 = 2;
  v24 = 0;
  v21 = 0;
  v23 = 0;
  LOBYTE(a1) = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0;
  if ( (_BYTE)a1 == 64 )
    return 0;
  v8 = 1;
  if ( (_DWORD)a2 )
  {
    v25 = 0LL;
    v26 = 0LL;
    if ( !(unsigned __int8)anonymous_namespace_::ComputeWindowToActivate(v4, a2, a3, &v25) )
    {
LABEL_44:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 4;
        WPP_RECORDER_SF_(a1, a2, 2, 45, (__int64)&WPP_828df51e9e903732b0178dfabaca8ced_Traceguids);
      }
      return 0;
    }
    v10 = v25;
    if ( !v25 || (v9 = v26) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
      v9 = v26;
      v10 = v25;
    }
    v6 = v4 != v10;
    v22 = v4 != v10;
  }
  else
  {
    if ( (_DWORD)a3 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
      v6 = 0;
    }
    v9 = 1;
    v10 = v4;
    v23 = a4 == 1;
  }
  if ( !v10 )
    goto LABEL_44;
  if ( !v9 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
    v6 = v22;
  }
  if ( v6 )
  {
    v27 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v27;
    v28 = v10;
    HMLockObject(v10);
  }
  v11 = *(_QWORD *)(v10 + 16);
  if ( *(_QWORD *)(v11 + 424) == *(_QWORD *)(gptiCurrent + 424LL) )
  {
    v8 = anonymous_namespace_::FAllowForegroundActivate(v10);
    if ( v8 )
      v21 = *(_DWORD *)(gptiCurrent + 896LL) == 0;
    else
      v24 = anonymous_namespace_::xxxLocalActivateWindow((struct tagWND *)v10);
  }
  else
  {
    if ( v11 == gptiCurrent )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11);
    if ( v9 != 5 )
    {
      if ( v9 == 6 )
      {
        v7 = 31;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_31;
        v20 = 46;
      }
      else
      {
        if ( v9 != 7 )
        {
          v12 = gpqForeground;
          if ( gpqForeground != *(_QWORD *)(gptiCurrent + 424LL) && gpqForeground )
            goto LABEL_15;
          if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x20) != 0 || *(_DWORD *)(gptiCurrent + 896LL) || (v21 = 0, v23) )
            v21 = 1;
          v15 = v9 - 3;
          if ( v15 )
          {
            if ( v15 == 1 )
              v7 = 3;
          }
          else
          {
            v7 = 3;
            if ( (unsigned int)CoreWindowProp::IsComponent(v30) && !CoreWindowProp::GetHost(v30) )
              v7 = 11;
          }
          goto LABEL_29;
        }
        v7 = 31;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_31;
        v20 = 48;
      }
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_(v9 - 6, a2, 2, v20, (__int64)&WPP_828df51e9e903732b0178dfabaca8ced_Traceguids);
LABEL_29:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 4;
        WPP_RECORDER_SF_(v12, a2, 2, 49, (__int64)&WPP_828df51e9e903732b0178dfabaca8ced_Traceguids);
      }
LABEL_31:
      v16 = v7 | 4;
      if ( *(_QWORD *)(*(_QWORD *)(v10 + 16) + 424LL) == gpqForeground
        && gpqForeground == *(_QWORD *)(gptiCurrent + 424LL) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(gpqForeground);
      }
      v13 = xxxSetForegroundWindowWithOptions(v10, v16, 0LL);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = "Success";
        if ( !v13 )
          v17 = "Failure";
        WPP_RECORDER_SF_s(
          (unsigned int)"Failure",
          a2,
          2,
          50,
          (__int64)&WPP_828df51e9e903732b0178dfabaca8ced_Traceguids,
          (__int64)v17);
      }
      v18 = *(_DWORD *)(gptiCurrent + 480LL);
      if ( v21 )
      {
        *(_DWORD *)(gptiCurrent + 480LL) = v18 | 0x20;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_16;
        v19 = 51;
      }
      else
      {
        *(_DWORD *)(gptiCurrent + 480LL) = v18 & 0xFFFFFFDF;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_16;
        v19 = 52;
      }
      WPP_RECORDER_SF_q(v12, a2, 2, v19, (__int64)&WPP_828df51e9e903732b0178dfabaca8ced_Traceguids, gptiCurrent);
      goto LABEL_16;
    }
    v7 = 31;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_31;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(v9 - 5, a2, 2, 47, (__int64)&WPP_828df51e9e903732b0178dfabaca8ced_Traceguids);
  }
  if ( v8 )
    goto LABEL_29;
LABEL_15:
  v13 = v24;
LABEL_16:
  if ( v22 )
    ThreadUnlock1(v12, a2, a3);
  return v13;
}
