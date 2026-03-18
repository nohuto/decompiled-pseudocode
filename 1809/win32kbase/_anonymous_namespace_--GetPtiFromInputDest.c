/*
 * XREFs of _anonymous_namespace_::GetPtiFromInputDest @ 0x1C002F0E8
 * Callers:
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@@Z @ 0x1C002EE8C (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0030D18 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C006EB98 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x1C006F260 (_anonymous_namespace_--InMouseRawInputMode.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C007003C (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C00702B8 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0089FDC (_anonymous_namespace_--ValidateUIPI.c)
 *     _anonymous_namespace_::GetRawMouseInputDestination @ 0x1C01580CC (_anonymous_namespace_--GetRawMouseInputDestination.c)
 *     ?RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ @ 0x1C0159650 (-RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C002F1D4 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

__int64 __fastcall anonymous_namespace_::GetPtiFromInputDest(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 Queue; // rcx
  int v6; // eax
  __int64 v8; // rax

  v2 = 0LL;
  if ( a2 == 2 )
  {
    if ( a1 )
    {
      v6 = *(_DWORD *)(a1 + 84);
      if ( v6 == 2 ? *(_QWORD *)(a1 + 72) : 0LL )
      {
        if ( v6 == 2 )
          v2 = *(_QWORD *)(a1 + 72);
        return *(_QWORD *)(v2 + 16);
      }
    }
  }
  else
  {
    if ( a1 )
      Queue = CInputDest::GetQueue(a1, 0LL);
    else
      Queue = gpqForeground;
    if ( Queue )
    {
      if ( !a2 )
        return *(_QWORD *)(Queue + 88);
      if ( a2 != 1 )
      {
        MicrosoftTelemetryAssertTriggeredMsgKM("Unknown GetPtiInputDest option. Add handler");
        return v2;
      }
      v8 = *(_QWORD *)(Queue + 104);
      if ( v8 )
        return *(_QWORD *)(v8 + 16);
      else
        return *(_QWORD *)(Queue + 88);
    }
  }
  return v2;
}
