/*
 * XREFs of AlpcpFreeMessageFunction @ 0x1406107C0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ExDestroyHandle @ 0x14060F860 (ExDestroyHandle.c)
 *     ExMapHandleToPointerEx @ 0x140610768 (ExMapHandleToPointerEx.c)
 */

void __fastcall AlpcpFreeMessageFunction(_DWORD *P)
{
  unsigned int v2; // edx
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int *v4; // rdi
  unsigned int v5; // ebx
  signed __int64 *v6; // rax

  v2 = P[78] & 0x7FFFFFFF;
  if ( v2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( (v2 & 0xFC000000) != 0 )
    {
      v4 = 0LL;
      if ( AlpcpSecondaryMessageTables )
        v4 = *(unsigned int **)(AlpcpSecondaryMessageTables + 8 * ((unsigned __int64)v2 >> 26));
    }
    else
    {
      v4 = (unsigned int *)AlpcMessageTable;
    }
    v5 = v2 & 0x3FFFFFF;
    v6 = ExMapHandleToPointerEx(v4, v2 & 0x3FFFFFF, KeGetCurrentThread()->PreviousMode);
    ExDestroyHandle((__int64)v4, v5, v6);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  ExFreePoolWithTag(P, 0);
}
