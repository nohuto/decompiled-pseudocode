/*
 * XREFs of imp_WdfCommonBufferCreate @ 0x1C0032E30
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00079C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000B6F4 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000DD0C (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000E230 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ??0FxCommonBuffer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDmaEnabler@@@Z @ 0x1C00397B4 (--0FxCommonBuffer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDmaEnabler@@@Z.c)
 *     ?AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_K@Z @ 0x1C003983C (-AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_K@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B41C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C030 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall imp_WdfCommonBufferCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler,
        unsigned __int64 Length,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFCOMMONBUFFER__ **CommonBufferHandle)
{
  WDFCOMMONBUFFER__ **v7; // rsi
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  __int64 result; // rax
  unsigned int _a1; // ebx
  unsigned __int16 v11; // r9
  FxCommonBuffer *v12; // rax
  FxCommonBuffer *v13; // rax
  FxCommonBuffer *v14; // rbx
  int CommonBuffer; // edi
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxDmaEnabler *pDmaEnabler; // [rsp+60h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)DmaEnabler,
    0x1400u,
    (void **)&pDmaEnabler);
  v7 = CommonBufferHandle;
  m_Globals = pDmaEnabler->m_Globals;
  if ( !CommonBufferHandle )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *CommonBufferHandle = 0LL;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    if ( !Length )
    {
      _a1 = -1073741811;
      v11 = 10;
LABEL_6:
      WPP_IFR_SF_d(m_Globals, 2u, 0xFu, v11, WPP_FxCommonBufferAPI_cpp_Traceguids, _a1);
      return _a1;
    }
    result = FxValidateObjectAttributes(m_Globals, Attributes, 1);
    if ( (int)result >= 0 )
    {
      v12 = (FxCommonBuffer *)FxObjectHandleAlloc(
                                m_Globals,
                                ExDefaultNonPagedPoolType,
                                0xB8uLL,
                                0,
                                Attributes,
                                0,
                                FxObjectTypeExternal);
      if ( v12 )
      {
        FxCommonBuffer::FxCommonBuffer(v12, m_Globals, pDmaEnabler);
        v14 = v13;
      }
      else
      {
        v14 = 0LL;
      }
      if ( !v14 )
      {
        _a1 = -1073741670;
        v11 = 11;
        goto LABEL_6;
      }
      CommonBuffer = FxObject::Commit(
                       v14,
                       (_FX_DRIVER_GLOBALS *)Attributes,
                       (void **)&CommonBufferHandle,
                       pDmaEnabler,
                       1u);
      if ( CommonBuffer < 0 || (CommonBuffer = FxCommonBuffer::AllocateCommonBuffer(v14, Length), CommonBuffer < 0) )
      {
        FxObject::ClearEvtCallbacks(v14);
        v14->DeleteObject(v14);
      }
      else
      {
        *v7 = (WDFCOMMONBUFFER__ *)CommonBufferHandle;
      }
      return (unsigned int)CommonBuffer;
    }
  }
  return result;
}
