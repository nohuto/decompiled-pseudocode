/*
 * XREFs of MiReplicatePteChangeToProcess @ 0x140175178
 * Callers:
 *     MiReplicatePteChange @ 0x140175014 (MiReplicatePteChange.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14003AB00 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140082770 (MiMapPageInHyperSpaceWorker.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiShadowTopLevelPxes @ 0x14013CF0C (MiShadowTopLevelPxes.c)
 *     MiTransformValidPteInPlace @ 0x14016A80C (MiTransformValidPteInPlace.c)
 */

void __fastcall MiReplicatePteChangeToProcess(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rbx
  unsigned int v5; // esi
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  volatile signed __int64 *i; // rdi
  __int64 v10; // rax
  signed __int64 v11; // r10
  int v12; // edx
  __int64 v13; // r10

  v4 = a2;
  v5 = ((__int64)(a3 - a2) >> 3) + 1;
  if ( a1 )
    v7 = *(_QWORD *)(a1 + 40) >> 12;
  else
    v7 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL;
  v8 = MiMapPageInHyperSpaceWorker(v7, 0LL, 0x80000000);
  for ( i = (volatile signed __int64 *)(v8 + 8 * ((v4 >> 3) & 0x1FF)); v4 <= a3; ++i )
  {
    MI_READ_PTE_LOCK_FREE(v4);
    v10 = MI_READ_PTE_LOCK_FREE((unsigned __int64)i);
    if ( v11 != v10 )
    {
      if ( (v11 & 1) == 0 )
      {
        if ( MiPteInShadowRange((unsigned __int64)i) && (unsigned int)MiPteHasShadow() )
          v12 = 1;
        goto LABEL_7;
      }
      if ( (v10 & 1) == 0 )
      {
        if ( MiPteInShadowRange((unsigned __int64)i) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v12 = 1;
            if ( !HIBYTE(word_14043B26C) )
LABEL_19:
              v13 |= 0x8000000000000000uLL;
          }
          else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
          {
            goto LABEL_19;
          }
        }
LABEL_7:
        *i = v13;
        if ( v12 )
          MiWritePteShadow((__int64)i, v13);
        goto LABEL_9;
      }
      MiTransformValidPteInPlace(i, v4, v11, 3u);
    }
LABEL_9:
    v4 += 8LL;
  }
  MiUnmapPageInHyperSpaceWorker(v8, 0x11u, 0x80000000LL);
  MiShadowTopLevelPxes(a1, v4 - 8LL * v5, v5);
}
