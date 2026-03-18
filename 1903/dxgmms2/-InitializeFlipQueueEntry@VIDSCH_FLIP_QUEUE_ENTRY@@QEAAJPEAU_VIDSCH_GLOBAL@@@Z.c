/*
 * XREFs of ?InitializeFlipQueueEntry@VIDSCH_FLIP_QUEUE_ENTRY@@QEAAJPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0029FC8
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C0003A50 (VidSchiSetFlipDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDSCH_FLIP_QUEUE_ENTRY::InitializeFlipQueueEntry(
        VIDSCH_FLIP_QUEUE_ENTRY *this,
        struct _VIDSCH_GLOBAL *a2)
{
  _DWORD *PoolWithTag; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  _DWORD *v7; // r8
  __int64 v8; // rax
  int v10; // eax
  int v11; // edx

  PoolWithTag = ExAllocatePoolWithTag(
                  (POOL_TYPE)512,
                  *((_DWORD *)a2 + 35) * ((*((_DWORD *)a2 + 16) << 6) + ((8 * *((_DWORD *)a2 + 16) + 191) & 0xFFFFFFF8))
                + 16,
                  0x31626956u);
  *((_QWORD *)this + 148) = PoolWithTag;
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    v10 = *((_DWORD *)a2 + 16);
    v11 = *((_DWORD *)a2 + 35);
    v7[2] = v10;
    v7[1] = v11;
    v7[3] = v11 * ((v10 << 6) + ((8 * v10 + 191) & 0xFFFFFFF8)) + 16;
    return 0LL;
  }
  else
  {
    v8 = WdLogNewEntry5_WdWarning(v6, v5);
    WdLogEvent5_WdWarning(v8);
    return 3221225495LL;
  }
}
