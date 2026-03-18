/*
 * XREFs of ReadTestOverrideValue @ 0x1C005D740
 * Callers:
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x1C005DB08 (UsbDualRoleFeaturesQueryLocalMachine.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     GetPersistedKeyPath @ 0x1C005D540 (GetPersistedKeyPath.c)
 *     MyRegOpenKeyForRead @ 0x1C005DD7C (MyRegOpenKeyForRead.c)
 *     MyRegQueryUlong @ 0x1C005DF9C (MyRegQueryUlong.c)
 */

__int64 __fastcall ReadTestOverrideValue(int *a1)
{
  int PersistedKeyPath; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  unsigned __int16 v5; // r9
  unsigned __int8 v6; // dl
  int v8; // [rsp+28h] [rbp-10h]
  int v9; // [rsp+28h] [rbp-10h]
  PVOID P; // [rsp+48h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+18h] BYREF

  Handle = 0LL;
  P = 0LL;
  PersistedKeyPath = GetPersistedKeyPath(&P);
  v4 = PersistedKeyPath;
  if ( PersistedKeyPath < 0 )
  {
    v5 = 13;
LABEL_3:
    v6 = 2;
LABEL_4:
    v8 = PersistedKeyPath;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      1u,
      v5,
      (__int64)&WPP_f97431189f293d3cb2a45283ac710ff5_Traceguids,
      v8);
    goto LABEL_10;
  }
  PersistedKeyPath = MyRegOpenKeyForRead(v3, P, &Handle);
  v4 = PersistedKeyPath;
  if ( PersistedKeyPath < 0 )
  {
    v5 = 14;
    goto LABEL_3;
  }
  PersistedKeyPath = MyRegQueryUlong(Handle);
  v4 = PersistedKeyPath;
  if ( PersistedKeyPath < 0 )
  {
    v5 = 15;
    v6 = 4;
    goto LABEL_4;
  }
  v9 = *a1;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    1u,
    0x10u,
    (__int64)&WPP_f97431189f293d3cb2a45283ac710ff5_Traceguids,
    v9);
LABEL_10:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( Handle )
    ZwClose(Handle);
  return v4;
}
