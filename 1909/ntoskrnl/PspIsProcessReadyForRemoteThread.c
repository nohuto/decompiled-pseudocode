/*
 * XREFs of PspIsProcessReadyForRemoteThread @ 0x140131B60
 * Callers:
 *     PspCreateThread @ 0x14060E80C (PspCreateThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

bool __fastcall PspIsProcessReadyForRemoteThread(ULONG_PTR BugCheckParameter1)
{
  bool v2; // bl
  int v4; // eax
  _BYTE v5[48]; // [rsp+28h] [rbp-40h] BYREF

  memset(v5, 0, sizeof(v5));
  v2 = 1;
  if ( PsNoRemoteThreadBeforeProcessInit )
  {
    v4 = *(_DWORD *)(BugCheckParameter1 + 1788);
    if ( (v4 & 1) == 0 && (v4 & 0x1000) == 0 && (*(_BYTE *)(BugCheckParameter1 + 728) & 1) == 0 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v5);
      v2 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter1 + 1016) + 24LL) != 0LL;
      KiUnstackDetachProcess((struct _KTHREAD *)v5, 0);
    }
  }
  return v2;
}
