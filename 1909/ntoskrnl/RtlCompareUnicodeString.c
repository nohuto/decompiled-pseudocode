/*
 * XREFs of RtlCompareUnicodeString @ 0x140666EF0
 * Callers:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1400D2BE4 (AuthzBasepCompareUnicodeStringOperands.c)
 *     FsRtlCompareNodeAndKey @ 0x14010661C (FsRtlCompareNodeAndKey.c)
 *     KsepCacheHwIdEqual @ 0x140177AD0 (KsepCacheHwIdEqual.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x14019277C (PopFxFindAcpiDeviceByUniqueId.c)
 *     IopEliminateBogusConflict @ 0x1402A17DC (IopEliminateBogusConflict.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x14031CA94 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     CmpCheckLexicographicalOrder @ 0x140664F10 (CmpCheckLexicographicalOrder.c)
 *     CmpDoCompareKeyName @ 0x140667370 (CmpDoCompareKeyName.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x1406D0544 (SepCaptureTokenSecurityAttributesInformation.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406D39F4 (RtlpProcessIFEOKeyFilter.c)
 *     PnpCompareInstancePath @ 0x1406D5870 (PnpCompareInstancePath.c)
 *     PopAvlComparePowerRequestKeys @ 0x1406EA940 (PopAvlComparePowerRequestKeys.c)
 *     PiDevCfgConfigureDevice @ 0x140705DE4 (PiDevCfgConfigureDevice.c)
 *     PiCompareDDBCacheEntries @ 0x14071B680 (PiCompareDDBCacheEntries.c)
 *     PiSwBusRelationsCompareInstancePath @ 0x14071EDF0 (PiSwBusRelationsCompareInstancePath.c)
 *     ExCovReadjustUnloadedModuleEntry @ 0x14074911C (ExCovReadjustUnloadedModuleEntry.c)
 *     PopConnectToPolicyDevice @ 0x14074E044 (PopConnectToPolicyDevice.c)
 *     KsepCacheDeviceEqual @ 0x14078A330 (KsepCacheDeviceEqual.c)
 *     CmpFindNameInListCellWithStatus @ 0x140838EC0 (CmpFindNameInListCellWithStatus.c)
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x140839680 (CmpSortedValueEnumStackValueCompareFunction.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408665C0 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgResolveVariableExpression @ 0x140868F00 (PiDevCfgResolveVariableExpression.c)
 *     IopExecuteHardwareProfileChange @ 0x14087AD8C (IopExecuteHardwareProfileChange.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x1408D1CB8 (RtlpCapabilityCheckSystemCapability.c)
 *     SepAdtStagingEvent @ 0x1408DD528 (SepAdtStagingEvent.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x1408DDCA0 (SepAdtClassifyObjectIntoSubCategory.c)
 *     SepRmGlobalSaclFind @ 0x1408E1CF8 (SepRmGlobalSaclFind.c)
 *     ExpCovIsModulePresent @ 0x1409142E4 (ExpCovIsModulePresent.c)
 *     ExpCovQueryHypervisorInformation @ 0x1409143BC (ExpCovQueryHypervisorInformation.c)
 *     CmpSetSystemBiosInformation @ 0x140A0C73C (CmpSetSystemBiosInformation.c)
 *     IopInitializeBootDrivers @ 0x140A10C08 (IopInitializeBootDrivers.c)
 *     KiHwPolicyFindDriverImage @ 0x140A182E8 (KiHwPolicyFindDriverImage.c)
 * Callees:
 *     NLS_UPCASE @ 0x1400CFCA0 (NLS_UPCASE.c)
 */

LONG __stdcall RtlCompareUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  unsigned __int16 *Buffer; // r9
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rax
  unsigned __int16 *v7; // rbx
  char *v8; // r11
  unsigned __int16 v10; // r8
  unsigned __int16 v11; // r10
  char *v12; // r8
  unsigned __int16 v13; // ax

  Buffer = String1->Buffer;
  v4 = (unsigned __int64)String1->Length >> 1;
  v5 = (unsigned __int64)String2->Length >> 1;
  v6 = v4;
  if ( v4 > v5 )
    v6 = (unsigned __int64)String2->Length >> 1;
  v7 = &Buffer[v6];
  if ( Buffer >= v7 )
    return v4 - v5;
  if ( CaseInSensitive )
  {
    v8 = (char *)((char *)String2->Buffer - (char *)Buffer);
    while ( 1 )
    {
      if ( *Buffer != *(unsigned __int16 *)((char *)Buffer + (_QWORD)v8) )
      {
        v10 = NLS_UPCASE(*Buffer);
        if ( v11 >= 0x61u )
        {
          if ( v11 > 0x7Au )
          {
            if ( Nls844UnicodeUpcaseTable )
            {
              if ( v11 >= 0xC0u )
                v11 += *(_WORD *)(Nls844UnicodeUpcaseTable
                                + 2LL
                                * ((v11 & 0xF)
                                 + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                     + 2LL
                                                                     * (((v11 >> 4) & 0xF)
                                                                      + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * ((unsigned __int64)v11 >> 8))))));
            }
          }
          else
          {
            v11 -= 32;
          }
        }
        if ( v10 != v11 )
          break;
      }
      if ( ++Buffer >= v7 )
        return v4 - v5;
    }
    return v10 - v11;
  }
  else
  {
    v12 = (char *)((char *)String2->Buffer - (char *)Buffer);
    while ( 1 )
    {
      v13 = *(unsigned __int16 *)((char *)Buffer + (_QWORD)v12);
      if ( *Buffer != v13 )
        break;
      if ( ++Buffer >= v7 )
        return v4 - v5;
    }
    return *Buffer - v13;
  }
}
