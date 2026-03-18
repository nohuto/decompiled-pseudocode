/*
 * XREFs of ?Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C020F240
 * Callers:
 *     ?OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0203C44 (-OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?Initialize@RimBackedDeviceBase@Rim@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C01F9A10 (-Initialize@RimBackedDeviceBase@Rim@@UEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QEBAJKPEAXK0KPEAK@Z @ 0x1C01F9AC4 (-SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QEBAJKPEAXK0KPEAK@Z.c)
 *     ?GetDeviceCaps@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAUUsageValueInfo@@1PEAVCapabilities@InkDevice@@@Z @ 0x1C02048B0 (-GetDeviceCaps@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAUUsageValueInfo@@1PEAVCapabiliti.c)
 *     ?GetDeviceFeatures@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEBXKPEBUUsageValueInfo@@PEAVFeatures@InkDevice@@@Z @ 0x1C0204B54 (-GetDeviceFeatures@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEBXKPEBUUsageValueInfo@@PEAVFe.c)
 *     ?UnInitialize@InkDevice@@UEAAXXZ @ 0x1C0210480 (-UnInitialize@InkDevice@@UEAAXXZ.c)
 *     ?ValidateDeviceFeatures@InkDevice@@AEBAJXZ @ 0x1C0210518 (-ValidateDeviceFeatures@InkDevice@@AEBAJXZ.c)
 */

__int64 __fastcall InkDevice::Initialize(InkDevice *this, struct RawInputManagerDeviceObject *a2)
{
  signed int DeviceCaps; // eax
  const GUID *v4; // r8
  const GUID *v5; // r9
  int v6; // ebx
  __int64 v7; // rdi
  struct _HIDP_PREPARSED_DATA *v8; // r15
  struct UsageValueInfo *v9; // rax
  const GUID *v10; // r8
  const GUID *v11; // r9
  _BYTE *v12; // r14
  signed int DeviceFeatures; // eax
  const GUID *v14; // r8
  const GUID *v15; // r9
  int v16; // r9d
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // eax
  __int64 v21; // rax
  const GUID *v22; // r8
  const GUID *v23; // r9
  unsigned int v25; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int *v27; // [rsp+68h] [rbp-98h]
  int v28; // [rsp+70h] [rbp-90h]
  int v29; // [rsp+74h] [rbp-8Ch]
  _BYTE v30[544]; // [rsp+80h] [rbp-80h] BYREF

  DeviceCaps = Rim::RimBackedDeviceBase::Initialize(this, a2);
  v6 = DeviceCaps;
  if ( DeviceCaps < 0 )
  {
    if ( (unsigned int)pRelatedActivityId <= 2 )
      goto LABEL_39;
    goto LABEL_3;
  }
  v7 = *((_QWORD *)this + 2);
  if ( v7 )
    v7 = *(_QWORD *)(v7 + 544);
  v8 = *(struct _HIDP_PREPARSED_DATA **)(v7 + 16);
  if ( *(_WORD *)(v7 + 42) != 0xFF0F || *(_WORD *)(v7 + 40) != 256 || *(_WORD *)(v7 + 110) != 1118 )
  {
    v6 = -1073741811;
    if ( (unsigned int)pRelatedActivityId > 2 )
    {
      v29 = 0;
      v27 = &v25;
      v25 = -1073741811;
      v28 = 4;
      TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E36AF, v4, v5, 3u, &pData);
    }
    goto LABEL_43;
  }
  v9 = (struct UsageValueInfo *)Win32AllocPoolZInit(76LL, 1349217865LL);
  *((_QWORD *)this + 19) = v9;
  if ( !v9 )
  {
    v6 = -1073741801;
    if ( (unsigned int)pRelatedActivityId <= 2 )
    {
LABEL_43:
      InkDevice::UnInitialize(this);
      return (unsigned int)v6;
    }
LABEL_11:
    v29 = 0;
    v25 = -1073741801;
    v27 = &v25;
    v28 = 4;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E36AF, v10, v11, 3u, &pData);
    goto LABEL_43;
  }
  DeviceCaps = InkDeviceParser::GetDeviceCaps(v8, (struct UsageValueInfo *)v30, v9, (InkDevice *)((char *)this + 104));
  v6 = DeviceCaps;
  if ( DeviceCaps >= 0 )
  {
    v12 = (_BYTE *)Win32AllocPoolZInit(*(unsigned __int16 *)(v7 + 48), 1349217865LL);
    if ( !v12 )
    {
      v6 = -1073741801;
      if ( (unsigned int)pRelatedActivityId <= 2 )
        goto LABEL_43;
      goto LABEL_11;
    }
    *v12 = *((_BYTE *)this + 104);
    DeviceFeatures = Rim::RimBackedDeviceBase::SendSynchronousIoControl(
                       this,
                       0xB0192u,
                       0LL,
                       0,
                       v12,
                       *(unsigned __int16 *)(v7 + 48),
                       &v25);
    v6 = DeviceFeatures;
    if ( DeviceFeatures >= 0 )
    {
      DeviceFeatures = InkDeviceParser::GetDeviceFeatures(
                         v8,
                         v12,
                         *(unsigned __int16 *)(v7 + 48),
                         (const struct UsageValueInfo *)v30,
                         (InkDevice *)((char *)this + 116));
      v6 = DeviceFeatures;
      if ( DeviceFeatures >= 0 )
      {
        DeviceFeatures = InkDevice::ValidateDeviceFeatures(this);
        v6 = DeviceFeatures;
        if ( DeviceFeatures >= 0 )
        {
          v16 = *((_DWORD *)this + 36);
          v17 = (4 * (v16 & 0x10)) | 0xB;
          if ( (v16 & 4) == 0 )
            v17 = (4 * (*((_DWORD *)this + 36) & 0x10)) | 9;
          v18 = v17 | 4;
          if ( (v16 & 8) == 0 )
            v18 = v17;
          v19 = v18 | 0x10;
          if ( (v16 & 1) == 0 )
            v19 = v18;
          v20 = v19 | 0x20;
          if ( (v16 & 2) == 0 )
            v20 = v19;
          *((_DWORD *)this + 37) = v20;
          v21 = Win32AllocPoolZInit(*(unsigned __int16 *)(v7 + 46), 1349217865LL);
          *((_QWORD *)this + 20) = v21;
          if ( !v21 )
          {
            v6 = -1073741801;
            if ( (unsigned int)pRelatedActivityId > 2 )
            {
              v29 = 0;
              v25 = -1073741801;
              v27 = &v25;
              v28 = 4;
              TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E36AF, v22, v23, 3u, &pData);
            }
          }
          goto LABEL_38;
        }
        if ( (unsigned int)pRelatedActivityId > 2 )
          goto LABEL_26;
      }
      else if ( (unsigned int)pRelatedActivityId > 2 )
      {
        goto LABEL_26;
      }
    }
    else if ( (unsigned int)pRelatedActivityId > 2 )
    {
LABEL_26:
      v29 = 0;
      v25 = DeviceFeatures;
      v27 = &v25;
      v28 = 4;
      TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E36AF, v14, v15, 3u, &pData);
    }
LABEL_38:
    Win32FreePool(v12);
    goto LABEL_39;
  }
  if ( (unsigned int)pRelatedActivityId > 2 )
  {
LABEL_3:
    v29 = 0;
    v25 = DeviceCaps;
    v27 = &v25;
    v28 = 4;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E36AF, v4, v5, 3u, &pData);
  }
LABEL_39:
  if ( v6 < 0 )
    goto LABEL_43;
  return (unsigned int)v6;
}
