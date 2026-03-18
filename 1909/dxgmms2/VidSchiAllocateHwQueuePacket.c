/*
 * XREFs of VidSchiAllocateHwQueuePacket @ 0x1C00CCFF8
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0004A20 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchSubmitCommandToHwQueue @ 0x1C0037930 (VidSchSubmitCommandToHwQueue.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C0037DA0 (VidSchSubmitSignalToHwQueue.c)
 *     VidSchSubmitWaitToHwQueue @ 0x1C0038350 (VidSchSubmitWaitToHwQueue.c)
 *     VidSchEnqueueCpuEvent @ 0x1C00CA9E0 (VidSchEnqueueCpuEvent.c)
 *     VidSchiSubmitHwPagingCommand @ 0x1C00CD2B0 (VidSchiSubmitHwPagingCommand.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C0004910 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0004990 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x1C000E9D0 (VidSchiInterlockedRemoveEntryList.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     VidSchRegisterCompletionEvent @ 0x1C007C4EC (VidSchRegisterCompletionEvent.c)
 *     VidSchWaitForCompletionEvent @ 0x1C007C5B4 (VidSchWaitForCompletionEvent.c)
 */

_QWORD *__fastcall VidSchiAllocateHwQueuePacket(__int64 a1, char a2)
{
  __int64 v4; // r13
  __int64 v5; // rsi
  unsigned int v6; // ebp
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  size_t v9; // rdi
  _QWORD *PoolWithTag; // rax
  int v11; // ecx
  _QWORD *v12; // rax
  _QWORD v14[20]; // [rsp+20h] [rbp-C8h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 16LL);
  v5 = *(_QWORD *)(v4 + 24);
  v6 = *(_DWORD *)(v5 + 140) * ((*(_DWORD *)(v5 + 64) << 6) + ((8 * *(_DWORD *)(v5 + 64) + 191) & 0xFFFFFFF8))
     + 8 * (*(_DWORD *)(v5 + 64) + 105);
  if ( v6 <= 0x410 )
    v6 = 1040;
  v7 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v5 + 1656), (_QWORD **)(a1 + 192), (_DWORD *)(a1 + 208));
  if ( v7 )
  {
    v8 = v7 - 1;
  }
  else
  {
    v9 = v6;
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v6, 0x35616956u);
    v8 = PoolWithTag;
    if ( a2 )
    {
      if ( PoolWithTag )
      {
LABEL_15:
        memset(v8, 0, v9);
        v8[7] = MEMORY[0xFFFFF78000000320];
        *((_DWORD *)v8 + 13) = 1;
        VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(v5 + 1656), a1 + 216, v8 + 1, (_DWORD *)(a1 + 232));
        return v8;
      }
      memset(v14, 0, sizeof(v14));
      v11 = *(unsigned __int16 *)(v4 + 4);
      LODWORD(v14[4]) |= 0x40u;
      LODWORD(v14[6]) = v11;
      LODWORD(v14[2]) = 1;
      VidSchRegisterCompletionEvent(v5, (__int64)v14);
      do
      {
        v12 = VidSchiInterlockedRemoveHeadListIfExist(
                (KSPIN_LOCK *)(v5 + 1656),
                (_QWORD **)(a1 + 192),
                (_DWORD *)(a1 + 208));
        if ( v12 )
          v8 = v12 - 1;
        else
          VidSchWaitForCompletionEvent(v5, (__int64)v14, (const GUID *)0x13);
      }
      while ( !v8 );
      VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v5 + 1664), v14, 0LL);
    }
  }
  if ( v8 )
  {
    v9 = v6;
    goto LABEL_15;
  }
  return v8;
}
