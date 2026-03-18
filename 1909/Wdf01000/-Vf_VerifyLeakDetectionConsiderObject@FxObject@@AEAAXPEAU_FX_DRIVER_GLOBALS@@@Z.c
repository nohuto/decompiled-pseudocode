/*
 * XREFs of ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C6CEC
 * Callers:
 *     imp_WdfMemoryCreate @ 0x1C00045F0 (imp_WdfMemoryCreate.c)
 *     imp_WdfRegistryOpenKey @ 0x1C0005650 (imp_WdfRegistryOpenKey.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0006010 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0006B40 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     imp_WdfRequestCreate @ 0x1C0009C70 (imp_WdfRequestCreate.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B6A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C00124F0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0033794 (WPP_IFR_SF_.c)
 *     FxVerifierIsDebugInfoFlagSetForType @ 0x1C005A88C (FxVerifierIsDebugInfoFlagSetForType.c)
 *     WPP_IFR_SF_DDD @ 0x1C005C788 (WPP_IFR_SF_DDD.c)
 */

void __fastcall FxObject::Vf_VerifyLeakDetectionConsiderObject(FxObject *this, _FX_DRIVER_GLOBALS *a2)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxObjectDebugLeakDetection *FxVerifyLeakDetection; // rbx
  __int16 v5; // dx
  unsigned int level; // esi
  unsigned __int8 v7; // dl
  unsigned int v8; // r8d
  unsigned __int16 v9; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-28h]

  m_Globals = this->m_Globals;
  FxVerifyLeakDetection = m_Globals->FxVerifyLeakDetection;
  if ( FxVerifyLeakDetection
    && FxVerifyLeakDetection->Enabled
    && (FxVerifierIsDebugInfoFlagSetForType(
          m_Globals->DebugExtension->ObjectDebugInfo,
          this->m_Type,
          FxObjectDebugTrackObjectCount)
     || v5 == 4098) )
  {
    if ( v5 == 4098 )
    {
      if ( v5 == 4098 && _InterlockedIncrement(&FxVerifyLeakDetection->DeviceCnt) >= 2 )
        _InterlockedExchangeAdd(&FxVerifyLeakDetection->LimitScaled, FxVerifyLeakDetection->Limit);
      goto LABEL_12;
    }
    if ( v5 != 4104 || BYTE5(this[2].__vftable) == 2 )
    {
LABEL_12:
      BYTE4(this[-1].m_ChildEntry.Blink) = 1;
      level = _InterlockedIncrement(&FxVerifyLeakDetection->ObjectCnt);
      if ( level == FxVerifyLeakDetection->LimitScaled )
      {
        WPP_IFR_SF_(this->m_Globals, 2u, 0x14u, 0xBu, WPP_FxObject_cpp_Traceguids);
        WPP_IFR_SF_DDD(
          this->m_Globals,
          v7,
          v8,
          v9,
          traceGuid,
          level,
          FxVerifyLeakDetection->Limit,
          FxVerifyLeakDetection->LimitScaled);
        FxVerifierDbgBreakPoint(this->m_Globals);
        FxVerifyLeakDetection->Enabled = 0;
      }
    }
  }
}
