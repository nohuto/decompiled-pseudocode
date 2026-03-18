/*
 * XREFs of ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x1C00402B0
 * Callers:
 *     imp_WdfWmiInstanceCreate @ 0x1C003EA70 (imp_WdfWmiInstanceCreate.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_d @ 0x1C0003FF0 (WPP_IFR_SF_d.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0004F20 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B6A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0017908 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     WPP_IFR_SF_qDd @ 0x1C00308E0 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qid @ 0x1C0030F38 (WPP_IFR_SF_qid.c)
 *     ??0FxWmiInstanceExternal@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAVFxWmiProvider@@@Z @ 0x1C003FA3C (--0FxWmiInstanceExternal@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAVFxWmiPr.c)
 *     WPP_IFR_SF_iid @ 0x1C00405E0 (WPP_IFR_SF_iid.c)
 *     WPP_IFR_SF_iqdd @ 0x1C00406CC (WPP_IFR_SF_iqdd.c)
 *     WPP_IFR_SF_qdqqqqd @ 0x1C00408F4 (WPP_IFR_SF_qdqqqqd.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C490 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall FxWmiInstanceExternal::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxWmiProvider *Provider,
        _WDF_WMI_INSTANCE_CONFIG *WmiInstanceConfig,
        _WDF_OBJECT_ATTRIBUTES *InstanceAttributes,
        WDFWMIINSTANCE__ **WmiInstance,
        FxWmiInstanceExternal **Instance)
{
  FxWmiInstanceExternal **v6; // r12
  char *ContextSize; // rsi
  unsigned int m_Flags; // eax
  unsigned __int8 UseContextForQuery; // al
  const void *_a5; // rdi
  __int64 result; // rax
  unsigned int v16; // r8d
  unsigned __int16 v17; // r9
  int v18; // ebp
  int (__fastcall *EvtWmiInstanceSetInstance)(WDFWMIINSTANCE__ *, unsigned int, void *); // rcx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rsi
  unsigned __int64 ContextSizeOverride; // rax
  unsigned int v22; // ebx
  unsigned __int64 m_MinInstanceBufferSize; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *v25; // rdi
  FxWmiInstanceExternal *v26; // rax
  FxWmiInstanceExternal *v27; // rax
  FxWmiInstanceExternal *v28; // rbx
  const _GUID *_a1; // [rsp+20h] [rbp-68h]
  int level; // [rsp+40h] [rbp-48h]
  int v31; // [rsp+58h] [rbp-30h]

  v6 = Instance;
  ContextSize = 0LL;
  m_Flags = Provider->m_Flags;
  *Instance = 0LL;
  *WmiInstance = 0LL;
  if ( (m_Flags & 1) != 0 )
  {
    UseContextForQuery = WmiInstanceConfig->UseContextForQuery;
    if ( UseContextForQuery
      || WmiInstanceConfig->EvtWmiInstanceQueryInstance
      || WmiInstanceConfig->EvtWmiInstanceSetInstance
      || WmiInstanceConfig->EvtWmiInstanceSetItem
      || WmiInstanceConfig->EvtWmiInstanceExecuteMethod )
    {
      _a5 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !Provider->m_ObjectSize )
        _a5 = 0LL;
      WPP_IFR_SF_qdqqqqd(
        FxDriverGlobals,
        0,
        (unsigned int)WmiInstanceConfig,
        (unsigned __int16)InstanceAttributes,
        _a1,
        _a5,
        UseContextForQuery,
        WmiInstanceConfig->EvtWmiInstanceQueryInstance,
        WmiInstanceConfig->EvtWmiInstanceSetInstance,
        WmiInstanceConfig->EvtWmiInstanceSetItem,
        WmiInstanceConfig->EvtWmiInstanceExecuteMethod,
        v31);
      return 3221225485LL;
    }
  }
  result = FxValidateObjectAttributes(FxDriverGlobals, InstanceAttributes, 1);
  v18 = result;
  if ( (int)result < 0 )
    return result;
  if ( WmiInstanceConfig->UseContextForQuery )
  {
    EvtWmiInstanceSetInstance = WmiInstanceConfig->EvtWmiInstanceSetInstance;
    if ( EvtWmiInstanceSetInstance || WmiInstanceConfig->EvtWmiInstanceSetItem )
    {
      WPP_IFR_SF_qid(
        FxDriverGlobals,
        2u,
        0x12u,
        0xCu,
        WPP_FxWmiInstance_cpp_Traceguids,
        EvtWmiInstanceSetInstance,
        (__int64)WmiInstanceConfig->EvtWmiInstanceSetItem,
        -1073741811);
    }
    else
    {
      if ( InstanceAttributes )
      {
        ContextTypeInfo = InstanceAttributes->ContextTypeInfo;
        if ( ContextTypeInfo )
        {
          ContextSizeOverride = InstanceAttributes->ContextSizeOverride;
          ContextSize = (char *)ContextTypeInfo->ContextSize;
          if ( ContextSizeOverride )
          {
            if ( &ContextSize[ContextSizeOverride] < ContextSize )
            {
              v22 = -1073741675;
              WPP_IFR_SF_iid(FxDriverGlobals, 0, v16, v17, _a1, -1LL, ContextSizeOverride, -1073741675);
              return v22;
            }
            ContextSize += ContextSizeOverride;
            v18 = 0;
          }
          if ( (unsigned __int64)ContextSize > 0xFFFFFFFF )
          {
            v22 = -1073741675;
            WPP_IFR_SF_qDd(
              FxDriverGlobals,
              0,
              0x12u,
              0xFu,
              WPP_FxWmiInstance_cpp_Traceguids,
              ContextSize,
              0xFFFFFFFF,
              0xC0000095);
            return v22;
          }
          m_MinInstanceBufferSize = Provider->m_MinInstanceBufferSize;
          if ( (unsigned __int64)ContextSize < m_MinInstanceBufferSize )
          {
            m_ObjectSize = Provider->m_ObjectSize;
            v25 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !m_ObjectSize )
              v25 = 0LL;
            WPP_IFR_SF_iqdd(
              FxDriverGlobals,
              0,
              v16,
              v17,
              _a1,
              (__int64)ContextSize,
              v25,
              m_MinInstanceBufferSize,
              level);
            return 3221225507LL;
          }
          goto LABEL_30;
        }
      }
      WPP_IFR_SF_qL(FxDriverGlobals, 2u, 0x12u, 0xDu, WPP_FxWmiInstance_cpp_Traceguids, InstanceAttributes, 0xC000000D);
    }
    return 3221225485LL;
  }
LABEL_30:
  v26 = (FxWmiInstanceExternal *)FxObjectHandleAlloc(
                                   FxDriverGlobals,
                                   ExDefaultNonPagedPoolType,
                                   0xB8uLL,
                                   0,
                                   InstanceAttributes,
                                   0,
                                   FxObjectTypeExternal);
  if ( v26 )
  {
    FxWmiInstanceExternal::FxWmiInstanceExternal(v26, FxDriverGlobals, WmiInstanceConfig, Provider);
    v28 = v27;
  }
  else
  {
    v28 = 0LL;
  }
  if ( !v28 )
  {
    v22 = -1073741670;
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 0x12u, 0x11u, WPP_FxWmiInstance_cpp_Traceguids, -1073741670);
    return v22;
  }
  if ( ContextSize )
    v28->m_ContextLength = (unsigned int)ContextSize;
  if ( v18 < 0
    || (v18 = FxObject::Commit(v28, (_FX_DRIVER_GLOBALS *)InstanceAttributes, (void **)&Instance, Provider, 1u), v18 < 0) )
  {
    FxObject::ClearEvtCallbacks(v28);
    v28->DeleteObject(v28);
  }
  else
  {
    *WmiInstance = (WDFWMIINSTANCE__ *)Instance;
    *v6 = v28;
  }
  return (unsigned int)v18;
}
