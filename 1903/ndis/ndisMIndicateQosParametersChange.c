/*
 * XREFs of ndisMIndicateQosParametersChange @ 0x1C009A8E4
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0015988 (ndisIndicateStatusInternal.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017430 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_LL @ 0x1C001D55C (WPP_RECORDER_SF_LL.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032368 (WPP_RECORDER_SF_D.c)
 *     memcmp @ 0x1C0040FC0 (memcmp.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     WPP_RECORDER_SF_qDqL @ 0x1C00673E0 (WPP_RECORDER_SF_qDqL.c)
 *     ndisValidateQosParameters @ 0x1C0071734 (ndisValidateQosParameters.c)
 *     WPP_RECORDER_SF_LLLLLLLL @ 0x1C0098B40 (WPP_RECORDER_SF_LLLLLLLL.c)
 *     ?NdisTraceLoggingQosOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00C3528 (-NdisTraceLoggingQosOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

char __fastcall ndisMIndicateQosParametersChange(
        struct _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        unsigned __int8 *a3,
        __int64 a4)
{
  unsigned int v4; // r14d
  int v6; // ebp
  _QWORD *v8; // rcx
  int v9; // r9d
  unsigned __int16 v10; // ax
  int v11; // eax
  int v12; // edx
  unsigned int v13; // esi
  __int64 v14; // r15
  __int64 v15; // r12
  UCHAR *v16; // r12
  PVOID PoolWithTag; // r13
  void *v18; // rcx
  unsigned __int16 v19; // r12
  _WORD *v21; // rcx
  int v22; // edx
  int v23; // [rsp+20h] [rbp-78h]
  __int64 v24; // [rsp+30h] [rbp-68h]
  __int64 v25; // [rsp+40h] [rbp-58h]

  v4 = a4;
  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
    WPP_RECORDER_SF_qDqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5u,
      0x18u,
      0xAEu,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)a1,
      a2,
      (char)a3,
      a4);
  if ( !a1->QosHwCapabilities )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v8 = WPP_GLOBAL_Control;
    if ( !*((_WORD *)WPP_GLOBAL_Control + 36) )
      return 0;
    v9 = 175;
    LOBYTE(a2) = 5;
    goto LABEL_45;
  }
  if ( v4 < 0x34 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    if ( *((_WORD *)WPP_GLOBAL_Control + 36) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a2,
        24,
        176,
        (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
        v4);
    }
    goto LABEL_43;
  }
  if ( *a3 != 0xB6 || (v10 = *((_WORD *)a3 + 1), v10 < 0x34u) || a3[1] != 1 || (a4 = v10, v4 < v10) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    if ( *((_WORD *)WPP_GLOBAL_Control + 36) )
      WPP_RECORDER_SF_LLLLLLLL(*((_QWORD *)WPP_GLOBAL_Control + 8), *a3, *((unsigned __int16 *)a3 + 1), a4, v23);
LABEL_43:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = WPP_GLOBAL_Control;
      v9 = 178;
      LOBYTE(a2) = 2;
LABEL_45:
      WPP_RECORDER_SF_(v8[8], a2, 24, v9, (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids);
    }
    return 0;
  }
  LOBYTE(a2) = v6 == 1073873056;
  v11 = ndisValidateQosParameters((__int64)a1, a2, a3, v10, 0LL);
  if ( v11 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v12,
        24,
        179,
        (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
        v11);
    }
    return 0;
  }
  v13 = *((unsigned __int16 *)a3 + 1);
  v14 = 4920LL;
  if ( v6 != 1073873056 )
    v14 = 4936LL;
  v15 = 4928LL;
  if ( v6 != 1073873056 )
    v15 = 4944LL;
  v16 = &a1->Header.Type + v15;
  if ( v13 <= *(_DWORD *)v16 )
  {
    v21 = *(_WORD **)(&a1->Header.Type + v14);
    v19 = *((_WORD *)a3 + 1);
    if ( v21[1] == (_WORD)v13 && !memcmp(v21, a3, *((unsigned __int16 *)a3 + 1)) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v22) = 4;
        WPP_RECORDER_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v22,
          24,
          181,
          (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
          v6);
      }
      return 0;
    }
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, *((unsigned __int16 *)a3 + 1), 0x7371444Eu);
    if ( !PoolWithTag )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v24) = v6;
        WPP_RECORDER_SF_LL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x18u,
          0xB4u,
          (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
          v13,
          v24);
      }
      return 0;
    }
    v18 = *(void **)(&a1->Header.Type + v14);
    if ( v18 )
      ExFreePoolWithTag(v18, 0);
    *(_QWORD *)(&a1->Header.Type + v14) = PoolWithTag;
    *(_DWORD *)v16 = v13;
    v19 = *((_WORD *)a3 + 1);
  }
  memmove(*(void **)(&a1->Header.Type + v14), a3, v19);
  if ( v6 == 1073873056 )
    NdisTraceLoggingQosOperationalStatus(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
  {
    LODWORD(v25) = v4;
    WPP_RECORDER_SF_qDqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5u,
      0x18u,
      0xB6u,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)a1,
      v6,
      (char)a3,
      v25);
  }
  return 1;
}
