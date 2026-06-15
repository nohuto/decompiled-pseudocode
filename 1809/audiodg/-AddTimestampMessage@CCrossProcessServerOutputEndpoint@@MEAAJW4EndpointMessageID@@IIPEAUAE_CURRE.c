/*
 * XREFs of ?AddTimestampMessage@CCrossProcessServerOutputEndpoint@@MEAAJW4EndpointMessageID@@IIPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@W4AddTimestampMessageOptions@1@@Z @ 0x140058030
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     ?IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NII@Z @ 0x1400557A0 (-IsValidQueueIndex@CCrossProcessBaseEndpoint@@IEAA_NII@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005623C (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?CanCoalesceTimestampMessages@CCrossProcessServerOutputEndpoint@@IEAAHIW4EndpointMessageID@@IPEAUAE_CURRENT_POSITION@@W4APO_BUFFER_FLAGS@@@Z @ 0x140058414 (-CanCoalesceTimestampMessages@CCrossProcessServerOutputEndpoint@@IEAAHIW4EndpointMessageID@@IPEA.c)
 *     McTemplateU0pqqqx @ 0x140058C4C (McTemplateU0pqqqx.c)
 *     ?AEWMILOG_DROP@@YAXKPEAXE_K1@Z @ 0x1400623C4 (-AEWMILOG_DROP@@YAXKPEAXE_K1@Z.c)
 *     ?AEWMILOG_TIMESTAMP@@YAXKPEAXEE_K1111@Z @ 0x140062458 (-AEWMILOG_TIMESTAMP@@YAXKPEAXEE_K1111@Z.c)
 */

__int64 __fastcall CCrossProcessServerOutputEndpoint::AddTimestampMessage(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        int a6,
        int a7)
{
  unsigned int v7; // ebx
  int v9; // r13d
  unsigned int v10; // ebp
  unsigned __int64 v11; // r15
  unsigned int v12; // esi
  CCrossProcessBaseEndpoint *v13; // rcx
  unsigned __int8 v14; // r9
  __int32 v15; // edx
  unsigned int v16; // r8d
  __int32 v17; // r12d
  unsigned int v18; // eax
  unsigned int v19; // esi
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  double v23; // xmm1_8
  __int64 v24; // rax
  double v25; // xmm0_8
  unsigned __int64 v26; // rdx
  __int64 v27; // rcx
  double v28; // xmm0_8
  __int64 v29; // rax
  unsigned __int64 v30; // rsi
  __int64 v31; // rax
  unsigned int v32; // r13d
  CCrossProcessBaseEndpoint *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  __int32 v37; // edx
  unsigned __int64 v39; // [rsp+20h] [rbp-88h]
  unsigned int v40; // [rsp+50h] [rbp-58h]
  unsigned __int64 v41; // [rsp+58h] [rbp-50h]
  unsigned int v42; // [rsp+B0h] [rbp+8h]

  v7 = 0;
  v9 = 0;
  v10 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4LL);
  v11 = **(unsigned int **)(a1 + 64);
  v12 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 132LL);
  v42 = v12;
  if ( !CCrossProcessBaseEndpoint::IsValidQueueIndex((CCrossProcessBaseEndpoint *)a1, v10, v12)
    || !CCrossProcessBaseEndpoint::IsValidQueueIndex(v13, v11, v12) )
  {
    goto LABEL_32;
  }
  v15 = 0;
  v16 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 132LL);
  if ( v10 + 1 != v16 )
    v15 = v10 + 1;
  if ( v15 == (_DWORD)v11 )
  {
    AEWMILOG_DROP(v10 + 1, (void *)a1, v16, v10, v11);
    v7 = -2005139385;
    goto LABEL_33;
  }
  v17 = v15;
  if ( a7 == 1 && v16 > 5 )
  {
    v18 = (unsigned int)v11 > v10 ? v10 + v16 - v11 : v10 - (unsigned int)v11;
    if ( v18 >= 5 )
    {
      v19 = v10 - 1;
      if ( !v10 )
        v19 = v16 - 1;
      if ( (unsigned int)CCrossProcessServerOutputEndpoint::CanCoalesceTimestampMessages(a1, v19, a2, a3, a5, a6) )
      {
        v17 = v10;
        v9 = 1;
        v10 = v19;
      }
    }
  }
  v20 = *(_QWORD *)a5;
  v21 = *(_QWORD *)(a5 + 8);
  v22 = *(_QWORD *)(a5 + 24);
  v23 = *(float *)(a5 + 32);
  if ( *(_QWORD *)a5 < v21 )
  {
    v27 = v21 - v20;
    v28 = (double)(int)v27;
    if ( v27 < 0 )
      v28 = v28 + 1.844674407370955e19;
    v26 = (unsigned int)(int)(v28 * 10000000.0 / v23 + 0.5) + v22;
  }
  else
  {
    v24 = v20 - v21;
    v25 = (double)(int)v24;
    if ( v24 < 0 )
      v25 = v25 + 1.844674407370955e19;
    v26 = v22 - (unsigned int)(int)(v25 * 10000000.0 / v23 + 0.5);
  }
  v29 = *(_QWORD *)(a1 + 112);
  v30 = (unsigned __int64)v10 << 6;
  v41 = v26;
  if ( v9 )
  {
    *(_DWORD *)(v30 + v29 + 56) += a4;
    *(_QWORD *)(v30 + *(_QWORD *)(a1 + 112) + 32) += *(_QWORD *)(a5 + 16);
  }
  else
  {
    *(_DWORD *)(v30 + v29) = a2;
    *(_DWORD *)(v30 + *(_QWORD *)(a1 + 112) + 4) = a3;
    *(_DWORD *)(v30 + *(_QWORD *)(a1 + 112) + 56) = a4;
    *(_DWORD *)(v30 + *(_QWORD *)(a1 + 112) + 8) = a6;
    v31 = *(_QWORD *)(a1 + 112);
    *(_OWORD *)(v30 + v31 + 16) = *(_OWORD *)a5;
    *(_OWORD *)(v30 + v31 + 32) = *(_OWORD *)(a5 + 16);
    *(_QWORD *)(v30 + v31 + 48) = *(_QWORD *)(a5 + 32);
    *(_QWORD *)(v30 + *(_QWORD *)(a1 + 112) + 40) = v26;
  }
  if ( _InterlockedExchange((volatile __int32 *)(a1 + 160), 0) == 1 )
    *(_DWORD *)(v30 + *(_QWORD *)(a1 + 112) + 52) = 1;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 72) + 144LL) != -1 )
  {
    v40 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 12LL);
    v32 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 8LL);
    if ( !CCrossProcessBaseEndpoint::IsValidQueueIndex((CCrossProcessBaseEndpoint *)v40, v40, v42)
      || !CCrossProcessBaseEndpoint::IsValidQueueIndex(v33, v32, v42) )
    {
LABEL_32:
      v7 = -2005139387;
LABEL_33:
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xBu,
          (__int64)&WPP_c60ca4a009c837ce426fd22b0e417877_Traceguids,
          v7);
      }
      AudCPTraceLoggingErrorHelper("CCrossProcessServerOutputEndpoint::AddTimestampMessage", 0x277u, v7);
      return v7;
    }
    v16 = 0;
    v34 = *(_QWORD *)(a1 + 128);
    if ( v40 + 1 != *(_DWORD *)(*(_QWORD *)(a1 + 72) + 132LL) )
      v16 = v40 + 1;
    v35 = *(_QWORD *)(a1 + 112);
    v36 = (unsigned __int64)v40 << 6;
    *(_OWORD *)(v36 + v34) = *(_OWORD *)(v30 + v35);
    *(_OWORD *)(v36 + v34 + 16) = *(_OWORD *)(v30 + v35 + 16);
    *(_OWORD *)(v36 + v34 + 32) = *(_OWORD *)(v30 + v35 + 32);
    *(_OWORD *)(v36 + v34 + 48) = *(_OWORD *)(v30 + v35 + 48);
    _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 64) + 12LL), v16);
    if ( v16 == v32 )
    {
      v37 = 0;
      if ( v32 + 1 != *(_DWORD *)(*(_QWORD *)(a1 + 72) + 132LL) )
        v37 = v32 + 1;
      _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 64) + 8LL), v37);
    }
    v26 = v41;
  }
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 64) + 4LL), v17);
  v39 = *(int *)(v30 + *(_QWORD *)(a1 + 112) + 52);
  AEWMILOG_TIMESTAMP(v39, (void *)a1, v16, v14, v39, *(_QWORD *)(a5 + 16), v26, *(_QWORD *)a5, *(_QWORD *)(a5 + 8));
  if ( (byte_140089301 & 4) != 0 )
    McTemplateU0pqqqx(
      *(_DWORD *)(v30 + *(_QWORD *)(a1 + 112) + 56),
      *(_QWORD *)(a1 + 112),
      a1,
      v11,
      v10,
      *(_DWORD *)(v30 + *(_QWORD *)(a1 + 112) + 56),
      *(_QWORD *)(v30 + *(_QWORD *)(a1 + 112) + 40));
  return v7;
}
