/*
 * XREFs of RIMAllocateHidDesc @ 0x1C004DE5C
 * Callers:
 *     RIMCreateHidDesc @ 0x1C004F0B8 (RIMCreateHidDesc.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C002BFC0 (Win32AllocPoolNonPaged.c)
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x1C004F608 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F724 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_S @ 0x1C005098C (WPP_RECORDER_SF_S.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0051550 (RimDeviceTypeToRimInputType.c)
 *     DbgPrintRIM @ 0x1C00517C4 (DbgPrintRIM.c)
 *     RIMFreeHidDesc @ 0x1C0052898 (RIMFreeHidDesc.c)
 *     ApiSetInkProcessorIsInkDevice @ 0x1C0052A14 (ApiSetInkProcessorIsInkDevice.c)
 *     RIMIsInteractiveCtrl @ 0x1C0094A78 (RIMIsInteractiveCtrl.c)
 *     EtwTracePointerDeviceArrivalStart @ 0x1C00E7A90 (EtwTracePointerDeviceArrivalStart.c)
 *     EtwTracePointerDeviceArrivalStop @ 0x1C00E7AC0 (EtwTracePointerDeviceArrivalStop.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0115410 (RIMCreatePointerDeviceInfo.c)
 *     RIMConfigurePointerDevice @ 0x1C011A76C (RIMConfigurePointerDevice.c)
 *     RIMFindSiblingMouseDevice @ 0x1C011AFDC (RIMFindSiblingMouseDevice.c)
 *     ApiSetSetUserPTPEnabledPreference @ 0x1C016517C (ApiSetSetUserPTPEnabledPreference.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char *__fastcall RIMAllocateHidDesc(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  char *v11; // rax
  int v12; // edx
  char *v13; // rsi
  __int64 v14; // rax
  int v15; // edx
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  int v19; // edx
  __int64 v20; // r8
  unsigned __int16 v21; // r9
  int v22; // edx
  int v23; // edx
  __int64 v25; // xmm0_8
  int v26; // eax
  __int16 v27; // cx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // [rsp+28h] [rbp-80h]
  __int64 v33; // [rsp+40h] [rbp-68h] BYREF
  int v34; // [rsp+48h] [rbp-60h]
  _OWORD v35[4]; // [rsp+50h] [rbp-58h] BYREF

  if ( !a3 )
  {
    WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x2Eu, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids);
    return 0LL;
  }
  if ( !a4[2] )
  {
    WPP_RECORDER_SF_DD(a4[1], a2, 20, 47, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids, a4[1], *a4);
    return 0LL;
  }
  v11 = (char *)Win32AllocPoolZInit(0x78uLL, 0x44687352u);
  v13 = v11;
  if ( !v11 )
  {
    LOBYTE(v12) = 3;
    WPP_RECORDER_SF_S(
      gRimLog,
      v12,
      20,
      48,
      (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids,
      *(_QWORD *)(a2 + 216));
    return 0LL;
  }
  *(_OWORD *)(v11 + 40) = *(_OWORD *)a4;
  *(_OWORD *)(v11 + 56) = *((_OWORD *)a4 + 1);
  *(_OWORD *)(v11 + 72) = *((_OWORD *)a4 + 2);
  *(_OWORD *)(v11 + 88) = *((_OWORD *)a4 + 3);
  v14 = Win32AllocPoolNonPaged(10LL * *((unsigned __int16 *)v11 + 22), 0x70707352u);
  *((_QWORD *)v13 + 3) = v14;
  LOBYTE(v15) = 3;
  WPP_RECORDER_SF_q(gRimLog, v15, 21, 49, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids, v14);
  if ( !*((_QWORD *)v13 + 3) )
  {
    LODWORD(v32) = *((unsigned __int16 *)v13 + 22);
    WPP_RECORDER_SF_d(gRimLog, 3u, 0x14u, 0x32u, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids, v32);
    RIMFreeHidDesc(v13);
    return 0LL;
  }
  *((_QWORD *)v13 + 2) = a3;
  *((_QWORD *)v13 + 13) = *(_QWORD *)a5;
  *((_DWORD *)v13 + 28) = *(_DWORD *)(a5 + 8);
  if ( a4[1] == 13 && ((unsigned __int16)(*a4 - 1) <= 1u || (unsigned __int16)(*a4 - 4) <= 1u) )
  {
    EtwTracePointerDeviceArrivalStart();
    v25 = *((_QWORD *)v13 + 13);
    v34 = *((_DWORD *)v13 + 28);
    v33 = v25;
    v26 = RIMCreatePointerDeviceInfo(a1, a2, a3, a4, a6, a7, &v33);
    v27 = *a4;
    if ( v26 >= 0 )
    {
      if ( (unsigned __int16)(v27 - 4) <= 1u )
      {
        RIMConfigurePointerDevice(a1, a2, v13);
        if ( *a4 == 5 )
        {
          if ( !*(_QWORD *)(a2 + 480) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30);
          ApiSetSetUserPTPEnabledPreference(a2, v13, a1);
        }
      }
    }
    else if ( v27 != 5 || v26 == -1073741808 )
    {
      goto LABEL_11;
    }
    v31 = *a4;
    if ( (_WORD)v31 != 1 )
      RIMFindSiblingMouseDevice(v13, v31, a2);
    EtwTracePointerDeviceArrivalStop();
  }
  else
  {
    v16 = *((_OWORD *)a4 + 1);
    v35[0] = *(_OWORD *)a4;
    v17 = *((_OWORD *)a4 + 2);
    v35[1] = v16;
    v18 = *((_OWORD *)a4 + 3);
    v35[2] = v17;
    v35[3] = v18;
    if ( (unsigned int)RIMIsInteractiveCtrl(v35) )
    {
      *(_DWORD *)(a2 + 200) |= 0x100u;
    }
    else if ( (unsigned int)ApiSetInkProcessorIsInkDevice(v21, *a4, v20 + 6) )
    {
      *(_DWORD *)(a2 + 200) |= 0x200u;
    }
    else if ( ((unsigned int)RimDeviceTypeToRimInputType(a2, *(unsigned __int8 *)(a2 + 48)) & *(_DWORD *)(a1 + 84)) == 0
           || *(_DWORD *)(a1 + 88) && (*(_DWORD *)(a2 + 184) & 0x4000) == 0 )
    {
LABEL_11:
      DbgPrintRIM("Ignore (Usage: %x, UsagePage: %x)\n");
      WPP_RECORDER_SF_DD(a4[1], v22, 21, 52, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids, a4[1], *a4);
      *((_QWORD *)v13 + 2) = 0LL;
      *(_QWORD *)(a2 + 464) = 0LL;
      RIMFreeHidDesc(v13);
      LOBYTE(v23) = 3;
      WPP_RECORDER_SF_q(gRimLog, v23, 21, 53, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids, 0);
      return 0LL;
    }
  }
  LOBYTE(v19) = 3;
  WPP_RECORDER_SF_q(gRimLog, v19, 21, 51, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids, (char)v13);
  return v13;
}
