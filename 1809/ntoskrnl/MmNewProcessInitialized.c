/*
 * XREFs of MmNewProcessInitialized @ 0x140582398
 * Callers:
 *     PspAllocateProcess @ 0x14064BCD8 (PspAllocateProcess.c)
 * Callees:
 *     KeStackAttachProcess @ 0x140016610 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1400F1070 (KeUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     MiSetProcessPebHotPatchState @ 0x14058235C (MiSetProcessPebHotPatchState.c)
 */

__int64 __fastcall MmNewProcessInitialized(__int64 a1)
{
  unsigned int v1; // ebx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  v1 = 0;
  if ( *(_QWORD *)(a1 + 2120) )
  {
    KeStackAttachProcess((PRKPROCESS)a1, &ApcState);
    v1 = MiSetProcessPebHotPatchState(a1);
    KeUnstackDetachProcess(&ApcState);
  }
  return v1;
}
