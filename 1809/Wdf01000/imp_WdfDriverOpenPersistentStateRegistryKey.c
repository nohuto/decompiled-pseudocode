/*
 * XREFs of imp_WdfDriverOpenPersistentStateRegistryKey @ 0x1C004EBE0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00079C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000B6F4 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000DD0C (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000E230 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B41C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C030 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ??0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0061AE0 (--0FxRegKey@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall imp_WdfDriverOpenPersistentStateRegistryKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDRIVER__ *Driver,
        unsigned int DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  WDFKEY__ **v5; // r14
  _FX_DRIVER_GLOBALS *DriverName; // rdi
  _FX_DRIVER_GLOBALS *v10; // rcx
  __int64 result; // rax
  FxRegKey *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  int v15; // esi
  int v16; // eax
  WDFKEY__ *keyHandle; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  void *hKey; // [rsp+70h] [rbp+8h]

  v5 = Key;
  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  v10 = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  if ( !Key )
    FxVerifierNullBugCheck(v10, retaddr);
  *Key = 0LL;
  result = FxVerifierCheckIrqlLevel(v10, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(DriverName, KeyAttributes, 0);
    if ( (int)result >= 0 )
    {
      FxObjectHandleGetPtr(DriverName, (unsigned __int64)Driver, 0x1001u, (void **)&Key);
      v12 = (FxRegKey *)FxObjectHandleAlloc(
                          DriverName,
                          ExDefaultNonPagedPoolType,
                          0x80uLL,
                          0,
                          KeyAttributes,
                          0,
                          FxObjectTypeExternal);
      if ( v12 )
      {
        FxRegKey::FxRegKey(v12, DriverName);
        v14 = v13;
      }
      else
      {
        v14 = 0LL;
      }
      if ( v14 )
      {
        v15 = FxObject::Commit((FxObject *)v14, (_FX_DRIVER_GLOBALS *)KeyAttributes, (void **)&keyHandle, 0LL, 1u);
        if ( v15 < 0 )
          goto LABEL_15;
        v16 = IoOpenDriverRegistryKey(Key[16], 1LL, DesiredAccess);
        v15 = v16;
        if ( v16 >= 0 )
        {
          *(_QWORD *)(v14 + 112) = hKey;
          *v5 = keyHandle;
        }
        else
        {
          WPP_IFR_SF_d(DriverName, 2u, 6u, 0xAu, WPP_FxDriverApiKm_cpp_Traceguids, v16);
        }
        if ( v15 < 0 )
        {
LABEL_15:
          FxObject::ClearEvtCallbacks((FxObject *)v14);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 48LL))(v14);
        }
        return (unsigned int)v15;
      }
      else
      {
        return 3221225626LL;
      }
    }
  }
  return result;
}
