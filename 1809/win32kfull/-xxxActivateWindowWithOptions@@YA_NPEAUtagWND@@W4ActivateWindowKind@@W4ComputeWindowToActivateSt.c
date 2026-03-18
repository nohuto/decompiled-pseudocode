/*
 * XREFs of ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C00D83CC
 * Callers:
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 *     xxxShowWindowEx @ 0x1C006B634 (xxxShowWindowEx.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C0072648 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     xxxMinMaximizeEx @ 0x1C00B7604 (xxxMinMaximizeEx.c)
 *     ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C00D86B8 (-xxxActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C012540C (-xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C0156CFC (xxxHandleNCMouseGuys.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01DCC74 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01E2B8C (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 * Callees:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00AD848 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetForegroundWindowWithOptions@@YAHPEAUtagWND@@HK@Z @ 0x1C00D77CC (-xxxSetForegroundWindowWithOptions@@YAHPEAUtagWND@@HK@Z.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C00D82B0 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     _anonymous_namespace_::ComputeWindowToActivate @ 0x1C00D8A6C (_anonymous_namespace_--ComputeWindowToActivate.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C02C1D3C (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

bool __fastcall xxxActivateWindowWithOptions(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rsi
  bool v5; // r12
  bool v6; // r15
  bool v7; // r13
  bool v9; // bp
  int v10; // edi
  __int64 v11; // rcx
  __int64 v13; // rax
  bool v14; // zf
  int v15; // edi
  bool v16; // di
  int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // [rsp+20h] [rbp-58h] BYREF
  int v20; // [rsp+28h] [rbp-50h]
  _QWORD v21[4]; // [rsp+30h] [rbp-48h] BYREF
  bool v22; // [rsp+80h] [rbp+8h]

  v4 = a1;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v22 = 0;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0) == 0x40 )
    return 0;
  v9 = 1;
  if ( (_DWORD)a2 )
  {
    if ( !(unsigned __int8)anonymous_namespace_::ComputeWindowToActivate(a1, a2, a3, &v19) )
      return 0;
    v13 = v19;
    if ( !v19 || (v10 = v20) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredMsgKM("Expected window and origin information");
      v13 = v19;
      v10 = v20;
    }
    v14 = v4 == v13;
    v4 = v13;
    v7 = !v14;
  }
  else
  {
    if ( (_DWORD)a3 )
      MicrosoftTelemetryAssertTriggeredMsgKM("Why did caller pass strategy if all that is required is to activate passed-in window");
    v10 = 1;
    v22 = a4 == 1;
  }
  if ( !v4 )
    return 0;
  if ( !v10 )
    MicrosoftTelemetryAssertTriggeredMsgKM("Inconsistency detected: If we got here origin of window-to-activate must be known");
  if ( v7 )
  {
    v21[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v21;
    v21[1] = v4;
    _InterlockedAdd((volatile signed __int32 *)(v4 + 8), 1u);
  }
  v11 = *(_QWORD *)(v4 + 16);
  if ( *(_QWORD *)(v11 + 432) == *(_QWORD *)(gptiCurrent + 432LL) )
  {
    v9 = anonymous_namespace_::FAllowForegroundActivate(v4);
    if ( v9 )
      v6 = *(_DWORD *)(gptiCurrent + 896LL) == 0;
    else
      v5 = anonymous_namespace_::xxxLocalActivateWindow((struct tagWND *)v4, 0, -127 - (a4 != 0));
  }
  else
  {
    if ( v11 == gptiCurrent )
      MicrosoftTelemetryAssertTriggeredMsgKM("We should not get here when thread owns window. This should be handled by caller and window share queue");
    v15 = v10 - 5;
    if ( v15 )
    {
      if ( (unsigned int)(v15 - 1) >= 2 )
      {
        v11 = gpqForeground;
        if ( gpqForeground != *(_QWORD *)(gptiCurrent + 432LL) && gpqForeground )
          goto LABEL_15;
        v16 = v22;
        v6 = (*(_DWORD *)(gptiCurrent + 488LL) & 0x20) != 0 || *(_DWORD *)(gptiCurrent + 896LL) || v22;
LABEL_32:
        if ( (*(_DWORD *)(gptiCurrent + 1208LL) & 0x40) == 0 )
          *(_DWORD *)(gptiCurrent + 488LL) |= 0x20u;
        if ( *(_QWORD *)(*(_QWORD *)(v4 + 16) + 432LL) == gpqForeground
          && gpqForeground == *(_QWORD *)(gptiCurrent + 432LL) )
        {
          MicrosoftTelemetryAssertTriggeredMsgKM("xxxSetForegroundWindow will be converted to local activation. This should not happen in this code path");
        }
        v14 = (unsigned int)xxxSetForegroundWindowWithOptions((LARGE_INTEGER *)v4, v16, 0) == 0;
        v17 = *(_DWORD *)(gptiCurrent + 488LL);
        v5 = !v14;
        if ( v6 )
          v18 = v17 | 0x20;
        else
          v18 = v17 & 0xFFFFFFDF;
        *(_DWORD *)(gptiCurrent + 488LL) = v18;
        goto LABEL_15;
      }
      *(_DWORD *)(gptiCurrent + 1208LL) |= 0x40u;
LABEL_40:
      v16 = v22;
      goto LABEL_32;
    }
    *(_DWORD *)(gptiCurrent + 1208LL) |= 0x40u;
  }
  if ( v9 )
    goto LABEL_40;
LABEL_15:
  if ( (*(_DWORD *)(gptiCurrent + 1208LL) & 0x40) != 0 )
    MicrosoftTelemetryAssertTriggeredMsgKM("fSystemUnrestrictedForegroundRight must not be present on ptiCurrent");
  if ( v7 )
    ThreadUnlock1(v11, a2);
  return v5;
}
