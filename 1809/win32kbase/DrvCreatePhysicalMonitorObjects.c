/*
 * XREFs of DrvCreatePhysicalMonitorObjects @ 0x1C00A14A0
 * Callers:
 *     NtGdiCreateOPMProtectedOutputs @ 0x1C00A1410 (NtGdiCreateOPMProtectedOutputs.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0025778 (PALLOCMEM2.c)
 *     UpdateMonitorDevices @ 0x1C0041C40 (UpdateMonitorDevices.c)
 *     ?DrvGetNumberOfPhysicalMonitors@@YAJPEAUtagGRAPHICS_DEVICE@@PEAK@Z @ 0x1C007CF80 (-DrvGetNumberOfPhysicalMonitors@@YAJPEAUtagGRAPHICS_DEVICE@@PEAK@Z.c)
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C007CFC8 (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 *     ?OPMCreateProtectedOutput@@YAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x1C00A1728 (-OPMCreateProtectedOutput@@YAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z.c)
 *     ?OPMDestroyProtectedOutput@@YAJPEAX@Z @ 0x1C00FA304 (-OPMDestroyProtectedOutput@@YAJPEAX@Z.c)
 */

__int64 __fastcall DrvCreatePhysicalMonitorObjects(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        __int64 a3,
        _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS a4,
        unsigned int a5,
        unsigned int *a6,
        _QWORD *Address)
{
  __int64 v7; // r14
  __int64 v8; // rsi
  enum _MODE v9; // ebx
  _QWORD *v11; // rax
  unsigned int v12; // r15d
  unsigned int v13; // r14d
  _QWORD *v14; // rsi
  size_t v15; // rcx
  signed int DeviceFromNameAndValidateDevice; // ebx
  struct tagGRAPHICS_DEVICE *v17; // r12
  unsigned __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // rdi
  __int64 v21; // r15
  __int64 v22; // r12
  unsigned __int64 v23; // rax
  _QWORD *v24; // r15
  unsigned int *v25; // rdi
  __int64 i; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v30; // rdi
  int v31; // r12d
  __int64 v32; // rax
  int v33; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v34; // [rsp+34h] [rbp-64h]
  int v35; // [rsp+38h] [rbp-60h]
  int v36; // [rsp+3Ch] [rbp-5Ch]
  struct tagGRAPHICS_DEVICE *v37; // [rsp+40h] [rbp-58h] BYREF
  __int64 v38; // [rsp+48h] [rbp-50h]
  _QWORD *v39; // [rsp+50h] [rbp-48h]
  unsigned int v40; // [rsp+A0h] [rbp+8h] BYREF
  int v41; // [rsp+B0h] [rbp+18h]
  _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS v42; // [rsp+B8h] [rbp+20h]

  v42 = a4;
  v41 = a3;
  v7 = a4;
  v8 = (int)a3;
  v9 = (int)a2;
  v11 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2, a3);
  v11[3] = a1;
  v11[4] = v8;
  v11[5] = v7;
  v12 = a5;
  v38 = a5;
  v11[6] = a5;
  WdLogEvent5_WdEvent(v11);
  v13 = 0;
  v34 = 0;
  v14 = 0LL;
  UpdateMonitorDevices();
  DeviceFromNameAndValidateDevice = DrvGetDeviceFromNameAndValidateDevice(a1, v9, (wchar_t **)&v37);
  if ( DeviceFromNameAndValidateDevice < 0 )
    goto LABEL_26;
  v17 = v37;
  DeviceFromNameAndValidateDevice = DrvGetNumberOfPhysicalMonitors(v37, &v40);
  if ( DeviceFromNameAndValidateDevice < 0 )
    goto LABEL_26;
  if ( v12 < v40 )
  {
    DeviceFromNameAndValidateDevice = -1071774234;
  }
  else
  {
    v18 = 8LL * v40;
    v15 = 0xFFFFFFFFLL;
    if ( v18 <= 0xFFFFFFFF )
      v15 = (unsigned int)v18;
    DeviceFromNameAndValidateDevice = v18 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v18 > 0xFFFFFFFF )
    {
LABEL_26:
      if ( DeviceFromNameAndValidateDevice >= 0 )
      {
        Win32FreePool((__int64)v14);
        v28 = WdLogNewEntry5_WdTrace(v27);
        WdLogEvent5_WdTrace(v28);
        return 0LL;
      }
    }
    else
    {
      v14 = PALLOCMEM2(v15, 1986291527LL, 1);
      v39 = v14;
      if ( v14 )
      {
        v19 = 0LL;
        v20 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v20 >= *((_DWORD *)v17 + 54) )
          {
            v23 = 8 * v38;
            v15 = 0xFFFFFFFFLL;
            if ( (unsigned __int64)(8 * v38) <= 0xFFFFFFFF )
              v15 = (unsigned int)v23;
            DeviceFromNameAndValidateDevice = v23 > 0xFFFFFFFF ? 0xC0000095 : 0;
            if ( v23 <= 0xFFFFFFFF )
            {
              v24 = Address;
              ProbeForWrite(Address, (unsigned int)v15, 8u);
              v25 = a6;
              ProbeForWrite(a6, 4uLL, 4u);
              if ( v13 > a5 )
              {
                DeviceFromNameAndValidateDevice = -1071774234;
                v36 = -1071774234;
              }
              else
              {
                for ( i = 0LL; ; i = (unsigned int)(i + 1) )
                {
                  v35 = i;
                  if ( (unsigned int)i >= v13 )
                    break;
                  v24[i] = v14[i];
                }
                *v25 = v13;
              }
            }
            goto LABEL_26;
          }
          v21 = 5 * v20;
          v22 = *((_QWORD *)v17 + 28);
          if ( (*(_DWORD *)(v22 + 20 * v20) & 1) != 0 )
          {
            if ( v13 == v40 )
              goto LABEL_35;
            if ( v41 )
            {
              if ( v41 != 1 )
              {
LABEL_35:
                DeviceFromNameAndValidateDevice = -1071774233;
                goto LABEL_36;
              }
              DeviceFromNameAndValidateDevice = IsCreatePhysicalMonitorSupported();
              if ( DeviceFromNameAndValidateDevice >= 0 )
                DeviceFromNameAndValidateDevice = CreatePhysicalMonitorWrap(
                                                    v22 + 4 * (v21 + 2),
                                                    *(unsigned int *)(v22 + 20 * v20 + 4),
                                                    &v14[v19]);
              if ( DeviceFromNameAndValidateDevice < 0 )
                goto LABEL_36;
LABEL_15:
              v19 = (unsigned int)(v19 + 1);
              v34 = ++v13;
              goto LABEL_16;
            }
            v33 = 0;
            DeviceFromNameAndValidateDevice = OPMCreateProtectedOutput(
                                                v42,
                                                (struct _LUID *)(v22 + 4 * (v21 + 2)),
                                                *(_DWORD *)(v22 + 20 * v20 + 4),
                                                (void **)&v14[v19],
                                                &v33);
            if ( DeviceFromNameAndValidateDevice < 0 )
              goto LABEL_26;
            if ( !v33 )
              goto LABEL_15;
          }
LABEL_16:
          v20 = (unsigned int)(v20 + 1);
          v17 = v37;
        }
      }
      DeviceFromNameAndValidateDevice = -1073741801;
    }
  }
LABEL_36:
  if ( v14 )
  {
    if ( v13 )
    {
      v30 = 0LL;
      v31 = v41;
      while ( (unsigned int)v30 < v13 )
      {
        OPMDestroyProtectedOutput((void *)v14[v30]);
        if ( v31 )
        {
          if ( v31 == 1 && (int)IsDestroyPhysicalMonitorSupported() >= 0 )
            DestroyPhysicalMonitor(v14[v30]);
        }
        else
        {
          OPMDestroyProtectedOutput((void *)v14[v30]);
        }
        v30 = (unsigned int)(v30 + 1);
      }
    }
    Win32FreePool((__int64)v14);
  }
  v32 = WdLogNewEntry5_WdTrace(v15);
  *(_QWORD *)(v32 + 24) = DeviceFromNameAndValidateDevice;
  WdLogEvent5_WdTrace(v32);
  return (unsigned int)DeviceFromNameAndValidateDevice;
}
