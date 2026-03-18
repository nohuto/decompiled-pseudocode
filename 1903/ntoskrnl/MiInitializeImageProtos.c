/*
 * XREFs of MiInitializeImageProtos @ 0x1400A2264
 * Callers:
 *     MiCreateImageFileMap @ 0x14068AE6C (MiCreateImageFileMap.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026A60 (MiUnmapPageInHyperSpaceWorker.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002DD70 (MiMapPageInHyperSpaceWorker.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14002FA50 (MmMapLockedPagesSpecifyCache.c)
 *     MiLockProtoPoolPage @ 0x140054D30 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x140054F90 (MiUnlockProtoPoolPage.c)
 *     MiGetEffectivePagePriorityThread @ 0x14008DCDC (MiGetEffectivePagePriorityThread.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140091A00 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiGetPageForHeader @ 0x1400A2988 (MiGetPageForHeader.c)
 *     MiInitializeTransitionPfn @ 0x1400A3DA8 (MiInitializeTransitionPfn.c)
 *     MiReferenceControlAreaPfn @ 0x1400A6610 (MiReferenceControlAreaPfn.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x1400CA7B0 (MmAccessFault.c)
 *     MiEndingOffset @ 0x1400D8B3C (MiEndingOffset.c)
 *     MiStartingOffset @ 0x1400D8C50 (MiStartingOffset.c)
 *     KeCopyPage @ 0x1401C7AB0 (KeCopyPage.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall MiInitializeImageProtos(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 result; // rax
  char v4; // bp
  __int64 v5; // rbx
  ULONG_PTR v6; // rsi
  __int64 v7; // r15
  unsigned __int64 v8; // rdi
  __int64 v9; // r14
  unsigned __int64 v10; // rbx
  __int64 v11; // r12
  char *v12; // rbx
  unsigned __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // [rsp+30h] [rbp-78h]
  __int64 v20; // [rsp+38h] [rbp-70h]
  unsigned __int64 v21; // [rsp+40h] [rbp-68h]
  unsigned __int64 v22; // [rsp+48h] [rbp-60h]
  __int64 v23; // [rsp+50h] [rbp-58h]
  unsigned __int8 v26; // [rsp+C0h] [rbp+18h] BYREF
  int v27; // [rsp+C8h] [rbp+20h] BYREF

  v2 = a1;
  v20 = *(_QWORD *)(qword_140466188 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  v19 = *(unsigned int *)(a2 + 40);
  result = MiGetEffectivePagePriorityThread((__int64)KeGetCurrentThread());
  v4 = result;
  if ( (unsigned int)result > 5 )
  {
    v4 = 5;
  }
  else if ( (_DWORD)result )
  {
    v4 = result - 1;
  }
  v5 = v2 + 128;
  v26 = 17;
  v6 = 0LL;
  if ( v2 != -128 )
  {
    do
    {
      v7 = *(_QWORD *)(v5 + 16);
      v8 = *(_QWORD *)(v5 + 8);
      v23 = v7;
      if ( (*(_BYTE *)(v5 + 34) & 2) == 0 )
      {
        v9 = MiStartingOffset(v5, v8, 0xFFFFFFFFLL);
        result = MiEndingOffset(v5);
        v21 = result;
        v10 = v8 + 8LL * *(unsigned int *)(v5 + 44);
        v22 = v10;
        if ( v8 < v10 )
        {
          while ( 1 )
          {
            if ( (v8 & 0xFFF) != 0 && v6 )
              goto LABEL_9;
            if ( v6 )
              MiUnlockProtoPoolPage(v6, v26);
            result = MiLockProtoPoolPage(v8, &v26);
            v6 = result;
            if ( result )
            {
LABEL_9:
              if ( v9 + 4096 > v19 )
              {
                v7 = 0LL;
                break;
              }
              result = MI_READ_PTE_LOCK_FREE(v8);
              if ( (result & 1) == 0 && (result & 0xC00) != 0x800 && (result & 0x400) != 0 )
              {
                result = MiGetPageForHeader(v20, (*(_DWORD *)(v2 + 56) >> 20) & 0x3F);
                v11 = result;
                if ( result != -1 )
                {
                  if ( (*(_BYTE *)(a2 + 10) & 5) != 0 )
                    v12 = *(char **)(a2 + 24);
                  else
                    v12 = (char *)MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0xC0000020);
                  v13 = MiMapPageInHyperSpaceWorker(v11, 0LL, 0x80000000);
                  KeCopyPage(v13, &v12[v9]);
                  if ( v9 + 4096 > v21 )
                    memset((void *)(v13 - (unsigned int)(v9 - v21 + 4096) + 4096), 0, (unsigned int)(v9 - v21 + 4096));
                  LOBYTE(v14) = 17;
                  MiUnmapPageInHyperSpaceWorker(v13, v14, 0x80000000LL);
                  v15 = 48 * v11 - 0x58000000000LL;
                  MiReferenceControlAreaPfn(a1, 0LL, 1LL);
                  v27 = 0;
                  while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
                  {
                    do
                      KeYieldProcessorEx(&v27);
                    while ( *(__int64 *)(v15 + 24) < 0 );
                  }
                  MiInitializeTransitionPfn(v11, v8, -1LL);
                  *(_BYTE *)(v15 + 35) ^= (*(_BYTE *)(v15 + 35) ^ v4) & 7;
                  MiRemoveLockedPageChargeAndDecRef(48 * v11 - 0x58000000000LL, v16, v17, v18);
                  result = 0x7FFFFFFFFFFFFFFFLL;
                  _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  v10 = v22;
                }
                v2 = a1;
              }
              v8 += 8LL;
              v9 += 4096LL;
            }
            else
            {
              result = MmAccessFault(2uLL, v8);
            }
            if ( v8 >= v10 )
            {
              v7 = v23;
              break;
            }
          }
        }
        if ( v6 )
        {
          result = MiUnlockProtoPoolPage(v6, v26);
          v6 = 0LL;
        }
      }
      v5 = v7;
    }
    while ( v7 );
  }
  return result;
}
