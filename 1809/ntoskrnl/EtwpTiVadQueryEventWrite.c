/*
 * XREFs of EtwpTiVadQueryEventWrite @ 0x140313154
 * Callers:
 *     EtwTiLogQueueApcThread @ 0x140312A70 (EtwTiLogQueueApcThread.c)
 *     EtwTiLogSetContextThread @ 0x1406AA420 (EtwTiLogSetContextThread.c)
 * Callees:
 *     EtwpTiAsyncVadQueryEventWrite @ 0x140312F14 (EtwpTiAsyncVadQueryEventWrite.c)
 *     EtwpTiFillVadEventWrite @ 0x14031301C (EtwpTiFillVadEventWrite.c)
 */

void EtwpTiVadQueryEventWrite(
        struct _EVENT_DATA_DESCRIPTOR *a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        void *a5,
        unsigned int a6,
        const EVENT_DESCRIPTOR *a7,
        ...)
{
  __int64 v7; // rax
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  char v9; // [rsp+88h] [rbp+40h]

  v8 = MEMORY[0xFFFFF78000000014];
  v7 = a3;
  a1[v7].Ptr = (ULONGLONG)&v8;
  *(_QWORD *)&a1[v7].Size = 8LL;
  if ( v9 )
    EtwpTiAsyncVadQueryEventWrite((__int64)a1, a2, a3 + 1, a4, a5, a6, (__int64)a7);
  else
    EtwpTiFillVadEventWrite(a1, a3 + 1, 0, 0LL, 0, a6, a7);
}
