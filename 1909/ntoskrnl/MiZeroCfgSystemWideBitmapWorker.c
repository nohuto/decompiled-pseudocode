/*
 * XREFs of MiZeroCfgSystemWideBitmapWorker @ 0x1400BC0B0
 * Callers:
 *     MiZeroCfgSystemWideBitmap @ 0x14012E91C (MiZeroCfgSystemWideBitmap.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000D050 (KxAcquireQueuedSpinLock.c)
 *     MiInsertPageInList @ 0x140026690 (MiInsertPageInList.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140026E50 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002B2E0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14002E160 (MiMapPageInHyperSpaceWorker.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiLockProtoPoolPage @ 0x140054DD0 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x140055030 (MiUnlockProtoPoolPage.c)
 *     MiCaptureDirtyBitToPfn @ 0x14005C224 (MiCaptureDirtyBitToPfn.c)
 *     MiLocatePagefileSubsection @ 0x1400710EC (MiLocatePagefileSubsection.c)
 *     MiReleasePageFileInfo @ 0x14008A250 (MiReleasePageFileInfo.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlinkPageFromList @ 0x1400B3280 (MiUnlinkPageFromList.c)
 *     MiTransferSoftwarePte @ 0x1400BB884 (MiTransferSoftwarePte.c)
 *     MiSetNonResidentPteHeat @ 0x1400BB940 (MiSetNonResidentPteHeat.c)
 *     MiDecrementShareCount @ 0x1400BB990 (MiDecrementShareCount.c)
 *     MiLockLeafPage @ 0x1400BC6F0 (MiLockLeafPage.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiCapturePageFileInfoInline @ 0x140119998 (MiCapturePageFileInfoInline.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011D320 (MiLockNestedPageAtDpcInline.c)
 *     MiReleasePageFileSpace @ 0x140125564 (MiReleasePageFileSpace.c)
 *     MiDiscardTransitionPteEx @ 0x14016817C (MiDiscardTransitionPteEx.c)
 *     KeZeroSinglePage @ 0x1401C8550 (KeZeroSinglePage.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

unsigned int *__fastcall MiZeroCfgSystemWideBitmapWorker(unsigned int *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r8
  unsigned __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // r9
  unsigned int *v8; // rsi
  __int64 v9; // r12
  unsigned __int64 v10; // r12
  unsigned int *result; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rdx
  int v16; // r8d
  unsigned __int64 v17; // r13
  ULONG_PTR v18; // rcx
  unsigned __int64 v19; // r14
  __int64 v20; // r15
  __int64 v21; // rax
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // r10
  __int16 v27; // r10
  ULONG_PTR v28; // r14
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned __int64 v31; // rbx
  __int64 v32; // rcx
  int v33; // r12d
  __int64 v34; // r13
  __int64 v35; // rax
  unsigned __int64 v36; // r14
  size_t v37; // r8
  void *v38; // rcx
  __int64 v39; // rdx
  unsigned __int64 v40; // rax
  char *v41; // rax
  unsigned __int64 v42; // rbx
  __int64 v43; // rdx
  unsigned __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rdx
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // r10
  unsigned __int64 v49; // r9
  volatile signed __int32 *v50; // r8
  unsigned int v51; // eax
  int v52; // esi
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // [rsp+20h] [rbp-69h]
  __int64 v55; // [rsp+28h] [rbp-61h]
  unsigned __int64 v56; // [rsp+30h] [rbp-59h] BYREF
  unsigned __int64 v57; // [rsp+38h] [rbp-51h]
  __int64 v58; // [rsp+40h] [rbp-49h]
  unsigned __int64 v59; // [rsp+48h] [rbp-41h] BYREF
  unsigned __int64 v60; // [rsp+50h] [rbp-39h]
  __int64 v61; // [rsp+58h] [rbp-31h] BYREF
  unsigned __int64 v62; // [rsp+60h] [rbp-29h]
  unsigned int *v63; // [rsp+68h] [rbp-21h]
  unsigned __int64 v64; // [rsp+70h] [rbp-19h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-11h] BYREF
  unsigned __int64 v66; // [rsp+90h] [rbp+7h]
  __int64 v67; // [rsp+98h] [rbp+Fh] BYREF
  unsigned __int8 v68; // [rsp+F0h] [rbp+67h] BYREF
  size_t Size; // [rsp+F8h] [rbp+6Fh]
  unsigned int v70; // [rsp+100h] [rbp+77h]
  unsigned int *v71; // [rsp+108h] [rbp+7Fh]

  v3 = a3 >> 3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = a2 >> 3;
  v6 = (a2 >> 3) & 0xFFF;
  v7 = *(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF;
  v70 = (a2 >> 3) & 0xFFF;
  v55 = *(_QWORD *)(qword_140465E88 + 8 * v7);
  LODWORD(Size) = ((unsigned __int16)(a2 >> 3) + (_WORD)v3) & 0xFFF;
  v64 = ((a2 >> 3) + v3 - 1) >> 12;
  v8 = MiLocatePagefileSubsection(a1, &v64);
  v63 = v8;
  v59 = v5 >> 12;
  v9 = *((_QWORD *)v8 + 1);
  v66 = 8 * v64;
  v10 = 8 * v64 + v9;
  result = MiLocatePagefileSubsection(a1, &v59);
  v71 = result;
  if ( *((_QWORD *)result + 1) )
  {
    v12 = v59;
  }
  else
  {
    do
    {
      if ( result == v8 )
        return result;
      result = (unsigned int *)*((_QWORD *)result + 2);
      v12 = 0LL;
      v71 = result;
      v59 = 0LL;
    }
    while ( !*((_QWORD *)result + 1) );
  }
  v13 = *((_QWORD *)result + 1);
  v14 = v13 + 8 * v12;
  if ( result == v8 )
  {
    v15 = v10;
  }
  else
  {
    v15 = v13 + 8LL * result[11];
    result = v71;
  }
  v16 = Size;
  v17 = v14;
  v54 = v15;
  if ( !(_DWORD)v6 )
    v17 = 0LL;
  v68 = 17;
  v62 = 0LL;
  v18 = 0LL;
  v60 = v17;
  if ( !(_DWORD)Size )
    v10 = 0LL;
  v58 = 0LL;
  v57 = v10;
  v19 = 0LL;
  while ( 1 )
  {
    if ( v14 < v15 )
      goto LABEL_11;
    if ( result == v8 )
    {
      if ( !v18 )
        return result;
      return (unsigned int *)MiUnlockProtoPoolPage(v18, v68);
    }
    result = (unsigned int *)*((_QWORD *)result + 2);
    v71 = result;
    if ( !*((_QWORD *)result + 1) )
      break;
LABEL_79:
    v14 = *((_QWORD *)result + 1);
    if ( result == v8 )
    {
      v47 = v66 + *((_QWORD *)v8 + 1);
      v54 = v47;
      if ( !v16 )
        v47 = v10;
      v10 = v47;
      v57 = v47;
    }
    else
    {
      v54 = v14 + 8LL * result[11];
    }
LABEL_11:
    if ( (v19 & 0xFFFFFFFFFFFFF000uLL) == (v14 & 0xFFFFFFFFFFFFF000uLL) || !v19 )
    {
      if ( v18 )
        goto LABEL_13;
    }
    else
    {
      MiUnlockProtoPoolPage(v18, v68);
      v19 = 0LL;
      v62 = 0LL;
    }
    v58 = MiLockProtoPoolPage(v14, &v68);
    v18 = v58;
    if ( v58 )
    {
      v19 = v14;
      v62 = v14;
LABEL_13:
      v20 = MiLockLeafPage(v14, 0LL);
      v21 = MI_READ_PTE_LOCK_FREE(v14);
      v67 = v21;
      v22 = v21;
      if ( (v21 & 1) != 0 )
      {
        v40 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v67);
        v41 = (char *)MiMapPageInHyperSpaceWorker((v40 >> 12) & 0xFFFFFFFFFLL, 0LL, 0x80000000);
        v42 = (unsigned __int64)v41;
        if ( v14 == v17 )
        {
          memset(&v41[v70], 0, 4096 - v70);
        }
        else if ( v14 == v10 )
        {
          memset(v41, 0, (unsigned int)Size);
        }
        else
        {
          KeZeroSinglePage(v41);
        }
        LOBYTE(v43) = 17;
        MiUnmapPageInHyperSpaceWorker(v42, v43, 0x80000000LL);
        v44 = MiCaptureDirtyBitToPfn(v20);
        _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v44 )
          MiReleasePageFileInfo(*(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(v20 + 40) >> 40) & 0x3FFLL)), v44, 1);
        goto LABEL_31;
      }
      if ( (v21 & 0x400) != 0 )
        goto LABEL_31;
      if ( (v21 & 0x800) != 0 )
      {
        if ( qword_140465800 )
        {
          if ( (v21 & 0x10) != 0 )
            v22 = v21 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v22 = ~qword_140465800 & v21;
        }
        v23 = (v22 >> 12) & 0xFFFFFFFFFLL;
        v24 = 0LL;
        if ( *(_WORD *)(v20 + 32) )
          goto LABEL_29;
        if ( v14 == v17 || v14 == v10 )
        {
          v33 = 0;
          if ( (*(_BYTE *)(v20 + 34) & 0x10) != 0 )
          {
            v34 = *(_QWORD *)(v55 + 4176);
            LockHandle.LockQueue.Next = 0LL;
            LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v34 + 32);
            KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v34 + 32));
            goto LABEL_49;
          }
          v33 = 1;
          if ( (unsigned int)MiUnlinkPageFromList(v20, 0) )
          {
            v24 = MiCaptureDirtyBitToPfn(v20);
            v34 = 0LL;
LABEL_49:
            v35 = MiMapPageInHyperSpaceWorker(v23, 0LL, 0x80000000);
            v36 = v35;
            if ( v14 == v60 )
            {
              v37 = 4096 - v70;
              v38 = (void *)(v35 + v70);
            }
            else
            {
              v37 = (unsigned int)Size;
              v38 = (void *)v35;
            }
            memset(v38, 0, v37);
            LOBYTE(v39) = 17;
            MiUnmapPageInHyperSpaceWorker(v36, v39, 0x80000000LL);
            if ( dword_140465F0C == 1 )
            {
              v48 = v23 & 0x1F;
              LOBYTE(v49) = 1;
              v50 = (volatile signed __int32 *)(qword_140465F68 + 4 * (v23 >> 5));
              if ( v48 + 1 > 0x20 )
              {
                if ( (v23 & 0x1F) != 0 )
                {
                  v52 = v23 & 0x1F;
                  _InterlockedOr(v50++, ((1 << (32 - v52)) - 1) << v48);
                  v49 = 1LL - (unsigned int)(32 - v52);
                  if ( v49 >= 0x20 )
                  {
                    v53 = v49 >> 5;
                    v49 += -32LL * (v49 >> 5);
                    do
                    {
                      *v50++ = -1;
                      --v53;
                    }
                    while ( v53 );
                  }
                  if ( !v49 )
                    goto LABEL_52;
                }
                v51 = (1 << v49) - 1;
              }
              else
              {
                v51 = 1 << v48;
              }
              _InterlockedOr(v50, v51);
            }
LABEL_52:
            if ( v34 )
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            if ( v33 == 1 )
              MiInsertPageInList(v20, 8u);
            v17 = v60;
            v10 = v57;
            goto LABEL_29;
          }
          MiDiscardTransitionPteEx(v20, 0LL);
          _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v18 = v58;
          v14 += 8LL;
          v15 = v54;
          v10 = v57;
          result = v71;
          v8 = v63;
          v16 = Size;
        }
        else
        {
          if ( (unsigned int)MiUnlinkPageFromList(v20, 0) )
          {
            v25 = MiCapturePageFileInfoInline(v20 + 16, 0LL);
            v26 = *(_QWORD *)(v20 + 16);
            v24 = v25;
            if ( (v26 & 2) != 0 )
            {
              v45 = *(_QWORD *)(v55 + 8LL * ((unsigned __int16)v26 >> 12) + 7904);
              if ( qword_140465800 && (v26 & 0x10) == 0 )
                v26 &= ~qword_140465800;
              MiTransferSoftwarePte(*(_QWORD *)(v20 + 16), v45, HIDWORD(v26));
            }
            else
            {
              v56 = *(_QWORD *)(v20 + 16);
              MiSetNonResidentPteHeat(&v56, 0);
              if ( (v27 & 0x400) == 0 )
                v56 &= 0xFFFFFFFFFFFFFFF9uLL;
            }
            v28 = 48 * (*(_QWORD *)(v20 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            if ( MiPteInShadowRange(v14) )
            {
              if ( (unsigned int)MiPteHasShadow(v30) )
              {
                if ( !HIBYTE(word_1404658EC) && (v29 & 1) != 0 )
                  v29 |= 0x8000000000000000uLL;
                *(_QWORD *)v14 = v29;
                MiWritePteShadow(v14, v29);
                goto LABEL_28;
              }
              if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
                && (v29 & 1) != 0 )
              {
                v29 |= 0x8000000000000000uLL;
              }
            }
            *(_QWORD *)v14 = v29;
LABEL_28:
            MiLockNestedPageAtDpcInline(v28);
            MiDecrementShareCount(v28);
            _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MiInsertPageInFreeOrZeroedList(v23, 2);
LABEL_29:
            _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v24 )
              MiReleasePageFileInfo(v55, v24, 1);
            goto LABEL_31;
          }
          MiDiscardTransitionPteEx(v20, 0LL);
          _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v18 = v58;
          v14 += 8LL;
          v15 = v54;
          result = v71;
          v8 = v63;
          v16 = Size;
        }
      }
      else
      {
        if ( v21 && v14 != v17 && v14 != v10 )
        {
          if ( (v21 & 2) != 0 )
          {
            v46 = *(_QWORD *)(v55 + 8LL * ((unsigned __int16)v21 >> 12) + 7904);
            if ( qword_140465800 && (v21 & 0x10) == 0 )
              v21 &= ~qword_140465800;
            v31 = MiTransferSoftwarePte(v22, v46, HIDWORD(v21));
          }
          else
          {
            v61 = v21;
            MiSetNonResidentPteHeat((unsigned __int64 *)&v61, 0);
            v31 = v61 & 0xFFFFFFFFFFFFFFF9uLL;
            v61 &= 0xFFFFFFFFFFFFFFF9uLL;
          }
          MiReleasePageFileSpace(v55, v22, 0LL);
          if ( !MiPteInShadowRange(v14) )
            goto LABEL_42;
          if ( !(unsigned int)MiPteHasShadow(v32) )
          {
            if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
              && (v31 & 1) != 0 )
            {
              v31 |= 0x8000000000000000uLL;
            }
LABEL_42:
            *(_QWORD *)v14 = v31;
            goto LABEL_31;
          }
          if ( !HIBYTE(word_1404658EC) && (v31 & 1) != 0 )
            v31 |= 0x8000000000000000uLL;
          *(_QWORD *)v14 = v31;
          MiWritePteShadow(v14, v31);
        }
LABEL_31:
        v18 = v58;
        v14 += 8LL;
        v15 = v54;
        v19 = v62;
        result = v71;
        v8 = v63;
        v16 = Size;
      }
    }
    else
    {
      v15 = v54;
      v14 = (v14 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      result = v71;
      v16 = Size;
    }
  }
  while ( result != v8 )
  {
    result = (unsigned int *)*((_QWORD *)result + 2);
    v71 = result;
    if ( *((_QWORD *)result + 1) )
      goto LABEL_79;
  }
  if ( v18 )
    return (unsigned int *)MiUnlockProtoPoolPage(v18, v68);
  return result;
}
