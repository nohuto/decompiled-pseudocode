/*
 * XREFs of ndisReportTimeoutWaitingForExternalDriver @ 0x1C01036FC
 * Callers:
 *     ndisFindSomeoneToBlame @ 0x1C010357C (ndisFindSomeoneToBlame.c)
 * Callees:
 *     ndisBugCheckEx @ 0x1C004FE18 (ndisBugCheckEx.c)
 *     ndisLiveBugCheck @ 0x1C00502CC (ndisLiveBugCheck.c)
 *     ndisMLiveBugCheck @ 0x1C005036C (ndisMLiveBugCheck.c)
 *     ndisGetMiniportFromObject @ 0x1C01036CC (ndisGetMiniportFromObject.c)
 */

PBOOLEAN __fastcall ndisReportTimeoutWaitingForExternalDriver(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v2; // rsi
  __int64 MiniportFromObject; // rbx
  bool v5; // cl
  PBOOLEAN result; // rax
  ULONG VerifierFlags; // [rsp+40h] [rbp+8h] BYREF

  v2 = (unsigned int)BugCheckParameter2;
  MiniportFromObject = ndisGetMiniportFromObject(*(_QWORD *)(BugCheckParameter3 + 16));
  v5 = 0;
  if ( MmIsDriverVerifying((struct _DRIVER_OBJECT *)ndisDriverObject) )
  {
    VerifierFlags = 0;
    if ( MmIsVerifierEnabled(&VerifierFlags) < 0 || (VerifierFlags & 0x400000) == 0 )
      v5 = 1;
  }
  if ( MiniportFromObject )
  {
    if ( *(_QWORD *)(MiniportFromObject + 4496)
      && *(_DWORD *)(*(_QWORD *)(MiniportFromObject + 3792) + 904LL) == 1
      && !ndisWatchdogForceBugCheckForWDI )
    {
LABEL_15:
      ndisBugCheckEx(0x25uLL, v2, BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 40));
    }
    if ( (_DWORD)v2 == 39
      && *(_DWORD *)(*(_QWORD *)(MiniportFromObject + 3792) + 904LL) == 1
      && !ndisBugCheckOnReenumerationTimeout )
    {
      v5 = 1;
    }
  }
  if ( v5 )
    goto LABEL_15;
  result = KdDebuggerNotPresent;
  if ( (_BYTE)KdDebuggerNotPresent )
  {
    if ( !MiniportFromObject || (_DWORD)v2 == 34 )
      return (PBOOLEAN)ndisLiveBugCheck(37LL, v2, BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 40));
    else
      return (PBOOLEAN)ndisMLiveBugCheck(
                         MiniportFromObject,
                         37LL,
                         v2,
                         BugCheckParameter3,
                         *(_QWORD *)(BugCheckParameter3 + 40));
  }
  return result;
}
