/*
 * XREFs of RtlCompareUnicodeString @ 0x1405BFF20
 * Callers:
 *     FsRtlCompareNodeAndKey @ 0x140014750 (FsRtlCompareNodeAndKey.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1400A45D0 (AuthzBasepCompareUnicodeStringOperands.c)
 *     KsepCacheHwIdEqual @ 0x14016CDA0 (KsepCacheHwIdEqual.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x140179BB4 (PopFxFindAcpiDeviceByUniqueId.c)
 *     IopEliminateBogusConflict @ 0x14028B9F0 (IopEliminateBogusConflict.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x1402FEE10 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x1405BF7FC (SepCaptureTokenSecurityAttributesInformation.c)
 *     PiCompareDDBCacheEntries @ 0x1405BFE00 (PiCompareDDBCacheEntries.c)
 *     PnpCompareInstancePath @ 0x1405BFEF0 (PnpCompareInstancePath.c)
 *     CmpFindNameInListCellWithStatus @ 0x1405D0720 (CmpFindNameInListCellWithStatus.c)
 *     CmpDoCompareKeyName @ 0x1405D5C70 (CmpDoCompareKeyName.c)
 *     CmpCheckLexicographicalOrder @ 0x1405DBCF0 (CmpCheckLexicographicalOrder.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406B1AC4 (RtlpProcessIFEOKeyFilter.c)
 *     PopAvlComparePowerRequestKeys @ 0x1406CB140 (PopAvlComparePowerRequestKeys.c)
 *     PiSwBusRelationsCompareInstancePath @ 0x1406DAF10 (PiSwBusRelationsCompareInstancePath.c)
 *     PiDevCfgConfigureDevice @ 0x1406E2E34 (PiDevCfgConfigureDevice.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x14070F404 (ExCovReadjustUnloadedModuleEntry.c)
 *     PopConnectToPolicyDevice @ 0x140740E94 (PopConnectToPolicyDevice.c)
 *     KsepCacheDeviceEqual @ 0x140760DE0 (KsepCacheDeviceEqual.c)
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x140800B00 (CmpSortedValueEnumStackValueCompareFunction.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14082C66C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgResolveVariableExpression @ 0x14082EF30 (PiDevCfgResolveVariableExpression.c)
 *     IopExecuteHardwareProfileChange @ 0x14083FC3C (IopExecuteHardwareProfileChange.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x140894218 (RtlpCapabilityCheckSystemCapability.c)
 *     SepAdtStagingEvent @ 0x14089F468 (SepAdtStagingEvent.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x14089FBD4 (SepAdtClassifyObjectIntoSubCategory.c)
 *     SepRmGlobalSaclFind @ 0x1408A3AB8 (SepRmGlobalSaclFind.c)
 *     ExpCovIsModulePresent @ 0x1408D75F4 (ExpCovIsModulePresent.c)
 *     ExpCovQueryHypervisorInformation @ 0x1408D76CC (ExpCovQueryHypervisorInformation.c)
 *     CmpSetSystemBiosInformation @ 0x1409C25D4 (CmpSetSystemBiosInformation.c)
 *     IopInitializeBootDrivers @ 0x1409CB0BC (IopInitializeBootDrivers.c)
 *     KiHwPolicyFindDriverImage @ 0x1409D3D58 (KiHwPolicyFindDriverImage.c)
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
