/*
 * XREFs of PopDeviceIdlePolicySettingCallback @ 0x140763E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PopDeviceIdlePolicySettingCallback(_QWORD *a1, int *a2, int a3)
{
  __int64 v3; // r9
  __int64 result; // rax

  v3 = *(_QWORD *)&GUID_DEVICE_IDLE_POLICY.Data1 - *a1;
  if ( *(_QWORD *)&GUID_DEVICE_IDLE_POLICY.Data1 == *a1 )
    v3 = *(_QWORD *)GUID_DEVICE_IDLE_POLICY.Data4 - a1[1];
  result = 0LL;
  if ( v3 || a3 != 4 || !a2 || (unsigned int)*a2 > 1 )
    return 3221225485LL;
  dword_1404191A8 = *a2;
  return result;
}
