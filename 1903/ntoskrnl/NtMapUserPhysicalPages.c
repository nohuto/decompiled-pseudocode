/*
 * XREFs of NtMapUserPhysicalPages @ 0x140897C30
 * Callers:
 *     <none>
 * Callees:
 *     MiGetPteAddress @ 0x140057698 (MiGetPteAddress.c)
 *     ExGetCallBackBlockRoutine @ 0x14013D1D0 (ExGetCallBackBlockRoutine.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     MiFreePhysicalPageChain @ 0x1402D5CE0 (MiFreePhysicalPageChain.c)
 *     MiGetAweNode @ 0x1402D6468 (MiGetAweNode.c)
 *     MiLockAwePagesShared @ 0x1402D6E80 (MiLockAwePagesShared.c)
 *     MiLockAweVadsShared @ 0x1402D6EDC (MiLockAweVadsShared.c)
 *     MiUnlockAweVadsShared @ 0x1402D7C70 (MiUnlockAweVadsShared.c)
 *     MiWriteAwePtes @ 0x1402D7E08 (MiWriteAwePtes.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiCaptureUlongPtrArray @ 0x140896078 (MiCaptureUlongPtrArray.c)
 *     MiReferenceIncomingPhysicalPages @ 0x1408968D4 (MiReferenceIncomingPhysicalPages.c)
 */

NTSTATUS __stdcall NtMapUserPhysicalPages(PVOID VirtualAddresses, ULONG_PTR NumberOfPages, PULONG_PTR UserPfnArray)
{
  char *v3; // r13
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 v6; // rsi
  int *v7; // r12
  ULONG_PTR v8; // r15
  _QWORD *PoolWithTag; // rdi
  NTSTATUS v10; // ebx
  _QWORD *AweNode; // rax
  __int64 v12; // rbx
  __int64 v14; // r13
  __int64 v15; // rax
  unsigned __int64 v16; // r10
  __int64 PteAddress; // rsi
  __int64 v18; // r8
  __int64 v19; // r11
  int v20; // r9d
  __int64 *v21; // rsi
  __int64 v22; // rbp
  __int64 v24; // [rsp+48h] [rbp-1070h] BYREF
  __int64 v25; // [rsp+50h] [rbp-1068h]
  _KPROCESS *Process; // [rsp+58h] [rbp-1060h]
  ULONG_PTR v27; // [rsp+60h] [rbp-1058h]
  _BYTE P[4096]; // [rsp+70h] [rbp-1048h] BYREF

  v24 = 0LL;
  v25 = 0LL;
  v3 = (char *)UserPfnArray;
  if ( NumberOfPages - 1 > 0xFFFFFFFFFFFFELL )
    return -1073741584;
  CurrentThread = KeGetCurrentThread();
  v6 = (unsigned __int64)VirtualAddresses & 0xFFFFFFFFFFFFF000uLL;
  v7 = 0LL;
  v8 = 0LL;
  PoolWithTag = 0LL;
  Process = CurrentThread->ApcState.Process;
  if ( !UserPfnArray )
    goto LABEL_6;
  if ( NumberOfPages > 0x200 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * NumberOfPages, 0x77526D4Du);
    if ( !PoolWithTag )
      return -1073741670;
  }
  else
  {
    PoolWithTag = P;
  }
  v10 = MiCaptureUlongPtrArray(PoolWithTag, v3, NumberOfPages);
  if ( v10 >= 0 )
  {
LABEL_6:
    v27 = MiLockAweVadsShared((__int64)CurrentThread);
    AweNode = MiGetAweNode(v6);
    v12 = (__int64)AweNode;
    if ( AweNode )
    {
      v7 = (int *)AweNode[4];
      v14 = AweNode[3];
      v15 = ExGetCallBackBlockRoutine((__int64)v7);
      if ( v15 == 1 || (((v15 << 12) - 1) & v6) == 0 )
      {
        v16 = ((v15 * NumberOfPages) << 12) + v6 - 1;
        if ( v16 > v6 )
        {
          if ( v6 < (*(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32)) << 12
            || v16 > (((*(unsigned int *)(v14 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 33) << 32)) << 12) | 0xFFF) )
          {
            v10 = -1073741585;
          }
          else
          {
            PteAddress = MiGetPteAddress(v6);
            if ( v18 == v19 )
            {
              do
                PteAddress = MiGetPteAddress(PteAddress);
              while ( v20 != 1 );
            }
            v8 = MiLockAwePagesShared((__int64)v7, (__int64)CurrentThread);
            if ( !PoolWithTag
              || (v10 = MiReferenceIncomingPhysicalPages(
                          (__int64)v7,
                          (__int64)PoolWithTag,
                          NumberOfPages,
                          0LL,
                          &v24,
                          v12,
                          PteAddress),
                  v10 >= 0) )
            {
              v25 = MiWriteAwePtes(
                      v7,
                      (__int64)PoolWithTag,
                      NumberOfPages,
                      0LL,
                      (__int64)&Process[1].IdealNode[6],
                      v14,
                      PteAddress);
              v10 = 0;
            }
          }
          if ( v8 )
            MiUnlockAweVadsShared((__int64)CurrentThread, v8);
        }
        else
        {
          v10 = -1073741584;
        }
      }
      else
      {
        v10 = -1073741585;
      }
      v3 = (char *)UserPfnArray;
    }
    else
    {
      v10 = -1073741585;
    }
    if ( v27 )
      MiUnlockAweVadsShared((__int64)CurrentThread, v27);
  }
  v21 = &v24;
  v22 = 2LL;
  do
  {
    if ( *v21 )
      MiFreePhysicalPageChain((unsigned int *)v7, *v21, 0);
    ++v21;
    --v22;
  }
  while ( v22 );
  if ( v3 )
  {
    if ( PoolWithTag != (_QWORD *)P )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  return v10;
}
