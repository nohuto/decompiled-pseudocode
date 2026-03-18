/*
 * XREFs of ?Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C02387C0
 * Callers:
 *     ?OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C022CBDC (-OnDeviceAttached@InkProcessor@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?Initialize@RimBackedDeviceBase@Rim@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0221B80 (-Initialize@RimBackedDeviceBase@Rim@@UEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QEBAJKPEAXK0KPEAK@Z @ 0x1C0221C50 (-SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QEBAJKPEAXK0KPEAK@Z.c)
 *     ?GetDeviceCaps@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAUUsageValueInfo@@1PEAVCapabilities@InkDevice@@@Z @ 0x1C022D964 (-GetDeviceCaps@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAUUsageValueInfo@@1PEAVCapabiliti.c)
 *     ?GetDeviceFeatures@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEBXKPEBUUsageValueInfo@@PEAVFeatures@InkDevice@@@Z @ 0x1C022DC30 (-GetDeviceFeatures@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEBXKPEBUUsageValueInfo@@PEAVFe.c)
 *     ?UnInitialize@InkDevice@@UEAAXXZ @ 0x1C0239AE0 (-UnInitialize@InkDevice@@UEAAXXZ.c)
 *     ?ValidateDeviceFeatures@InkDevice@@AEBAJXZ @ 0x1C0239B88 (-ValidateDeviceFeatures@InkDevice@@AEBAJXZ.c)
 */

__int64 __fastcall InkDevice::Initialize(InkDevice *this, struct RawInputManagerDeviceObject *a2)
{
  signed int DeviceCaps; // eax
  int v4; // ebx
  __int64 v5; // rdi
  struct _HIDP_PREPARSED_DATA *v6; // r15
  struct UsageValueInfo *v7; // rax
  _BYTE *v8; // r14
  signed int DeviceFeatures; // eax
  int v10; // r9d
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // eax
  __int64 v15; // rax
  unsigned int v17; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int *v19; // [rsp+68h] [rbp-98h]
  int v20; // [rsp+70h] [rbp-90h]
  int v21; // [rsp+74h] [rbp-8Ch]
  _BYTE v22[544]; // [rsp+80h] [rbp-80h] BYREF

  DeviceCaps = Rim::RimBackedDeviceBase::Initialize(this, a2);
  v4 = DeviceCaps;
  if ( DeviceCaps < 0 )
  {
    if ( dword_1C030C390 <= 2u )
      goto LABEL_39;
    goto LABEL_3;
  }
  v5 = *((_QWORD *)this + 2);
  if ( v5 )
    v5 = *(_QWORD *)(v5 + 552);
  v6 = *(struct _HIDP_PREPARSED_DATA **)(v5 + 16);
  if ( *(_WORD *)(v5 + 42) != 0xFF0F || *(_WORD *)(v5 + 40) != 256 || *(_WORD *)(v5 + 110) != 1118 )
  {
    v4 = -1073741811;
    if ( dword_1C030C390 > 2u )
    {
      v21 = 0;
      v19 = &v17;
      v17 = -1073741811;
      v20 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D57C3, 0LL, 0LL, 3u, &pData);
    }
    goto LABEL_43;
  }
  v7 = (struct UsageValueInfo *)Win32AllocPoolZInit(76LL, 1349217865LL);
  *((_QWORD *)this + 19) = v7;
  if ( !v7 )
  {
    v4 = -1073741801;
    if ( dword_1C030C390 <= 2u )
    {
LABEL_43:
      InkDevice::UnInitialize(this);
      return (unsigned int)v4;
    }
LABEL_11:
    v21 = 0;
    v17 = -1073741801;
    v19 = &v17;
    v20 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D57C3, 0LL, 0LL, 3u, &pData);
    goto LABEL_43;
  }
  DeviceCaps = InkDeviceParser::GetDeviceCaps(v6, (struct UsageValueInfo *)v22, v7, (InkDevice *)((char *)this + 104));
  v4 = DeviceCaps;
  if ( DeviceCaps >= 0 )
  {
    v8 = (_BYTE *)Win32AllocPoolZInit(*(unsigned __int16 *)(v5 + 48), 1349217865LL);
    if ( !v8 )
    {
      v4 = -1073741801;
      if ( dword_1C030C390 <= 2u )
        goto LABEL_43;
      goto LABEL_11;
    }
    *v8 = *((_BYTE *)this + 104);
    DeviceFeatures = Rim::RimBackedDeviceBase::SendSynchronousIoControl(
                       this,
                       0xB0192u,
                       0LL,
                       0,
                       v8,
                       *(unsigned __int16 *)(v5 + 48),
                       &v17);
    v4 = DeviceFeatures;
    if ( DeviceFeatures >= 0 )
    {
      DeviceFeatures = InkDeviceParser::GetDeviceFeatures(
                         v6,
                         v8,
                         *(unsigned __int16 *)(v5 + 48),
                         (const struct UsageValueInfo *)v22,
                         (InkDevice *)((char *)this + 116));
      v4 = DeviceFeatures;
      if ( DeviceFeatures >= 0 )
      {
        DeviceFeatures = InkDevice::ValidateDeviceFeatures(this);
        v4 = DeviceFeatures;
        if ( DeviceFeatures >= 0 )
        {
          v10 = *((_DWORD *)this + 36);
          v11 = (4 * (v10 & 0x10)) | 0xB;
          if ( (v10 & 4) == 0 )
            v11 = (4 * (*((_DWORD *)this + 36) & 0x10)) | 9;
          v12 = v11 | 4;
          if ( (v10 & 8) == 0 )
            v12 = v11;
          v13 = v12 | 0x10;
          if ( (v10 & 1) == 0 )
            v13 = v12;
          v14 = v13 | 0x20;
          if ( (v10 & 2) == 0 )
            v14 = v13;
          *((_DWORD *)this + 37) = v14;
          v15 = Win32AllocPoolZInit(*(unsigned __int16 *)(v5 + 46), 1349217865LL);
          *((_QWORD *)this + 20) = v15;
          if ( !v15 )
          {
            v4 = -1073741801;
            if ( dword_1C030C390 > 2u )
            {
              v21 = 0;
              v17 = -1073741801;
              v19 = &v17;
              v20 = 4;
              TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D57C3, 0LL, 0LL, 3u, &pData);
            }
          }
          goto LABEL_38;
        }
        if ( dword_1C030C390 > 2u )
          goto LABEL_26;
      }
      else if ( dword_1C030C390 > 2u )
      {
        goto LABEL_26;
      }
    }
    else if ( dword_1C030C390 > 2u )
    {
LABEL_26:
      v21 = 0;
      v17 = DeviceFeatures;
      v19 = &v17;
      v20 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D57C3, 0LL, 0LL, 3u, &pData);
    }
LABEL_38:
    Win32FreePool(v8);
    goto LABEL_39;
  }
  if ( dword_1C030C390 > 2u )
  {
LABEL_3:
    v21 = 0;
    v17 = DeviceCaps;
    v19 = &v17;
    v20 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D57C3, 0LL, 0LL, 3u, &pData);
  }
LABEL_39:
  if ( v4 < 0 )
    goto LABEL_43;
  return (unsigned int)v4;
}
