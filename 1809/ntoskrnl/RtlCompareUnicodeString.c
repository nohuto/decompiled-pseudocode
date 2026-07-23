/*
 * XREFs of RtlCompareUnicodeString @ 0x1405C0F20
 * Callers:
 *     FsRtlCompareNodeAndKey @ 0x140014750 (FsRtlCompareNodeAndKey.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1400A4510 (AuthzBasepCompareUnicodeStringOperands.c)
 *     KsepCacheHwIdEqual @ 0x14016CEA0 (KsepCacheHwIdEqual.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x140179CB4 (PopFxFindAcpiDeviceByUniqueId.c)
 *     IopEliminateBogusConflict @ 0x14028BBE0 (IopEliminateBogusConflict.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x1402FF000 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x1405C07FC (SepCaptureTokenSecurityAttributesInformation.c)
 *     PiCompareDDBCacheEntries @ 0x1405C0E00 (PiCompareDDBCacheEntries.c)
 *     PnpCompareInstancePath @ 0x1405C0EF0 (PnpCompareInstancePath.c)
 *     CmpFindNameInListCellWithStatus @ 0x1405D1720 (CmpFindNameInListCellWithStatus.c)
 *     CmpDoCompareKeyName @ 0x1405D6C70 (CmpDoCompareKeyName.c)
 *     CmpCheckLexicographicalOrder @ 0x1405DCCF0 (CmpCheckLexicographicalOrder.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406B2D64 (RtlpProcessIFEOKeyFilter.c)
 *     PopAvlComparePowerRequestKeys @ 0x1406CC3E0 (PopAvlComparePowerRequestKeys.c)
 *     PiSwBusRelationsCompareInstancePath @ 0x1406DC1B0 (PiSwBusRelationsCompareInstancePath.c)
 *     PiDevCfgConfigureDevice @ 0x1406E40D4 (PiDevCfgConfigureDevice.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x1407106A4 (ExCovReadjustUnloadedModuleEntry.c)
 *     PopConnectToPolicyDevice @ 0x140742084 (PopConnectToPolicyDevice.c)
 *     KsepCacheDeviceEqual @ 0x140761FD0 (KsepCacheDeviceEqual.c)
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x140801D00 (CmpSortedValueEnumStackValueCompareFunction.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14082D898 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgResolveVariableExpression @ 0x140830190 (PiDevCfgResolveVariableExpression.c)
 *     IopExecuteHardwareProfileChange @ 0x140840E9C (IopExecuteHardwareProfileChange.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x140895478 (RtlpCapabilityCheckSystemCapability.c)
 *     SepAdtStagingEvent @ 0x1408A06C8 (SepAdtStagingEvent.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x1408A0E34 (SepAdtClassifyObjectIntoSubCategory.c)
 *     SepRmGlobalSaclFind @ 0x1408A4D18 (SepRmGlobalSaclFind.c)
 *     ExpCovIsModulePresent @ 0x1408D88B4 (ExpCovIsModulePresent.c)
 *     ExpCovQueryHypervisorInformation @ 0x1408D898C (ExpCovQueryHypervisorInformation.c)
 *     CmpSetSystemBiosInformation @ 0x1409C35D4 (CmpSetSystemBiosInformation.c)
 *     IopInitializeBootDrivers @ 0x1409CC0BC (IopInitializeBootDrivers.c)
 *     KiHwPolicyFindDriverImage @ 0x1409D4D58 (KiHwPolicyFindDriverImage.c)
 * Callees:
 *     <none>
 */

LONG __stdcall RtlCompareUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  wchar_t *Buffer; // rax
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rcx
  wchar_t *v7; // r11
  char *v8; // rbx
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r10
  char *v12; // r8
  int v13; // ecx
  int v14; // edx

  Buffer = String1->Buffer;
  v4 = (unsigned __int64)String1->Length >> 1;
  v5 = (unsigned __int64)String2->Length >> 1;
  v6 = v4;
  if ( v4 > v5 )
    v6 = (unsigned __int64)String2->Length >> 1;
  v7 = &Buffer[v6];
  if ( CaseInSensitive )
  {
    if ( Buffer < v7 )
    {
      v8 = (char *)((char *)String2->Buffer - (char *)Buffer);
      while ( 1 )
      {
        v9 = *Buffer;
        v10 = *(unsigned __int16 *)((char *)Buffer + (_QWORD)v8);
        if ( (_DWORD)v9 != (_DWORD)v10 )
        {
          if ( (unsigned int)v9 >= 0x61 )
          {
            if ( (unsigned int)v9 > 0x7A )
              LODWORD(v9) = (unsigned __int16)(v9
                                             + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v9 & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((unsigned __int8)v9 >> 4) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v9 >> 8)]]]);
            else
              LODWORD(v9) = v9 - 32;
          }
          if ( (unsigned int)v10 >= 0x61 )
          {
            if ( (unsigned int)v10 > 0x7A )
              LODWORD(v10) = (unsigned __int16)(v10
                                              + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v10 & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((unsigned __int8)v10 >> 4) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v10 >> 8)]]]);
            else
              LODWORD(v10) = v10 - 32;
          }
          if ( (_DWORD)v9 != (_DWORD)v10 )
            break;
        }
        if ( ++Buffer >= v7 )
          return v4 - v5;
      }
      return v9 - v10;
    }
    return v4 - v5;
  }
  if ( Buffer >= v7 )
    return v4 - v5;
  v12 = (char *)((char *)String2->Buffer - (char *)Buffer);
  while ( 1 )
  {
    v13 = *Buffer;
    v14 = *(unsigned __int16 *)((char *)Buffer + (_QWORD)v12);
    if ( v13 != v14 )
      break;
    if ( ++Buffer >= v7 )
      return v4 - v5;
  }
  return v13 - v14;
}
