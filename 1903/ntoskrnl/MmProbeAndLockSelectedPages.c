/*
 * XREFs of MmProbeAndLockSelectedPages @ 0x1400EF040
 * Callers:
 *     NtWriteFileGather @ 0x1406A3D30 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1406A4400 (NtReadFileScatter.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     MiProbePacketContended @ 0x14008DE30 (MiProbePacketContended.c)
 *     MiProbeLockFrame @ 0x14008F080 (MiProbeLockFrame.c)
 *     MiProbeAndLockPrepare @ 0x14008FB20 (MiProbeAndLockPrepare.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiProbeAndLockComplete @ 0x1400EEE40 (MiProbeAndLockComplete.c)
 *     MiLockProbePacketWorkingSet @ 0x1400EEFBC (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1400EF004 (MiUnlockProbePacketWorkingSet.c)
 *     MiProbeLeafFrame @ 0x1400F0464 (MiProbeLeafFrame.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
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
  int v14; // ebx
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
          v14 = MiProbeLeafFrame(v22);
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
          MiUnlockProbePacketWorkingSet((__int64)v22);
          MiLockProbePacketWorkingSet((__int64)v22);
          v16 = (_QWORD *)v22[6];
        }
        if ( ++v15 >= v11 )
          goto LABEL_18;
        v13 = AccessMode;
      }
      ++dword_1404662B8;
      v14 = -1073741819;
    }
LABEL_18:
    v14 = MiProbeAndLockComplete((__int64)v22, v14);
  }
  if ( PoolWithTag != (unsigned __int64 *)P )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v14 < 0 )
    RtlRaiseStatus(v14);
}
