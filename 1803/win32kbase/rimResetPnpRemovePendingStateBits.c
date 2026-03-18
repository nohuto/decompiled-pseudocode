/*
 * XREFs of rimResetPnpRemovePendingStateBits @ 0x1C00FD9C4
 * Callers:
 *     RIMUnregisterForInput @ 0x1C00E5A50 (RIMUnregisterForInput.c)
 *     RIMRemoveDevOfInputType @ 0x1C00F822C (RIMRemoveDevOfInputType.c)
 *     rimPassivateSecondaryRims @ 0x1C00FD684 (rimPassivateSecondaryRims.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00739CC (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall rimResetPnpRemovePendingStateBits(__int64 a1)
{
  __int64 result; // rax

  result = WPP_RECORDER_SF_q(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             3u,
             0x15u,
             0x20u,
             (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids,
             a1);
  *(_DWORD *)(a1 + 200) &= ~1u;
  *(_DWORD *)(a1 + 184) &= 0x3FFFFFFFu;
  *(_DWORD *)(a1 + 188) &= ~1u;
  *(_QWORD *)(a1 + 192) = 0LL;
  return result;
}
