/*
 * XREFs of RIMVirtAllocateHidDesc @ 0x1C0144678
 * Callers:
 *     RIMVirtCreateHidDesc @ 0x1C0144A3C (RIMVirtCreateHidDesc.c)
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
 *     ApiSetInkProcessorIsInkDevice @ 0x1C00A17C4 (ApiSetInkProcessorIsInkDevice.c)
 *     RIMIsInteractiveCtrl @ 0x1C00A859C (RIMIsInteractiveCtrl.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0141E50 (RIMVirtCreatePointerDeviceInfo.c)
 *     ApiSetEtwTracePointerDeviceArrivalStart @ 0x1C019EC88 (ApiSetEtwTracePointerDeviceArrivalStart.c)
 *     ApiSetEtwTracePointerDeviceArrivalStop @ 0x1C019ED18 (ApiSetEtwTracePointerDeviceArrivalStop.c)
 */

__int64 __fastcall RIMVirtAllocateHidDesc(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // r14
  char *v10; // rax
  int v11; // edx
  __int64 v12; // rbp
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned __int16 v19; // r9
  __int64 v20; // r8
  int PointerDeviceInfo; // eax
  int v22; // edx
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int64 v26; // r8
  unsigned __int16 v27; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  int v31; // edx
  __int64 v32; // [rsp+20h] [rbp-88h]
  _OWORD v33[4]; // [rsp+40h] [rbp-68h] BYREF

  v8 = a2;
  if ( !a3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 71, (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids);
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
        72,
        (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids,
        a4[1],
        *a4);
    }
    return 0LL;
  }
  v10 = (char *)Win32AllocPoolZInit(0x78uLL, 1147695954LL);
  v12 = (__int64)v10;
  if ( !v10 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 3;
      WPP_RECORDER_SF_S(
        (_DWORD)gRimLog,
        v11,
        1,
        73,
        (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids,
        *(_QWORD *)(v8 + 216));
    }
    return 0LL;
  }
  v13 = *((_OWORD *)a4 + 1);
  *(_OWORD *)(v10 + 40) = *(_OWORD *)a4;
  v14 = *((_OWORD *)a4 + 2);
  *(_OWORD *)(v10 + 56) = v13;
  v15 = *((_OWORD *)a4 + 3);
  *(_OWORD *)(v10 + 72) = v14;
  *(_OWORD *)(v10 + 88) = v15;
  v16 = Win32AllocPoolNonPaged(10LL * *((unsigned __int16 *)v10 + 22), 0x70707352u);
  *(_QWORD *)(v12 + 24) = v16;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v17) = 4;
    WPP_RECORDER_SF_q((_DWORD)gRimLog, v17, 1, 74, (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids, v16);
    v16 = *(_QWORD *)(v12 + 24);
  }
  if ( !v16 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = 3;
      WPP_RECORDER_SF_D(
        (_DWORD)gRimLog,
        v17,
        1,
        75,
        (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids,
        *(_WORD *)(v12 + 44));
    }
    RIMFreeHidDesc(v12, v17, v18);
    return 0LL;
  }
  v19 = a4[1];
  *(_QWORD *)(v12 + 16) = a3;
  *(_QWORD *)(v12 + 104) = *(_QWORD *)a5;
  *(_DWORD *)(v12 + 112) = *(_DWORD *)(a5 + 8);
  if ( v19 != 13 || (unsigned __int16)(*a4 - 1) > 1u && (unsigned __int16)(*a4 - 4) > 1u )
  {
    v23 = *((_OWORD *)a4 + 1);
    v33[0] = *(_OWORD *)a4;
    v24 = *((_OWORD *)a4 + 2);
    v33[1] = v23;
    v25 = *((_OWORD *)a4 + 3);
    v33[2] = v24;
    v33[3] = v25;
    if ( (unsigned int)RIMIsInteractiveCtrl(v33) )
    {
      *(_DWORD *)(v8 + 200) |= 0x100u;
      goto LABEL_30;
    }
    if ( (unsigned int)ApiSetInkProcessorIsInkDevice(v27, *a4, v26 + 6) )
    {
      *(_DWORD *)(v8 + 200) |= 0x200u;
      goto LABEL_30;
    }
    if ( ((unsigned int)RimDeviceTypeToRimInputType(v8, *(unsigned __int8 *)(v8 + 48)) & *(_DWORD *)(a1 + 84)) != 0
      && (!*(_DWORD *)(a1 + 88) || (*(_DWORD *)(v8 + 184) & 0x4000) != 0) )
    {
      goto LABEL_30;
    }
LABEL_33:
    DbgPrintWarning("Ignore (Usage: %x, UsagePage: %x)\n", *a4, a4[1]);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v29) = 4;
      WPP_RECORDER_SF_DD(
        (_DWORD)gRimLog,
        v29,
        1,
        77,
        (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids,
        a4[1],
        *a4);
    }
    *(_QWORD *)(v12 + 16) = 0LL;
    *(_QWORD *)(v8 + 464) = 0LL;
    RIMFreeHidDesc(v12, v29, v30);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v31) = 4;
      WPP_RECORDER_SF_q((_DWORD)gRimLog, v31, 1, 78, (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids, 0);
    }
    return 0LL;
  }
  ApiSetEtwTracePointerDeviceArrivalStart();
  PointerDeviceInfo = RIMVirtCreatePointerDeviceInfo(a1, v8, v20, (__int16 *)a4, v32, a6);
  if ( PointerDeviceInfo < 0 && (*a4 != 5 || PointerDeviceInfo == -1073741808) )
    goto LABEL_33;
  ApiSetEtwTracePointerDeviceArrivalStop();
LABEL_30:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v22) = 4;
    WPP_RECORDER_SF_q((_DWORD)gRimLog, v22, 1, 76, (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids, v12);
  }
  return v12;
}
