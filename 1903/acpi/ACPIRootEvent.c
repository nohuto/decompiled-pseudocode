/*
 * XREFs of ACPIRootEvent @ 0x1C005E740
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C001A938 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIInternalEvaluateOST @ 0x1C00568FC (ACPIInternalEvaluateOST.c)
 *     ACPINotifyOsShutdown @ 0x1C005E56C (ACPINotifyOsShutdown.c)
 */

_UNKNOWN **__fastcall ACPIRootEvent(ULONG_PTR a1, int a2)
{
  __int64 DeviceExtension; // rax
  char v4; // r8
  const char *v5; // rcx
  _QWORD *v6; // rbx
  const char *v7; // rdx
  __int64 v8; // rax
  _UNKNOWN **result; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = 0;
  v5 = (const char *)&unk_1C006FE7D;
  v6 = (_QWORD *)DeviceExtension;
  v7 = (const char *)&unk_1C006FE7D;
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
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = (_UNKNOWN **)WPP_RECORDER_SF_Dqss(
                            (__int64)WPP_GLOBAL_Control->DeviceExtension,
                            4u,
                            6u,
                            0x20u,
                            (__int64)&WPP_07c7b752520234d9370002fcc10364f5_Traceguids,
                            a2,
                            v4,
                            v5,
                            v7);
  if ( a2 == 129 )
  {
    if ( AcpiNotifyOsShutdownEnabled && AcpiShutdownNotification )
      return (_UNKNOWN **)ACPINotifyOsShutdown(v6);
    else
      return (_UNKNOWN **)ACPIInternalEvaluateOST((__int64)v6, 129, 131);
  }
  return result;
}
