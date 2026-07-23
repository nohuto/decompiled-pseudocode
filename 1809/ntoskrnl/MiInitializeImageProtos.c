/*
 * XREFs of MiInitializeImageProtos @ 0x1400930D8
 * Callers:
 *     MiCreateImageFileMap @ 0x14061DEB8 (MiCreateImageFileMap.c)
 * Callees:
 *     MiGetEffectivePagePriorityThread @ 0x14001AEA8 (MiGetEffectivePagePriorityThread.c)
 *     MiInitializeTransitionPfn @ 0x140028D84 (MiInitializeTransitionPfn.c)
 *     MiReferenceControlAreaPfn @ 0x14002CA8C (MiReferenceControlAreaPfn.c)
 *     MiLockProtoPoolPage @ 0x14002F030 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030B20 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiEndingOffset @ 0x140031090 (MiEndingOffset.c)
 *     MiStartingOffset @ 0x140031170 (MiStartingOffset.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14003AB00 (MiUnmapPageInHyperSpaceWorker.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14005C0C0 (MmMapLockedPagesSpecifyCache.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140082770 (MiMapPageInHyperSpaceWorker.c)
 *     MiGetPageForHeader @ 0x1400933F8 (MiGetPageForHeader.c)
 *     KeCopyPage @ 0x1401C0B30 (KeCopyPage.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

unsigned __int64 __fastcall MiInitializeImageProtos(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r12
  unsigned int EffectivePagePriorityThread; // eax
  char v6; // bp
  unsigned __int64 result; // rax
  __int64 v8; // r14
  __int64 v9; // rdi
  bool v10; // zf
  __int64 v11; // r15
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r15
  char *v17; // rbx
  unsigned __int64 v18; // r12
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v23; // [rsp+38h] [rbp-80h]
  unsigned __int64 v24; // [rsp+40h] [rbp-78h]
  __int64 v25; // [rsp+48h] [rbp-70h]
  unsigned __int64 v26; // [rsp+50h] [rbp-68h]
  unsigned __int64 v27; // [rsp+58h] [rbp-60h]
  __int64 v28; // [rsp+60h] [rbp-58h]
  unsigned __int8 v32; // [rsp+D8h] [rbp+20h] BYREF

  v3 = a1;
  v4 = a2;
  v25 = *(_QWORD *)(qword_14043B808 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  v24 = *(unsigned int *)(a2 + 40);
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)KeGetCurrentThread());
  v6 = EffectivePagePriorityThread;
  if ( EffectivePagePriorityThread > 5 )
  {
    v6 = 5;
  }
  else if ( EffectivePagePriorityThread )
  {
    v6 = EffectivePagePriorityThread - 1;
  }
  result = v3 + 128;
  v32 = 17;
  v8 = 0LL;
  v9 = v3 + 128;
  if ( v3 != -128 )
  {
    do
    {
      v10 = (*(_BYTE *)(v9 + 34) & 2) == 0;
      v11 = *(_QWORD *)(v9 + 16);
      v12 = *(_QWORD *)(v9 + 8);
      v28 = v11;
      if ( v10 )
      {
        v13 = MiStartingOffset((__int64 *)v9, v12, 0xFFFFFFFF);
        v14 = MiEndingOffset(v9);
        v15 = *(unsigned int *)(v9 + 44);
        v26 = v14;
        result = v12 + 8 * v15;
        v27 = result;
        if ( v12 < result )
        {
          while ( 1 )
          {
            if ( (v12 & 0xFFF) != 0 && v8 )
              goto LABEL_9;
            if ( v8 )
              MiUnlockProtoPoolPage(v8, v32);
            v8 = MiLockProtoPoolPage(v12, &v32);
            if ( v8 )
            {
LABEL_9:
              result = v13 + 4096;
              v23 = v13 + 4096;
              if ( v13 + 4096 > v24 )
              {
                v11 = 0LL;
                break;
              }
              result = MI_READ_PTE_LOCK_FREE(v12);
              if ( (result & 1) == 0 && (result & 0xC00) != 0x800 && (result & 0x400) != 0 )
              {
                if ( v9 == v3 + 128 && v12 == *(_QWORD *)(v9 + 8) )
                {
                  result = (unsigned __int64)((unsigned __int128)((a3 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
                  v16 = (a3 + 0x58000000000LL) / 48;
                }
                else
                {
                  result = MiGetPageForHeader(v25, (*(_DWORD *)(v3 + 56) >> 20) & 0x3F);
                  v16 = result;
                }
                if ( v16 != -1 )
                {
                  if ( (*(_BYTE *)(v4 + 10) & 5) != 0 )
                    v17 = *(char **)(v4 + 24);
                  else
                    v17 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v4, 0, MmCached, 0LL, 0, 0xC0000020);
                  v18 = MiMapPageInHyperSpaceWorker(v16, 0LL, 0x80000000);
                  KeCopyPage(v18, &v17[v13]);
                  if ( v23 > v26 )
                    memset((void *)(v18 - (unsigned int)(v13 - v26 + 4096) + 4096), 0, (unsigned int)(v13 - v26 + 4096));
                  MiUnmapPageInHyperSpaceWorker(v18, 0x11u, 0x80000000LL);
                  result = 0xFFFFFA8000000000uLL;
                  v19 = 48 * v16 - 0x58000000000LL;
                  if ( v19 != a3 )
                  {
                    MiReferenceControlAreaPfn(a1, 0LL, 1u);
                    v22 = 0;
                    while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
                    {
                      do
                        KeYieldProcessorEx(&v22, v20, v21);
                      while ( *(__int64 *)(v19 + 24) < 0 );
                    }
                    MiInitializeTransitionPfn(v16, (_QWORD *)v12);
                    *(_BYTE *)(v19 + 35) ^= (v6 ^ *(_BYTE *)(v19 + 35)) & 7;
                    MiRemoveLockedPageChargeAndDecRef(48 * v16 - 0x58000000000LL);
                    result = 0x7FFFFFFFFFFFFFFFLL;
                    _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  }
                  v4 = a2;
                  v3 = a1;
                }
              }
              v13 = v23;
              v12 += 8LL;
            }
            else
            {
              result = MmAccessFault(2uLL, v12, 0LL, 0LL);
            }
            if ( v12 >= v27 )
            {
              v11 = v28;
              break;
            }
          }
        }
        if ( v8 )
        {
          result = MiUnlockProtoPoolPage(v8, v32);
          v8 = 0LL;
        }
      }
      v9 = v11;
    }
    while ( v11 );
  }
  return result;
}
