/*
 * XREFs of ACPICMExperienceButtonHandleEvent @ 0x1C004D078
 * Callers:
 *     ACPICMButtonNotify @ 0x1C004CC88 (ACPICMButtonNotify.c)
 * Callees:
 *     ACPISetDeviceWorker @ 0x1C0012F54 (ACPISetDeviceWorker.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C001D498 (WPP_RECORDER_SF_Dqss.c)
 */

void __fastcall ACPICMExperienceButtonHandleEvent(_QWORD *a1, int a2)
{
  char v3; // r11
  int v4; // edx
  int v5; // eax
  char v6; // al
  const char *v7; // r8
  const char *v8; // r10
  __int64 v9; // r9

  v3 = a2;
  v4 = 2;
  v5 = a2 - 2;
  if ( !v5 )
    goto LABEL_9;
  if ( v5 == 126 )
  {
    v4 = 1;
LABEL_9:
    ACPISetDeviceWorker((__int64)a1, v4);
    return;
  }
  v6 = 0;
  v7 = (const char *)&unk_1C006E28A;
  v8 = (const char *)&unk_1C006E28A;
  if ( a1 )
  {
    v9 = a1[1];
    v6 = (char)a1;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v7 = (const char *)a1[70];
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = (const char *)a1[71];
    }
  }
  WPP_RECORDER_SF_Dqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    0x11u,
    0x19u,
    (__int64)&WPP_2c3ea2e183a23f0b0659c630e7e4fdba_Traceguids,
    v3,
    v6,
    v7,
    v8);
}
