/*
 * XREFs of Endpoint_TransferEventHandler @ 0x1C0018798
 * Callers:
 *     UsbDevice_TransferEventHandler @ 0x1C0036FF0 (UsbDevice_TransferEventHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_ddi @ 0x1C0002C64 (WPP_RECORDER_SF_ddi.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C00093F0 (WPP_RECORDER_SF_ddL.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000C5B4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C000DAAC (Controller_ReportFatalError.c)
 *     Endpoint_HaltedCompletionCode @ 0x1C00161B8 (Endpoint_HaltedCompletionCode.c)
 *     Endpoint_Stream_IsTransferEventLikelyDuplicate @ 0x1C00185B8 (Endpoint_Stream_IsTransferEventLikelyDuplicate.c)
 *     Endpoint_UnhandledCompletionCode @ 0x1C0019FF8 (Endpoint_UnhandledCompletionCode.c)
 *     WPP_RECORDER_SF_ddqL @ 0x1C001A624 (WPP_RECORDER_SF_ddqL.c)
 *     TR_TransferEventHandler @ 0x1C002516C (TR_TransferEventHandler.c)
 *     ESM_AddEvent @ 0x1C003F694 (ESM_AddEvent.c)
 */

void __fastcall Endpoint_TransferEventHandler(__int64 a1, __m128i **a2, char a3)
{
  int v6; // edx
  __int64 v7; // r8
  int v8; // r8d
  signed __int64 v9; // rcx
  __m128i *v10; // rbp
  int v11; // r9d
  __int64 v12; // rax
  int v13; // esi
  __int64 v14; // r8
  unsigned __int16 v15; // r9
  __int32 v16; // edx
  const char *v17; // rax
  int v18; // [rsp+20h] [rbp-58h]
  char v19; // [rsp+88h] [rbp+10h] BYREF

  if ( (_mm_srli_si128((*a2)[17], 8).m128i_u8[0] & 4) != 0
    && *(_BYTE *)(a1 + 11) == 2
    && (*(_DWORD *)(a1 + 12) & 4) == 0 )
  {
    WPP_RECORDER_SF_ddqL((unsigned int)a2[10], (_DWORD)a2, a3, 86);
    return;
  }
  if ( (unsigned __int8)Endpoint_UnhandledCompletionCode(a2, *(unsigned __int8 *)(a1 + 11)) )
  {
    WPP_RECORDER_SF_ddL(
      (__int64)a2[10],
      2u,
      0xDu,
      0x57u,
      (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
      a2[2][8].m128i_u8[7],
      *((_DWORD *)a2 + 36),
      v6);
    Controller_HwVerifierBreakIfEnabled(
      *a2,
      (__int64)a2[1],
      (__int64)a2[3],
      2048LL,
      "Unrecognized completion code in Transfer Event TRB",
      0LL,
      (__int64 *)a2 + 23);
    v8 = 4112;
LABEL_7:
    Controller_ReportFatalError((__int64)*a2, 2, v8, (__int64)a2[2], (__int64)a2, 0LL);
    return;
  }
  if ( !*((_BYTE *)a2 + 37) )
  {
    LOBYTE(v7) = a3;
    TR_TransferEventHandler(a1, a2[11], v7);
    return;
  }
  v9 = *(_QWORD *)a1;
  v10 = a2[17];
  if ( !*(_QWORD *)a1 )
  {
    v11 = 88;
LABEL_15:
    WPP_RECORDER_SF_ddqL((unsigned int)a2[10], v6, v7, v11);
    goto LABEL_34;
  }
  v12 = v10[2].m128i_i64[0];
  v7 = *(_QWORD *)(v12 + 24);
  if ( v9 >= v7 && v9 < v7 + *(unsigned int *)(v12 + 44) )
  {
    v11 = 89;
    goto LABEL_15;
  }
  v13 = 1;
  if ( v10->m128i_i32[2] )
  {
    while ( 1 )
    {
      LOBYTE(v7) = a3;
      if ( (unsigned __int8)TR_TransferEventHandler(a1, a2[17][3].m128i_i64[13 * (unsigned int)(v13 - 1)], v7) )
        break;
      if ( (unsigned int)++v13 > v10->m128i_i32[2] )
        goto LABEL_19;
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_ddL(
        (__int64)a2[10],
        5u,
        0xDu,
        0x5Au,
        (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
        a2[2][8].m128i_u8[7],
        *((_DWORD *)a2 + 36),
        v13 + 1);
    return;
  }
LABEL_19:
  if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
  {
    WPP_RECORDER_SF_ddi((__int64)a2[10], 2u, v7, 0x5Bu, v18);
    v8 = 4126;
    goto LABEL_7;
  }
  if ( (unsigned __int8)(*(_BYTE *)(a1 + 11) - 26) > 2u )
  {
    if ( !Endpoint_Stream_IsTransferEventLikelyDuplicate((_QWORD *)a1, (__int64)a2, &v19) )
    {
      WPP_RECORDER_SF_ddi((__int64)a2[10], 2u, v14, 0x60u, v18);
      v8 = 4127;
      goto LABEL_7;
    }
    if ( ((*a2)[17].m128i_i64[0] & 0x4000000000LL) != 0 )
    {
      v15 = 93;
    }
    else
    {
      if ( !v19 || (unsigned __int8)(*(_BYTE *)(a1 + 11) - 26) > 2u )
      {
        WPP_RECORDER_SF_ddi((__int64)a2[10], 2u, v14, 0x5Fu, v18);
        v8 = 4128;
        goto LABEL_7;
      }
      v15 = 94;
    }
    WPP_RECORDER_SF_ddi((__int64)a2[10], 3u, v14, v15, v18);
    return;
  }
  WPP_RECORDER_SF_dd(
    (__int64)a2[10],
    2u,
    0xDu,
    0x5Cu,
    (__int64)&WPP_cc93d32a3d3f360a569d7e7ab2fec42f_Traceguids,
    a2[2][8].m128i_u8[7],
    *((_DWORD *)a2 + 36));
LABEL_34:
  if ( Endpoint_HaltedCompletionCode(a2, *(unsigned __int8 *)(a1 + 11)) )
  {
    _m_prefetchw(a2 + 4);
    if ( (_InterlockedOr((volatile signed __int32 *)a2 + 8, 0x20u) & 0x20) != 0 )
    {
      v17 = "Received duplicate Transfer Event TRB with Halted Completion Code";
LABEL_41:
      Controller_HwVerifierBreakIfEnabled(*a2, (__int64)a2[1], (__int64)a2[3], 0x2000000LL, v17, 0LL, 0LL);
      return;
    }
    a2[17][1].m128i_i32[2] = v16;
    _InterlockedOr((volatile signed __int32 *)a2 + 8, 4u);
LABEL_43:
    ESM_AddEvent(a2 + 36);
    return;
  }
  if ( (unsigned __int8)(v16 - 26) > 2u )
    return;
  _m_prefetchw(a2 + 4);
  if ( (_InterlockedOr((volatile signed __int32 *)a2 + 8, 0x10u) & 0x10) != 0 )
  {
    v17 = "Received duplicate Stopped Transfer Events";
    goto LABEL_41;
  }
  _m_prefetchw(a2 + 4);
  if ( (_InterlockedXor((volatile signed __int32 *)a2 + 8, 8u) & 8) != 0 )
    goto LABEL_43;
}
