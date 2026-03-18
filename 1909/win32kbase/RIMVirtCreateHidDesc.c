/*
 * XREFs of RIMVirtCreateHidDesc @ 0x1C01423CC
 * Callers:
 *     RIMVirtCreateDev @ 0x1C014B864 (RIMVirtCreateDev.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C0010990 (Win32AllocPoolNonPaged.c)
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C00378D4 (WPP_RECORDER_SF_q.c)
 *     RIMSearchHidTLCInfo @ 0x1C005AFD4 (RIMSearchHidTLCInfo.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C005B68C (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMFreeHidDesc @ 0x1C005C3E0 (RIMFreeHidDesc.c)
 *     WPP_RECORDER_SF_DD @ 0x1C005CA94 (WPP_RECORDER_SF_DD.c)
 *     ?DbgPrintWarning@@YAXPEADZZ @ 0x1C005CC40 (-DbgPrintWarning@@YAXPEADZZ.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C005CF44 (WPP_RECORDER_SF_qDD.c)
 *     ApiSetInkProcessorIsInkDevice @ 0x1C005D4C8 (ApiSetInkProcessorIsInkDevice.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 *     fromIV_HIDP_CAPS @ 0x1C01405D8 (fromIV_HIDP_CAPS.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0142008 (RIMVirtAllocateHidDesc.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C0142918 (WPP_RECORDER_SF_DDq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMVirtCreateHidDesc(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 HidDesc; // r12
  __int64 v5; // r15
  int v7; // edx
  __int128 *v8; // rax
  size_t v9; // r8
  const void *v10; // rdx
  __int128 v11; // xmm2
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  void *v14; // r9
  int v15; // edx
  int v16; // edx
  unsigned __int16 v17; // di
  unsigned int v18; // ecx
  __int64 v19; // rax
  int v20; // edx
  int v21; // r9d
  __int64 v22; // rbx
  int v23; // edx
  int v24; // edx
  unsigned __int16 v25; // di
  unsigned __int16 v26; // si
  _DWORD *v27; // rbx
  int v28; // r8d
  __int64 v30; // rdx
  __int64 v31; // r8
  char v32; // [rsp+28h] [rbp-B1h]
  char v33; // [rsp+30h] [rbp-A9h]
  __int64 v34; // [rsp+40h] [rbp-99h]
  __int64 v35; // [rsp+48h] [rbp-91h]
  int v36; // [rsp+50h] [rbp-89h]
  _OWORD v37[4]; // [rsp+60h] [rbp-79h] BYREF
  _BYTE v38[64]; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v39; // [rsp+E0h] [rbp+7h] BYREF
  int v40; // [rsp+E8h] [rbp+Fh]

  HidDesc = 0LL;
  v39 = 0LL;
  v40 = 0;
  v5 = a2;
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 48) - 1) > 1u )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 79, (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids);
  }
  v34 = Win32AllocPoolNonPaged(*(unsigned int *)(a3 + 168), 0x70707352u);
  if ( !v34 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v7, 1, 80, (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids);
    }
    return HidDesc;
  }
  LODWORD(v35) = *(_DWORD *)(a3 + 168);
  BYTE4(v35) = *(_DWORD *)(a3 + 172) != 0;
  BYTE5(v35) = *(_BYTE *)(a3 + 176);
  HIWORD(v35) = *(_WORD *)(a3 + 180);
  LOWORD(v36) = *(_WORD *)(a3 + 184);
  HIWORD(v36) = *(_WORD *)(a3 + 188);
  v40 = v36;
  v39 = v35;
  v8 = (__int128 *)fromIV_HIDP_CAPS((__int64)v38, a3 + 72);
  v9 = *(unsigned int *)(a3 + 168);
  v10 = *(const void **)(a3 + 192);
  v11 = *v8;
  v12 = v8[2];
  v37[1] = v8[1];
  v13 = v8[3];
  v37[0] = v11;
  v37[3] = v13;
  v37[2] = v12;
  memmove(v14, v10, v9);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = LOWORD(v37[0]);
    LOBYTE(v15) = 4;
    WPP_RECORDER_SF_DD(
      (_DWORD)gRimLog,
      v15,
      1,
      81,
      (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids,
      SBYTE2(v37[0]),
      v37[0]);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_DD(
        (_DWORD)gRimLog,
        v16,
        1,
        82,
        (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids,
        SBYTE4(v37[0]),
        SBYTE8(v37[0]));
    }
  }
  v17 = WORD1(v37[0]);
  DbgPrintWarning("Found (Usage: %x, UsagePage: %x)\n", (unsigned __int16)v11, WORD1(v37[0]));
  v18 = *(_DWORD *)(a1 + 88);
  if ( v18 )
  {
    v19 = 0LL;
    while ( *(_DWORD *)(*(_QWORD *)(a1 + 96) + 4 * v19) != __PAIR32__(WORD1(v37[0]), v11) )
    {
      v20 = 1;
      v19 = (unsigned int)(v19 + 1);
      if ( (unsigned int)v19 >= v18 )
        goto LABEL_18;
    }
    *(_DWORD *)(v5 + 184) |= 0x4000u;
  }
  v20 = 1;
LABEL_18:
  if ( (*(_DWORD *)(v5 + 184) & 0x4000) == 0 && v17 == 1 )
  {
    if ( (_WORD)v11
      && ((unsigned __int16)v11 <= 2u
       || (unsigned __int16)v11 > 5u && ((unsigned __int16)v11 <= 7u || (unsigned __int16)v11 == 128)) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_28:
        v22 = v34;
LABEL_29:
        Win32FreePool(v22);
        return HidDesc;
      }
      v33 = v11;
      v32 = 1;
      v21 = 83;
      LOBYTE(v20) = 4;
LABEL_27:
      WPP_RECORDER_SF_DD(
        (_DWORD)gRimLog,
        v20,
        1,
        v21,
        (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids,
        v32,
        v33);
      goto LABEL_28;
    }
LABEL_36:
    if ( (_WORD)v11 == 14 && (*(_DWORD *)(a1 + 84) & 0x10) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_28;
      v33 = 14;
      v21 = 87;
      v32 = 1;
LABEL_34:
      LOBYTE(v20) = 3;
      goto LABEL_27;
    }
    goto LABEL_40;
  }
  if ( v17 != 13 )
  {
    if ( v17 != 1 )
      goto LABEL_40;
    goto LABEL_36;
  }
  if ( (_WORD)v11 == 14 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_28;
    v33 = 14;
    v21 = 86;
    v32 = 13;
    goto LABEL_34;
  }
LABEL_40:
  if ( (unsigned int)ApiSetInkProcessorIsInkDevice(v17, v11, (__int64)&v39 + 6) && (*(_DWORD *)(a1 + 84) & 4) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v23) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v23, 1, 88, (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids);
    }
    goto LABEL_28;
  }
  v22 = v34;
  HidDesc = RIMVirtAllocateHidDesc(a1, v5, v34, (unsigned __int16 *)v37, (__int64)&v39, a3);
  if ( !HidDesc )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v24 = WORD1(v37[0]);
      LOBYTE(v24) = 3;
      WPP_RECORDER_SF_DD(
        (_DWORD)gRimLog,
        v24,
        1,
        89,
        (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids,
        SBYTE2(v37[0]),
        v37[0]);
    }
    goto LABEL_29;
  }
  v25 = v37[0];
  v26 = WORD1(v37[0]);
  v27 = RIMSearchHidTLCInfo(SWORD1(v37[0]), v37[0]);
  if ( v27 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDq(
        v25,
        v26,
        v28,
        90,
        (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids,
        v26,
        v25,
        (char)v27);
LABEL_50:
    ++v27[5];
    *(_QWORD *)(v5 + 472) = v27;
    return HidDesc;
  }
  v27 = RIMAllocateAndLinkHidTLCInfo(v26, v25);
  if ( v27 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v30) = 4;
      WPP_RECORDER_SF_qDD(
        (_DWORD)gRimLog,
        v30,
        1,
        92,
        (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids,
        (char)v27,
        v26,
        v25);
    }
    goto LABEL_50;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v30) = 3;
    WPP_RECORDER_SF_q((_DWORD)gRimLog, v30, 1, 91, (__int64)&WPP_9fa14f927df6353817215e33bf2b608e_Traceguids, a1);
  }
  RIMFreeHidDesc(HidDesc, v30, v31);
  return 0LL;
}
