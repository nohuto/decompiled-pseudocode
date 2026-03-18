/*
 * XREFs of ?ConfigureConstraints@FxPkgGeneral@@AEAAJPEAU_LIST_ENTRY@@@Z @ 0x1C0091AC0
 * Callers:
 *     ?Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C00920E4 (-Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0014164 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqLd @ 0x1C006CF68 (WPP_IFR_SF_qqLd.c)
 */

__int64 __fastcall FxPkgGeneral::ConfigureConstraints(FxPkgGeneral *this, _LIST_ENTRY *FileObjInfoList)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned int v5; // edx
  bool IsVersionGreaterThanOrEqualTo; // al
  int v7; // r8d
  __int32 v8; // r10d
  int v9; // ecx
  _WDF_SYNCHRONIZATION_SCOPE m_SynchronizationScope; // eax
  _LIST_ENTRY *Blink; // rdx
  _WDF_EXECUTION_LEVEL v12; // eax
  _WDF_SYNCHRONIZATION_SCOPE _a4; // r8d
  unsigned int v14; // edi
  FxDeviceBase *v15; // r9
  _LIST_ENTRY *v16; // rdx
  const void *_a3; // r10
  unsigned __int64 m_Driver; // rdx
  unsigned __int16 v19; // ax
  const void *v20; // rdx
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rdx
  FxCallbackLock *v24; // rax
  _LIST_ENTRY *Flink; // rcx
  _WDF_EXECUTION_LEVEL parentExecLevel; // [rsp+70h] [rbp+8h] BYREF
  _WDF_SYNCHRONIZATION_SCOPE parentSynchScope; // [rsp+78h] [rbp+10h] BYREF

  m_Globals = this->m_Globals;
  this->m_DeviceBase->GetConstraints(&this->m_DeviceBase->IFxHasCallbacks, &parentExecLevel, &parentSynchScope);
  IsVersionGreaterThanOrEqualTo = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v5, 0xBu);
  v8 = v7 - 9;
  this->m_ExecutionLevel = 3 - IsVersionGreaterThanOrEqualTo;
  v9 = v7 - 7;
  this->m_SynchronizationScope = v7 - 7;
  m_SynchronizationScope = v7 - 7;
  Blink = FileObjInfoList->Blink;
  if ( Blink == FileObjInfoList )
  {
LABEL_23:
    if ( this->m_ExecutionLevel == v8 )
      this->m_ObjectFlags |= 0x11u;
    if ( m_SynchronizationScope != v9 && m_SynchronizationScope == v8 )
    {
      m_DeviceBase = this->m_DeviceBase;
      if ( parentExecLevel != v8 )
      {
        v14 = -1073741808;
        m_ObjectSize = m_DeviceBase->m_ObjectSize;
        _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !m_ObjectSize )
          _a1 = 0LL;
        WPP_IFR_SF_qL(m_Globals, v8, 0x12u, 0xEu, WPP_FxPkgGeneral_cpp_Traceguids, _a1, 0xC0000010);
        return v14;
      }
      v24 = m_DeviceBase->GetCallbackLockPtr(&m_DeviceBase->IFxHasCallbacks, &this->m_CallbackLockObjectPtr);
      this->m_CallbackLockPtr = v24;
      Flink = FileObjInfoList->Flink;
      if ( FileObjInfoList->Flink != FileObjInfoList && !BYTE4(Flink[9].Flink) )
      {
        Flink[1].Flink = (_LIST_ENTRY *)v24;
        Flink[3].Flink = (_LIST_ENTRY *)this->m_CallbackLockPtr;
        Flink[4].Flink = (_LIST_ENTRY *)this->m_CallbackLockPtr;
      }
    }
    return 0;
  }
  do
  {
    if ( LODWORD(Blink[5].Blink) )
    {
      v12 = (_WDF_EXECUTION_LEVEL)Blink[7].Flink;
      if ( v12 == WdfExecutionLevelInheritFromParent )
        v12 = parentExecLevel;
      if ( v12 == v8 )
        this->m_ExecutionLevel = v8;
      _a4 = HIDWORD(Blink[7].Flink);
      if ( _a4 == WdfSynchronizationScopeInheritFromParent )
        _a4 = parentSynchScope;
      if ( BYTE4(Blink[9].Flink) )
      {
        if ( _a4 != v9 )
        {
          v14 = -1073741808;
          v15 = this->m_DeviceBase;
          v16 = Blink[9].Blink;
          _a3 = (const void *)((unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v15->m_ObjectSize )
            _a3 = 0LL;
          if ( v16 )
            m_Driver = (unsigned __int64)v16[1].Flink;
          else
            m_Driver = (unsigned __int64)v15->m_Driver;
          v19 = *(_WORD *)(m_Driver + 10);
          v20 = (const void *)(m_Driver ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v19 )
            v20 = 0LL;
          WPP_IFR_SF_qqLd(
            m_Globals,
            (unsigned __int8)v20,
            0x12u,
            0xCu,
            WPP_FxPkgGeneral_cpp_Traceguids,
            v20,
            _a3,
            _a4,
            -1073741808);
          FxVerifierDbgBreakPoint(m_Globals);
          return v14;
        }
      }
      else
      {
        this->m_SynchronizationScope = _a4;
      }
    }
    Blink = Blink->Blink;
  }
  while ( Blink != FileObjInfoList );
  m_SynchronizationScope = this->m_SynchronizationScope;
  if ( m_SynchronizationScope != WdfSynchronizationScopeQueue )
    goto LABEL_23;
  v14 = -1073741808;
  WPP_IFR_SF_d(m_Globals, v8, 0x12u, 0xDu, WPP_FxPkgGeneral_cpp_Traceguids, -1073741808);
  return v14;
}
