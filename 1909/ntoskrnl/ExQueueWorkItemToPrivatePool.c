/*
 * XREFs of ExQueueWorkItemToPrivatePool @ 0x140167FA4
 * Callers:
 *     ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x140167E48 (-SmAsyncReadQueueInsert@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASY.c)
 * Callees:
 *     ExpValidateWorkItem @ 0x14005B338 (ExpValidateWorkItem.c)
 *     ExpQueueWorkItem @ 0x14008081C (ExpQueueWorkItem.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

char __fastcall ExQueueWorkItemToPrivatePool(_QWORD *BugCheckParameter2, int a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  char result; // al

  v4 = a4;
  if ( (unsigned __int64)(a4 - 1) > 6
    || (ExpValidateWorkItem(BugCheckParameter2, a2 + 32),
        (result = ExpQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), (int)BugCheckParameter2, a2, 0xFFFFFFFF, v4)) == 0) )
  {
    KeBugCheckEx(0xE4u, 5uLL, (ULONG_PTR)BugCheckParameter2, a2 + 32, 0xFFFFFFFFuLL);
  }
  return result;
}
