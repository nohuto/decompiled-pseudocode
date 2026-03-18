/*
 * XREFs of MmNewProcessInitialized @ 0x1406835E4
 * Callers:
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiSetProcessPebHotPatchState @ 0x14089155C (MiSetProcessPebHotPatchState.c)
 */

__int64 __fastcall MmNewProcessInitialized(ULONG_PTR BugCheckParameter1)
{
  unsigned int v1; // ebx
  _BYTE v4[48]; // [rsp+20h] [rbp-48h] BYREF

  v1 = 0;
  if ( *(_QWORD *)(BugCheckParameter1 + 2168) )
  {
    memset(v4, 0, sizeof(v4));
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v4);
    v1 = MiSetProcessPebHotPatchState(BugCheckParameter1);
    KiUnstackDetachProcess((struct _KTHREAD *)v4, 0);
  }
  return v1;
}
