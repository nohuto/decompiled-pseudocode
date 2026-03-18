/*
 * XREFs of _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0036194
 * Callers:
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@@Z @ 0x1C0037C94 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0037E1C (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C00382F8 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C00383C8 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0038520 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C006AB90 (_anonymous_namespace_--ValidateUIPI.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x1C00781F0 (_anonymous_namespace_--InMouseRawInputMode.c)
 *     _anonymous_namespace_::GetRawMouseInputDestination @ 0x1C01348E4 (_anonymous_namespace_--GetRawMouseInputDestination.c)
 *     ?RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ @ 0x1C0135D48 (-RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C0036FA4 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall anonymous_namespace_::GetPtiFromInputDest(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // edi
  __int64 Queue; // rcx
  __int64 v6; // rax
  int v7; // eax

  v2 = 0LL;
  v3 = a2;
  if ( (_DWORD)a2 == 2 )
  {
    if ( a1 )
    {
      v7 = *(_DWORD *)(a1 + 84);
      if ( v7 == 2 ? *(_QWORD *)(a1 + 72) : 0LL )
      {
        if ( v7 == 2 )
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
      if ( !v3 )
        return *(_QWORD *)(Queue + 88);
      if ( v3 != 1 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(Queue, a2);
        return v2;
      }
      v6 = *(_QWORD *)(Queue + 104);
      if ( v6 )
        return *(_QWORD *)(v6 + 16);
      else
        return *(_QWORD *)(Queue + 88);
    }
  }
  return v2;
}
