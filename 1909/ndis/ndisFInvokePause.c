/*
 * XREFs of ndisFInvokePause @ 0x1C010BEB0
 * Callers:
 *     ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C01302F0 (-ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisFInvokePause(__int64 a1, _NDIS_FILTER_PAUSE_PARAMETERS *a2)
{
  __int64 v2; // rsi
  _NDIS_FILTER_PAUSE_PARAMETERS *v3; // rdi
  int v6; // eax
  int v7; // edx
  unsigned int v8; // edi

  v2 = *(_QWORD *)(a1 + 16);
  v3 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      111,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      a1);
  }
  if ( ndisVerifierNdisDispatch && *(_BYTE *)a1 == 5 && *(_QWORD *)(a1 + 784) )
    v6 = ndisVerifierNdisDispatch->NdisFilterPauseHandler(
           *(void **)(a1 + 24),
           v3,
           *(void **)(a1 + 784),
           *(int (__fastcall **)(void *, _NDIS_FILTER_PAUSE_PARAMETERS *))(v2 + 200));
  else
    v6 = (*(__int64 (__fastcall **)(_QWORD, _NDIS_FILTER_PAUSE_PARAMETERS *))(v2 + 200))(*(_QWORD *)(a1 + 24), v3);
  v8 = v6;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      13,
      112,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      a1,
      v6);
  }
  return v8;
}
