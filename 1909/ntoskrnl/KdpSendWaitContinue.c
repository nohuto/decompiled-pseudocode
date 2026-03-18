/*
 * XREFs of KdpSendWaitContinue @ 0x140955ADC
 * Callers:
 *     KdpReportCommandStringStateChange @ 0x140955130 (KdpReportCommandStringStateChange.c)
 *     KdpReportExceptionStateChange @ 0x1409552CC (KdpReportExceptionStateChange.c)
 *     KdpReportLoadSymbolsStateChange @ 0x1409553C0 (KdpReportLoadSymbolsStateChange.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KdpGetContextEx @ 0x1402A228C (KdpGetContextEx.c)
 *     KdpSetContextEx @ 0x1402A2470 (KdpSetContextEx.c)
 *     KdpWriteCustomBreakpoint @ 0x1402A25A4 (KdpWriteCustomBreakpoint.c)
 *     KdpSysReadIoSpace @ 0x1402A2C20 (KdpSysReadIoSpace.c)
 *     KdpSysReadMsr @ 0x1402A2CDC (KdpSysReadMsr.c)
 *     KdpSysWriteIoSpace @ 0x1402A2D10 (KdpSysWriteIoSpace.c)
 *     KdpSysWriteMsr @ 0x1402A2DC8 (KdpSysWriteMsr.c)
 *     KeSwitchFrozenProcessor @ 0x1402ADF80 (KeSwitchFrozenProcessor.c)
 *     KdExitDebugger @ 0x140954790 (KdExitDebugger.c)
 *     KdpFillMemory @ 0x140954A20 (KdpFillMemory.c)
 *     KdpGetBusData @ 0x140954B4C (KdpGetBusData.c)
 *     KdpGetContext @ 0x140954C10 (KdpGetContext.c)
 *     KdpQueryMemory @ 0x140954D04 (KdpQueryMemory.c)
 *     KdpReadControlSpace @ 0x140954DA0 (KdpReadControlSpace.c)
 *     KdpReadPhysicalMemory @ 0x140954E5C (KdpReadPhysicalMemory.c)
 *     KdpReadPhysicalMemoryLong @ 0x140954FA8 (KdpReadPhysicalMemoryLong.c)
 *     KdpReadVirtualMemory @ 0x14095506C (KdpReadVirtualMemory.c)
 *     KdpRestoreBreakPointEx @ 0x140955500 (KdpRestoreBreakPointEx.c)
 *     KdpSearchMemory @ 0x140955608 (KdpSearchMemory.c)
 *     KdpSearchPhysicalPageRange @ 0x140955A3C (KdpSearchPhysicalPageRange.c)
 *     KdpSetContext @ 0x140956438 (KdpSetContext.c)
 *     KdpSysWriteBusData @ 0x1409565B8 (KdpSysWriteBusData.c)
 *     KdpWriteBreakPointEx @ 0x140956720 (KdpWriteBreakPointEx.c)
 *     KdpWritePhysicalMemory @ 0x1409568E0 (KdpWritePhysicalMemory.c)
 *     KdpCopyMemoryChunks @ 0x140957144 (KdpCopyMemoryChunks.c)
 *     KdpGetStateChange @ 0x1409573C0 (KdpGetStateChange.c)
 *     KdpSysWriteControlSpace @ 0x1409575A4 (KdpSysWriteControlSpace.c)
 *     KdpAddBreakpoint @ 0x14095764C (KdpAddBreakpoint.c)
 *     KdpDeleteBreakpoint @ 0x1409577E0 (KdpDeleteBreakpoint.c)
 */

__int64 __fastcall KdpSendWaitContinue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // rdx
  __int64 *v11; // r8
  char v12; // al
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  __int64 v15; // [rsp+28h] [rbp-D8h]
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  void *v17; // [rsp+48h] [rbp-B8h]
  int v18; // [rsp+50h] [rbp-B0h] BYREF
  int v19; // [rsp+54h] [rbp-ACh] BYREF
  void *v20; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v21; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v22[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v23; // [rsp+78h] [rbp-88h] BYREF
  PVOID *v24; // [rsp+80h] [rbp-80h]
  _QWORD v25[2]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v26[2]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v27[2]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v28[2]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v29[2]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v30[2]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v31[2]; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v32[2]; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v33[2]; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v34[2]; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v35[2]; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v36[2]; // [rsp+138h] [rbp+38h] BYREF
  _QWORD v37[2]; // [rsp+148h] [rbp+48h] BYREF
  _QWORD v38[2]; // [rsp+158h] [rbp+58h] BYREF
  _BYTE v39[4]; // [rsp+168h] [rbp+68h] BYREF
  int v40; // [rsp+16Ch] [rbp+6Ch] BYREF
  int v41; // [rsp+170h] [rbp+70h] BYREF
  int v42; // [rsp+174h] [rbp+74h] BYREF
  int v43; // [rsp+178h] [rbp+78h] BYREF
  PVOID v44[7]; // [rsp+180h] [rbp+80h] BYREF

  v16 = 0x10000000LL;
  v22[0] = 3670016LL;
  memset(v44, 0, sizeof(v44));
  v22[1] = v44;
  KdpContextSent = 0;
  v17 = &KdpMessageBuffer;
  KdSendPacket(7LL, a2, a3, (char *)&KdDebuggerNotPresent + 5);
  while ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
    {
      if ( (_DWORD)KeNumberProcessors_0 == 1 )
        KeQueryPerformanceCounter(0LL);
      v7 = KdReceivePacket(2LL, v22, &v16, v39, (char *)&KdDebuggerNotPresent + 5);
      if ( v7 == 2 )
        break;
      if ( v7 != 1 )
      {
        switch ( LODWORD(v44[0]) )
        {
          case 0x3130:
            KdpReadVirtualMemory((__int64)v44, &v16, v8);
            continue;
          case 0x3131:
            v23 = 0LL;
            v24 = 0LL;
            LODWORD(v44[1]) = KdpCopyMemoryChunks(v44[2], 5, (__int64)&v44[3] + 4);
            v10 = &v23;
            LOWORD(v23) = 56;
            v24 = v44;
            v11 = 0LL;
            goto LABEL_45;
          case 0x3132:
            v26[0] = 56LL;
            v26[1] = v44;
            KdpGetContext((__int64)v44, (__int64)&v16, a4);
            if ( !LODWORD(v44[1]) )
              KdpContextSent = 1;
            v10 = v26;
            goto LABEL_44;
          case 0x3133:
            KdpSetContext(v44, &v16, a4);
            continue;
          case 0x3134:
            v27[0] = 56LL;
            LOBYTE(v8) = 1;
            v27[1] = v44;
            LODWORD(v44[3]) = KdpAddBreakpoint(v44[2], 204LL, v8, 0LL, BugCheckParameter4, v15);
            v10 = v27;
            LODWORD(v44[1]) = LODWORD(v44[3]) == 0 ? 0xC0000001 : 0;
            v11 = 0LL;
            goto LABEL_45;
          case 0x3135:
            v28[1] = v44;
            v28[0] = 56LL;
            v12 = KdpDeleteBreakpoint(LODWORD(v44[2]));
            v10 = v28;
            LODWORD(v44[1]) = v12 == 0 ? 0xC0000001 : 0;
            v11 = 0LL;
            goto LABEL_45;
          case 0x3136:
            return SLODWORD(v44[2]) >= 0;
          case 0x3137:
            KdpReadControlSpace((__int64)v44, (__int64)&v16, v8);
            continue;
          case 0x3138:
            v29[1] = v44;
            v29[0] = 56LL;
            LODWORD(v44[1]) = KdpSysWriteControlSpace(HIWORD(v44[0]), v44[2], v17, (unsigned __int16)v16, &v18);
            v10 = v29;
            HIDWORD(v44[3]) = v18;
            goto LABEL_44;
          case 0x3139:
            v30[0] = 56LL;
            v30[1] = v44;
            HIDWORD(v44[3]) = 0;
            LODWORD(v44[1]) = KdpSysReadIoSpace(
                                1,
                                0,
                                1,
                                (unsigned __int16)v44[2],
                                (_BYTE *)&v44[3] + 4,
                                (int)v44[3],
                                &v40);
            v10 = v30;
            v11 = 0LL;
            goto LABEL_45;
          case 0x313A:
            v31[0] = 56LL;
            v31[1] = v44;
            LODWORD(v44[1]) = KdpSysWriteIoSpace(
                                1,
                                0,
                                1,
                                (unsigned __int16)v44[2],
                                (unsigned __int8 *)&v44[3] + 4,
                                (int)v44[3],
                                &v41);
            v10 = v31;
            v11 = 0LL;
            goto LABEL_45;
          case 0x313B:
            KiResumeForReboot = 1;
            KdExitDebugger(0);
            ((void (__fastcall *)(_QWORD))off_1404245E8[0])(0LL);
            HalReturnToFirmware(3LL);
          case 0x313C:
            if ( SLODWORD(v44[2]) < 0 )
              return 0LL;
            KdpGetStateChange(v44, a4);
            return 1LL;
          case 0x313D:
            KdpReadPhysicalMemory((__int64)v44, (__int64)&v16, v8, (__int64)&KdDebuggerNotPresent + 5);
            continue;
          case 0x313E:
            KdpWritePhysicalMemory(v44, &v16);
            continue;
          case 0x3140:
          case 0x3141:
          case 0x3142:
          case 0x315A:
            continue;
          case 0x3144:
            v32[1] = v44;
            v32[0] = 56LL;
            LODWORD(v44[5]) = 0;
            LODWORD(v44[1]) = KdpSysReadIoSpace(
                                SHIDWORD(v44[2]),
                                (int)v44[3],
                                SHIDWORD(v44[3]),
                                (unsigned __int16)v44[4],
                                &v44[5],
                                (int)v44[2],
                                &v42);
            v10 = v32;
            v11 = 0LL;
            goto LABEL_45;
          case 0x3145:
            v33[1] = v44;
            v33[0] = 56LL;
            LODWORD(v44[1]) = KdpSysWriteIoSpace(
                                SHIDWORD(v44[2]),
                                (int)v44[3],
                                SHIDWORD(v44[3]),
                                (unsigned __int16)v44[4],
                                (unsigned __int8 *)&v44[5],
                                (int)v44[2],
                                &v43);
            v10 = v33;
            v11 = 0LL;
            goto LABEL_45;
          case 0x3146:
            LODWORD(v44[1]) = 0;
            v10 = v37;
            *(_OWORD *)&v44[2] = KdVersionBlock;
            v37[0] = 56LL;
            v11 = 0LL;
            v44[6] = (PVOID)qword_1404283E8;
            v37[1] = v44;
            *(_OWORD *)&v44[4] = xmmword_1404283D8;
            LODWORD(v44[0]) = 12614;
            goto LABEL_45;
          case 0x3147:
            if ( !(unsigned int)KdpWriteBreakPointEx(v44, &v16) )
              continue;
            return 0LL;
          case 0x3148:
            KdpRestoreBreakPointEx((__int64)v44, (PVOID *)&v16);
            continue;
          case 0x3149:
            KdExitDebugger(0);
            KeBugCheckEx(0xE2u, 0LL, 0LL, 0LL, 0LL);
          case 0x3150:
            return KeSwitchFrozenProcessor(HIWORD(v44[0]));
          case 0x3151:
            LODWORD(v44[1]) = -1073741823;
            v10 = v38;
            v38[0] = 56LL;
            v38[1] = v44;
            v11 = 0LL;
            goto LABEL_45;
          case 0x3152:
            v20 = 0LL;
            v34[1] = v44;
            v34[0] = 56LL;
            LODWORD(v44[1]) = KdpSysReadMsr((unsigned int)v44[2], &v20);
            v10 = v34;
            v11 = 0LL;
            *(PVOID *)((char *)&v44[2] + 4) = v20;
            goto LABEL_45;
          case 0x3153:
            v35[1] = v44;
            v21 = *(unsigned __int64 *)((char *)&v44[2] + 4);
            v35[0] = 56LL;
            LODWORD(v44[1]) = KdpSysWriteMsr((unsigned int)v44[2], &v21);
            v10 = v35;
            v11 = 0LL;
            goto LABEL_45;
          case 0x3156:
            KdpSearchMemory((__int64)v44, (__int64)&v16);
            continue;
          case 0x3157:
            KdpGetBusData(v44, (__int64)&v16, v8);
            continue;
          case 0x3158:
            v36[1] = v44;
            v36[0] = 56LL;
            LODWORD(v44[1]) = KdpSysWriteBusData(
                                LODWORD(v44[2]),
                                HIDWORD(v44[2]),
                                LODWORD(v44[3]),
                                HIDWORD(v44[3]),
                                v17,
                                v44[4],
                                &v19);
            v10 = v36;
            v11 = 0LL;
            LODWORD(v44[4]) = v19;
            goto LABEL_45;
          case 0x3159:
            v25[1] = v44;
            v25[0] = 56LL;
            if ( KdpSearchInProgress )
              KdpSearchPhysicalPageRange(4);
            LODWORD(v44[1]) = 0;
            v10 = v25;
            v11 = 0LL;
            goto LABEL_45;
          case 0x315B:
            KdpFillMemory((__int64)v44, (__int64)&v16);
            continue;
          case 0x315C:
            KdpQueryMemory((__int64)v44);
            continue;
          case 0x315F:
            KdpGetContextEx(v44, (unsigned __int16 *)&v16);
            continue;
          case 0x3160:
            KdpSetContextEx((__int64)v44, (__int64)&v16, a4);
            continue;
          case 0x3161:
            KdpWriteCustomBreakpoint((__int64)v44, 0x140000000LL, v8, v9);
            continue;
          case 0x3162:
            KdpReadPhysicalMemoryLong((__int64)v44, &v16, v8);
            continue;
          default:
            LOWORD(v16) = 0;
            v10 = v22;
            LODWORD(v44[1]) = -1073741823;
LABEL_44:
            v11 = &v16;
LABEL_45:
            KdSendPacket(2LL, v10, v11, (char *)&KdDebuggerNotPresent + 5);
            continue;
        }
      }
    }
    KdSendPacket(7LL, a2, a3, (char *)&KdDebuggerNotPresent + 5);
  }
  return 1LL;
}
