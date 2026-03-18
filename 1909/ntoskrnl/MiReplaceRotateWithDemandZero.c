/*
 * XREFs of MiReplaceRotateWithDemandZero @ 0x1400F4884
 * Callers:
 *     MmRotatePhysicalView @ 0x1406A4CA0 (MmRotatePhysicalView.c)
 * Callees:
 *     MiWorkingSetIsContended @ 0x140023440 (MiWorkingSetIsContended.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058D70 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockPageTableInternal @ 0x1400ABA00 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiPageTableLockIsContended @ 0x1400CB088 (MiPageTableLockIsContended.c)
 *     MiUnmapFrameBuffer @ 0x1400F4C0C (MiUnmapFrameBuffer.c)
 *     MiIsProbeActive @ 0x1400F4D24 (MiIsProbeActive.c)
 *     MiDereferenceIoPages @ 0x1400F55EC (MiDereferenceIoPages.c)
 *     MiUnlockPageTableInternal @ 0x1401000D0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140108920 (KeShouldYieldProcessor.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall MiReplaceRotateWithDemandZero(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int IsProbeActive; // r15d
  __int64 v6; // rbx
  _KPROCESS *Process; // r13
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r14
  __int64 v10; // r13
  unsigned __int64 v11; // rsi
  __int64 v12; // r12
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // r12
  unsigned __int64 v20; // rbx
  unsigned __int8 v22; // [rsp+28h] [rbp-E0h]
  unsigned int v23; // [rsp+2Ch] [rbp-DCh]
  unsigned int v24; // [rsp+30h] [rbp-D8h]
  int v25; // [rsp+34h] [rbp-D4h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-D0h]
  __int64 v27; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+48h] [rbp-C0h]
  __int64 v29; // [rsp+50h] [rbp-B8h]
  _QWORD v30[24]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v31[44]; // [rsp+118h] [rbp+10h] BYREF

  v24 = a3;
  memset(v30, 0, 0xB8uLL);
  v23 = 0;
  IsProbeActive = 0;
  v6 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v26 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  WORD2(v30[0]) = 0;
  v30[2] = 0LL;
  v10 = (__int64)&Process[1].IdealNode[6];
  v30[3] = 0LL;
  v11 = 0LL;
  LODWORD(v30[0]) = 1;
  LODWORD(v30[1]) = 20;
  v28 = v10;
  v22 = MiLockWorkingSetShared(v10);
  if ( v8 <= v26 )
  {
    v12 = 0LL;
    v29 = 0LL;
    while ( 1 )
    {
      if ( !v11 )
        goto LABEL_29;
      if ( (v8 & 0xFFF) == 0 )
        break;
LABEL_5:
      if ( !IsProbeActive )
        IsProbeActive = MiIsProbeActive(v8, 1LL, 3LL);
      if ( (unsigned int)MiUnmapFrameBuffer(v8, v24, IsProbeActive, &v27) )
        IsProbeActive = 1;
      if ( v27 != -1 )
      {
        if ( (_DWORD)v6 && (v13 = 2LL * (unsigned int)(v6 - 1), v14 = v31[2 * (unsigned int)(v6 - 1) + 1], v14 == v27) )
        {
          v15 = v14 + 1;
        }
        else
        {
          v15 = v27 + 1;
          v13 = 2LL * (unsigned int)v6;
          v6 = (unsigned int)(v6 + 1);
          v31[v13] = v27;
        }
        v31[v13 + 1] = v15;
      }
      MiInsertTbFlushEntry((__int64)v30, (__int64)((v8 << 25) - v12) >> 16, 1LL, 0);
      ++v23;
      v8 += 8LL;
      if ( (v8 & 0xFFF) == 0
        || v8 > v26
        || (_DWORD)v6 == 22
        || (v8 & 0x78) == 0
        && (MiWorkingSetIsContended(v10)
         || (unsigned int)MiPageTableLockIsContended(v10, v11)
         || KeShouldYieldProcessor()) )
      {
        MiFlushTbList((int *)v30, v16, v17, v18);
        if ( (_DWORD)v6 )
        {
          v19 = v31;
          do
          {
            MiDereferenceIoPages(1LL, *v19, v19[1] - *v19);
            v19 += 2;
            --v6;
          }
          while ( v6 );
          v10 = v28;
          v12 = v29;
        }
        v20 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v9) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v25 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v25);
          while ( *(__int64 *)(v20 + 24) < 0 );
        }
        *(_QWORD *)(v20 + 24) ^= (*(_QWORD *)(v20 + 24) ^ (*(_QWORD *)(v20 + 24) - v23)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockPageTableInternal(v10);
        MiUnlockWorkingSetShared(v10, v22);
        if ( v8 > v26 )
          return IsProbeActive;
        v6 = 0LL;
        v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v23 = 0;
        v11 = 0LL;
        MiLockWorkingSetShared(v10);
      }
    }
    MiUnlockPageTableInternal(v10);
LABEL_29:
    v11 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(v10, v11, 0LL);
    goto LABEL_5;
  }
  return IsProbeActive;
}
