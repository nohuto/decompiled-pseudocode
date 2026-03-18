/*
 * XREFs of rimResetPnpRemovePendingStateBits @ 0x1C0089698
 * Callers:
 *     RIMUnregisterForInput @ 0x1C0087040 (RIMUnregisterForInput.c)
 *     RIMRemoveDevOfInputType @ 0x1C00892D4 (RIMRemoveDevOfInputType.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C004F724 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall rimResetPnpRemovePendingStateBits(__int64 a1)
{
  __int64 result; // rax

  result = WPP_RECORDER_SF_q(gRimLog, 3u, 0x16u, 0x25u, (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids, a1);
  *(_DWORD *)(a1 + 200) &= ~1u;
  *(_DWORD *)(a1 + 184) &= 0x3FFFFFFFu;
  *(_DWORD *)(a1 + 188) &= ~1u;
  *(_QWORD *)(a1 + 192) = 0LL;
  return result;
}
