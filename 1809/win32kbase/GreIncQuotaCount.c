/*
 * XREFs of GreIncQuotaCount @ 0x1C00813B0
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0027700 (GreSetDCOwnerEx.c)
 *     HMChangeOwnerPheProcess @ 0x1C0081280 (HMChangeOwnerPheProcess.c)
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C0029C90 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0029E00 (GreAcquireHmgrSemaphore.c)
 *     ?HmgpIncProcessHandleCountEx@@YAXPEAU_W32PROCESS@@@Z @ 0x1C00AAACC (-HmgpIncProcessHandleCountEx@@YAXPEAU_W32PROCESS@@@Z.c)
 */

__int64 __fastcall GreIncQuotaCount(struct _W32PROCESS *a1, int a2, int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8

  GreAcquireHmgrSemaphore((__int64)a1, a2, a3);
  HmgpIncProcessHandleCountEx(a1);
  return GreReleaseHmgrSemaphore(v5, v4, v6);
}
