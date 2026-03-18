/*
 * XREFs of DrvCreatePhysicalMonitorObjects @ 0x1C00D3C00
 * Callers:
 *     NtGdiCreateOPMProtectedOutputs @ 0x1C00C63C0 (NtGdiCreateOPMProtectedOutputs.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     UpdateMonitorDevices @ 0x1C0052A00 (UpdateMonitorDevices.c)
 *     ?OPMCreateProtectedOutput@@YAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x1C00C5FA4 (-OPMCreateProtectedOutput@@YAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z.c)
 *     ?OPMDestroyProtectedOutput@@YAJPEAX@Z @ 0x1C00C5FD8 (-OPMDestroyProtectedOutput@@YAJPEAX@Z.c)
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00CFDD0 (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 *     ?DrvGetNumberOfPhysicalMonitors@@YAJPEAUtagGRAPHICS_DEVICE@@PEAK@Z @ 0x1C00CFE1C (-DrvGetNumberOfPhysicalMonitors@@YAJPEAUtagGRAPHICS_DEVICE@@PEAK@Z.c)
 */

__int64 __fastcall DrvCreatePhysicalMonitorObjects(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        __int64 a3,
        enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS a4,
        unsigned int a5,
        unsigned int *a6,
        _QWORD *Address)
{
  __int64 v7; // r14
  __int64 v8; // rsi
  int v9; // ebx
  _QWORD *v11; // rax
  unsigned int v12; // r14d
  struct tagGRAPHICS_DEVICE *v13; // rsi
  size_t v14; // rcx
  signed int DeviceFromNameAndValidateDevice; // ebx
  unsigned int v16; // r13d
  unsigned __int64 v17; // rax
  __int64 v18; // r12
  unsigned int i; // r15d
  struct _LUID *v20; // rdi
  unsigned __int64 v21; // rax
  _QWORD *v22; // r15
  unsigned int *v23; // rdi
  __int64 j; // rdx
  __int64 v25; // rdi
  int v26; // r12d
  __int64 v27; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  struct tagGRAPHICS_DEVICE *v31[9]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v32; // [rsp+90h] [rbp+8h] BYREF
  int v33; // [rsp+A0h] [rbp+18h]
  enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS v34; // [rsp+A8h] [rbp+20h]

  v34 = a4;
  v33 = a3;
  v7 = a4;
  v8 = (int)a3;
  v9 = a2;
  v11 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2, a3);
  v11[3] = a1;
  v11[4] = v8;
  v11[5] = v7;
  v11[6] = a5;
  WdLogEvent5_WdEvent(v11);
  v12 = 0;
  v13 = 0LL;
  UpdateMonitorDevices();
  DeviceFromNameAndValidateDevice = DrvGetDeviceFromNameAndValidateDevice(a1, v9, v31);
  if ( DeviceFromNameAndValidateDevice < 0 )
    goto LABEL_34;
  DeviceFromNameAndValidateDevice = DrvGetNumberOfPhysicalMonitors(v31[0], &v32);
  if ( DeviceFromNameAndValidateDevice < 0 )
    goto LABEL_34;
  v16 = v32;
  if ( a5 < v32 )
  {
    DeviceFromNameAndValidateDevice = -1071774234;
    goto LABEL_35;
  }
  v17 = 8LL * v32;
  v14 = 0xFFFFFFFFLL;
  if ( v17 <= 0xFFFFFFFF )
    v14 = (unsigned int)v17;
  DeviceFromNameAndValidateDevice = v17 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v17 <= 0xFFFFFFFF )
  {
    v13 = (struct tagGRAPHICS_DEVICE *)PALLOCMEM2(v14, 0x76646747u, 1);
    v31[1] = v13;
    if ( !v13 )
    {
      DeviceFromNameAndValidateDevice = -1073741801;
      goto LABEL_35;
    }
    v18 = 0LL;
    for ( i = 0; ; ++i )
    {
      if ( i >= *((_DWORD *)v31[0] + 54) )
      {
        v21 = 8LL * a5;
        v14 = 0xFFFFFFFFLL;
        if ( v21 <= 0xFFFFFFFF )
          v14 = (unsigned int)v21;
        DeviceFromNameAndValidateDevice = v21 > 0xFFFFFFFF ? 0xC0000095 : 0;
        if ( v21 <= 0xFFFFFFFF )
        {
          v22 = Address;
          ProbeForWrite(Address, (unsigned int)v14, 8u);
          v23 = a6;
          ProbeForWrite(a6, 4uLL, 4u);
          if ( v12 > a5 )
          {
            DeviceFromNameAndValidateDevice = -1071774234;
          }
          else
          {
            for ( j = 0LL; (unsigned int)j < v12; j = (unsigned int)(j + 1) )
              v22[j] = *((_QWORD *)v13 + j);
            *v23 = v12;
          }
        }
        break;
      }
      v20 = (struct _LUID *)(*((_QWORD *)v31[0] + 28) + 32LL * i);
      if ( (v20->LowPart & 1) != 0 )
      {
        if ( v12 == v16 )
          goto LABEL_24;
        if ( v33 )
        {
          if ( v33 != 1 )
          {
LABEL_24:
            DeviceFromNameAndValidateDevice = -1071774233;
            goto LABEL_35;
          }
          DeviceFromNameAndValidateDevice = IsCreatePhysicalMonitorSupported();
          if ( DeviceFromNameAndValidateDevice >= 0 )
            DeviceFromNameAndValidateDevice = CreatePhysicalMonitorWrap(
                                                &v20[1],
                                                (unsigned int)v20->HighPart,
                                                (char *)v13 + 8 * v18);
          if ( DeviceFromNameAndValidateDevice < 0 )
            goto LABEL_35;
LABEL_22:
          v18 = (unsigned int)(v18 + 1);
          ++v12;
          continue;
        }
        v32 = 0;
        DeviceFromNameAndValidateDevice = OPMCreateProtectedOutput(
                                            (COPM *)(unsigned int)v34,
                                            v20 + 1,
                                            v20->HighPart,
                                            (void **)v13 + v18,
                                            (int *)&v32);
        if ( DeviceFromNameAndValidateDevice < 0 )
          break;
        if ( !v32 )
          goto LABEL_22;
      }
    }
  }
LABEL_34:
  if ( DeviceFromNameAndValidateDevice >= 0 )
  {
    Win32FreePool((__int64)v13);
    v30 = WdLogNewEntry5_WdTrace(v29);
    WdLogEvent5_WdTrace(v30);
    return 0LL;
  }
LABEL_35:
  if ( v13 )
  {
    if ( v12 )
    {
      v25 = 0LL;
      v26 = v33;
      while ( (unsigned int)v25 < v12 )
      {
        OPMDestroyProtectedOutput(*((COPM **)v13 + v25));
        if ( v26 )
        {
          if ( v26 == 1 && (int)IsDestroyPhysicalMonitorSupported() >= 0 )
            DestroyPhysicalMonitor(*((_QWORD *)v13 + v25));
        }
        else
        {
          OPMDestroyProtectedOutput(*((COPM **)v13 + v25));
        }
        v25 = (unsigned int)(v25 + 1);
      }
    }
    Win32FreePool((__int64)v13);
  }
  v27 = WdLogNewEntry5_WdTrace(v14);
  *(_QWORD *)(v27 + 24) = DeviceFromNameAndValidateDevice;
  WdLogEvent5_WdTrace(v27);
  return (unsigned int)DeviceFromNameAndValidateDevice;
}
