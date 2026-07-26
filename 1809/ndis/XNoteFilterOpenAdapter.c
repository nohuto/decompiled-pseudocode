/*
 * XREFs of XNoteFilterOpenAdapter @ 0x1C001AAC0
 * Callers:
 *     ndisMOpenAdapter @ 0x1C010D8F0 (ndisMOpenAdapter.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x1C0005F00 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockWrite @ 0x1C0006370 (NdisAcquireRWLockWrite.c)
 *     XSetupFrameTypeInFilter @ 0x1C010DC10 (XSetupFrameTypeInFilter.c)
 */

void __fastcall XNoteFilterOpenAdapter(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  NdisAcquireRWLockWrite(*(PNDIS_RW_LOCK_EX *)(a1 + 288), &LockState, 0);
  if ( *(_BYTE *)(v2 + 56) < 6u )
  {
    *(_QWORD *)(a2 + 424) = *(_QWORD *)a1;
    *(_QWORD *)a1 = a2;
  }
  else
  {
    XSetupFrameTypeInFilter(a1, a2);
  }
  ++*(_DWORD *)(a1 + 316);
  NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(a1 + 288), &LockState);
}
