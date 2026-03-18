/*
 * XREFs of RtlUnicodeStringPrintf @ 0x140144A8C
 * Callers:
 *     PiDevCfgBuildDriverNodeStrongName @ 0x1406FC124 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgBuildIndirectString @ 0x1406FC8B8 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x1406FCB88 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgConfigureDevice @ 0x140704004 (PiDevCfgConfigureDevice.c)
 *     CmSetAcpiHwProfile @ 0x14075C588 (CmSetAcpiHwProfile.c)
 *     CmpOpenDevicesControlSet @ 0x14075D3CC (CmpOpenDevicesControlSet.c)
 *     CmpSaveBootControlSet @ 0x140823590 (CmpSaveBootControlSet.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x14087A474 (PiDrvDbResolveNodeFilePaths.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14087C5A0 (PiCreateDriverSwDeviceCallback.c)
 *     PopDiagIdleSystemImageCallback @ 0x1408AC720 (PopDiagIdleSystemImageCallback.c)
 *     PopDiagIdleWakeSourceAccountingToDiagnostic @ 0x1408AC9D4 (PopDiagIdleWakeSourceAccountingToDiagnostic.c)
 *     CmpCreateControlSet @ 0x140A0AE00 (CmpCreateControlSet.c)
 *     CmpCreateHardwareProfiles @ 0x140A0B2AC (CmpCreateHardwareProfiles.c)
 *     CmpAddAliasEntry @ 0x140A38B68 (CmpAddAliasEntry.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x140144B00 (RtlUnicodeStringValidateDestWorker.c)
 *     _vsnwprintf @ 0x14019F320 (_vsnwprintf.c)
 */

NTSTATUS RtlUnicodeStringPrintf(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  int v3; // ebx
  int v4; // eax
  size_t v6; // [rsp+20h] [rbp-38h]
  ULONG v7; // [rsp+28h] [rbp-30h]
  size_t Count; // [rsp+30h] [rbp-28h] BYREF
  wchar_t *Dest; // [rsp+38h] [rbp-20h] BYREF
  __int64 Args; // [rsp+70h] [rbp+18h] BYREF
  size_t *v12; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF
  va_list Argsa; // [rsp+70h] [rbp+18h]

  va_start(va1, pszFormat);
  va_start(Argsa, pszFormat);
  Args = va_arg(va1, _QWORD);
  v12 = va_arg(va1, size_t *);
  v3 = RtlUnicodeStringValidateDestWorker(DestinationString, &Dest, &Count, v12, v6, v7);
  if ( v3 >= 0 )
  {
    v3 = 0;
    v4 = vsnwprintf(Dest, Count, pszFormat, Argsa);
    if ( v4 < 0 || v4 > Count )
    {
      LOWORD(v4) = Count;
      v3 = -2147483643;
    }
    DestinationString->Length = 2 * v4;
  }
  return v3;
}
