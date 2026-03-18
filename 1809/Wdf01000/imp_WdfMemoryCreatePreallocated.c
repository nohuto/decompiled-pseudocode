/*
 * XREFs of imp_WdfMemoryCreatePreallocated @ 0x1C004B4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00079C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000DD0C (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000E230 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000E4E4 (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     ??0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z @ 0x1C0054ED8 (--0FxMemoryObject@@IEAA@PEAU_FX_DRIVER_GLOBALS@@G_K@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B41C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C030 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall imp_WdfMemoryCreatePreallocated(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _FX_DRIVER_GLOBALS *Buffer,
        unsigned __int64 BufferSize,
        WDFMEMORY__ **PMemory)
{
  _FX_DRIVER_GLOBALS *DriverName; // rdi
  WDFMEMORY__ **v9; // rsi
  __int64 result; // rax
  FxMemoryObject *v11; // rax
  FxObject *v12; // rbx
  int v13; // edi
  void *retaddr; // [rsp+68h] [rbp+0h]
  FxObject *pParent; // [rsp+70h] [rbp+8h] BYREF

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  if ( (int)FxValidateObjectAttributesForParentHandle((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, Attributes, 0) >= 0 )
  {
    FxObjectHandleGetPtr(DriverName, (unsigned __int64)Attributes->ParentObject, 0x1000u, (void **)&pParent);
    DriverName = pParent->m_Globals;
  }
  if ( !Buffer )
    FxVerifierNullBugCheck(DriverName, retaddr);
  v9 = PMemory;
  if ( !PMemory )
    FxVerifierNullBugCheck(DriverName, retaddr);
  *PMemory = 0LL;
  if ( BufferSize )
  {
    result = FxValidateObjectAttributes(DriverName, Attributes, 0);
    if ( (int)result >= 0 )
    {
      v11 = (FxMemoryObject *)FxObjectHandleAlloc(
                                DriverName,
                                ExDefaultNonPagedPoolType,
                                0x80uLL,
                                0,
                                Attributes,
                                0,
                                FxObjectTypeExternal);
      v12 = v11;
      if ( v11 )
      {
        FxMemoryObject::FxMemoryObject(v11, DriverName, 0x80u, BufferSize);
        v12[1].m_Globals = Buffer;
        v12->__vftable = (FxObject_vtbl *)FxMemoryBufferPreallocated::`vftable'{for `FxObject'};
        v12[1].__vftable = (FxObject_vtbl *)FxMemoryBufferPreallocated::`vftable'{for `IFxMemory'};
      }
      else
      {
        v12 = 0LL;
      }
      if ( v12 )
      {
        v13 = FxObject::Commit(v12, (_FX_DRIVER_GLOBALS *)Attributes, (void **)&pParent, 0LL, 1u);
        if ( v13 < 0 )
        {
          FxObject::ClearEvtCallbacks(v12);
          ((void (*)(void))v12->DeleteObject)();
        }
        else
        {
          *v9 = (WDFMEMORY__ *)pParent;
        }
        return (unsigned int)v13;
      }
      else
      {
        return 3221225626LL;
      }
    }
  }
  else
  {
    WPP_IFR_SF_d(DriverName, 2u, 0x12u, 0xAu, WPP_FxMemoryBufferPreallocatedAPI_cpp_Traceguids, -1073741811);
    return 3221225485LL;
  }
  return result;
}
