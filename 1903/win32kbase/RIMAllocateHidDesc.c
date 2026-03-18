/*
 * XREFs of RIMAllocateHidDesc @ 0x1C00AE4FC
 * Callers:
 *     RIMCreateHidDesc @ 0x1C00513AC (RIMCreateHidDesc.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0014870 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_q @ 0x1C0038944 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00519C0 (WPP_RECORDER_SF_DD.c)
 *     ?DbgPrintWarning@@YAXPEADZZ @ 0x1C0051B6C (-DbgPrintWarning@@YAXPEADZZ.c)
 *     Win32AllocPoolNonPaged @ 0x1C0056D40 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_S @ 0x1C006C2CC (WPP_RECORDER_SF_S.c)
 *     RimDeviceTypeToRimInputType @ 0x1C006C978 (RimDeviceTypeToRimInputType.c)
 *     RIMFreeHidDesc @ 0x1C007189C (RIMFreeHidDesc.c)
 *     ?Release@CompositionObject@@QEBA_JXZ @ 0x1C00942F0 (-Release@CompositionObject@@QEBA_JXZ.c)
 *     ApiSetInkProcessorIsInkDevice @ 0x1C00A17C4 (ApiSetInkProcessorIsInkDevice.c)
 *     RIMIsInteractiveCtrl @ 0x1C00A859C (RIMIsInteractiveCtrl.c)
 *     RIMMarkSiblingMouseDevice @ 0x1C00BF5B8 (RIMMarkSiblingMouseDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C013DBB8 (RIMCreatePointerDeviceInfo.c)
 *     RIMConfigurePointerDevice @ 0x1C0142FF0 (RIMConfigurePointerDevice.c)
 *     RIMFindSiblingMouseDevice @ 0x1C01437C0 (RIMFindSiblingMouseDevice.c)
 *     ApiSetEtwTracePointerDeviceArrivalStart @ 0x1C019EC88 (ApiSetEtwTracePointerDeviceArrivalStart.c)
 *     ApiSetEtwTracePointerDeviceArrivalStop @ 0x1C019ED18 (ApiSetEtwTracePointerDeviceArrivalStop.c)
 *     ApiSetSetUserPTPEnabledPreference @ 0x1C01A0FC4 (ApiSetSetUserPTPEnabledPreference.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMAllocateHidDesc(
        __int64 a1,
        __int64 a2,
        CompositionObject *a3,
        unsigned __int16 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  char *v7; // rbx
  __int64 v9; // rbp
  char *v11; // rax
  int v12; // edx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // xmm0_8
  int v19; // eax
  unsigned __int16 v20; // cx
  __int64 v21; // rdx
  __int64 v22; // r8
  int v23; // edx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  CompositionObject *v28; // rbp
  int v29; // edx
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int64 v33; // r8
  unsigned __int16 v34; // r9
  __int64 v35; // [rsp+40h] [rbp-78h] BYREF
  int v36; // [rsp+48h] [rbp-70h]
  _OWORD v37[4]; // [rsp+50h] [rbp-68h] BYREF
  CompositionObject *v38; // [rsp+D0h] [rbp+18h] BYREF

  v38 = a3;
  v7 = 0LL;
  v9 = a2;
  if ( !a3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 46, (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids);
    }
    return 0LL;
  }
  if ( !a4[2] )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_DD(
        (_DWORD)gRimLog,
        a2,
        1,
        47,
        (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids,
        a4[1],
        *a4);
    }
    return 0LL;
  }
  v11 = (char *)Win32AllocPoolZInit(0x78uLL, 1147695954LL);
  v13 = (__int64)v11;
  if ( !v11 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 3;
      WPP_RECORDER_SF_S(
        (_DWORD)gRimLog,
        v12,
        1,
        48,
        (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids,
        *(_QWORD *)(v9 + 216));
    }
    return 0LL;
  }
  *(_OWORD *)(v11 + 40) = *(_OWORD *)a4;
  *(_OWORD *)(v11 + 56) = *((_OWORD *)a4 + 1);
  *(_OWORD *)(v11 + 72) = *((_OWORD *)a4 + 2);
  *(_OWORD *)(v11 + 88) = *((_OWORD *)a4 + 3);
  v14 = Win32AllocPoolNonPaged(10LL * *((unsigned __int16 *)v11 + 22), 0x70707352u);
  *(_QWORD *)(v13 + 24) = v14;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v15) = 4;
    WPP_RECORDER_SF_q((_DWORD)gRimLog, v15, 1, 49, (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids, v14);
    v14 = *(_QWORD *)(v13 + 24);
  }
  if ( !v14 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 3;
      WPP_RECORDER_SF_D(
        (_DWORD)gRimLog,
        v15,
        1,
        50,
        (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids,
        *(_WORD *)(v13 + 44));
    }
    RIMFreeHidDesc(v13, v15, v16);
    return 0LL;
  }
  v17 = a5;
  *(_QWORD *)(v13 + 16) = v38;
  *(_QWORD *)(v13 + 104) = *(_QWORD *)v17;
  *(_DWORD *)(v13 + 112) = *(_DWORD *)(v17 + 8);
  if ( a4[1] == 13 && ((unsigned __int16)(*a4 - 1) <= 1u || (unsigned __int16)(*a4 - 4) <= 1u) )
  {
    ApiSetEtwTracePointerDeviceArrivalStart();
    v18 = *(_QWORD *)(v13 + 104);
    v36 = *(_DWORD *)(v13 + 112);
    v35 = v18;
    v19 = RIMCreatePointerDeviceInfo(a1, v9, v38, a4, a6, a7, &v35);
    v20 = *a4;
    LODWORD(v38) = v19;
    if ( v19 >= 0 )
    {
      if ( (unsigned __int16)(v20 - 4) <= 1u )
      {
        RIMConfigurePointerDevice(a1, v9, v13);
        if ( *a4 == 5 )
        {
          if ( !*(_QWORD *)(v9 + 480) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27);
          ApiSetSetUserPTPEnabledPreference(v9, v13, a1);
        }
        v19 = (int)v38;
      }
    }
    else if ( v20 != 5 || v19 == -1073741808 )
    {
LABEL_22:
      DbgPrintWarning("Ignore (Usage: %x, UsagePage: %x)\n", *a4, a4[1]);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v21) = 4;
        WPP_RECORDER_SF_DD(
          (_DWORD)gRimLog,
          v21,
          1,
          52,
          (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids,
          a4[1],
          *a4);
      }
      *(_QWORD *)(v13 + 16) = 0LL;
      *(_QWORD *)(v9 + 464) = 0LL;
      RIMFreeHidDesc(v13, v21, v22);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v23) = 4;
        WPP_RECORDER_SF_q((_DWORD)gRimLog, v23, 1, 53, (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids, 0);
      }
      return 0LL;
    }
    v38 = 0LL;
    if ( v19 >= 0 && (unsigned int)RIMFindSiblingMouseDevice(v13, v9, &v38) )
    {
      v28 = v38;
      if ( v38 )
        v7 = (char *)v38 + 88;
      RIMMarkSiblingMouseDevice(v7, *a4);
      CompositionObject::Release(v28);
    }
    ApiSetEtwTracePointerDeviceArrivalStop();
  }
  else
  {
    v30 = *((_OWORD *)a4 + 1);
    v37[0] = *(_OWORD *)a4;
    v31 = *((_OWORD *)a4 + 2);
    v37[1] = v30;
    v32 = *((_OWORD *)a4 + 3);
    v37[2] = v31;
    v37[3] = v32;
    if ( (unsigned int)RIMIsInteractiveCtrl(v37) )
    {
      *(_DWORD *)(v9 + 200) |= 0x100u;
    }
    else if ( (unsigned int)ApiSetInkProcessorIsInkDevice(v34, *a4, v33 + 6) )
    {
      *(_DWORD *)(v9 + 200) |= 0x200u;
    }
    else if ( ((unsigned int)RimDeviceTypeToRimInputType(v9, *(unsigned __int8 *)(v9 + 48)) & *(_DWORD *)(a1 + 84)) == 0
           || *(_DWORD *)(a1 + 88) && (*(_DWORD *)(v9 + 184) & 0x4000) == 0 )
    {
      goto LABEL_22;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v29) = 4;
    WPP_RECORDER_SF_q((_DWORD)gRimLog, v29, 1, 51, (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids, v13);
  }
  return v13;
}
