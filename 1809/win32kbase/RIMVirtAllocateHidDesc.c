/*
 * XREFs of RIMVirtAllocateHidDesc @ 0x1C011BD08
 * Callers:
 *     RIMVirtCreateHidDesc @ 0x1C011C038 (RIMVirtCreateHidDesc.c)
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
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0119644 (RIMVirtCreatePointerDeviceInfo.c)
 */

__int64 __fastcall RIMVirtAllocateHidDesc(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        __int64 a6)
{
  char *v10; // rax
  __int64 v11; // rsi
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int16 v18; // r9
  struct _MCGEN_TRACE_CONTEXT *v19; // rcx
  bool v20; // cf
  __int64 v21; // r8
  int PointerDeviceInfo; // eax
  struct _MCGEN_TRACE_CONTEXT *v23; // rcx
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int64 v27; // r8
  unsigned __int16 v28; // r9
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // [rsp+20h] [rbp-78h]
  __int64 v34; // [rsp+28h] [rbp-70h]
  _OWORD v35[4]; // [rsp+40h] [rbp-58h] BYREF

  if ( a3 )
  {
    if ( !a4[2] )
    {
      WPP_RECORDER_SF_DD(a4[1], a2, 0x14u, 0x45u, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids, a4[1], *a4);
      return 0LL;
    }
    v10 = (char *)Win32AllocPoolZInit(0x78uLL, 0x44687352u);
    v11 = (__int64)v10;
    if ( !v10 )
    {
      WPP_RECORDER_SF_S(
        gRimLog,
        3u,
        0x14u,
        0x46u,
        (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids,
        *(const struct _MCGEN_TRACE_CONTEXT **)(a2 + 216));
      return 0LL;
    }
    v12 = *((_OWORD *)a4 + 1);
    *(_OWORD *)(v10 + 40) = *(_OWORD *)a4;
    v13 = *((_OWORD *)a4 + 2);
    *(_OWORD *)(v10 + 56) = v12;
    v14 = *((_OWORD *)a4 + 3);
    *(_OWORD *)(v10 + 72) = v13;
    *(_OWORD *)(v10 + 88) = v14;
    v15 = Win32AllocPoolNonPaged(10LL * *((unsigned __int16 *)v10 + 22), 0x70707352u);
    *(_QWORD *)(v11 + 24) = v15;
    HIDWORD(v34) = HIDWORD(v15);
    WPP_RECORDER_SF_q(gRimLog, 3u, 0x15u, 0x47u, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids);
    if ( !*(_QWORD *)(v11 + 24) )
    {
      LODWORD(v34) = *(unsigned __int16 *)(v11 + 44);
      WPP_RECORDER_SF_d(gRimLog, 3u, 0x14u, 0x48u, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids, v34);
      RIMFreeHidDesc(v11, v16, v17);
      return 0LL;
    }
    v18 = a4[1];
    *(_QWORD *)(v11 + 16) = a3;
    *(_QWORD *)(v11 + 104) = *(_QWORD *)a5;
    *(_DWORD *)(v11 + 112) = *(_DWORD *)(a5 + 8);
    if ( v18 == 13
      && ((v19 = (struct _MCGEN_TRACE_CONTEXT *)*a4, (unsigned __int16)((_WORD)v19 - 1) <= 1u)
       || (v20 = (_WORD)v19 == 4, LOWORD(v19) = (_WORD)v19 - 4, v20 || (_WORD)v19 == 1)) )
    {
      EtwTracePointerDeviceArrivalStart(v19);
      PointerDeviceInfo = RIMVirtCreatePointerDeviceInfo(a1, a2, v21, (__int16 *)a4, v33, a6);
      if ( PointerDeviceInfo >= 0 || *a4 == 5 && PointerDeviceInfo != -1073741808 )
      {
        EtwTracePointerDeviceArrivalStop(v23);
LABEL_23:
        WPP_RECORDER_SF_q(gRimLog, 3u, 0x15u, 0x49u, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids, v11);
        return v11;
      }
    }
    else
    {
      v24 = *((_OWORD *)a4 + 1);
      v35[0] = *(_OWORD *)a4;
      v25 = *((_OWORD *)a4 + 2);
      v35[1] = v24;
      v26 = *((_OWORD *)a4 + 3);
      v35[2] = v25;
      v35[3] = v26;
      if ( (unsigned int)RIMIsInteractiveCtrl(v35) )
      {
        *(_DWORD *)(a2 + 200) |= 0x100u;
        goto LABEL_23;
      }
      if ( (unsigned int)ApiSetInkProcessorIsInkDevice(v28, *a4, v27 + 6) )
      {
        *(_DWORD *)(a2 + 200) |= 0x200u;
        goto LABEL_23;
      }
      if ( ((unsigned int)RimDeviceTypeToRimInputType(a2, *(unsigned __int8 *)(a2 + 48)) & *(_DWORD *)(a1 + 84)) != 0
        && (!*(_DWORD *)(a1 + 88) || (*(_DWORD *)(a2 + 184) & 0x4000) != 0) )
      {
        goto LABEL_23;
      }
    }
    DbgPrintRIM("Ignore (Usage: %x, UsagePage: %x)\n", *a4, a4[1]);
    LODWORD(v34) = a4[1];
    WPP_RECORDER_SF_DD(a4[1], v30, 0x15u, 0x4Au, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids, v34, *a4);
    *(_QWORD *)(v11 + 16) = 0LL;
    *(_QWORD *)(a2 + 464) = 0LL;
    RIMFreeHidDesc(v11, v31, v32);
    WPP_RECORDER_SF_q(gRimLog, 3u, 0x15u, 0x4Bu, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids, 0LL);
    return 0LL;
  }
  WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x44u, (__int64)&WPP_270250005a1833be05ae343dfa115697_Traceguids);
  return 0LL;
}
