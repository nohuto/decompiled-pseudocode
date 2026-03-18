/*
 * XREFs of ACPIRootEvent @ 0x1C005C990
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C001D498 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIInternalEvaluateOST @ 0x1C0054E4C (ACPIInternalEvaluateOST.c)
 *     ACPINotifyOsShutdown @ 0x1C005C7C0 (ACPINotifyOsShutdown.c)
 */

__int64 __fastcall ACPIRootEvent(ULONG_PTR a1, int a2)
{
  __int64 DeviceExtension; // rax
  char v4; // r10
  const char *v5; // rcx
  _QWORD *v6; // rbx
  const char *v7; // r8
  __int64 v8; // rax
  __int64 result; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = 0;
  v5 = (const char *)&unk_1C006E28A;
  v6 = (_QWORD *)DeviceExtension;
  v7 = (const char *)&unk_1C006E28A;
  if ( DeviceExtension )
  {
    v4 = DeviceExtension;
    v8 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v5 = (const char *)v6[70];
      if ( (v8 & 0x400000000000LL) != 0 )
        v7 = (const char *)v6[71];
    }
  }
  result = WPP_RECORDER_SF_Dqss(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             4u,
             6u,
             0x20u,
             (__int64)&WPP_07ea04bf8856319f8bf6d44d5c5f0bbf_Traceguids,
             a2,
             v4,
             v5,
             v7);
  if ( a2 == 129 )
  {
    if ( AcpiNotifyOsShutdownEnabled && AcpiShutdownNotification )
      return ACPINotifyOsShutdown(v6);
    else
      return ACPIInternalEvaluateOST((__int64)v6, 129, 131);
  }
  return result;
}
