/*
 * XREFs of _anonymous_namespace_::GetPtiFromInputDest @ 0x1C00380E8
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C003056C (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@@Z @ 0x1C0037E48 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x1C0038E78 (_anonymous_namespace_--InMouseRawInputMode.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C004B908 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C004EA08 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C004EDF0 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C00A06C0 (_anonymous_namespace_--ValidateUIPI.c)
 *     _anonymous_namespace_::GetRawMouseInputDestination @ 0x1C018F624 (_anonymous_namespace_--GetRawMouseInputDestination.c)
 *     ?RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ @ 0x1C0190DEC (-RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00381D8 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall anonymous_namespace_::GetPtiFromInputDest(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  int v4; // edi
  __int64 Queue; // rcx
  int v7; // eax
  __int64 v9; // rax

  v3 = 0LL;
  v4 = a2;
  if ( (_DWORD)a2 == 2 )
  {
    if ( a1 )
    {
      v7 = *(_DWORD *)(a1 + 92);
      if ( v7 == 2 ? *(_QWORD *)(a1 + 80) : 0LL )
      {
        if ( v7 == 2 )
          v3 = *(_QWORD *)(a1 + 80);
        return *(_QWORD *)(v3 + 16);
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
      if ( !v4 )
        return *(_QWORD *)(Queue + 96);
      if ( v4 != 1 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(Queue, a2, a3);
        return v3;
      }
      v9 = *(_QWORD *)(Queue + 112);
      if ( v9 )
        return *(_QWORD *)(v9 + 16);
      else
        return *(_QWORD *)(Queue + 96);
    }
  }
  return v3;
}
