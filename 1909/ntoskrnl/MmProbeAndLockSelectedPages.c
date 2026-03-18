/*
 * XREFs of MmProbeAndLockSelectedPages @ 0x1400DE3F0
 * Callers:
 *     NtReadFileScatter @ 0x140674200 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x140674810 (NtWriteFileGather.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015E00 (RtlRaiseStatus.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiProbePacketContended @ 0x1400CB040 (MiProbePacketContended.c)
 *     MiProbeLockFrame @ 0x1400CC670 (MiProbeLockFrame.c)
 *     MiProbeAndLockPrepare @ 0x1400CD110 (MiProbeAndLockPrepare.c)
 *     MiProbeLeafFrame @ 0x1400DDB74 (MiProbeLeafFrame.c)
 *     MiProbeAndLockComplete @ 0x1400DE630 (MiProbeAndLockComplete.c)
 *     MiLockProbePacketWorkingSet @ 0x1400DE7AC (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1400DE7F4 (MiUnlockProbePacketWorkingSet.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __stdcall MmProbeAndLockSelectedPages(
        PMDL MemoryDescriptorList,
        PFILE_SEGMENT_ELEMENT SegmentArray,
        KPROCESSOR_MODE AccessMode,
        LOCK_OPERATION Operation)
{
  unsigned __int64 *PoolWithTag; // rdi
  BOOL v8; // esi
  unsigned __int64 v9; // rax
  size_t v10; // rbx
  unsigned __int64 *v11; // r13
  unsigned int v12; // r12d
  KPROCESSOR_MODE v13; // r15
  NTSTATUS v14; // ebx
  unsigned __int64 *v15; // r14
  _QWORD *v16; // rsi
  unsigned __int64 v17; // rcx
  unsigned int v18; // r15d
  __int64 v19; // rsi
  __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v22[22]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE P[4096]; // [rsp+100h] [rbp+0h] BYREF

  memset(v22, 0, 0xA8uLL);
  PoolWithTag = (unsigned __int64 *)P;
  v8 = Operation != IoReadAccess;
  v9 = (MemoryDescriptorList->ByteCount >> 12) + ((MemoryDescriptorList->ByteCount & 0xFFF) != 0);
  v10 = (unsigned int)v9;
  if ( v9 > 0x200 )
  {
    PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)v9, 0x72506D4Du);
    if ( !PoolWithTag )
      RtlRaiseStatus(-1073741670);
  }
  v11 = &PoolWithTag[v10];
  v12 = 0;
  memmove(PoolWithTag, SegmentArray, v10 * 8);
  v13 = AccessMode;
  v14 = MiProbeAndLockPrepare((__int64)v22, (__int64)MemoryDescriptorList, *PoolWithTag, 1u, AccessMode, v8, 1);
  if ( v14 >= 0 )
  {
    v15 = PoolWithTag;
    if ( PoolWithTag < v11 )
    {
      v16 = (_QWORD *)v22[6];
      while ( 1 )
      {
        v17 = *v15;
        v22[0] = v17;
        v22[1] = v17 + 1;
        *v16 = -1LL;
        v22[2] = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v17 >= 0x7FFFFFFF0000LL )
        {
          if ( v13 )
            break;
        }
        if ( (v22[8] & 0x20) != 0 && v17 <= v22[19] && v17 >= v22[18] )
        {
          if ( v22[20] == -1LL )
          {
            v21 = MI_READ_PTE_LOCK_FREE(((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            v22[16] = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v21) >> 12) & 0xFFFFFFFFFLL;
          }
          else
          {
            v22[16] = v22[20] + ((v17 - v22[18]) >> 12);
          }
          v18 = 64;
        }
        else
        {
          v14 = MiProbeLeafFrame((__int64)v22);
          if ( v14 < 0 )
            goto LABEL_18;
          v18 = 16;
        }
        v14 = MiProbeLockFrame((__int64)v22);
        if ( v14 < 0 )
          goto LABEL_18;
        v19 = v22[6];
        ++v12;
        *(_QWORD *)v22[6] = v22[16];
        v16 = (_QWORD *)(v19 + 8);
        v22[6] = v16;
        if ( !(v12 % v18) && MiProbePacketContended((__int64)v22) )
        {
          MiUnlockProbePacketWorkingSet(v22);
          MiLockProbePacketWorkingSet(v22);
          v16 = (_QWORD *)v22[6];
        }
        if ( ++v15 >= v11 )
          goto LABEL_18;
        v13 = AccessMode;
      }
      ++dword_140465FB8;
      v14 = -1073741819;
    }
LABEL_18:
    v14 = MiProbeAndLockComplete(v22, (unsigned int)v14, 7LL);
  }
  if ( PoolWithTag != (unsigned __int64 *)P )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v14 < 0 )
    RtlRaiseStatus(v14);
}
