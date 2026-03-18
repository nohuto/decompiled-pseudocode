/*
 * XREFs of ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C002F178
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0030D18 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z @ 0x1C00342D0 (-OnBackgroundMouseInput@Telemetry@CMouseProcessor@@SAXAEBVCInputDest@@@Z.c)
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C006F7E4 (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0142064 (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0158F10 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C002F1D4 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?IsIndependentInputWindow@CInputDest@@QEBA_NXZ @ 0x1C008B2A4 (-IsIndependentInputWindow@CInputDest@@QEBA_NXZ.c)
 *     ApiSetEditionGetCompositionInputWindowUIOwner @ 0x1C0161CAC (ApiSetEditionGetCompositionInputWindowUIOwner.c)
 */

bool __fastcall CInputDest::DoesBelongToForeground(__int64 a1, int a2)
{
  char v3; // bl
  __int64 v5; // rcx
  __int64 CompositionInputWindowUIOwner; // rax

  if ( !gpqForeground )
    return 0;
  v3 = 1;
  if ( a2 != 1 || !CInputDest::IsIndependentInputWindow((CInputDest *)a1) )
    return CInputDest::GetQueue(a1, 2LL) == gpqForeground;
  if ( *(_DWORD *)(a1 + 84) == 2 )
    v5 = *(_QWORD *)(a1 + 72);
  else
    v5 = 0LL;
  CompositionInputWindowUIOwner = ApiSetEditionGetCompositionInputWindowUIOwner(v5);
  if ( !CompositionInputWindowUIOwner
    || gpqForeground != *(_QWORD *)(*(_QWORD *)(CompositionInputWindowUIOwner + 16) + 432LL) )
  {
    return 0;
  }
  return v3;
}
