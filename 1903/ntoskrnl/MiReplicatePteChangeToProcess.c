/*
 * XREFs of MiReplicatePteChangeToProcess @ 0x14017E3A4
 * Callers:
 *     MiReplicatePteChange @ 0x14017E240 (MiReplicatePteChange.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026A60 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002DD70 (MiMapPageInHyperSpaceWorker.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiShadowTopLevelPxes @ 0x1400E301C (MiShadowTopLevelPxes.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiTransformValidPteInPlace @ 0x140173E44 (MiTransformValidPteInPlace.c)
 */

struct _KTHREAD *__fastcall MiReplicatePteChangeToProcess(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rbx
  unsigned int v5; // esi
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // r15
  volatile signed __int64 *i; // rdi
  __int64 v11; // rax
  signed __int64 v12; // r10
  volatile signed __int64 v13; // r10

  v4 = a2;
  v5 = ((__int64)(a3 - a2) >> 3) + 1;
  if ( a1 )
    v7 = *(_QWORD *)(a1 + 40) >> 12;
  else
    v7 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL;
  v9 = MiMapPageInHyperSpaceWorker(v7, 0LL, 0x80000000);
  for ( i = (volatile signed __int64 *)(v9 + 8 * ((v4 >> 3) & 0x1FF)); v4 <= a3; ++i )
  {
    MI_READ_PTE_LOCK_FREE(v4);
    v11 = MI_READ_PTE_LOCK_FREE((unsigned __int64)i);
    if ( v12 != v11 )
    {
      if ( (v12 & 1) == 0 )
      {
        if ( MiPteInShadowRange((unsigned __int64)i) && (unsigned int)MiPteHasShadow() )
          v8 = 1LL;
        goto LABEL_7;
      }
      if ( (v11 & 1) == 0 )
      {
        if ( MiPteInShadowRange((unsigned __int64)i) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v8 = 1LL;
            if ( !HIBYTE(word_140465BEC) )
LABEL_19:
              v13 |= 0x8000000000000000uLL;
          }
          else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
          {
            goto LABEL_19;
          }
        }
LABEL_7:
        *i = v13;
        if ( (_DWORD)v8 )
          MiWritePteShadow((__int64)i);
        goto LABEL_9;
      }
      MiTransformValidPteInPlace(i, v4, v12, 3u);
    }
LABEL_9:
    v4 += 8LL;
  }
  LOBYTE(v8) = 17;
  MiUnmapPageInHyperSpaceWorker(v9, v8, 0x80000000LL);
  return MiShadowTopLevelPxes(a1, v4 - 8LL * v5, v5);
}
