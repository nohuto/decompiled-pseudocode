/*
 * XREFs of NtMapUserPhysicalPagesScatter @ 0x140852910
 * Callers:
 *     <none>
 * Callees:
 *     ExGetCallBackBlockRoutine @ 0x140088BA0 (ExGetCallBackBlockRoutine.c)
 *     PsGetHostSilo @ 0x140091BB0 (PsGetHostSilo.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MiFreePhysicalPageChain @ 0x1402B07AC (MiFreePhysicalPageChain.c)
 *     MiGetAweNode @ 0x1402B0F08 (MiGetAweNode.c)
 *     MiLockAwePagesShared @ 0x1402B14A8 (MiLockAwePagesShared.c)
 *     MiLockAweVadsShared @ 0x1402B1504 (MiLockAweVadsShared.c)
 *     MiUnlockAweVadsShared @ 0x1402B22D0 (MiUnlockAweVadsShared.c)
 *     MiWriteAwePtes @ 0x1402B2468 (MiWriteAwePtes.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiCaptureUlongPtrArray @ 0x14085095C (MiCaptureUlongPtrArray.c)
 *     MiReferenceIncomingPhysicalPages @ 0x14085119C (MiReferenceIncomingPhysicalPages.c)
 */

NTSTATUS __stdcall NtMapUserPhysicalPagesScatter(
        PVOID *VirtualAddresses,
        ULONG_PTR NumberOfPages,
        PULONG_PTR UserPfnArray)
{
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 *PoolWithTag; // r14
  unsigned int *v9; // r15
  unsigned __int64 *v10; // rbp
  _KPROCESS *Process; // r12
  NTSTATUS v12; // edi
  unsigned __int64 v13; // rbx
  _QWORD *AweNode; // rax
  __int64 v15; // r12
  int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // r9
  unsigned __int64 *v19; // rax
  int v20; // r10d
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r11
  __int64 v23; // rax
  _QWORD *v24; // rax
  int v25; // eax
  ULONG_PTR v26; // rbx
  __int64 *v27; // rbx
  __int64 v28; // rsi
  unsigned __int64 *v29; // [rsp+40h] [rbp-2088h]
  __int64 v30; // [rsp+48h] [rbp-2080h] BYREF
  __int64 v31; // [rsp+50h] [rbp-2078h]
  __int64 v32; // [rsp+58h] [rbp-2070h]
  __int64 v33; // [rsp+60h] [rbp-2068h]
  unsigned __int16 *v34; // [rsp+68h] [rbp-2060h]
  ULONG_PTR v35; // [rsp+70h] [rbp-2058h]
  _BYTE P[4096]; // [rsp+80h] [rbp-2048h] BYREF
  char v37; // [rsp+1080h] [rbp-1048h] BYREF

  v30 = 0LL;
  v31 = 0LL;
  if ( NumberOfPages > 0xFFFFFFFFFFFFFLL )
    return -1073741584;
  CurrentThread = KeGetCurrentThread();
  PoolWithTag = (unsigned __int64 *)P;
  v9 = 0LL;
  v10 = 0LL;
  Process = CurrentThread->ApcState.Process;
  if ( NumberOfPages > 0x200 )
  {
    PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(
                                        NonPagedPoolNx,
                                        NumberOfPages
                                      * ((((unsigned __int128)-(__int128)(unsigned __int64)UserPfnArray >> 64) & 8) + 8),
                                        0x77526D4Du);
    if ( !PoolWithTag )
      return -1073741670;
  }
  v29 = PoolWithTag;
  v12 = MiCaptureUlongPtrArray(PoolWithTag, (char *)VirtualAddresses, NumberOfPages);
  if ( v12 >= 0 )
  {
    if ( !NumberOfPages )
      return 0;
    if ( !UserPfnArray )
      goto LABEL_13;
    v10 = (unsigned __int64 *)&v37;
    if ( NumberOfPages > 0x200 )
      v10 = &PoolWithTag[NumberOfPages];
    v12 = MiCaptureUlongPtrArray(v10, (char *)UserPfnArray, NumberOfPages);
    if ( v12 >= 0 )
    {
LABEL_13:
      v13 = *PoolWithTag;
      v34 = &Process[1].IdealNode[12];
      v12 = 0;
      v35 = MiLockAweVadsShared((__int64)CurrentThread);
      AweNode = MiGetAweNode(v13);
      v15 = (__int64)AweNode;
      if ( AweNode )
      {
        v9 = (unsigned int *)AweNode[4];
        v33 = AweNode[3];
        v16 = *(_DWORD *)(v33 + 48) & 0x10000;
        v17 = ExGetCallBackBlockRoutine((__int64)v9);
        v32 = v17;
        v19 = PoolWithTag;
        v20 = -1073741585;
        while ( 1 )
        {
          v21 = *v19;
          if ( v17 == 1 )
          {
            v22 = *v19;
          }
          else
          {
            v23 = (v17 << 12) - 1;
            if ( (v23 & v21) != 0 )
              goto LABEL_38;
            v22 = v23 + v21;
          }
          if ( v16 && (unsigned int)PsGetHostSilo() )
          {
LABEL_38:
            v12 = v20;
            goto LABEL_39;
          }
          if ( v21 < (*(unsigned int *)(v18 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v18 + 32) << 32)) << 12
            || v22 > (((*(unsigned int *)(v18 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v18 + 33) << 32)) << 12) | 0xFFF) )
          {
            v24 = MiGetAweNode(v21);
            if ( !v24 || (unsigned int *)v24[4] != v9 )
              goto LABEL_38;
            v18 = v24[3];
            v25 = *(_DWORD *)(v18 + 48) & 0x10000;
            if ( v16 )
            {
              if ( !v25 )
                v12 = v20;
            }
            else if ( v25 )
            {
              v12 = v20;
            }
          }
          v19 = v29 + 1;
          v29 = v19;
          if ( v19 >= &PoolWithTag[NumberOfPages] )
            break;
          v17 = v32;
        }
        v26 = MiLockAwePagesShared((__int64)v9, (__int64)CurrentThread);
        if ( !v10
          || (v12 = MiReferenceIncomingPhysicalPages(
                      (__int64)v9,
                      (__int64)v10,
                      NumberOfPages,
                      (__int64)PoolWithTag,
                      &v30,
                      v15,
                      0LL),
              v12 >= 0) )
        {
          v31 = MiWriteAwePtes((__int64)v9, v10, NumberOfPages, (__int64)PoolWithTag, (__int64)v34, v33, 0LL);
        }
        if ( v26 )
          MiUnlockAweVadsShared((__int64)CurrentThread, v26);
      }
      else
      {
        v12 = -1073741585;
      }
LABEL_39:
      if ( v35 )
        MiUnlockAweVadsShared((__int64)CurrentThread, v35);
    }
  }
  v27 = &v30;
  v28 = 2LL;
  do
  {
    if ( *v27 )
      MiFreePhysicalPageChain(v9, *v27, 0);
    ++v27;
    --v28;
  }
  while ( v28 );
  if ( PoolWithTag != (unsigned __int64 *)P )
    ExFreePoolWithTag(PoolWithTag, 0);
  return v12;
}
