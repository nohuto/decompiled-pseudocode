/*
 * XREFs of ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x1C0041050
 * Callers:
 *     imp_WdfWmiInstanceCreate @ 0x1C003F810 (imp_WdfWmiInstanceCreate.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00079C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000DD0C (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000E230 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_qDd @ 0x1C00314B0 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qid @ 0x1C0031B08 (WPP_IFR_SF_qid.c)
 *     ??0FxWmiInstanceExternal@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAVFxWmiProvider@@@Z @ 0x1C00407D8 (--0FxWmiInstanceExternal@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAVFxWmiPr.c)
 *     WPP_IFR_SF_iid @ 0x1C0041398 (WPP_IFR_SF_iid.c)
 *     WPP_IFR_SF_iqdd @ 0x1C0041484 (WPP_IFR_SF_iqdd.c)
 *     WPP_IFR_SF_qdqqqqd @ 0x1C00416AC (WPP_IFR_SF_qdqqqqd.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C030 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
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
  const void *v11; // rbp
  char m_Flags; // al
  unsigned __int8 UseContextForQuery; // al
  const void *_a5; // rdi
  __int64 result; // rax
  int v16; // esi
  int (__fastcall *EvtWmiInstanceSetInstance)(WDFWMIINSTANCE__ *, unsigned int, void *); // rcx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 ContextSizeOverride; // r8
  char *ContextSize; // r9
  char *v21; // rdx
  __int64 v22; // rax
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
  v11 = 0LL;
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
  v16 = result;
  if ( (int)result >= 0 )
  {
    if ( !WmiInstanceConfig->UseContextForQuery )
      goto LABEL_30;
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
          v11 = ContextSize;
          if ( ContextSizeOverride )
          {
            v21 = &ContextSize[ContextSizeOverride];
            v22 = -1LL;
            if ( &ContextSize[ContextSizeOverride] >= ContextSize )
              v22 = (__int64)&ContextSize[ContextSizeOverride];
            v16 = &ContextSize[ContextSizeOverride] < ContextSize ? 0xC0000095 : 0;
            v11 = (const void *)v22;
            if ( v21 < ContextSize )
            {
              WPP_IFR_SF_iid(
                FxDriverGlobals,
                (unsigned __int8)v21,
                ContextSizeOverride,
                (unsigned __int16)ContextSize,
                _a1,
                v22,
                ContextSizeOverride,
                v16);
              return (unsigned int)v16;
            }
          }
          if ( (unsigned __int64)v11 > 0xFFFFFFFF )
          {
            WPP_IFR_SF_qDd(
              FxDriverGlobals,
              0,
              0x12u,
              0xFu,
              WPP_FxWmiInstance_cpp_Traceguids,
              v11,
              0xFFFFFFFF,
              0xC0000095);
            return 3221225621LL;
          }
          m_MinInstanceBufferSize = Provider->m_MinInstanceBufferSize;
          if ( (unsigned __int64)v11 < m_MinInstanceBufferSize )
          {
            m_ObjectSize = Provider->m_ObjectSize;
            v25 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !m_ObjectSize )
              v25 = 0LL;
            WPP_IFR_SF_iqdd(
              FxDriverGlobals,
              0,
              ContextSizeOverride,
              (unsigned __int16)ContextSize,
              _a1,
              (__int64)v11,
              v25,
              m_MinInstanceBufferSize,
              level);
            return 3221225507LL;
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
            WPP_IFR_SF_d(FxDriverGlobals, 2u, 0x12u, 0x11u, WPP_FxWmiInstance_cpp_Traceguids, -1073741670);
            return 3221225626LL;
          }
          if ( v11 )
            v28->m_ContextLength = (unsigned int)v11;
          if ( v16 < 0
            || (v16 = FxObject::Commit(v28, (_FX_DRIVER_GLOBALS *)InstanceAttributes, (void **)&Instance, Provider, 1u),
                v16 < 0) )
          {
            FxObject::ClearEvtCallbacks(v28);
            v28->DeleteObject(v28);
          }
          else
          {
            *WmiInstance = (WDFWMIINSTANCE__ *)Instance;
            *v6 = v28;
          }
          return (unsigned int)v16;
        }
      }
      WPP_IFR_SF_qL(FxDriverGlobals, 2u, 0x12u, 0xDu, WPP_FxWmiInstance_cpp_Traceguids, InstanceAttributes, 0xC000000D);
    }
    return 3221225485LL;
  }
  return result;
}
