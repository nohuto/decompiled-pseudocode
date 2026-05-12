/*
 * XREFs of RaidUnitGetDeviceParameters @ 0x1C006DB04
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C006D6C8 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 *     WPP_SF_q @ 0x1C003BA90 (WPP_SF_q.c)
 *     WPP_SF_qddd @ 0x1C003BEEC (WPP_SF_qddd.c)
 */

int __fastcall RaidUnitGetDeviceParameters(__int64 a1)
{
  __int64 v2; // rdx
  _DWORD *v3; // rdi
  int *v4; // rsi
  int v5; // eax
  int *v6; // r14
  int v7; // ecx
  int v8; // eax
  struct _DEVICE_OBJECT *v9; // rcx
  PDEVICE_OBJECT *v10; // rax
  int v11; // r8d
  __int64 v13; // [rsp+20h] [rbp-E0h]
  int v14; // [rsp+28h] [rbp-D8h]
  int v15; // [rsp+30h] [rbp-D0h]
  void *DeviceRegKey; // [rsp+40h] [rbp-C0h] BYREF
  void *KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v20[50]; // [rsp+90h] [rbp-70h] BYREF

  DeviceRegKey = 0LL;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x46u,
      (__int64)&WPP_d11a79b88e3f3e003d260997dd6ff069_Traceguids,
      a1);
  }
  v2 = *(_QWORD *)(a1 + 24);
  v3 = (_DWORD *)(a1 + 1800);
  *(_DWORD *)(a1 + 1800) = 20;
  v4 = (int *)(a1 + 1808);
  v5 = *(_DWORD *)(a1 + 1800);
  v6 = (int *)(a1 + 1804);
  v7 = *(_DWORD *)(v2 + 5828);
  *(_DWORD *)(a1 + 1808) = 250;
  *(_DWORD *)(a1 + 1804) = 25;
  if ( v7 )
    v5 = v7;
  *v3 = v5;
  v8 = *v4;
  if ( *(_DWORD *)(v2 + 5832) )
    v8 = *(_DWORD *)(v2 + 5832);
  v9 = *(struct _DEVICE_OBJECT **)(a1 + 8);
  *(_DWORD *)(a1 + 1812) = 0;
  *(_DWORD *)(a1 + 1820) = -1;
  *v4 = v8;
  LODWORD(v10) = IoOpenDeviceRegistryKey(v9, 1u, 0x20019u, &DeviceRegKey);
  if ( (int)v10 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Storport");
    ObjectAttributes.RootDirectory = DeviceRegKey;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    LODWORD(v10) = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( (int)v10 >= 0 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_q(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x47u,
          (__int64)&WPP_d11a79b88e3f3e003d260997dd6ff069_Traceguids,
          a1);
      }
      memset(v20, 0, 0x188uLL);
      v20[2] = L"QueueFullWaitIoPercentage";
      LODWORD(v20[4]) = 67108868;
      LODWORD(v20[1]) = 288;
      LODWORD(v20[6]) = 4;
      v20[9] = L"BusyPauseTime";
      LODWORD(v20[8]) = 288;
      v20[16] = L"BusyRetryCount";
      v20[23] = L"EnableLogoETW";
      v20[30] = L"DisableIdlePowerManagement";
      v20[31] = a1 + 1816;
      v20[33] = a1 + 1816;
      LODWORD(v20[11]) = 67108868;
      LODWORD(v20[13]) = 4;
      LODWORD(v20[15]) = 288;
      LODWORD(v20[18]) = 67108868;
      LODWORD(v20[20]) = 4;
      LODWORD(v20[22]) = 288;
      LODWORD(v20[25]) = 67108868;
      LODWORD(v20[27]) = 4;
      LODWORD(v20[29]) = 288;
      LODWORD(v20[32]) = 67108868;
      LODWORD(v20[34]) = 4;
      LODWORD(v20[36]) = 288;
      LODWORD(v20[39]) = 67108868;
      LODWORD(v20[41]) = 4;
      v20[37] = L"MinimumIdleTimeoutInMS";
      v20[3] = a1 + 1804;
      v20[5] = a1 + 1804;
      v20[10] = a1 + 1808;
      v20[12] = a1 + 1808;
      v20[17] = a1 + 1800;
      v20[19] = a1 + 1800;
      v20[24] = a1 + 1812;
      v20[26] = a1 + 1812;
      v20[38] = a1 + 1820;
      v20[40] = a1 + 1820;
      RtlQueryRegistryValuesEx(0x40000000LL, KeyHandle, v20, 0LL, 0LL);
      v11 = *v6;
      if ( (unsigned int)*v6 > 0x64 )
      {
        v11 = 25;
        *v6 = 25;
      }
      v10 = &WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
      {
        LODWORD(v10) = HIDWORD(WPP_GLOBAL_Control->Timer);
        if ( ((unsigned __int8)v10 & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          v15 = v11;
          v14 = *v4;
          LODWORD(v13) = *v3;
          LODWORD(v10) = WPP_SF_qddd(
                           (__int64)WPP_GLOBAL_Control->AttachedDevice,
                           0x48u,
                           (__int64)&WPP_d11a79b88e3f3e003d260997dd6ff069_Traceguids,
                           a1,
                           v13,
                           v14,
                           v15);
        }
      }
    }
  }
  if ( DeviceRegKey )
    LODWORD(v10) = ZwClose(DeviceRegKey);
  if ( KeyHandle )
    LODWORD(v10) = ZwClose(KeyHandle);
  return (int)v10;
}
