/*
 * XREFs of imp_WdfRegistryQueryULong @ 0x1C000B8C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000BA00 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000BB38 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     __security_check_cookie @ 0x1C001A3B0 (__security_check_cookie.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0058664 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B7E4 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B850 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

NTSTATUS __fastcall imp_WdfRegistryQueryULong(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Key,
        _UNICODE_STRING *ValueName,
        unsigned int *Value)
{
  __int64 v7; // rdx
  FxRegKey *v8; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  NTSTATUS result; // eax
  NTSTATUS _a2; // ebx
  unsigned int ResultLength; // [rsp+40h] [rbp-58h] BYREF
  FxRegKey *pKey; // [rsp+48h] [rbp-50h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-48h] BYREF
  int v15; // [rsp+54h] [rbp-44h]
  unsigned int v16; // [rsp+5Ch] [rbp-3Ch]
  void *retaddr; // [rsp+98h] [rbp+0h]

  if ( !Key )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1006uLL);
  LOWORD(v7) = 0;
  v8 = (FxRegKey *)(~Key & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Key & 1) != 0 )
  {
    v7 = LOWORD(v8->__vftable);
    v8 = (FxRegKey *)((char *)v8 - v7);
  }
  if ( v8->m_Type == 4102 )
  {
    pKey = v8;
  }
  else
  {
    FxObjectHandleGetPtrQI(v8, (void **)&pKey, (void *)Key, 0x1006u, v7);
    v8 = pKey;
  }
  m_Globals = v8->FxPagedObject::FxObject::m_Globals;
  if ( !ValueName )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( !Value )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( result >= 0 )
  {
    result = FxValidateUnicodeString(m_Globals, ValueName);
    if ( result >= 0 )
    {
      ResultLength = 16;
      _a2 = ZwQueryValueKey(
              pKey->m_Key,
              ValueName,
              KeyValuePartialInformation,
              KeyValueInformation,
              0x10u,
              &ResultLength);
      if ( ((int)(_a2 + 0x80000000) < 0 || _a2 == -2147483643) && v15 != 4 )
        _a2 = -1073741788;
      if ( _a2 < 0 )
        WPP_IFR_SF_qL(m_Globals, 2u, 2u, 0x1Fu, WPP_FxRegistryAPI_cpp_Traceguids, (const void *)Key, _a2);
      else
        *Value = v16;
      return _a2;
    }
  }
  return result;
}
