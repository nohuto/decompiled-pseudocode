/*
 * XREFs of RIMAllocateHidDesc @ 0x1C00EE340
 * Callers:
 *     RIMCreateHidDesc @ 0x1C00EE898 (RIMCreateHidDesc.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C000F238 (RimDeviceTypeToRimInputType.c)
 *     Win32AllocPoolNonPaged @ 0x1C00346A0 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_q @ 0x1C00739CC (WPP_RECORDER_SF_q.c)
 *     EtwTracePointerDeviceArrivalStart @ 0x1C00AC2C0 (EtwTracePointerDeviceArrivalStart.c)
 *     EtwTracePointerDeviceArrivalStop @ 0x1C00AC2F0 (EtwTracePointerDeviceArrivalStop.c)
 *     DbgPrintRIM @ 0x1C00DDAEC (DbgPrintRIM.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00E5F04 (WPP_RECORDER_SF_DD.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C00EA954 (RIMCreatePointerDeviceInfo.c)
 *     RIMConfigurePointerDevice @ 0x1C00EE77C (RIMConfigurePointerDevice.c)
 *     RIMFindSiblingMouseDevice @ 0x1C00EF79C (RIMFindSiblingMouseDevice.c)
 *     RIMFreeHidDesc @ 0x1C00EF8B0 (RIMFreeHidDesc.c)
 *     RIMIsInteractiveCtrl @ 0x1C00EFE70 (RIMIsInteractiveCtrl.c)
 *     WPP_RECORDER_SF_S @ 0x1C00F08CC (WPP_RECORDER_SF_S.c)
 *     RIMCreateHidKeyboardDeviceInfo @ 0x1C01036C0 (RIMCreateHidKeyboardDeviceInfo.c)
 *     ApiSetInkProcessorIsInkDevice @ 0x1C0140C60 (ApiSetInkProcessorIsInkDevice.c)
 *     ApiSetSetUserPTPEnabledPreference @ 0x1C0141A98 (ApiSetSetUserPTPEnabledPreference.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char *__fastcall RIMAllocateHidDesc(
        __int64 a1,
        __int64 a2,
        struct _HIDP_PREPARSED_DATA *a3,
        unsigned __int16 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  char *v11; // rax
  int v12; // edx
  char *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rcx
  bool v16; // cf
  __int64 v17; // xmm0_8
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int64 v27; // r8
  unsigned __int16 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // r8d
  __int16 v32; // r8
  __int64 v33; // [rsp+28h] [rbp-80h]
  __int64 v34; // [rsp+30h] [rbp-78h]
  __int64 v35; // [rsp+40h] [rbp-68h] BYREF
  int v36; // [rsp+48h] [rbp-60h]
  _OWORD v37[4]; // [rsp+50h] [rbp-58h] BYREF

  if ( !a3 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0x2Bu,
      (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids);
    return 0LL;
  }
  if ( !a4[2] )
  {
    WPP_RECORDER_SF_DD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      a2,
      0x13u,
      0x2Cu,
      (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids,
      a4[1],
      *a4);
    return 0LL;
  }
  v11 = (char *)Win32AllocPoolZInit(0x78uLL, 0x44687352u);
  v13 = v11;
  if ( !v11 )
  {
    LOBYTE(v12) = 3;
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      v12,
      19,
      45,
      (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids,
      *(_QWORD *)(a2 + 216));
    return 0LL;
  }
  *(_OWORD *)(v11 + 40) = *(_OWORD *)a4;
  *(_OWORD *)(v11 + 56) = *((_OWORD *)a4 + 1);
  *(_OWORD *)(v11 + 72) = *((_OWORD *)a4 + 2);
  *(_OWORD *)(v11 + 88) = *((_OWORD *)a4 + 3);
  v14 = Win32AllocPoolNonPaged(10 * (unsigned int)*((unsigned __int16 *)v11 + 22), 0x70707352u);
  *((_QWORD *)v13 + 3) = v14;
  WPP_RECORDER_SF_q(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x2Eu,
    (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids,
    v14);
  if ( !*((_QWORD *)v13 + 3) )
  {
    LODWORD(v33) = *((unsigned __int16 *)v13 + 22);
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0x2Fu,
      (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids,
      v33);
    RIMFreeHidDesc(v13);
    return 0LL;
  }
  *((_QWORD *)v13 + 2) = a3;
  *((_QWORD *)v13 + 13) = *(_QWORD *)a5;
  *((_DWORD *)v13 + 28) = *(_DWORD *)(a5 + 8);
  if ( a4[1] == 13
    && ((v15 = *a4, (unsigned __int16)(v15 - 1) <= 1u)
     || (v16 = (_WORD)v15 == 4, LOWORD(v15) = v15 - 4, v16 || (_WORD)v15 == 1)) )
  {
    EtwTracePointerDeviceArrivalStart(v15);
    v17 = *((_QWORD *)v13 + 13);
    v36 = *((_DWORD *)v13 + 28);
    v35 = v17;
    v18 = RIMCreatePointerDeviceInfo(a1, a2, a3, (__int16 *)a4, a6, a7, (__int64)&v35);
    v19 = *a4;
    if ( v18 >= 0 )
    {
      v16 = (_WORD)v19 == 4;
      LOWORD(v19) = v19 - 4;
      if ( v16 || (_WORD)v19 == 1 )
      {
        RIMConfigurePointerDevice(a1, a2, v13);
        if ( *a4 == 5 )
        {
          if ( !*(_QWORD *)(a2 + 480) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v22);
          ApiSetSetUserPTPEnabledPreference(a2, v13, a1);
        }
      }
    }
    else if ( (_WORD)v19 != 5 || v18 == -1073741808 )
    {
LABEL_15:
      DbgPrintRIM("Ignore (Usage: %x, UsagePage: %x)\n", *a4, a4[1]);
      LODWORD(v34) = *a4;
      LODWORD(v33) = a4[1];
      WPP_RECORDER_SF_DD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v20,
        0x14u,
        0x31u,
        (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids,
        v33,
        v34);
      *((_QWORD *)v13 + 2) = 0LL;
      *(_QWORD *)(a2 + 464) = 0LL;
      RIMFreeHidDesc(v13);
      WPP_RECORDER_SF_q(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x14u,
        0x32u,
        (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids,
        0LL);
      return 0LL;
    }
    v23 = *a4;
    if ( (_WORD)v23 != 1 )
      RIMFindSiblingMouseDevice(v13, v23, a2);
    EtwTracePointerDeviceArrivalStop(v19);
  }
  else
  {
    v24 = *((_OWORD *)a4 + 1);
    v37[0] = *(_OWORD *)a4;
    v25 = *((_OWORD *)a4 + 2);
    v37[1] = v24;
    v26 = *((_OWORD *)a4 + 3);
    v37[2] = v25;
    v37[3] = v26;
    if ( (unsigned int)RIMIsInteractiveCtrl(v37) )
    {
      *(_DWORD *)(a2 + 200) |= 0x100u;
    }
    else if ( (unsigned int)ApiSetInkProcessorIsInkDevice(v28, *a4, v27 + 6) )
    {
      *(_DWORD *)(a2 + 200) |= 0x200u;
    }
    else
    {
      v31 = *(_DWORD *)(a2 + 184);
      if ( (v31 & 0x2000) != 0 )
      {
        if ( (v31 & 0x4000) == 0 )
          goto LABEL_15;
        if ( a4[1] != 1 || *a4 != 238 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29);
        if ( (int)RIMCreateHidKeyboardDeviceInfo(a1, a2, a3, a4) < 0 )
          goto LABEL_15;
      }
      else if ( ((unsigned int)RimDeviceTypeToRimInputType(a2, *(unsigned __int8 *)(a2 + 48)) & *(_DWORD *)(a1 + 76)) == 0
             || *(_DWORD *)(a1 + 80) && (v32 & 0x4000) == 0 )
      {
        goto LABEL_15;
      }
    }
  }
  WPP_RECORDER_SF_q(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x30u,
    (__int64)&WPP_fd8d4c756ba23246590421fce8ae1851_Traceguids,
    v13);
  return v13;
}
