/*
 * XREFs of imp_WdfCommonBufferCreateWithConfig @ 0x1C0032FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00079C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000B6F4 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000DD0C (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000E230 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C0030484 (WPP_IFR_SF_DDd.c)
 *     ??0FxCommonBuffer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDmaEnabler@@@Z @ 0x1C00397B4 (--0FxCommonBuffer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDmaEnabler@@@Z.c)
 *     ?AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_K@Z @ 0x1C003983C (-AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_K@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B41C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C030 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall imp_WdfCommonBufferCreateWithConfig(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler,
        unsigned __int64 Length,
        _WDF_COMMON_BUFFER_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFCOMMONBUFFER__ **CommonBufferHandle)
{
  unsigned __int8 v8; // dl
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned int v10; // edi
  __int64 result; // rax
  WDFCOMMONBUFFER__ **v12; // rsi
  _FX_DRIVER_GLOBALS *v13; // rcx
  unsigned __int16 v14; // r9
  _WDF_OBJECT_ATTRIBUTES *v15; // rbp
  FxCommonBuffer *v16; // rax
  FxCommonBuffer *v17; // rax
  FxCommonBuffer *v18; // rdi
  int CommonBuffer; // ebx
  void *retaddr; // [rsp+68h] [rbp+0h]
  FxDmaEnabler *pDmaEnabler; // [rsp+70h] [rbp+8h] BYREF
  void *handle; // [rsp+88h] [rbp+20h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)DmaEnabler,
    0x1400u,
    (void **)&pDmaEnabler);
  m_Globals = pDmaEnabler->m_Globals;
  if ( !Config )
    FxVerifierNullBugCheck(pDmaEnabler->m_Globals, retaddr);
  if ( Config->Size != 8 )
  {
    v10 = -1073741820;
    WPP_IFR_SF_DDd(m_Globals, v8, 0xFu, 0xCu, WPP_FxCommonBufferAPI_cpp_Traceguids, Config->Size, 8, -1073741820);
    return v10;
  }
  v12 = CommonBufferHandle;
  v13 = pDmaEnabler->m_Globals;
  if ( !CommonBufferHandle )
    FxVerifierNullBugCheck(v13, retaddr);
  *CommonBufferHandle = 0LL;
  result = FxVerifierCheckIrqlLevel(v13, 0);
  if ( (int)result >= 0 )
  {
    if ( !Length )
    {
      v10 = -1073741811;
      v14 = 13;
LABEL_11:
      WPP_IFR_SF_d(m_Globals, 2u, 0xFu, v14, WPP_FxCommonBufferAPI_cpp_Traceguids, v10);
      return v10;
    }
    v15 = Attributes;
    result = FxValidateObjectAttributes(m_Globals, Attributes, 1);
    if ( (int)result >= 0 )
    {
      v16 = (FxCommonBuffer *)FxObjectHandleAlloc(
                                m_Globals,
                                ExDefaultNonPagedPoolType,
                                0xB8uLL,
                                0,
                                v15,
                                0,
                                FxObjectTypeExternal);
      if ( v16 )
      {
        FxCommonBuffer::FxCommonBuffer(v16, m_Globals, pDmaEnabler);
        v18 = v17;
      }
      else
      {
        v18 = 0LL;
      }
      if ( !v18 )
      {
        v10 = -1073741670;
        v14 = 14;
        goto LABEL_11;
      }
      CommonBuffer = FxObject::Commit(v18, (_FX_DRIVER_GLOBALS *)v15, &handle, pDmaEnabler, 1u);
      if ( CommonBuffer < 0
        || (v18->m_Alignment = Config->AlignmentRequirement,
            CommonBuffer = FxCommonBuffer::AllocateCommonBuffer(v18, Length),
            CommonBuffer < 0) )
      {
        FxObject::ClearEvtCallbacks(v18);
        v18->DeleteObject(v18);
      }
      else
      {
        *v12 = (WDFCOMMONBUFFER__ *)handle;
      }
      return (unsigned int)CommonBuffer;
    }
  }
  return result;
}
