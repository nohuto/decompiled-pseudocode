/*
 * XREFs of PspIsProcessReadyForRemoteThread @ 0x140131350
 * Callers:
 *     PspCreateThread @ 0x14060CCFC (PspCreateThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
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
