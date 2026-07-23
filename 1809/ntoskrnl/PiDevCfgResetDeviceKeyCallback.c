/*
 * XREFs of PiDevCfgResetDeviceKeyCallback @ 0x14082FF40
 * Callers:
 *     <none>
 * Callees:
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     EvaluateCurrentState @ 0x1401B3F70 (EvaluateCurrentState.c)
 *     PiDevCfgCopyDeviceKeys @ 0x1406F3E88 (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyDeviceProperties @ 0x14082D78C (PiDevCfgCopyDeviceProperties.c)
 */

__int64 __fastcall PiDevCfgResetDeviceKeyCallback(__int64 a1, __int64 a2, __int64 a3, void *a4, void *a5)
{
  BOOL v7; // eax
  BOOL v9; // eax

  if ( *(_DWORD *)(a3 + 16) != 16 || wcsicmp(*(const wchar_t **)a3, L"Properties") )
  {
    v9 = EvaluateCurrentState((_DWORD **)&g_Feature_Servicing_FirmwareRollback_61744038_FeatureDescriptorDetails);
    return PiDevCfgCopyDeviceKeys(a4, a5, v9, 0LL);
  }
  else
  {
    v7 = EvaluateCurrentState((_DWORD **)&g_Feature_Servicing_FirmwareRollback_61744038_FeatureDescriptorDetails);
    return PiDevCfgCopyDeviceProperties(a4, a5, *(_QWORD *)(a2 + 8), 1u, v7, 0LL);
  }
}
