/*
 * XREFs of UpdateUcmIsPresentBit @ 0x1C005D9C0
 * Callers:
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x1C005DB08 (UsbDualRoleFeaturesQueryLocalMachine.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C0056C48 (WPP_RECORDER_SF_Sd.c)
 *     GetPersistedKeyPath @ 0x1C005D540 (GetPersistedKeyPath.c)
 *     MyRegOpenKeyForRead @ 0x1C005DD7C (MyRegOpenKeyForRead.c)
 *     MyRegQueryUlong @ 0x1C005DF9C (MyRegQueryUlong.c)
 */

void __fastcall UpdateUcmIsPresentBit(_DWORD *a1)
{
  int PersistedKeyPath; // eax
  __int64 v3; // rcx
  wchar_t *v4; // rdi
  unsigned __int16 v5; // r9
  unsigned __int8 v6; // dl
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r8
  int v10; // [rsp+28h] [rbp-30h]
  int v11; // [rsp+30h] [rbp-28h]
  int v12; // [rsp+30h] [rbp-28h]
  HANDLE Handle; // [rsp+70h] [rbp+18h] BYREF
  PVOID P; // [rsp+78h] [rbp+20h] BYREF

  Handle = 0LL;
  P = 0LL;
  PersistedKeyPath = GetPersistedKeyPath(&P);
  v4 = (wchar_t *)P;
  if ( PersistedKeyPath < 0 )
  {
    v5 = 33;
    v6 = 2;
LABEL_3:
    v10 = PersistedKeyPath;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      1u,
      v5,
      (__int64)&WPP_f97431189f293d3cb2a45283ac710ff5_Traceguids,
      v10);
    goto LABEL_9;
  }
  v7 = MyRegOpenKeyForRead(v3, P, &Handle);
  if ( v7 >= 0 )
  {
    PersistedKeyPath = MyRegQueryUlong(Handle);
    if ( PersistedKeyPath < 0 )
    {
      v5 = 35;
      v6 = 3;
      goto LABEL_3;
    }
    v12 = 0;
    WPP_RECORDER_SF_Sd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      v9,
      0x24u,
      (__int64)&WPP_f97431189f293d3cb2a45283ac710ff5_Traceguids,
      v4,
      v12);
    *a1 &= ~0x80000000;
  }
  else
  {
    v11 = v7;
    WPP_RECORDER_SF_Sd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      v8,
      0x22u,
      (__int64)&WPP_f97431189f293d3cb2a45283ac710ff5_Traceguids,
      v4,
      v11);
  }
LABEL_9:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( Handle )
    ZwClose(Handle);
}
