/*
 * XREFs of EtwpTiVadQueryEventWrite @ 0x140331184
 * Callers:
 *     EtwTiLogInsertQueueUserApc @ 0x140330AD0 (EtwTiLogInsertQueueUserApc.c)
 *     EtwTiLogSetContextThread @ 0x1406CA754 (EtwTiLogSetContextThread.c)
 * Callees:
 *     EtwpTiAsyncVadQueryEventWrite @ 0x140330F44 (EtwpTiAsyncVadQueryEventWrite.c)
 *     EtwpTiFillVadEventWrite @ 0x14033104C (EtwpTiFillVadEventWrite.c)
 */

void __fastcall EtwpTiVadQueryEventWrite(
        struct _EVENT_DATA_DESCRIPTOR *a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        void *a5,
        unsigned int a6,
        PCEVENT_DESCRIPTOR EventDescriptor,
        char a8)
{
  __int64 v8; // rax
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = MEMORY[0xFFFFF78000000014];
  v8 = a3;
  a1[v8].Ptr = (ULONGLONG)&v9;
  *(_QWORD *)&a1[v8].Size = 8LL;
  if ( a8 )
    EtwpTiAsyncVadQueryEventWrite((__int64)a1, a2, a3 + 1, a4, a5, a6, (__int64)EventDescriptor);
  else
    EtwpTiFillVadEventWrite(a1, a3 + 1, 0, 0LL, 0, a6, EventDescriptor);
}
