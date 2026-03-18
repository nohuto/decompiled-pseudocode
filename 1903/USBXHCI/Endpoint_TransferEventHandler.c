/*
 * XREFs of Endpoint_TransferEventHandler @ 0x1C001B8E8
 * Callers:
 *     UsbDevice_TransferEventHandler @ 0x1C003C24C (UsbDevice_TransferEventHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_ddi @ 0x1C000310C (WPP_RECORDER_SF_ddi.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000B478 (WPP_RECORDER_SF_ddL.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000E974 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0010108 (Controller_ReportFatalError.c)
 *     Endpoint_HaltedCompletionCode @ 0x1C0019058 (Endpoint_HaltedCompletionCode.c)
 *     Endpoint_Stream_IsTransferEventLikelyDuplicate @ 0x1C001B6E8 (Endpoint_Stream_IsTransferEventLikelyDuplicate.c)
 *     Endpoint_UnhandledCompletionCode @ 0x1C001D394 (Endpoint_UnhandledCompletionCode.c)
 *     WPP_RECORDER_SF_ddqL @ 0x1C001D9E4 (WPP_RECORDER_SF_ddqL.c)
 *     TR_TransferEventHandler @ 0x1C00298BC (TR_TransferEventHandler.c)
 *     ESM_AddEvent @ 0x1C0044E54 (ESM_AddEvent.c)
 */

void __fastcall Endpoint_TransferEventHandler(__int64 a1, __m128i **a2, char a3)
{
  int v6; // edx
  __int64 v7; // r8
  __m128i *v8; // r10
  int v9; // r8d
  __m128i *v10; // rcx
  signed __int64 v11; // rcx
  __m128i *v12; // rbp
  int v13; // r9d
  __int64 v14; // rax
  int v15; // esi
  __int64 v16; // r8
  unsigned __int16 v17; // r9
  __int32 v18; // edx
  const char *v19; // rax
  int v20; // [rsp+20h] [rbp-58h]
  char v21; // [rsp+88h] [rbp+10h] BYREF

  if ( (_mm_srli_si128((*a2)[21], 8).m128i_u8[0] & 4) != 0
    && *(_BYTE *)(a1 + 11) == 2
    && (*(_DWORD *)(a1 + 12) & 4) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddqL((unsigned int)a2[10], (_DWORD)a2, a3, 86);
    return;
  }
  if ( (unsigned __int8)Endpoint_UnhandledCompletionCode(a2, *(unsigned __int8 *)(a1 + 11)) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_ddL(
        v8[4].m128i_i64[1],
        2u,
        0xDu,
        0x57u,
        (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
        a2[2][8].m128i_u8[7],
        *((_DWORD *)a2 + 36),
        v6);
      v8 = *a2;
    }
    Controller_HwVerifierBreakIfEnabled(
      v8,
      (__int64)a2[1],
      (__int64)a2[3],
      2048LL,
      "Unrecognized completion code in Transfer Event TRB",
      0LL,
      (__int64 *)a2 + 23);
    v9 = 4112;
    goto LABEL_10;
  }
  if ( !*((_BYTE *)a2 + 37) )
  {
    LOBYTE(v7) = a3;
    TR_TransferEventHandler(a1, a2[11], v7);
    return;
  }
  v11 = *(_QWORD *)a1;
  v12 = a2[17];
  if ( !*(_QWORD *)a1 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_50;
    v13 = 88;
LABEL_21:
    WPP_RECORDER_SF_ddqL((unsigned int)a2[10], v6, v7, v13);
    goto LABEL_50;
  }
  v14 = v12[2].m128i_i64[0];
  v7 = *(_QWORD *)(v14 + 24);
  if ( v11 >= v7 && v11 < v7 + *(unsigned int *)(v14 + 44) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_50;
    v13 = 89;
    goto LABEL_21;
  }
  v15 = 1;
  if ( !v12->m128i_i32[2] )
  {
LABEL_25:
    if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddi((__int64)a2[10], 2u, v7, 0x5Bu, v20);
      v9 = 4126;
      goto LABEL_10;
    }
    if ( (unsigned __int8)(*(_BYTE *)(a1 + 11) - 26) > 2u )
    {
      if ( Endpoint_Stream_IsTransferEventLikelyDuplicate((_QWORD *)a1, (__int64)a2, &v21) )
      {
        v10 = *a2;
        if ( ((*a2)[21].m128i_i64[0] & 0x4000000000LL) != 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return;
          v17 = 93;
        }
        else
        {
          if ( !v21 || (unsigned __int8)(*(_BYTE *)(a1 + 11) - 26) > 2u )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              WPP_RECORDER_SF_ddi((__int64)a2[10], 2u, v16, 0x5Fu, v20);
              v10 = *a2;
            }
            v9 = 4128;
            goto LABEL_11;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return;
          v17 = 94;
        }
        WPP_RECORDER_SF_ddi((__int64)a2[10], 3u, v16, v17, v20);
        return;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddi((__int64)a2[10], 2u, v16, 0x60u, v20);
      v9 = 4127;
LABEL_10:
      v10 = *a2;
LABEL_11:
      Controller_ReportFatalError((__int64)v10, 2, v9, (__int64)a2[2], (__int64)a2, 0LL);
      return;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dd(
        (__int64)a2[10],
        2u,
        0xDu,
        0x5Cu,
        (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
        a2[2][8].m128i_u8[7],
        *((_DWORD *)a2 + 36));
LABEL_50:
    if ( Endpoint_HaltedCompletionCode(a2, *(unsigned __int8 *)(a1 + 11)) )
    {
      _m_prefetchw(a2 + 4);
      if ( (_InterlockedOr((volatile signed __int32 *)a2 + 8, 0x20u) & 0x20) != 0 )
      {
        v19 = "Received duplicate Transfer Event TRB with Halted Completion Code";
LABEL_57:
        Controller_HwVerifierBreakIfEnabled(*a2, (__int64)a2[1], (__int64)a2[3], 0x2000000LL, v19, 0LL, 0LL);
        return;
      }
      a2[17][1].m128i_i32[2] = v18;
      _InterlockedOr((volatile signed __int32 *)a2 + 8, 4u);
    }
    else
    {
      if ( (unsigned __int8)(v18 - 26) > 2u )
        return;
      _m_prefetchw(a2 + 4);
      if ( (_InterlockedOr((volatile signed __int32 *)a2 + 8, 0x10u) & 0x10) != 0 )
      {
        v19 = "Received duplicate Stopped Transfer Events";
        goto LABEL_57;
      }
      _m_prefetchw(a2 + 4);
      if ( (_InterlockedXor((volatile signed __int32 *)a2 + 8, 8u) & 8) == 0 )
        return;
    }
    ESM_AddEvent(a2 + 36);
    return;
  }
  while ( 1 )
  {
    LOBYTE(v7) = a3;
    if ( (unsigned __int8)TR_TransferEventHandler(a1, a2[17][3].m128i_i64[13 * (unsigned int)(v15 - 1)], v7) )
      break;
    if ( (unsigned int)++v15 > v12->m128i_i32[2] )
      goto LABEL_25;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_ddL(
      (__int64)a2[10],
      5u,
      0xDu,
      0x5Au,
      (__int64)&WPP_c774b641227c31193674b815a53e6fbe_Traceguids,
      a2[2][8].m128i_u8[7],
      *((_DWORD *)a2 + 36),
      v15 + 1);
}
