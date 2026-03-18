/*
 * XREFs of VidSchiAllocateQueuePacket @ 0x1C007A310
 * Callers:
 *     VidSchWaitForSingleSyncObject @ 0x1C0003E70 (VidSchWaitForSingleSyncObject.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0004C60 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchSubmitGlobalCommand @ 0x1C007CC6C (VidSchSubmitGlobalCommand.c)
 *     VidSchEnqueueCpuEvent @ 0x1C00CAD40 (VidSchEnqueueCpuEvent.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C0004B50 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0004BD0 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x1C000EC10 (VidSchiInterlockedRemoveEntryList.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0077960 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C0077C4C (VidSchRegisterCompletionEvent.c)
 */

_QWORD *__fastcall VidSchiAllocateQueuePacket(__int64 a1, int a2)
{
  __int64 v3; // rsi
  unsigned int v4; // ebp
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  size_t v7; // r14
  _QWORD *PoolWithTag; // rax
  __int64 v10; // rax
  _QWORD *v11; // rax
  _QWORD v12[25]; // [rsp+20h] [rbp-C8h] BYREF

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  v4 = *(_DWORD *)(v3 + 140) * ((*(_DWORD *)(v3 + 64) << 6) + ((8 * *(_DWORD *)(v3 + 64) + 191) & 0xFFFFFFF8))
     + 8 * (*(_DWORD *)(v3 + 64) + 105);
  if ( v4 <= 0x410 )
    v4 = 1040;
  v5 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v3 + 1656), (_QWORD **)(a1 + 704), (_DWORD *)(a1 + 720));
  if ( v5 )
  {
    v6 = v5 - 1;
  }
  else
  {
    v7 = v4;
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v4, 0x35616956u);
    v6 = PoolWithTag;
    if ( a2 )
    {
      if ( PoolWithTag )
        goto LABEL_7;
      memset(v12, 0, 0xA0uLL);
      v10 = *(_QWORD *)(a1 + 96);
      LODWORD(v12[4]) |= 0x40u;
      LODWORD(v12[2]) = 1;
      LODWORD(v12[6]) = *(unsigned __int16 *)(v10 + 4);
      VidSchRegisterCompletionEvent(v3, (__int64)v12);
      do
      {
        v11 = VidSchiInterlockedRemoveHeadListIfExist(
                (KSPIN_LOCK *)(v3 + 1656),
                (_QWORD **)(a1 + 704),
                (_DWORD *)(a1 + 720));
        if ( v11 )
          v6 = v11 - 1;
        else
          VidSchWaitForCompletionEvent(v3, (__int64)v12, (const GUID *)0x13);
      }
      while ( !v6 );
      VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v3 + 1664), v12, 0LL);
    }
  }
  if ( v6 )
  {
    v7 = v4;
LABEL_7:
    memset(v6, 0, v7);
    v6[7] = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)v6 + 13) = 1;
    VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(v3 + 1656), a1 + 752, v6 + 1, (_DWORD *)(a1 + 768));
  }
  return v6;
}
