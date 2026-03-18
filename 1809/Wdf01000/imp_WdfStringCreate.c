/*
 * XREFs of imp_WdfStringCreate @ 0x1C00618E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0004F10 (WPP_IFR_SF_d.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00079C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000B6F4 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C000DD0C (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000E230 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000E4E4 (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0017EE4 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B41C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C005C030 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0063C30 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C0063DE0 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 */

__int64 __fastcall imp_WdfStringCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        const _UNICODE_STRING *UnicodeString,
        _WDF_OBJECT_ATTRIBUTES *StringAttributes,
        WDFSTRING__ **String)
{
  _FX_DRIVER_GLOBALS *DriverName; // rdi
  __int64 result; // rax
  int v9; // ebx
  FxString *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  ULONG_PTR retaddr; // [rsp+68h] [rbp+0h]
  FxObject *pParent; // [rsp+70h] [rbp+8h] BYREF

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  if ( (int)FxValidateObjectAttributesForParentHandle(
              (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
              StringAttributes,
              0) >= 0 )
  {
    FxObjectHandleGetPtr(DriverName, (unsigned __int64)StringAttributes->ParentObject, 0x1000u, (void **)&pParent);
    DriverName = pParent->m_Globals;
  }
  if ( !String )
    FxVerifierNullBugCheck(DriverName, retaddr);
  *String = 0LL;
  result = FxVerifierCheckIrqlLevel(DriverName, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(DriverName, StringAttributes, 0);
    v9 = result;
    if ( (int)result >= 0 )
    {
      if ( !UnicodeString
        || (result = FxValidateUnicodeString(DriverName, UnicodeString), v9 = result, (int)result >= 0) )
      {
        v10 = (FxString *)FxObjectHandleAlloc(
                            DriverName,
                            ExDefaultNonPagedPoolType,
                            0x78uLL,
                            0,
                            StringAttributes,
                            0,
                            FxObjectTypeExternal);
        if ( v10 )
        {
          FxString::FxString(v10, DriverName);
          v12 = v11;
        }
        else
        {
          v12 = 0LL;
        }
        if ( v12 )
        {
          if ( UnicodeString )
            v9 = FxDuplicateUnicodeString(
                   *(_FX_DRIVER_GLOBALS **)(v12 + 16),
                   UnicodeString,
                   (_UNICODE_STRING *)(v12 + 104));
          if ( v9 < 0
            || (v9 = FxObject::Commit((FxObject *)v12, (_FX_DRIVER_GLOBALS *)StringAttributes, (void **)String, 0LL, 1u),
                v9 < 0) )
          {
            FxObject::ClearEvtCallbacks((FxObject *)v12);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 48LL))(v12);
          }
        }
        else
        {
          v9 = -1073741670;
          WPP_IFR_SF_d(DriverName, 2u, 2u, 0xAu, WPP_FxStringAPI_cpp_Traceguids, -1073741670);
        }
        return (unsigned int)v9;
      }
    }
  }
  return result;
}
