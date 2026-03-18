/*
 * XREFs of ?AllocateTagTracker@FxObject@@IEAAXG@Z @ 0x1C005BE98
 * Callers:
 *     imp_WdfMemoryCreate @ 0x1C0002710 (imp_WdfMemoryCreate.c)
 *     ??0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z @ 0x1C0054ED8 (--0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00C2C7C (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 * Callees:
 *     FxVerifierIsDebugInfoFlagSetForType @ 0x1C005A59C (FxVerifierIsDebugInfoFlagSetForType.c)
 *     ?CreateAndInitialize@FxTagTracker@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z @ 0x1C005C064 (-CreateAndInitialize@FxTagTracker@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAV.c)
 */

void __fastcall FxObject::AllocateTagTracker(FxObject *this, unsigned __int16 Type)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxObjectDebugInfo **p_ObjectDebugInfo; // rax
  void *v5; // [rsp+28h] [rbp-10h]

  m_Globals = this->m_Globals;
  p_ObjectDebugInfo = &m_Globals->DebugExtension->ObjectDebugInfo;
  if ( p_ObjectDebugInfo
    && m_Globals->FxVerifyTagTrackingEnabled
    && *p_ObjectDebugInfo
    && FxVerifierIsDebugInfoFlagSetForType(*p_ObjectDebugInfo, Type, FxObjectDebugTrackReferences) )
  {
    FxTagTracker::CreateAndInitialize(
      (FxTagTracker **)&this[-1].m_SpinLock.m_Lock,
      m_Globals,
      FxTagTrackerTypeHandle,
      0,
      this,
      v5);
    this->m_ObjectFlags |= 0x200u;
  }
}
