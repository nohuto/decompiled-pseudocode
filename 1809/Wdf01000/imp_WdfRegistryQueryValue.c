/*
 * XREFs of imp_WdfRegistryQueryValue @ 0x1C0005260
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0017FBC (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     __security_check_cookie @ 0x1C001A980 (__security_check_cookie.c)
 *     memmove @ 0x1C001BE80 (memmove.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C00305C0 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qddd @ 0x1C00315F4 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qdd @ 0x1C003E848 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B3B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B41C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfRegistryQueryValue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Key,
        _UNICODE_STRING *ValueName,
        unsigned int ValueLength,
        void *Value,
        unsigned int *ValueLengthQueried,
        unsigned int *ValueType)
{
  WDFKEY__ *v9; // r14
  FxRegKey *v10; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int16 v12; // dx
  int v13; // eax
  ULONG Tag; // r8d
  void *m_Key; // rbp
  __int64 *PoolWithTag; // rdi
  ULONG Length; // eax
  NTSTATUS v18; // eax
  unsigned int _a2; // ebx
  unsigned __int8 v20; // dl
  unsigned int v22; // eax
  unsigned __int8 CurrentIrql; // al
  unsigned __int16 v24; // r9
  ULONG ResultLength; // [rsp+50h] [rbp-78h] BYREF
  FxRegKey *pKey; // [rsp+58h] [rbp-70h] BYREF
  unsigned int *v27; // [rsp+60h] [rbp-68h]
  __int64 v28; // [rsp+68h] [rbp-60h] BYREF
  int v29; // [rsp+70h] [rbp-58h]
  void *retaddr; // [rsp+C8h] [rbp+0h]

  v9 = (WDFKEY__ *)Key;
  v27 = ValueLengthQueried;
  if ( !Key )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1006uLL);
  v10 = (FxRegKey *)(~Key & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Key) = 0;
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    Key = LOWORD(v10->__vftable);
    v10 = (FxRegKey *)((char *)v10 - Key);
  }
  if ( v10->m_Type == 4102 )
  {
    pKey = v10;
  }
  else
  {
    FxObjectHandleGetPtrQI(v10, (void **)&pKey, v9, 0x1006u, Key);
    v10 = pKey;
  }
  m_Globals = v10->FxPagedObject::FxObject::m_Globals;
  if ( !ValueName )
    FxVerifierNullBugCheck(v10->FxPagedObject::FxObject::m_Globals, retaddr);
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      FxVerifierDbgBreakPoint(m_Globals);
      return 3221225488LL;
    }
  }
  v12 = ValueName->Length;
  if ( (ValueName->Length & 1) != 0 )
  {
    v13 = v12;
    v24 = 13;
LABEL_44:
    WPP_IFR_SF_qdd(m_Globals, 2u, 6u, v24, WPP_FxValidateFunctions_hpp_Traceguids_0, ValueName, v13, 0xC000000D);
    return 3221225485LL;
  }
  LOWORD(v13) = ValueName->MaximumLength;
  if ( (v13 & 1) != 0 )
  {
    v13 = (unsigned __int16)v13;
    v24 = 14;
    goto LABEL_44;
  }
  if ( (_WORD)v13 && !ValueName->Buffer )
  {
    v13 = (unsigned __int16)v13;
    v24 = 15;
    goto LABEL_44;
  }
  if ( v12 > (unsigned __int16)v13 )
  {
    WPP_IFR_SF_qddd(
      m_Globals,
      v12,
      6u,
      0x10u,
      WPP_FxValidateFunctions_hpp_Traceguids_0,
      ValueName,
      v12,
      (unsigned __int16)v13,
      -1073741811);
    return 3221225485LL;
  }
  Tag = m_Globals->Tag;
  m_Key = v10->m_Key;
  if ( !Value )
  {
    PoolWithTag = &v28;
    Length = 12;
    v28 = 0LL;
    ResultLength = 12;
    v29 = 0;
LABEL_16:
    v18 = ZwQueryValueKey(m_Key, ValueName, KeyValuePartialInformation, PoolWithTag, Length, &ResultLength);
    _a2 = v18;
    if ( v18 >= 0 )
    {
      if ( Value )
      {
        v22 = *((_DWORD *)PoolWithTag + 2);
        if ( ValueLength >= v22 )
          memmove(Value, (char *)PoolWithTag + 12, v22);
      }
    }
    else if ( v18 != -2147483643 )
    {
      goto LABEL_18;
    }
    if ( v27 )
      *v27 = *((_DWORD *)PoolWithTag + 2);
    if ( ValueType )
      *ValueType = *((_DWORD *)PoolWithTag + 1);
LABEL_18:
    if ( PoolWithTag != &v28 )
      ExFreePoolWithTag(PoolWithTag, 0);
    if ( (_a2 & 0x80000000) == 0 )
      return _a2;
    v20 = 2;
    if ( _a2 == -2147483643 && !Value && !ValueLength )
    {
      v20 = 5;
      if ( !m_Globals->FxVerboseOn )
        return _a2;
    }
    goto LABEL_22;
  }
  ResultLength = ValueLength + 12;
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, ValueLength + 12, Tag);
  if ( PoolWithTag )
  {
    Length = ResultLength;
    goto LABEL_16;
  }
  _a2 = -1073741670;
  v20 = 2;
LABEL_22:
  WPP_IFR_SF_qL(m_Globals, v20, 2u, 0xEu, WPP_FxRegistryAPI_cpp_Traceguids, v9, _a2);
  return _a2;
}
