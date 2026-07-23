/*
 * XREFs of MmProbeAndLockSelectedPages @ 0x140094920
 * Callers:
 *     NtWriteFileGather @ 0x1406CDB00 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1406CE630 (NtReadFileScatter.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiProbeAndLockPrepare @ 0x140040790 (MiProbeAndLockPrepare.c)
 *     MiProbeLockFrame @ 0x140041950 (MiProbeLockFrame.c)
 *     MiProbeAndLockComplete @ 0x1400935EC (MiProbeAndLockComplete.c)
 *     MiLockProbePacketWorkingSet @ 0x14009374C (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140093794 (MiUnlockProbePacketWorkingSet.c)
 *     MiProbeLeafFrame @ 0x140094BAC (MiProbeLeafFrame.c)
 *     MiProbePacketContended @ 0x1400964DC (MiProbePacketContended.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __stdcall MmProbeAndLockSelectedPages(
        PMDL MemoryDescriptorList,
        PFILE_SEGMENT_ELEMENT SegmentArray,
        KPROCESSOR_MODE AccessMode,
        LOCK_OPERATION Operation)
{
  BOOL v4; // edi
  char v6; // r14
  unsigned __int64 *v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rbx
  size_t v12; // r8
  unsigned __int64 *v13; // r13
  unsigned __int64 *v14; // rbx
  int v15; // r12d
  unsigned __int64 *v16; // rdi
  unsigned __int64 v17; // rbx
  __int64 v18; // rdx
  unsigned __int64 v19; // r15
  __int64 v20; // r9
  __int64 v21; // r8
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // rsi
  unsigned __int64 *v24; // rcx
  unsigned __int64 v25; // rax
  __int64 v26; // r9
  unsigned __int64 *P; // [rsp+48h] [rbp-B8h]
  __int64 v29; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v30[6]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 *v31; // [rsp+90h] [rbp-70h]
  char v32; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v33; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v34; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v35; // [rsp+F8h] [rbp-8h]
  __int64 v36; // [rsp+100h] [rbp+0h]
  _BYTE v37[4096]; // [rsp+110h] [rbp+10h] BYREF

  v4 = Operation != IoReadAccess;
  v6 = 0;
  v9 = (unsigned __int64 *)v37;
  v10 = ((MemoryDescriptorList->ByteCount & 0xFFF) != 0) + (MemoryDescriptorList->ByteCount >> 12);
  P = (unsigned __int64 *)v37;
  v11 = v10;
  if ( v10 > 0x200 )
  {
    P = (unsigned __int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v10, 0x72506D4Du);
    v9 = P;
    if ( !P )
      RtlRaiseStatus(-1073741670);
  }
  v12 = v11 * 8;
  v13 = &v9[v11];
  v14 = P;
  memmove(P, SegmentArray, v12);
  v15 = MiProbeAndLockPrepare((__int64)v30, (__int64)MemoryDescriptorList, *P, 1u, AccessMode, v4, 1);
  if ( v15 < 0 )
    goto LABEL_16;
  v16 = P;
  if ( P >= v13 )
    goto LABEL_15;
  while ( 1 )
  {
    v17 = *v16;
    v18 = 0x7FFFFFFFF8LL;
    v19 = *v16 >> 9;
    v20 = 0xFFFFFFFFFLL;
    v21 = 0x7FFFFFFF0000LL;
    v30[0] = v17;
    v30[1] = v17 + 1;
    v22 = (v19 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v30[2] = v22;
    *v31 = -1LL;
    if ( AccessMode )
    {
      if ( v17 >= 0x7FFFFFFF0000LL )
        break;
    }
    if ( (v32 & 0x20) != 0 && (v23 = v34, v17 <= v35) && v17 >= v34 )
    {
      if ( (v6 & 0x3F) != 0
        || !(unsigned int)MiProbePacketContended(v30, 0x7FFFFFFFF8LL, 0x7FFFFFFF0000LL, 0xFFFFFFFFFLL) )
      {
        if ( v36 == -1 )
        {
          v29 = MI_READ_PTE_LOCK_FREE(v22);
          v25 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v29);
          v33 = v26 & (v25 >> 12);
        }
        else
        {
          v33 = v36 + ((v17 - v23) >> 12);
        }
LABEL_11:
        v15 = MiProbeLockFrame(v30);
        if ( v15 < 0 )
          goto LABEL_14;
        v24 = v31++;
        *v24 = v33;
        goto LABEL_13;
      }
    }
    else if ( (v6 & 0xF) != 0
           || !(unsigned int)MiProbePacketContended(v30, 0x7FFFFFFFF8LL, 0x7FFFFFFF0000LL, 0xFFFFFFFFFLL) )
    {
      v15 = MiProbeLeafFrame(v30, v18, v21, v20);
      if ( v15 < 0 )
        goto LABEL_14;
      goto LABEL_11;
    }
    MiUnlockProbePacketWorkingSet((__int64)v30);
    --v16;
    MiLockProbePacketWorkingSet((__int64)v30);
LABEL_13:
    ++v16;
    ++v6;
    if ( v16 >= v13 )
      goto LABEL_14;
  }
  ++dword_14043B8D8;
  v15 = -1073741819;
LABEL_14:
  v14 = P;
LABEL_15:
  v15 = MiProbeAndLockComplete((__int64)v30, v15);
LABEL_16:
  if ( v14 != (unsigned __int64 *)v37 )
    ExFreePoolWithTag(v14, 0);
  if ( v15 < 0 )
    RtlRaiseStatus(v15);
}
