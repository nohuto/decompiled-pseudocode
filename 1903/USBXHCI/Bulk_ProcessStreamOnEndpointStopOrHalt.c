/*
 * XREFs of Bulk_ProcessStreamOnEndpointStopOrHalt @ 0x1C00351E8
 * Callers:
 *     Bulk_EP_EndpointHalted @ 0x1C0034030 (Bulk_EP_EndpointHalted.c)
 *     Bulk_EP_FSEReceived @ 0x1C00340A0 (Bulk_EP_FSEReceived.c)
 * Callees:
 *     memmove @ 0x1C0008A40 (memmove.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C0014BD8 (WPP_RECORDER_SF_dddd.c)
 *     Bulk_FindStage @ 0x1C00344E0 (Bulk_FindStage.c)
 */

__int64 __fastcall Bulk_ProcessStreamOnEndpointStopOrHalt(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r10
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rax
  int v7; // ecx
  unsigned int v8; // r8d
  unsigned int v9; // ecx
  __int64 result; // rax
  unsigned int v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 *v12; // [rsp+68h] [rbp+10h] BYREF

  if ( !Bulk_FindStage(
          a1,
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 136LL) + 32LL) + 16LL)
                    + 16LL * *(unsigned int *)(a1 + 64)) & 0xFFFFFFFFFFFFFFF0uLL,
          (__int64 *)&v12,
          &v11)
    || (v2 = (__int64)v12) == 0 )
  {
    result = *(unsigned int *)(a1 + 348);
    goto LABEL_23;
  }
  v3 = *(_QWORD *)(a1 + 56);
  v4 = *v12;
  v5 = *(_QWORD *)(*(_QWORD *)v3 + 336LL);
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 136) + 32LL) + 16LL) + 16LL * *(unsigned int *)(a1 + 64);
  if ( (v5 & 0x1800000000LL) == 0 )
  {
    v7 = *(_DWORD *)(v6 + 8);
LABEL_21:
    v9 = v7 & 0xFFFFFF;
    goto LABEL_9;
  }
  if ( (v5 & 0x1000000000LL) != 0 )
  {
    if ( (v5 & 0x800000000LL) == 0 )
    {
      v7 = *(_DWORD *)(v6 + 12);
      goto LABEL_21;
    }
  }
  else
  {
    v8 = *(_DWORD *)(v6 + 8);
    v9 = v8 >> 8;
    if ( (v5 & 0x200000000000LL) == 0 || (v8 & 0x80u) != 0 )
      goto LABEL_9;
  }
  v9 = 0;
LABEL_9:
  if ( (v5 & 0x10000000000LL) != 0 )
    v9 += *(_DWORD *)(v6 + 12) & 0x1FFFF;
  if ( v9 > *((_DWORD *)v12 + 10) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dddd(
        *(_QWORD *)(v3 + 80),
        3u,
        0xEu,
        0xCu,
        (__int64)&WPP_7d510b11cf7730484f23e28c4fa6ef2f_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(v3 + 144),
        *(_DWORD *)(a1 + 64),
        v9);
    v9 = 0;
  }
  *(_DWORD *)(v4 + 108) += v9;
  if ( (*(_DWORD *)(*(_QWORD *)(v4 + 48) + 32LL) & 1) != 0 && *(_DWORD *)(v4 + 76) == 2 )
    memmove(*(void **)(v2 + 64), *(const void **)(*(_QWORD *)(v2 + 72) + 16LL), v9);
  result = v11;
LABEL_23:
  *(_DWORD *)(a1 + 352) = result;
  return result;
}
