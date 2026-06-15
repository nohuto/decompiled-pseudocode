/*
 * XREFs of ?AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@W4AddTimestampMessageOptions@1@@Z @ 0x140056120
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x14002BF24 (WPP_SF_D.c)
 *     ?IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NII@Z @ 0x140052EA8 (-IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NII@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140053DD8 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?CanCoalesceTimestampMessages@CCrossProcessServerOutputEndpoint@@IEAAIIW4EndpointMessageID@@IPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@@Z @ 0x14005654C (-CanCoalesceTimestampMessages@CCrossProcessServerOutputEndpoint@@IEAAIIW4EndpointMessageID@@IPEA.c)
 *     McTemplateU0pqqqx @ 0x140056DC8 (McTemplateU0pqqqx.c)
 *     McTemplateU0pqxxxxx @ 0x140056E74 (McTemplateU0pqxxxxx.c)
 *     ?AEWMILOG_DROP@@YAXKPEAXE_K1@Z @ 0x14006013C (-AEWMILOG_DROP@@YAXKPEAXE_K1@Z.c)
 */

__int64 __fastcall CCrossProcessServerOutputEndpoint::AddTimestampMessage(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        float *a5,
        int a6,
        int a7)
{
  unsigned int v7; // r13d
  unsigned int v9; // ebx
  unsigned int v11; // r14d
  unsigned __int64 v12; // rsi
  unsigned int v13; // ebp
  CCrossProcessBaseEndpoint *v14; // rcx
  unsigned __int8 v15; // r8
  int v16; // r9d
  __int32 v17; // ebp
  unsigned int v18; // edx
  unsigned int v19; // eax
  unsigned int v20; // esi
  int CanCoalesceTimestampMessages; // eax
  int v22; // r15d
  BOOL v23; // r8d
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  __int64 v26; // rdx
  double v27; // xmm1_8
  __int64 v28; // rax
  double v29; // xmm0_8
  __int64 v30; // rdx
  __int64 v31; // rcx
  double v32; // xmm0_8
  __int64 v33; // rax
  unsigned __int64 v34; // rsi
  __int64 v35; // rax
  unsigned int v36; // r13d
  CCrossProcessBaseEndpoint *v37; // rcx
  __int32 v38; // r8d
  __int64 v39; // rax
  __int64 v40; // rcx
  unsigned __int64 v41; // rdx
  __int32 v42; // edx
  char v44; // [rsp+50h] [rbp-58h]
  unsigned int v45; // [rsp+54h] [rbp-54h]
  int v46; // [rsp+58h] [rbp-50h]
  unsigned int v47; // [rsp+B0h] [rbp+8h]

  v7 = a3;
  v9 = 0;
  v44 = 0;
  v11 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 4LL);
  v12 = **(unsigned int **)(a1 + 72);
  v13 = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 132LL);
  v47 = v13;
  if ( !CCrossProcessBaseEndpoint::IsValidQueueIndex((CCrossProcessBaseEndpoint *)a1, v11, v13)
    || !CCrossProcessBaseEndpoint::IsValidQueueIndex(v14, v12, v13) )
  {
    goto LABEL_37;
  }
  v17 = 0;
  v18 = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 132LL);
  if ( v11 + 1 != v18 )
    v17 = v11 + 1;
  if ( v17 == (_DWORD)v12 )
  {
    AEWMILOG_DROP(v11 + 1, (void *)a1, v15, v11, v12);
    v9 = -2005139385;
    goto LABEL_38;
  }
  if ( a7 != 1 || v18 <= 5 )
  {
    v22 = a7 != 1 ? 4 : 0;
    if ( v18 <= 5 )
      v22 |= 8u;
    goto LABEL_21;
  }
  if ( (unsigned int)v12 > v11 )
    v19 = v11 + v18 - v12;
  else
    v19 = v11 - v12;
  if ( v19 < 5 )
  {
    v22 = 2;
LABEL_21:
    v23 = 0;
    goto LABEL_22;
  }
  v20 = v11 - 1;
  if ( !v11 )
    v20 = v18 - 1;
  CanCoalesceTimestampMessages = CCrossProcessServerOutputEndpoint::CanCoalesceTimestampMessages(
                                   a1,
                                   v20,
                                   a2,
                                   v7,
                                   a5,
                                   a6);
  v44 = CanCoalesceTimestampMessages;
  if ( !CanCoalesceTimestampMessages )
  {
    v17 = v11;
    v11 = v20;
  }
  v7 = a3;
  v22 = CanCoalesceTimestampMessages != 0;
  v23 = CanCoalesceTimestampMessages == 0;
LABEL_22:
  v24 = *(_QWORD *)a5;
  v25 = *((_QWORD *)a5 + 1);
  v26 = *((_QWORD *)a5 + 3);
  v27 = a5[8];
  if ( *(_QWORD *)a5 < v25 )
  {
    v31 = v25 - v24;
    v32 = (double)(int)v31;
    if ( v31 < 0 )
      v32 = v32 + 1.844674407370955e19;
    v30 = (unsigned int)(int)(v32 * 10000000.0 / v27 + 0.5) + v26;
  }
  else
  {
    v28 = v24 - v25;
    v29 = (double)(int)v28;
    if ( v28 < 0 )
      v29 = v29 + 1.844674407370955e19;
    v30 = v26 - (unsigned int)(int)(v29 * 10000000.0 / v27 + 0.5);
  }
  v33 = *(_QWORD *)(a1 + 120);
  v34 = (unsigned __int64)v11 << 6;
  v46 = v30;
  if ( v23 )
  {
    *(_DWORD *)(v34 + v33 + 56) += a4;
    *(_QWORD *)(v34 + *(_QWORD *)(a1 + 120) + 32) += *((_QWORD *)a5 + 2);
  }
  else
  {
    *(_DWORD *)(v34 + v33) = a2;
    *(_DWORD *)(v34 + *(_QWORD *)(a1 + 120) + 4) = v7;
    *(_DWORD *)(v34 + *(_QWORD *)(a1 + 120) + 56) = a4;
    *(_DWORD *)(v34 + *(_QWORD *)(a1 + 120) + 8) = a6;
    v35 = *(_QWORD *)(a1 + 120);
    *(_OWORD *)(v34 + v35 + 16) = *(_OWORD *)a5;
    *(_OWORD *)(v34 + v35 + 32) = *((_OWORD *)a5 + 1);
    *(_QWORD *)(v34 + v35 + 48) = *((_QWORD *)a5 + 4);
    *(_QWORD *)(v34 + *(_QWORD *)(a1 + 120) + 40) = v30;
  }
  if ( _InterlockedExchange((volatile __int32 *)(a1 + 160), 0) == 1 )
    *(_DWORD *)(v34 + *(_QWORD *)(a1 + 120) + 52) = 1;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 80) + 144LL) != -1 )
  {
    v45 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 12LL);
    v36 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 8LL);
    if ( !CCrossProcessBaseEndpoint::IsValidQueueIndex((CCrossProcessBaseEndpoint *)v45, v45, v47)
      || !CCrossProcessBaseEndpoint::IsValidQueueIndex(v37, v36, v47) )
    {
LABEL_37:
      v9 = -2005139387;
LABEL_38:
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xBu,
          (__int64)&WPP_539049de69a333ea2eb103c6a6c256ab_Traceguids,
          v9);
      }
      AudCPTraceLoggingErrorHelper("CCrossProcessServerOutputEndpoint::AddTimestampMessage", 0x293u, v9);
      return v9;
    }
    v38 = 0;
    v39 = *(_QWORD *)(a1 + 136);
    if ( v45 + 1 != *(_DWORD *)(*(_QWORD *)(a1 + 80) + 132LL) )
      v38 = v45 + 1;
    v40 = *(_QWORD *)(a1 + 120);
    v41 = (unsigned __int64)v45 << 6;
    *(_OWORD *)(v41 + v39) = *(_OWORD *)(v34 + v40);
    *(_OWORD *)(v41 + v39 + 16) = *(_OWORD *)(v34 + v40 + 16);
    *(_OWORD *)(v41 + v39 + 32) = *(_OWORD *)(v34 + v40 + 32);
    *(_OWORD *)(v41 + v39 + 48) = *(_OWORD *)(v34 + v40 + 48);
    _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 72) + 12LL), v38);
    if ( v38 == v36 )
    {
      v42 = 0;
      if ( v36 + 1 != *(_DWORD *)(*(_QWORD *)(a1 + 80) + 132LL) )
        v42 = v36 + 1;
      _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 72) + 8LL), v42);
    }
    LODWORD(v30) = v46;
  }
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 72) + 4LL), v17);
  if ( (byte_140087281 & 4) != 0 )
  {
    McTemplateU0pqxxxxx(
      *(_DWORD *)(v34 + *(_QWORD *)(a1 + 120) + 52),
      v30,
      a1,
      v16,
      *(_DWORD *)(v34 + *(_QWORD *)(a1 + 120) + 52),
      *((_QWORD *)a5 + 2),
      v30,
      *(_QWORD *)a5,
      *((_QWORD *)a5 + 1));
    if ( (byte_140087281 & 4) != 0 )
      McTemplateU0pqqqx(
        *(_QWORD *)(a1 + 120),
        *(_QWORD *)(v34 + *(_QWORD *)(a1 + 120) + 40),
        a1,
        v22,
        v11,
        v44,
        *(_QWORD *)(v34 + *(_QWORD *)(a1 + 120) + 40));
  }
  return v9;
}
