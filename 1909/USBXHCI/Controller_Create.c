/*
 * XREFs of Controller_Create @ 0x1C005ECE8
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C0063470 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     RtlStringCchCopyA @ 0x1C000B154 (RtlStringCchCopyA.c)
 *     RtlStringCchPrintfA @ 0x1C000B1CC (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Controller_QuerySupportedDSMs @ 0x1C000FD50 (Controller_QuerySupportedDSMs.c)
 *     Controller_ReferenceTrustletProcess @ 0x1C000FDCC (Controller_ReferenceTrustletProcess.c)
 *     Device_IsSecureDevice @ 0x1C0013F4C (Device_IsSecureDevice.c)
 *     DynamicLock_Create @ 0x1C004702C (DynamicLock_Create.c)
 *     Controller_CreateSecureObject @ 0x1C005F8A0 (Controller_CreateSecureObject.c)
 *     Controller_GetDeviceEnumerator @ 0x1C0060980 (Controller_GetDeviceEnumerator.c)
 *     Controller_PopulateDeviceFlags @ 0x1C0060B8C (Controller_PopulateDeviceFlags.c)
 *     Controller_RetrieveAcpiData @ 0x1C0061A84 (Controller_RetrieveAcpiData.c)
 *     Controller_RetrievePciData @ 0x1C0061CF4 (Controller_RetrievePciData.c)
 *     Controller_RetrieveUrsData @ 0x1C0061F54 (Controller_RetrieveUrsData.c)
 *     Controller_SetLogIdentifier @ 0x1C00628B4 (Controller_SetLogIdentifier.c)
 */

__int64 __fastcall Controller_Create(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  __int64 v7; // rax
  bool IsSecureDevice; // r12
  __int64 v9; // rdx
  signed __int64 v10; // r8
  char *v11; // rcx
  char v12; // al
  char *v13; // rax
  int DeviceEnumerator; // eax
  int v15; // r13d
  int AcpiData; // ebx
  unsigned __int16 v17; // r9
  int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // rax
  bool v21; // zf
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int64 v24; // rbx
  int v25; // eax
  __int64 v27; // [rsp+28h] [rbp-D8h]
  __int64 v28; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+38h] [rbp-C8h] BYREF
  void *v30; // [rsp+40h] [rbp-C0h]
  __int64 v31; // [rsp+48h] [rbp-B8h]
  _BYTE v32[56]; // [rsp+50h] [rbp-B0h] BYREF
  int v33; // [rsp+88h] [rbp-78h] BYREF
  int v34; // [rsp+8Ch] [rbp-74h]
  __int64 v35; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v36[5]; // [rsp+98h] [rbp-68h] BYREF
  __int64 *v37; // [rsp+C0h] [rbp-40h]
  _BYTE v38[56]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v39[32]; // [rsp+100h] [rbp+0h] BYREF
  char pszSrc[8]; // [rsp+200h] [rbp+100h] BYREF
  char v41[4]; // [rsp+208h] [rbp+108h] BYREF
  __int16 v42; // [rsp+20Ch] [rbp+10Ch]
  char v43; // [rsp+20Eh] [rbp+10Eh]
  _QWORD v44[6]; // [rsp+210h] [rbp+110h] BYREF

  v37 = a4;
  v34 = a3;
  memset(v39, 0, 0xF8uLL);
  *(_DWORD *)&v32[4] = 0;
  *(_QWORD *)&v32[16] = 0LL;
  *(_OWORD *)&v32[32] = 0LL;
  memset(v36, 0, sizeof(v36));
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  memset(v44, 0, sizeof(v44));
  v35 = -1LL;
  v7 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C00563D8);
  IsSecureDevice = Device_IsSecureDevice(v7);
  *(_QWORD *)pszSrc = 0LL;
  *(_DWORD *)v41 = 0;
  v42 = 0;
  v43 = 0;
  memset(v38, 0, sizeof(v38));
  v44[0] = 48LL;
  v44[1] = 512LL;
  LOBYTE(v44[4]) = 0;
  v44[2] = 0LL;
  LOBYTE(v44[3]) = 0;
  HIDWORD(v44[3]) = 16;
  RtlStringCchPrintfA((NTSTRSAFE_PSTR)&v44[4], 0x10uLL, "%02d RUNDOWN", a3);
  *(_QWORD *)&v32[48] = off_1C0056428;
  *(_QWORD *)v32 = 56LL;
  *(_QWORD *)&v32[8] = Controller_WdfEvtCleanupCallback;
  *(_QWORD *)&v32[16] = 0LL;
  *(_DWORD *)&v32[24] = 1;
  *(_OWORD *)&v32[32] = 0LL;
  *(_DWORD *)&v32[28] = 1;
  memset(v39, 0, 0xF8uLL);
  v39[0] = -4294967048LL;
  LODWORD(v39[9]) = 0;
  BYTE4(v39[12]) = 0;
  BYTE1(v39[13]) = 0;
  BYTE6(v39[13]) = 0;
  WORD2(v39[10]) = 0;
  *(_QWORD *)((char *)&v39[9] + 4) = 0x7FFFFFFF7FFFFFFFLL;
  v9 = 40LL;
  v39[11] = 0LL;
  v10 = "USBXHCI" - ((char *)&v39[14] + 3);
  LODWORD(v39[12]) = 0;
  v11 = (char *)&v39[14] + 3;
  do
  {
    if ( v9 == -2147483606 )
      break;
    v12 = v11[v10];
    if ( !v12 )
      break;
    *v11++ = v12;
    --v9;
  }
  while ( v9 );
  v13 = v11 - 1;
  if ( v9 )
    v13 = v11;
  *v13 = 0;
  v39[4] = UsbDevice_UcxEvtDeviceAdd;
  v39[3] = Controller_UcxEvtGetCurrentFrameNumber;
  v39[5] = Controller_UcxEvtReset;
  v39[1] = Controller_UcxEvtQueryUsbCapability;
  v39[28] = Controller_UcxEvtStartTrackingForTimeSync;
  v39[29] = Controller_UcxEvtStopTrackingForTimeSync;
  v39[30] = Controller_UcxEvtGetFrameNumberAndQpcForTimeSync;
  if ( IsSecureDevice )
  {
    memset(&v39[6], 0, 24);
  }
  else
  {
    v39[7] = Crashdump_UcxEvtGetDumpData;
    v39[8] = Crashdump_UcxEvtFreeDumpData;
    v39[6] = Controller_UcxEvtEnableForwardProgress;
  }
  DeviceEnumerator = Controller_GetDeviceEnumerator(a1, a2, v10);
  if ( !DeviceEnumerator )
  {
    v15 = 1;
    AcpiData = Controller_RetrievePciData(a1, a2, v38, &v35);
    if ( AcpiData < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = 94;
LABEL_67:
        LODWORD(v27) = AcpiData;
        WPP_RECORDER_SF_d(a2, 2u, 4u, v17, (__int64)&Context.Logger + 4, v27);
        return (unsigned int)AcpiData;
      }
      return (unsigned int)AcpiData;
    }
    goto LABEL_22;
  }
  if ( DeviceEnumerator == 1 )
  {
    v15 = 2;
    AcpiData = Controller_RetrieveAcpiData(a1, a2, pszSrc);
    if ( AcpiData < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = 95;
        goto LABEL_67;
      }
      return (unsigned int)AcpiData;
    }
  }
  else
  {
    AcpiData = Controller_RetrieveUrsData(a1, a2, (int)&v33, (int)pszSrc, v38, (__int64)&v35);
    if ( AcpiData < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = 96;
        goto LABEL_67;
      }
      return (unsigned int)AcpiData;
    }
    v15 = v33;
    if ( v33 != 2 )
    {
LABEL_22:
      *(_QWORD *)((char *)&v39[9] + 4) = *(_QWORD *)v38;
      WORD2(v39[10]) = *(_WORD *)&v38[8];
      v39[11] = *(_QWORD *)&v38[12];
      LODWORD(v39[12]) = *(_DWORD *)&v38[20];
      LODWORD(v39[9]) = 1;
      goto LABEL_24;
    }
  }
  LODWORD(v39[9]) = 2;
  RtlStringCchCopyA((NTSTRSAFE_PSTR)&v39[12] + 4, 5uLL, pszSrc);
  RtlStringCchCopyA((NTSTRSAFE_PSTR)&v39[13] + 1, 5uLL, &pszSrc[5]);
  RtlStringCchCopyA((NTSTRSAFE_PSTR)&v39[13] + 6, 5uLL, &v41[2]);
LABEL_24:
  v18 = *(_DWORD *)&v32[24];
  if ( IsSecureDevice )
    v18 = 2;
  *(_DWORD *)&v32[24] = v18;
  AcpiData = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, _BYTE *, __int64 *))qword_1C0057668)(
               UcxDriverGlobals,
               a1,
               v39,
               v32,
               &v28);
  if ( AcpiData >= 0 )
  {
    v19 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            v28,
            off_1C0056428);
    *(_QWORD *)(v19 + 32) = v19 + 24;
    *(_QWORD *)(v19 + 24) = v19 + 24;
    *(_QWORD *)v19 = a1;
    *(_QWORD *)(v19 + 8) = v28;
    *(_QWORD *)(v19 + 328) = v35;
    *(_QWORD *)(v19 + 72) = a2;
    *(_DWORD *)(v19 + 176) = v34;
    *(_DWORD *)(v19 + 244) = v15;
    *(_BYTE *)(v19 + 537) = IsSecureDevice;
    v20 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            a1,
            off_1C00563D8);
    v21 = *(_DWORD *)(v19 + 244) == 1;
    *(_QWORD *)(v19 + 112) = *(_QWORD *)(v20 + 96);
    if ( v21 )
    {
      v22 = *(_OWORD *)&v38[16];
      *(_OWORD *)(v19 + 248) = *(_OWORD *)v38;
      v23 = *(_OWORD *)&v38[32];
      *(_OWORD *)(v19 + 264) = v22;
      *(_QWORD *)&v22 = *(_QWORD *)&v38[48];
      *(_OWORD *)(v19 + 280) = v23;
      *(_QWORD *)(v19 + 296) = v22;
      *(_BYTE *)(v19 + 304) = 0;
      *(_BYTE *)(v19 + 309) = 0;
      *(_BYTE *)(v19 + 314) = 0;
    }
    else
    {
      *(_QWORD *)(v19 + 304) = *(_QWORD *)pszSrc;
      *(_DWORD *)(v19 + 312) = *(_DWORD *)v41;
      *(_WORD *)(v19 + 316) = v42;
      *(_BYTE *)(v19 + 318) = v43;
      *(_DWORD *)(v19 + 248) = 0x7FFFFFFF;
      *(_DWORD *)(v19 + 252) = 0x7FFFFFFF;
      *(_WORD *)(v19 + 256) = 0;
      *(_QWORD *)(v19 + 260) = 0LL;
      *(_DWORD *)(v19 + 268) = 0;
    }
    Controller_SetLogIdentifier(v19);
    *(_DWORD *)&v32[20] = 0;
    *(_QWORD *)&v32[40] = 0LL;
    *(_DWORD *)v32 = 56;
    *v37 = v19;
    *(_QWORD *)&v32[48] = off_1C0056068;
    *(_OWORD *)&v32[4] = 0LL;
    *(_DWORD *)&v32[24] = 1;
    *(_DWORD *)&v32[28] = 1;
    memset(v36, 0, sizeof(v36));
    LODWORD(v36[0]) = 40;
    v36[1] = Controller_WdfEvtWatchdogTimerFunc;
    BYTE4(v36[2]) = 1;
    if ( IsSecureDevice )
    {
      LODWORD(v36[2]) = 0;
      *(_DWORD *)&v32[24] = 2;
    }
    else
    {
      LODWORD(v36[2]) = 5000;
    }
    *(_QWORD *)&v32[32] = v28;
    LODWORD(v36[3]) = 1000;
    AcpiData = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD *, _BYTE *, __int64))(WdfFunctions_01023 + 2544))(
                 WPP_MAIN_CB.Dpc.ProcessorHistory,
                 v36,
                 v32,
                 v19 + 360);
    if ( AcpiData >= 0 )
    {
      *(_QWORD *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                   WPP_MAIN_CB.Dpc.ProcessorHistory,
                   *(_QWORD *)(v19 + 360),
                   off_1C0056068) = MEMORY[0xFFFFF78000000014];
      memset(v32, 0, sizeof(v32));
      *(_QWORD *)&v32[32] = v28;
      *(_DWORD *)v32 = 56;
      v30 = Controller_IdleTimeoutUpdateWorker;
      *(_DWORD *)&v32[24] = 1;
      *(_DWORD *)&v32[28] = 1;
      v29 = 24LL;
      v31 = 1LL;
      AcpiData = (*(__int64 (__fastcall **)(unsigned __int64, __int64 *, _BYTE *, __int64))(WdfFunctions_01023 + 3032))(
                   WPP_MAIN_CB.Dpc.ProcessorHistory,
                   &v29,
                   v32,
                   v19 + 504);
      if ( AcpiData >= 0 )
      {
        memset(v32, 0, sizeof(v32));
        *(_QWORD *)&v32[32] = v28;
        *(_DWORD *)v32 = 56;
        v30 = Controller_AudioOffloadWnfStateUpdateWorker;
        *(_DWORD *)&v32[24] = 1;
        *(_DWORD *)&v32[28] = 1;
        v29 = 24LL;
        v31 = 1LL;
        AcpiData = (*(__int64 (__fastcall **)(unsigned __int64, __int64 *, _BYTE *, __int64))(WdfFunctions_01023 + 3032))(
                     WPP_MAIN_CB.Dpc.ProcessorHistory,
                     &v29,
                     v32,
                     v19 + 816);
        if ( AcpiData >= 0 )
        {
          *(_QWORD *)&v32[48] = off_1C00560E0;
          *(_OWORD *)&v32[32] = (unsigned __int64)v28;
          v30 = Controller_TelemetryReportWorker;
          *(_DWORD *)&v32[24] = 1;
          *(_DWORD *)&v32[28] = 1;
          v31 = 1LL;
          memset(&v32[4], 0, 20);
          *(_DWORD *)v32 = 56;
          v29 = 24LL;
          AcpiData = (*(__int64 (__fastcall **)(unsigned __int64, __int64 *, _BYTE *, __int64))(WdfFunctions_01023 + 3032))(
                       WPP_MAIN_CB.Dpc.ProcessorHistory,
                       &v29,
                       v32,
                       v19 + 368);
          if ( AcpiData >= 0 )
          {
            v24 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                    WPP_MAIN_CB.Dpc.ProcessorHistory,
                    *(_QWORD *)(v19 + 368),
                    off_1C00560E0);
            KeInitializeMutex((PRKMUTEX)(v24 + 24), 0);
            *(_QWORD *)(v24 + 8) = v24;
            *(_QWORD *)v24 = v24;
            KeInitializeSpinLock((PKSPIN_LOCK)(v24 + 16));
            AcpiData = DynamicLock_Create(v28, a2, IsSecureDevice, (__int64 *)(v19 + 656));
            if ( AcpiData >= 0 )
            {
              memset(v32, 0, sizeof(v32));
              *(_QWORD *)&v32[32] = v28;
              *(_DWORD *)v32 = 56;
              *(_DWORD *)&v32[24] = 1;
              *(_DWORD *)&v32[28] = 1;
              AcpiData = (*(__int64 (__fastcall **)(unsigned __int64, _BYTE *, __int64))(WdfFunctions_01023 + 104))(
                           WPP_MAIN_CB.Dpc.ProcessorHistory,
                           v32,
                           v19 + 672);
              if ( AcpiData >= 0 )
              {
                *(_QWORD *)&v32[48] = off_1C00560E0;
                *(_OWORD *)&v32[32] = (unsigned __int64)v28;
                v30 = Controller_TimeSyncStartTrackingWorker;
                memset(&v32[4], 0, 20);
                *(_DWORD *)v32 = 56;
                *(_DWORD *)&v32[24] = 1;
                *(_DWORD *)&v32[28] = 1;
                v29 = 24LL;
                v31 = 1LL;
                AcpiData = (*(__int64 (__fastcall **)(unsigned __int64, __int64 *, _BYTE *, __int64))(WdfFunctions_01023 + 3032))(
                             WPP_MAIN_CB.Dpc.ProcessorHistory,
                             &v29,
                             v32,
                             v19 + 696);
                if ( AcpiData >= 0 )
                {
                  *(_QWORD *)(v19 + 688) = v19 + 680;
                  *(_QWORD *)(v19 + 680) = v19 + 680;
                  *(_BYTE *)(v19 + 704) = 0;
                  *(_BYTE *)(v19 + 648) = 0;
                  KeQueryPerformanceCounter((PLARGE_INTEGER)(v19 + 768));
                  *(_QWORD *)(v19 + 776) = 0LL;
                  *(_QWORD *)(v19 + 784) = 0LL;
                  *(_DWORD *)(v19 + 792) = 0;
                  *(_DWORD *)(v19 + 664) = 0;
                  Controller_QuerySupportedDSMs(v19);
                  *(_QWORD *)(v19 + 336) = 0LL;
                  *(_QWORD *)(v19 + 344) = 0LL;
                  Controller_PopulateDeviceFlags(v19);
                  if ( (*(_BYTE *)(v19 + 336) & 0x10) != 0 )
                  {
                    AcpiData = -1073741637;
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      WPP_RECORDER_SF_(a2, 2u, 4u, 0x69u, (__int64)&Context.Logger + 4);
                  }
                  else
                  {
                    if ( IsSecureDevice )
                    {
                      AcpiData = Controller_ReferenceTrustletProcess((_QWORD *)v19);
                      if ( AcpiData < 0 )
                        return (unsigned int)AcpiData;
                      AcpiData = Controller_CreateSecureObject(v19);
                      if ( AcpiData < 0 )
                        return (unsigned int)AcpiData;
                      v25 = (*(_DWORD *)(v19 + 544) != 1) + 1;
                    }
                    else
                    {
                      v25 = 0;
                    }
                    *(_DWORD *)(v19 + 540) = v25;
                    *(_QWORD *)(v19 + 628) = 0LL;
                    AcpiData = DynamicLock_Create(v28, a2, IsSecureDevice, (__int64 *)(v19 + 640));
                    if ( AcpiData < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      v17 = 106;
                      goto LABEL_67;
                    }
                  }
                }
                else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  v17 = 104;
                  goto LABEL_67;
                }
              }
              else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v17 = 103;
                goto LABEL_67;
              }
            }
            else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v17 = 102;
              goto LABEL_67;
            }
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v17 = 101;
            goto LABEL_67;
          }
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v17 = 100;
          goto LABEL_67;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = 99;
        goto LABEL_67;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = 98;
      goto LABEL_67;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = 97;
    goto LABEL_67;
  }
  return (unsigned int)AcpiData;
}
