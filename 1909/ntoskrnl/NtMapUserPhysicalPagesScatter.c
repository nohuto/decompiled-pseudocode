/*
 * XREFs of NtMapUserPhysicalPagesScatter @ 0x140897730
 * Callers:
 *     <none>
 * Callees:
 *     ExGetCallBackBlockRoutine @ 0x14013D6E0 (ExGetCallBackBlockRoutine.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     MiFreePhysicalPageChain @ 0x1402D5A40 (MiFreePhysicalPageChain.c)
 *     MiGetAweNode @ 0x1402D61C8 (MiGetAweNode.c)
 *     MiLockAwePagesShared @ 0x1402D6BE0 (MiLockAwePagesShared.c)
 *     MiLockAweVadsShared @ 0x1402D6C3C (MiLockAweVadsShared.c)
 *     MiUnlockAweVadsShared @ 0x1402D79D0 (MiUnlockAweVadsShared.c)
 *     MiWriteAwePtes @ 0x1402D7B68 (MiWriteAwePtes.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiCaptureUlongPtrArray @ 0x140895898 (MiCaptureUlongPtrArray.c)
 *     MiReferenceIncomingPhysicalPages @ 0x1408960F4 (MiReferenceIncomingPhysicalPages.c)
 */

NTSTATUS __stdcall NtMapUserPhysicalPagesScatter(
        PVOID *VirtualAddresses,
        ULONG_PTR NumberOfPages,
        PULONG_PTR UserPfnArray)
{
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 *PoolWithTag; // r14
  int *v9; // r15
  unsigned __int64 *v10; // rbp
  _KPROCESS *Process; // r12
  NTSTATUS v12; // edi
  unsigned __int64 v13; // rbx
  _QWORD *AweNode; // rax
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // r9
  int v18; // r10d
  unsigned __int64 *v19; // rbx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r11
  __int64 v22; // rax
  _QWORD *v23; // rax
  int v24; // eax
  ULONG_PTR v25; // rbx
  __int64 *v26; // rbx
  __int64 v27; // rsi
  int v28; // [rsp+40h] [rbp-2088h]
  __int64 v29; // [rsp+48h] [rbp-2080h] BYREF
  __int64 v30; // [rsp+50h] [rbp-2078h]
  __int64 v31; // [rsp+58h] [rbp-2070h]
  __int64 v32; // [rsp+60h] [rbp-2068h]
  unsigned __int16 *v33; // [rsp+68h] [rbp-2060h]
  ULONG_PTR v34; // [rsp+70h] [rbp-2058h]
  _BYTE P[4096]; // [rsp+80h] [rbp-2048h] BYREF
  char v36; // [rsp+1080h] [rbp-1048h] BYREF

  v29 = 0LL;
  v30 = 0LL;
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
  v12 = MiCaptureUlongPtrArray(PoolWithTag, (char *)VirtualAddresses, NumberOfPages);
  if ( v12 >= 0 )
  {
    if ( !NumberOfPages )
      return 0;
    if ( !UserPfnArray )
      goto LABEL_13;
    v10 = (unsigned __int64 *)&v36;
    if ( NumberOfPages > 0x200 )
      v10 = &PoolWithTag[NumberOfPages];
    v12 = MiCaptureUlongPtrArray(v10, (char *)UserPfnArray, NumberOfPages);
    if ( v12 >= 0 )
    {
LABEL_13:
      v13 = *PoolWithTag;
      v33 = &Process[1].IdealNode[6];
      v12 = 0;
      v34 = MiLockAweVadsShared((__int64)CurrentThread);
      AweNode = MiGetAweNode(v13);
      v15 = (__int64)AweNode;
      if ( AweNode )
      {
        v9 = (int *)AweNode[4];
        v32 = AweNode[3];
        v28 = *(_DWORD *)(v32 + 48) & 0x1100000;
        v16 = ExGetCallBackBlockRoutine((__int64)v9);
        v31 = v16;
        v18 = -1073741585;
        v19 = PoolWithTag;
        while ( 1 )
        {
          v20 = *v19;
          if ( v16 == 1 )
          {
            v21 = *v19;
          }
          else
          {
            v22 = (v16 << 12) - 1;
            if ( (v22 & v20) != 0 )
              goto LABEL_36;
            v21 = v22 + v20;
          }
          if ( v20 < (*(unsigned int *)(v17 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 32) << 32)) << 12
            || v21 > (((*(unsigned int *)(v17 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 33) << 32)) << 12) | 0xFFF) )
          {
            v23 = MiGetAweNode(*v19);
            if ( !v23 || (int *)v23[4] != v9 )
            {
LABEL_36:
              v12 = v18;
              goto LABEL_37;
            }
            v17 = v23[3];
            v24 = *(_DWORD *)(v17 + 48) & 0x1100000;
            if ( v28 == 17825792 )
            {
              if ( v24 != 17825792 )
                v12 = v18;
            }
            else if ( v24 == 17825792 )
            {
              v12 = v18;
            }
          }
          if ( ++v19 >= &PoolWithTag[NumberOfPages] )
            break;
          v16 = v31;
        }
        v25 = MiLockAwePagesShared((__int64)v9, (__int64)CurrentThread);
        if ( !v10
          || (v12 = MiReferenceIncomingPhysicalPages(
                      (__int64)v9,
                      (__int64)v10,
                      NumberOfPages,
                      (__int64)PoolWithTag,
                      &v29,
                      v15,
                      0LL),
              v12 >= 0) )
        {
          v30 = MiWriteAwePtes(v9, (__int64)v10, NumberOfPages, (__int64)PoolWithTag, (__int64)v33, v32, 0LL);
        }
        if ( v25 )
          MiUnlockAweVadsShared((__int64)CurrentThread, v25);
      }
      else
      {
        v12 = -1073741585;
      }
LABEL_37:
      if ( v34 )
        MiUnlockAweVadsShared((__int64)CurrentThread, v34);
    }
  }
  v26 = &v29;
  v27 = 2LL;
  do
  {
    if ( *v26 )
      MiFreePhysicalPageChain((unsigned int *)v9, *v26, 0);
    ++v26;
    --v27;
  }
  while ( v27 );
  if ( PoolWithTag != (unsigned __int64 *)P )
    ExFreePoolWithTag(PoolWithTag, 0);
  return v12;
}
