/*
 * XREFs of imp_WdfSpinLockCreate @ 0x1C000C4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00079C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ??0FxSpinLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x1C000C5F0 (--0FxSpinLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000DD0C (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000E230 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000E4E4 (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B41C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C030 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall imp_WdfSpinLockCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *SpinLockAttributes,
        FxObject **SpinLock)
{
  _FX_DRIVER_GLOBALS *DriverName; // rbx
  __int64 result; // rax
  _POOL_TYPE v7; // edx
  bool v8; // cf
  unsigned __int16 ExtraSize; // bp
  FxSpinLock *v10; // rax
  FxObject *v11; // rax
  FxObject *v12; // rbx
  int v13; // edi
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxObject *pParent; // [rsp+50h] [rbp+8h] BYREF

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  if ( FxValidateObjectAttributesForParentHandle(
         (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
         SpinLockAttributes,
         0) >= 0 )
  {
    FxObjectHandleGetPtr(DriverName, (unsigned __int64)SpinLockAttributes->ParentObject, 0x1000u, (void **)&pParent);
    DriverName = pParent->m_Globals;
  }
  if ( !SpinLock )
    FxVerifierNullBugCheck(DriverName, retaddr);
  result = FxValidateObjectAttributes(DriverName, SpinLockAttributes, 0);
  if ( (int)result >= 0 )
  {
    v7 = ExDefaultNonPagedPoolType;
    v8 = DriverName->FxVerifierLock != 0;
    *SpinLock = 0LL;
    ExtraSize = v8 ? 0x100 : 0;
    v10 = (FxSpinLock *)FxObjectHandleAlloc(
                          DriverName,
                          v7,
                          0x80uLL,
                          0,
                          SpinLockAttributes,
                          ExtraSize,
                          FxObjectTypeExternal);
    if ( v10 )
    {
      FxSpinLock::FxSpinLock(v10, DriverName, ExtraSize);
      v12 = v11;
    }
    else
    {
      v12 = 0LL;
    }
    if ( v12 )
    {
      v13 = FxObject::Commit(v12, SpinLockAttributes, (void **)&pParent, 0LL, 1u);
      if ( v13 < 0 )
      {
        FxObject::ClearEvtCallbacks(v12);
        v12->DeleteObject(v12);
      }
      else
      {
        *SpinLock = pParent;
      }
      return (unsigned int)v13;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
