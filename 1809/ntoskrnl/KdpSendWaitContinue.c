/*
 * XREFs of KdpSendWaitContinue @ 0x140918100
 * Callers:
 *     KdpReportCommandStringStateChange @ 0x1409177D8 (KdpReportCommandStringStateChange.c)
 *     KdpReportExceptionStateChange @ 0x140917954 (KdpReportExceptionStateChange.c)
 *     KdpReportLoadSymbolsStateChange @ 0x140917A20 (KdpReportLoadSymbolsStateChange.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     KdpGetContextEx @ 0x14028C68C (KdpGetContextEx.c)
 *     KdpSetContextEx @ 0x14028C86C (KdpSetContextEx.c)
 *     KdpWriteCustomBreakpoint @ 0x14028C99C (KdpWriteCustomBreakpoint.c)
 *     KdpSysReadIoSpace @ 0x14028D010 (KdpSysReadIoSpace.c)
 *     KdpSysReadMsr @ 0x14028D0CC (KdpSysReadMsr.c)
 *     KdpSysWriteIoSpace @ 0x14028D100 (KdpSysWriteIoSpace.c)
 *     KdpSysWriteMsr @ 0x14028D1B8 (KdpSysWriteMsr.c)
 *     KeSwitchFrozenProcessor @ 0x140297590 (KeSwitchFrozenProcessor.c)
 *     KdExitDebugger @ 0x140916E88 (KdExitDebugger.c)
 *     KdpFillMemory @ 0x140917100 (KdpFillMemory.c)
 *     KdpGetBusData @ 0x140917224 (KdpGetBusData.c)
 *     KdpGetContext @ 0x1409172E4 (KdpGetContext.c)
 *     KdpQueryMemory @ 0x1409173CC (KdpQueryMemory.c)
 *     KdpReadControlSpace @ 0x14091745C (KdpReadControlSpace.c)
 *     KdpReadPhysicalMemory @ 0x140917510 (KdpReadPhysicalMemory.c)
 *     KdpReadPhysicalMemoryLong @ 0x140917658 (KdpReadPhysicalMemoryLong.c)
 *     KdpReadVirtualMemory @ 0x14091771C (KdpReadVirtualMemory.c)
 *     KdpRestoreBreakPointEx @ 0x140917B3C (KdpRestoreBreakPointEx.c)
 *     KdpSearchMemory @ 0x140917C40 (KdpSearchMemory.c)
 *     KdpSearchPhysicalPageRange @ 0x140918060 (KdpSearchPhysicalPageRange.c)
 *     KdpSetContext @ 0x1409189F0 (KdpSetContext.c)
 *     KdpSysWriteBusData @ 0x140918B68 (KdpSysWriteBusData.c)
 *     KdpWriteBreakPointEx @ 0x140918CD0 (KdpWriteBreakPointEx.c)
 *     KdpWritePhysicalMemory @ 0x140918E88 (KdpWritePhysicalMemory.c)
 *     KdpGetStateChange @ 0x14091961C (KdpGetStateChange.c)
 *     KdpSysWriteControlSpace @ 0x140919800 (KdpSysWriteControlSpace.c)
 *     KdpCopyMemoryChunks @ 0x1409199A8 (KdpCopyMemoryChunks.c)
 *     KdpAddBreakpoint @ 0x140919BE4 (KdpAddBreakpoint.c)
 *     KdpDeleteBreakpoint @ 0x140919D78 (KdpDeleteBreakpoint.c)
 */

__int64 __fastcall KdpSendWaitContinue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  __int16 *v10; // rdx
  PVOID *v11; // r8
  char v12; // al
  int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  __int64 v15; // [rsp+28h] [rbp-D8h]
  PVOID v16; // [rsp+40h] [rbp-C0h] BYREF
  void *v17; // [rsp+48h] [rbp-B8h]
  int v18; // [rsp+50h] [rbp-B0h] BYREF
  int v19; // [rsp+54h] [rbp-ACh] BYREF
  void *v20; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v21; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v22[4]; // [rsp+68h] [rbp-98h] BYREF
  int v23; // [rsp+6Ch] [rbp-94h] BYREF
  int v24; // [rsp+70h] [rbp-90h] BYREF
  int v25; // [rsp+74h] [rbp-8Ch] BYREF
  int v26; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v27[2]; // [rsp+80h] [rbp-80h] BYREF
  __int16 v28; // [rsp+82h] [rbp-7Eh]
  PVOID *v29; // [rsp+88h] [rbp-78h]
  __int16 v30; // [rsp+90h] [rbp-70h] BYREF
  PVOID *v31; // [rsp+98h] [rbp-68h]
  __int16 v32; // [rsp+A0h] [rbp-60h] BYREF
  PVOID *v33; // [rsp+A8h] [rbp-58h]
  __int16 v34; // [rsp+B0h] [rbp-50h] BYREF
  PVOID *v35; // [rsp+B8h] [rbp-48h]
  __int16 v36; // [rsp+C0h] [rbp-40h] BYREF
  PVOID *v37; // [rsp+C8h] [rbp-38h]
  __int16 v38; // [rsp+D0h] [rbp-30h] BYREF
  PVOID *v39; // [rsp+D8h] [rbp-28h]
  __int16 v40; // [rsp+E0h] [rbp-20h] BYREF
  PVOID *v41; // [rsp+E8h] [rbp-18h]
  __int16 v42; // [rsp+F0h] [rbp-10h] BYREF
  PVOID *v43; // [rsp+F8h] [rbp-8h]
  __int16 v44; // [rsp+100h] [rbp+0h] BYREF
  PVOID *v45; // [rsp+108h] [rbp+8h]
  __int16 v46; // [rsp+110h] [rbp+10h] BYREF
  PVOID *v47; // [rsp+118h] [rbp+18h]
  __int16 v48; // [rsp+120h] [rbp+20h] BYREF
  PVOID *v49; // [rsp+128h] [rbp+28h]
  __int16 v50; // [rsp+130h] [rbp+30h] BYREF
  PVOID *v51; // [rsp+138h] [rbp+38h]
  __int16 v52; // [rsp+140h] [rbp+40h] BYREF
  PVOID *v53; // [rsp+148h] [rbp+48h]
  __int16 v54; // [rsp+150h] [rbp+50h] BYREF
  PVOID *v55; // [rsp+158h] [rbp+58h]
  __int16 v56; // [rsp+160h] [rbp+60h] BYREF
  PVOID *v57; // [rsp+168h] [rbp+68h]
  __int16 v58; // [rsp+170h] [rbp+70h] BYREF
  PVOID *v59; // [rsp+178h] [rbp+78h]
  PVOID v60[7]; // [rsp+180h] [rbp+80h] BYREF

  memset(v60, 0, sizeof(v60));
  v28 = 56;
  v29 = v60;
  WORD1(v16) = 4096;
  KdpContextSent = 0;
  v17 = &KdpMessageBuffer;
  KdSendPacket(7LL, a2, a3, &KdpContext);
  while ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
    {
      if ( (_DWORD)KeNumberProcessors_0 == 1 )
        KeQueryPerformanceCounter(0LL);
      v7 = KdReceivePacket(2LL, v27, &v16, v22, &KdpContext);
      if ( v7 == 2 )
        break;
      if ( v7 != 1 )
      {
        switch ( LODWORD(v60[0]) )
        {
          case 0x3130:
            KdpReadVirtualMemory((__int64)v60, &v16, v8);
            continue;
          case 0x3131:
            LODWORD(v60[1]) = KdpCopyMemoryChunks(v60[2], 5, (__int64)&v60[3] + 4);
            v10 = &v30;
            v30 = 56;
            v31 = v60;
            v11 = 0LL;
            goto LABEL_45;
          case 0x3132:
            v34 = 56;
            v35 = v60;
            KdpGetContext((__int64)v60, (__int64)&v16, a4);
            if ( !LODWORD(v60[1]) )
              KdpContextSent = 1;
            v10 = &v34;
            goto LABEL_44;
          case 0x3133:
            KdpSetContext(v60, &v16, a4);
            continue;
          case 0x3134:
            v37 = v60;
            LOBYTE(v8) = 1;
            v36 = 56;
            LODWORD(v60[3]) = KdpAddBreakpoint(v60[2], 204LL, v8, 0LL, BugCheckParameter4, v15);
            v10 = &v36;
            LODWORD(v60[1]) = LODWORD(v60[3]) == 0 ? 0xC0000001 : 0;
            v11 = 0LL;
            goto LABEL_45;
          case 0x3135:
            v39 = v60;
            v38 = 56;
            v12 = KdpDeleteBreakpoint(LODWORD(v60[2]));
            v10 = &v38;
            LODWORD(v60[1]) = v12 == 0 ? 0xC0000001 : 0;
            v11 = 0LL;
            goto LABEL_45;
          case 0x3136:
            return SLODWORD(v60[2]) >= 0;
          case 0x3137:
            KdpReadControlSpace((__int64)v60, (__int64)&v16, v8);
            continue;
          case 0x3138:
            v41 = v60;
            v40 = 56;
            LODWORD(v60[1]) = KdpSysWriteControlSpace(HIWORD(v60[0]), v60[2], v17, (unsigned __int16)v16, &v18);
            v10 = &v40;
            HIDWORD(v60[3]) = v18;
            goto LABEL_44;
          case 0x3139:
            v43 = v60;
            v42 = 56;
            HIDWORD(v60[3]) = 0;
            LODWORD(v60[1]) = KdpSysReadIoSpace(
                                1,
                                0,
                                1,
                                (unsigned __int16)v60[2],
                                (_BYTE *)&v60[3] + 4,
                                (int)v60[3],
                                &v23);
            v10 = &v42;
            v11 = 0LL;
            goto LABEL_45;
          case 0x313A:
            v45 = v60;
            v44 = 56;
            LODWORD(v60[1]) = KdpSysWriteIoSpace(
                                1,
                                0,
                                1,
                                (unsigned __int16)v60[2],
                                (unsigned __int8 *)&v60[3] + 4,
                                (int)v60[3],
                                &v24);
            v10 = &v44;
            v11 = 0LL;
            goto LABEL_45;
          case 0x313B:
            KiResumeForReboot = 1;
            KdExitDebugger(0);
            ((void (__fastcall *)(_QWORD))off_1403FF5E8[0])(0LL);
            HalReturnToFirmware(3LL);
          case 0x313C:
            if ( SLODWORD(v60[2]) < 0 )
              return 0LL;
            KdpGetStateChange(v60, a4);
            return 1LL;
          case 0x313D:
            KdpReadPhysicalMemory((__int64)v60, (__int64)&v16, v8, (__int64)&KdpContext);
            continue;
          case 0x313E:
            KdpWritePhysicalMemory(v60, &v16);
            continue;
          case 0x3140:
          case 0x3141:
          case 0x3142:
          case 0x315A:
            continue;
          case 0x3144:
            v47 = v60;
            v46 = 56;
            LODWORD(v60[5]) = 0;
            LODWORD(v60[1]) = KdpSysReadIoSpace(
                                SHIDWORD(v60[2]),
                                (int)v60[3],
                                SHIDWORD(v60[3]),
                                (unsigned __int16)v60[4],
                                &v60[5],
                                (int)v60[2],
                                &v25);
            v10 = &v46;
            v11 = 0LL;
            goto LABEL_45;
          case 0x3145:
            v49 = v60;
            v48 = 56;
            LODWORD(v60[1]) = KdpSysWriteIoSpace(
                                SHIDWORD(v60[2]),
                                (int)v60[3],
                                SHIDWORD(v60[3]),
                                (unsigned __int16)v60[4],
                                (unsigned __int8 *)&v60[5],
                                (int)v60[2],
                                &v26);
            v10 = &v48;
            v11 = 0LL;
            goto LABEL_45;
          case 0x3146:
            v56 = 56;
            v57 = v60;
            v11 = 0LL;
            *(_OWORD *)&v60[2] = KdVersionBlock;
            v10 = &v56;
            LODWORD(v60[1]) = 0;
            v60[6] = (PVOID)qword_140402F60;
            *(_OWORD *)&v60[4] = xmmword_140402F50;
            LODWORD(v60[0]) = 12614;
            goto LABEL_45;
          case 0x3147:
            if ( !(unsigned int)KdpWriteBreakPointEx(v60, &v16) )
              continue;
            return 0LL;
          case 0x3148:
            KdpRestoreBreakPointEx((__int64)v60, &v16);
            continue;
          case 0x3149:
            KdExitDebugger(0);
            KeBugCheckEx(0xE2u, 0LL, 0LL, 0LL, 0LL);
          case 0x3150:
            return KeSwitchFrozenProcessor(HIWORD(v60[0]));
          case 0x3151:
            v58 = 56;
            v59 = v60;
            v10 = &v58;
            LODWORD(v60[1]) = -1073741823;
            v11 = 0LL;
            goto LABEL_45;
          case 0x3152:
            v51 = v60;
            v50 = 56;
            LODWORD(v60[1]) = KdpSysReadMsr((unsigned int)v60[2], &v20);
            v10 = &v50;
            v11 = 0LL;
            *(PVOID *)((char *)&v60[2] + 4) = v20;
            goto LABEL_45;
          case 0x3153:
            v53 = v60;
            v21 = *(unsigned __int64 *)((char *)&v60[2] + 4);
            v52 = 56;
            LODWORD(v60[1]) = KdpSysWriteMsr((unsigned int)v60[2], &v21);
            v10 = &v52;
            v11 = 0LL;
            goto LABEL_45;
          case 0x3156:
            KdpSearchMemory((__int64)v60, (__int64)&v16);
            continue;
          case 0x3157:
            KdpGetBusData(v60, (__int64)&v16, v8);
            continue;
          case 0x3158:
            v55 = v60;
            v54 = 56;
            LODWORD(v60[1]) = KdpSysWriteBusData(
                                LODWORD(v60[2]),
                                HIDWORD(v60[2]),
                                LODWORD(v60[3]),
                                HIDWORD(v60[3]),
                                v17,
                                v60[4],
                                &v19);
            v10 = &v54;
            v11 = 0LL;
            LODWORD(v60[4]) = v19;
            goto LABEL_45;
          case 0x3159:
            v32 = 56;
            v33 = v60;
            if ( KdpSearchInProgress )
              KdpSearchPhysicalPageRange(4);
            LODWORD(v60[1]) = 0;
            v10 = &v32;
            v11 = 0LL;
            goto LABEL_45;
          case 0x315B:
            KdpFillMemory((__int64)v60, (__int64)&v16);
            continue;
          case 0x315C:
            KdpQueryMemory((__int64)v60);
            continue;
          case 0x315F:
            KdpGetContextEx(v60, (unsigned __int16 *)&v16);
            continue;
          case 0x3160:
            KdpSetContextEx((__int64)v60, (__int64)&v16, a4);
            continue;
          case 0x3161:
            KdpWriteCustomBreakpoint((__int64)v60, 0x140000000LL, v8, v9);
            continue;
          case 0x3162:
            KdpReadPhysicalMemoryLong((__int64)v60, &v16, v8);
            continue;
          default:
            LOWORD(v16) = 0;
            v10 = (__int16 *)v27;
            LODWORD(v60[1]) = -1073741823;
LABEL_44:
            v11 = &v16;
LABEL_45:
            KdSendPacket(2LL, v10, v11, &KdpContext);
            continue;
        }
      }
    }
    KdSendPacket(7LL, a2, a3, &KdpContext);
  }
  return 1LL;
}
