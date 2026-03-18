/*
 * XREFs of ACPIFanEvent @ 0x1C0053500
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     ACPIFanLoop @ 0x1C000D298 (ACPIFanLoop.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C001D498 (WPP_RECORDER_SF_Dqss.c)
 */

void __fastcall ACPIFanEvent(ULONG_PTR a1, int a2)
{
  __int64 DeviceExtension; // rax
  __int64 v4; // rcx
  const char *v5; // r8
  __int64 v6; // rbx
  const char *v7; // r10
  __int64 v8; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  LOBYTE(v4) = 0;
  v5 = (const char *)&unk_1C006E28A;
  v6 = DeviceExtension;
  v7 = (const char *)&unk_1C006E28A;
  if ( DeviceExtension )
  {
    v4 = DeviceExtension;
    v8 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v5 = *(const char **)(v4 + 560);
      if ( (v8 & 0x400000000000LL) != 0 )
        v7 = *(const char **)(v4 + 568);
    }
  }
  WPP_RECORDER_SF_Dqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0x10u,
    0xEu,
    (__int64)&WPP_38ae480aa7ad381ffd3274338b02158a_Traceguids,
    a2,
    v4,
    v5,
    v7);
  if ( a2 == 128 )
    ACPIFanLoop(v6, 1, 0);
}
