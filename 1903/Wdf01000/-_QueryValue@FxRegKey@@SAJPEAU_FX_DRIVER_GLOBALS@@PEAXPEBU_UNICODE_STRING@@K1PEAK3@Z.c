/*
 * XREFs of ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x1C0061EE0
 * Callers:
 *     ?FxIFRGetDriverMultiString@@YAJKPEAGPEAK@Z @ 0x1C003DEF0 (-FxIFRGetDriverMultiString@@YAJKPEAGPEAK@Z.c)
 *     ?IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z @ 0x1C0043988 (-IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z.c)
 *     FxVerifierReadObjectDebugInfo @ 0x1C005AA0C (FxVerifierReadObjectDebugInfo.c)
 *     imp_WdfRegistryQueryMemory @ 0x1C00608D0 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C0060BA0 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfRegistryQueryString @ 0x1C0060F90 (imp_WdfRegistryQueryString.c)
 *     imp_WdfRegistryQueryUnicodeString @ 0x1C0061250 (imp_WdfRegistryQueryUnicodeString.c)
 *     QueryAndAllocString @ 0x1C0062C78 (QueryAndAllocString.c)
 *     ?PnpIncrementRestartCountLogic@FxPkgPnp@@AEAAEPEAXE@Z @ 0x1C007E648 (-PnpIncrementRestartCountLogic@FxPkgPnp@@AEAAEPEAXE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A3B0 (__security_check_cookie.c)
 *     memmove @ 0x1C001B400 (memmove.c)
 */

__int64 __fastcall FxRegKey::_QueryValue(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        void *Key,
        _UNICODE_STRING *ValueName,
        unsigned int ValueLength,
        void *Value,
        unsigned int *ValueLengthQueried,
        unsigned int *ValueType)
{
  ULONG Tag; // r8d
  ULONG Length; // eax
  _KEY_VALUE_PARTIAL_INFORMATION *PoolWithTag; // rbx
  NTSTATUS v14; // edi
  unsigned int DataLength; // eax
  unsigned int length; // [rsp+30h] [rbp-58h] BYREF
  _KEY_VALUE_PARTIAL_INFORMATION partial; // [rsp+38h] [rbp-50h] BYREF

  *(_QWORD *)&partial.TitleIndex = 0LL;
  *(_QWORD *)&partial.DataLength = 0LL;
  if ( FxDriverGlobals )
    Tag = FxDriverGlobals->Tag;
  else
    Tag = 1917089862;
  if ( Value )
  {
    length = ValueLength + 12;
    PoolWithTag = (_KEY_VALUE_PARTIAL_INFORMATION *)ExAllocatePoolWithTag(PagedPool, ValueLength + 12, Tag);
    if ( !PoolWithTag )
      return 3221225626LL;
    Length = length;
  }
  else
  {
    Length = 12;
    length = 12;
    PoolWithTag = &partial;
  }
  v14 = ZwQueryValueKey(Key, ValueName, KeyValuePartialInformation, PoolWithTag, Length, &length);
  if ( v14 >= 0 )
  {
    if ( Value )
    {
      DataLength = PoolWithTag->DataLength;
      if ( ValueLength >= DataLength )
        memmove(Value, PoolWithTag->Data, DataLength);
    }
    goto LABEL_14;
  }
  if ( v14 == -2147483643 )
  {
LABEL_14:
    if ( ValueLengthQueried )
      *ValueLengthQueried = PoolWithTag->DataLength;
    if ( ValueType )
      *ValueType = PoolWithTag->Type;
  }
  if ( PoolWithTag != &partial )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v14;
}
