/*
 * XREFs of MmNewProcessInitialized @ 0x140690074
 * Callers:
 *     PspAllocateProcess @ 0x14068E52C (PspAllocateProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiSetProcessPebHotPatchState @ 0x140891D3C (MiSetProcessPebHotPatchState.c)
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
