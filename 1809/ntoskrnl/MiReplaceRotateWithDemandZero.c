/*
 * XREFs of MiReplaceRotateWithDemandZero @ 0x140122AC0
 * Callers:
 *     MmRotatePhysicalView @ 0x14066CAD0 (MmRotatePhysicalView.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiLockPageTableInternal @ 0x14006CA10 (MiLockPageTableInternal.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiPageTableLockIsContended @ 0x140096344 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x1400991E0 (MiWorkingSetIsContended.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     KeShouldYieldProcessor @ 0x1400F9D60 (KeShouldYieldProcessor.c)
 *     MiUnlockPageTableInternal @ 0x140104B10 (MiUnlockPageTableInternal.c)
 *     MiUnmapFrameBuffer @ 0x140122E34 (MiUnmapFrameBuffer.c)
 *     MiIsProbeActive @ 0x140122F4C (MiIsProbeActive.c)
 *     MiDereferenceIoPages @ 0x140123704 (MiDereferenceIoPages.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall MiReplaceRotateWithDemandZero(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  _KPROCESS *Process; // r13
  unsigned int IsProbeActive; // r12d
  __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r14
  __int64 v9; // r13
  unsigned __int64 v10; // rsi
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // r15
  __int64 v19; // rdx
  unsigned __int64 v20; // rbx
  __int64 v21; // r8
  unsigned __int8 v23; // [rsp+28h] [rbp-E0h]
  unsigned int v24; // [rsp+2Ch] [rbp-DCh]
  unsigned int v25; // [rsp+30h] [rbp-D8h]
  int v26; // [rsp+34h] [rbp-D4h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-D0h]
  __int64 v28; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+48h] [rbp-C0h]
  __int64 v30; // [rsp+50h] [rbp-B8h]
  int v31; // [rsp+58h] [rbp-B0h] BYREF
  __int16 v32; // [rsp+5Ch] [rbp-ACh]
  __int64 v33; // [rsp+60h] [rbp-A8h]
  __int64 v34; // [rsp+68h] [rbp-A0h]
  __int64 v35; // [rsp+70h] [rbp-98h]
  _QWORD v36[44]; // [rsp+118h] [rbp+10h] BYREF

  v25 = a3;
  v24 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  IsProbeActive = 0;
  v5 = 0LL;
  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v27 = v7;
  v8 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v32 = 0;
  v34 = 0LL;
  v9 = (__int64)&Process[1].IdealNode[12];
  v35 = 0LL;
  v10 = 0LL;
  v31 = 1;
  v33 = 20LL;
  v29 = v9;
  v23 = MiLockWorkingSetShared(v9);
  if ( v6 <= v7 )
  {
    v11 = 0LL;
    v30 = 0LL;
    while ( 1 )
    {
      if ( !v10 )
        goto LABEL_29;
      if ( (v6 & 0xFFF) == 0 )
        break;
LABEL_5:
      if ( !IsProbeActive )
        IsProbeActive = MiIsProbeActive(v6, 1LL, 3LL);
      if ( (unsigned int)MiUnmapFrameBuffer(v6, v25, IsProbeActive, &v28) )
        IsProbeActive = 1;
      if ( v28 != -1 )
      {
        if ( (_DWORD)v5 && (v12 = 2LL * (unsigned int)(v5 - 1), v13 = v36[2 * (unsigned int)(v5 - 1) + 1], v13 == v28) )
        {
          v14 = v13 + 1;
        }
        else
        {
          v14 = v28 + 1;
          v12 = 2LL * (unsigned int)v5;
          v5 = (unsigned int)(v5 + 1);
          v36[v12] = v28;
        }
        v36[v12 + 1] = v14;
      }
      MiInsertTbFlushEntry((__int64)&v31, (__int64)((v6 << 25) - v11) >> 16, 1LL, 0);
      ++v24;
      v6 += 8LL;
      if ( (v6 & 0xFFF) == 0
        || v6 > v27
        || (_DWORD)v5 == 22
        || (v6 & 0x78) == 0
        && (MiWorkingSetIsContended(v9) || (unsigned int)MiPageTableLockIsContended(v9, v10) || KeShouldYieldProcessor()) )
      {
        MiFlushTbList(&v31, v15, v16, v17);
        if ( (_DWORD)v5 )
        {
          v18 = v36;
          do
          {
            MiDereferenceIoPages(1LL, *v18, v18[1] - *v18);
            v18 += 2;
            --v5;
          }
          while ( v5 );
          v9 = v29;
          v11 = v30;
        }
        v20 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v8) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v26 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v26, v19, v21);
          while ( *(__int64 *)(v20 + 24) < 0 );
        }
        *(_QWORD *)(v20 + 24) ^= (*(_QWORD *)(v20 + 24) ^ (*(_QWORD *)(v20 + 24) - v24)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockPageTableInternal(v9, v10);
        MiUnlockWorkingSetShared(v9, v23);
        if ( v6 > v27 )
          return IsProbeActive;
        v5 = 0LL;
        v8 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v24 = 0;
        v10 = 0LL;
        MiLockWorkingSetShared(v9);
      }
    }
    MiUnlockPageTableInternal(v9, v10);
LABEL_29:
    v10 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(v9, v10, 0);
    goto LABEL_5;
  }
  return IsProbeActive;
}
