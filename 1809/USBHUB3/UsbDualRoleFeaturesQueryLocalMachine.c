/*
 * XREFs of UsbDualRoleFeaturesQueryLocalMachine @ 0x1C003AE14
 * Callers:
 *     HUBDTX_ValidateAndCacheBOSDescriptor @ 0x1C0024DFC (HUBDTX_ValidateAndCacheBOSDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C003A554 (WPP_RECORDER_SF_Sd.c)
 *     GetPersistedKeyPath @ 0x1C003A6A4 (GetPersistedKeyPath.c)
 *     ReadManifestAssignedValue @ 0x1C003A7F4 (ReadManifestAssignedValue.c)
 *     CheckUSBFnIncludeDefaultCfg @ 0x1C003A8BC (CheckUSBFnIncludeDefaultCfg.c)
 *     CheckUSBFnConfiguration @ 0x1C003AA60 (CheckUSBFnConfiguration.c)
 *     ReadUSBFnFeaturesFromCurrentConfiguration @ 0x1C003ACC0 (ReadUSBFnFeaturesFromCurrentConfiguration.c)
 *     MyRegOpenKeyForRead @ 0x1C003B0E0 (MyRegOpenKeyForRead.c)
 *     MyRegQueryUlong @ 0x1C003B300 (MyRegQueryUlong.c)
 */

__int64 __fastcall UsbDualRoleFeaturesQueryLocalMachine(int *a1)
{
  int PersistedKeyPath; // eax
  __int64 v3; // rcx
  PVOID v4; // r15
  int v5; // ebx
  unsigned __int16 v6; // r9
  unsigned __int8 v7; // dl
  __int64 v8; // rcx
  int Ulong; // eax
  __int64 v10; // rcx
  wchar_t *v11; // r15
  unsigned __int16 v12; // r9
  unsigned __int8 v13; // dl
  __int64 v14; // r8
  __int64 v15; // r8
  int v16; // ebx
  int v18; // [rsp+20h] [rbp-20h]
  int v19; // [rsp+28h] [rbp-18h]
  __int64 v20; // [rsp+28h] [rbp-18h]
  int v21; // [rsp+28h] [rbp-18h]
  __int64 v22; // [rsp+28h] [rbp-18h]
  HANDLE Handle; // [rsp+70h] [rbp+30h] BYREF
  PVOID P; // [rsp+78h] [rbp+38h] BYREF
  PVOID v25; // [rsp+80h] [rbp+40h] BYREF

  Handle = 0LL;
  P = 0LL;
  PersistedKeyPath = GetPersistedKeyPath(&P);
  v4 = P;
  v5 = PersistedKeyPath;
  if ( PersistedKeyPath < 0 )
  {
    v6 = 13;
LABEL_3:
    v7 = 2;
LABEL_4:
    v19 = PersistedKeyPath;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v7,
      1u,
      v6,
      (__int64)&WPP_f97431189f293d3cb2a45283ac710ff5_Traceguids,
      v19);
    goto LABEL_10;
  }
  PersistedKeyPath = MyRegOpenKeyForRead(v3, P, &Handle);
  v5 = PersistedKeyPath;
  if ( PersistedKeyPath < 0 )
  {
    v6 = 14;
    goto LABEL_3;
  }
  PersistedKeyPath = MyRegQueryUlong(Handle);
  v5 = PersistedKeyPath;
  if ( PersistedKeyPath < 0 )
  {
    v6 = 15;
    v7 = 4;
    goto LABEL_4;
  }
  v21 = *a1;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    1u,
    0x10u,
    (__int64)&WPP_f97431189f293d3cb2a45283ac710ff5_Traceguids,
    v21);
LABEL_10:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( Handle )
    ZwClose(Handle);
  if ( v5 < 0 )
  {
    ReadManifestAssignedValue(a1);
    *a1 &= 0xFFFFFFF1;
    if ( CheckUSBFnIncludeDefaultCfg(v8) )
      CheckUSBFnConfiguration(a1, L"Default");
    if ( (int)ReadUSBFnFeaturesFromCurrentConfiguration(a1, 0) < 0 )
      ReadUSBFnFeaturesFromCurrentConfiguration(a1, 1);
  }
  P = 0LL;
  v25 = 0LL;
  LODWORD(Handle) = 0;
  Ulong = GetPersistedKeyPath(&v25);
  v11 = (wchar_t *)v25;
  if ( Ulong < 0 )
  {
    v12 = 33;
    v13 = 2;
LABEL_21:
    LODWORD(v20) = Ulong;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v13,
      1u,
      v12,
      (__int64)&WPP_f97431189f293d3cb2a45283ac710ff5_Traceguids,
      v20);
    goto LABEL_27;
  }
  if ( (int)MyRegOpenKeyForRead(v10, v25, &P) >= 0 )
  {
    Ulong = MyRegQueryUlong(P);
    if ( Ulong < 0 )
    {
      v12 = 35;
      v13 = 3;
      goto LABEL_21;
    }
    v16 = (int)Handle;
    WPP_RECORDER_SF_Sd((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, v15, 0x24u, v18, v11);
    *a1 = *a1 & 0x7FFFFFFF | (v16 != 0 ? 0x80000000 : 0);
  }
  else
  {
    WPP_RECORDER_SF_Sd((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, v14, 0x22u, v18, v11);
  }
LABEL_27:
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  if ( P )
    ZwClose(P);
  LODWORD(v22) = *a1;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    1u,
    0x25u,
    (__int64)&WPP_f97431189f293d3cb2a45283ac710ff5_Traceguids,
    v22);
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    1u,
    39 - ((*a1 & 1) != 0),
    (__int64)&WPP_f97431189f293d3cb2a45283ac710ff5_Traceguids);
  return WPP_RECORDER_SF_(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           4u,
           1u,
           41 - ((*a1 & 2) != 0),
           (__int64)&WPP_f97431189f293d3cb2a45283ac710ff5_Traceguids);
}
