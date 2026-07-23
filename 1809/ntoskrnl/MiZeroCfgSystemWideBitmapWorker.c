/*
 * XREFs of MiZeroCfgSystemWideBitmapWorker @ 0x140080930
 * Callers:
 *     MiZeroCfgSystemWideBitmap @ 0x14012DC10 (MiZeroCfgSystemWideBitmap.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiLockProtoPoolPage @ 0x14002F030 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x140039FD0 (MiInsertPageInList.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14003AB00 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockLeafPage @ 0x140080EC0 (MiLockLeafPage.c)
 *     MiTransferSoftwarePte @ 0x140081D88 (MiTransferSoftwarePte.c)
 *     MiSetNonResidentPteHeat @ 0x140081E40 (MiSetNonResidentPteHeat.c)
 *     MiDecrementShareCount @ 0x140081E90 (MiDecrementShareCount.c)
 *     MiReleasePageFileSpace @ 0x140082394 (MiReleasePageFileSpace.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140082770 (MiMapPageInHyperSpaceWorker.c)
 *     MiCaptureDirtyBitToPfn @ 0x140087900 (MiCaptureDirtyBitToPfn.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiLocatePagefileSubsection @ 0x140119DB8 (MiLocatePagefileSubsection.c)
 *     MiCapturePageFileInfoInline @ 0x140119E40 (MiCapturePageFileInfoInline.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x140120FD4 (MiLockNestedPageAtDpcInline.c)
 *     MiDiscardTransitionPte @ 0x14015839C (MiDiscardTransitionPte.c)
 *     KeZeroSinglePage @ 0x1401C0A50 (KeZeroSinglePage.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall MiZeroCfgSystemWideBitmapWorker(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r8
  unsigned __int64 v5; // rbx
  __int64 v6; // r15
  __int64 v7; // r9
  __int64 v8; // rsi
  __int64 v9; // r12
  __int64 v10; // r12
  __int64 result; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rdx
  int v16; // r8d
  unsigned __int64 v17; // r13
  __int64 v18; // rcx
  unsigned __int64 v19; // r14
  ULONG_PTR v20; // r15
  __int64 v21; // rax
  unsigned __int64 v22; // rsi
  ULONG_PTR v23; // rsi
  unsigned __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // r10
  __int16 v27; // r10
  __int64 v28; // r14
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned __int64 v34; // rax
  char *v35; // rax
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // rax
  int v38; // r12d
  __int64 v39; // r13
  __int64 v40; // rax
  unsigned __int64 v41; // r14
  size_t v42; // r8
  void *v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rax
  ULONG_PTR v47; // r10
  unsigned __int64 v48; // r9
  volatile signed __int32 *v49; // r8
  unsigned int v50; // eax
  int v51; // esi
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // [rsp+20h] [rbp-69h]
  __int64 v54; // [rsp+28h] [rbp-61h]
  __int64 v55; // [rsp+30h] [rbp-59h] BYREF
  __int64 v56; // [rsp+38h] [rbp-51h]
  __int64 v57; // [rsp+40h] [rbp-49h]
  unsigned __int64 v58; // [rsp+48h] [rbp-41h] BYREF
  unsigned __int64 v59; // [rsp+50h] [rbp-39h]
  __int64 v60; // [rsp+58h] [rbp-31h] BYREF
  unsigned __int64 v61; // [rsp+60h] [rbp-29h]
  __int64 v62; // [rsp+68h] [rbp-21h]
  unsigned __int64 v63; // [rsp+70h] [rbp-19h] BYREF
  __int64 v64; // [rsp+78h] [rbp-11h] BYREF
  __int64 v65; // [rsp+80h] [rbp-9h]
  __int64 v66; // [rsp+88h] [rbp-1h]
  __int64 v67; // [rsp+90h] [rbp+7h]
  __int64 v68; // [rsp+98h] [rbp+Fh] BYREF
  unsigned __int8 v69; // [rsp+F0h] [rbp+67h] BYREF
  size_t Size; // [rsp+F8h] [rbp+6Fh]
  unsigned int v71; // [rsp+100h] [rbp+77h]
  __int64 v72; // [rsp+108h] [rbp+7Fh]

  v3 = a3 >> 3;
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v5 = a2 >> 3;
  v6 = (a2 >> 3) & 0xFFF;
  v7 = *(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF;
  v71 = (a2 >> 3) & 0xFFF;
  v54 = *(_QWORD *)(qword_14043B808 + 8 * v7);
  LODWORD(Size) = ((unsigned __int16)(a2 >> 3) + (_WORD)v3) & 0xFFF;
  v63 = ((a2 >> 3) + v3 - 1) >> 12;
  v8 = MiLocatePagefileSubsection(a1, &v63);
  v62 = v8;
  v58 = v5 >> 12;
  v9 = *(_QWORD *)(v8 + 8);
  v67 = 8 * v63;
  v10 = 8 * v63 + v9;
  result = MiLocatePagefileSubsection(a1, &v58);
  v72 = result;
  if ( *(_QWORD *)(result + 8) )
  {
    v12 = v58;
  }
  else
  {
    do
    {
      if ( result == v8 )
        return result;
      result = *(_QWORD *)(result + 16);
      v12 = 0LL;
      v72 = result;
      v58 = 0LL;
    }
    while ( !*(_QWORD *)(result + 8) );
  }
  v13 = *(_QWORD *)(result + 8);
  v14 = v13 + 8 * v12;
  if ( result == v8 )
  {
    v15 = v10;
  }
  else
  {
    v15 = v13 + 8LL * *(unsigned int *)(result + 44);
    result = v72;
  }
  v16 = Size;
  v17 = v14;
  v53 = v15;
  if ( !(_DWORD)v6 )
    v17 = 0LL;
  v69 = 17;
  v61 = 0LL;
  v18 = 0LL;
  v59 = v17;
  if ( !(_DWORD)Size )
    v10 = 0LL;
  v57 = 0LL;
  v56 = v10;
  v19 = 0LL;
  while ( 1 )
  {
    if ( v14 < v15 )
      goto LABEL_11;
    if ( result == v8 )
    {
      if ( !v18 )
        return result;
      return MiUnlockProtoPoolPage(v18, v69);
    }
    result = *(_QWORD *)(result + 16);
    v72 = result;
    if ( !*(_QWORD *)(result + 8) )
      break;
LABEL_79:
    v14 = *(_QWORD *)(result + 8);
    if ( result == v8 )
    {
      v46 = v67 + *(_QWORD *)(v8 + 8);
      v53 = v46;
      if ( !v16 )
        v46 = v10;
      v10 = v46;
      v56 = v46;
    }
    else
    {
      v53 = v14 + 8LL * *(unsigned int *)(result + 44);
    }
LABEL_11:
    if ( (v19 & 0xFFFFFFFFFFFFF000uLL) == (v14 & 0xFFFFFFFFFFFFF000uLL) || !v19 )
    {
      if ( v18 )
        goto LABEL_13;
    }
    else
    {
      MiUnlockProtoPoolPage(v18, v69);
      v19 = 0LL;
      v61 = 0LL;
    }
    v57 = MiLockProtoPoolPage(v14, &v69);
    v18 = v57;
    if ( v57 )
    {
      v19 = v14;
      v61 = v14;
LABEL_13:
      v20 = MiLockLeafPage(v14, 0LL);
      v21 = MI_READ_PTE_LOCK_FREE(v14);
      v68 = v21;
      v22 = v21;
      if ( (v21 & 1) != 0 )
      {
        v34 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v68);
        v35 = (char *)MiMapPageInHyperSpaceWorker((v34 >> 12) & 0xFFFFFFFFFLL, 0LL, 0x80000000LL);
        v36 = (unsigned __int64)v35;
        if ( v14 == v17 )
        {
          memset(&v35[v71], 0, 4096 - v71);
        }
        else if ( v14 == v10 )
        {
          memset(v35, 0, (unsigned int)Size);
        }
        else
        {
          KeZeroSinglePage(v35);
        }
        MiUnmapPageInHyperSpaceWorker(v36, 0x11u, 0x80000000LL);
        v37 = MiCaptureDirtyBitToPfn(v20);
        _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v37 )
          MiReleasePageFileInfo(
            *(struct _KEVENT **)(qword_14043B808 + 8 * ((*(_QWORD *)(v20 + 40) >> 40) & 0x3FFLL)),
            v37,
            1);
        goto LABEL_31;
      }
      if ( (v21 & 0x400) != 0 )
        goto LABEL_31;
      if ( (v21 & 0x800) != 0 )
      {
        if ( qword_14043B180 )
        {
          if ( (v21 & 0x10) != 0 )
            v22 = v21 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v22 = ~qword_14043B180 & v21;
        }
        v23 = (v22 >> 12) & 0xFFFFFFFFFLL;
        v24 = 0LL;
        if ( *(_WORD *)(v20 + 32) )
          goto LABEL_29;
        if ( v14 == v17 || v14 == v10 )
        {
          v38 = 0;
          if ( (*(_BYTE *)(v20 + 34) & 0x10) != 0 )
          {
            v39 = *(_QWORD *)(v54 + 4176);
            v64 = 0LL;
            v65 = v39 + 32;
            KxAcquireQueuedSpinLock(&v64);
            goto LABEL_54;
          }
          v38 = 1;
          if ( (unsigned int)MiUnlinkPageFromList(v20, 0) )
          {
            v24 = MiCaptureDirtyBitToPfn(v20);
            v39 = 0LL;
LABEL_54:
            v40 = MiMapPageInHyperSpaceWorker(v23, 0LL, 0x80000000LL);
            v41 = v40;
            if ( v14 == v59 )
            {
              v42 = 4096 - v71;
              v43 = (void *)(v40 + v71);
            }
            else
            {
              v42 = (unsigned int)Size;
              v43 = (void *)v40;
            }
            memset(v43, 0, v42);
            MiUnmapPageInHyperSpaceWorker(v41, 0x11u, 0x80000000LL);
            if ( dword_14043B82C == 1 )
            {
              v47 = v23 & 0x1F;
              LOBYTE(v48) = 1;
              v49 = (volatile signed __int32 *)(qword_14043B888 + 4 * (v23 >> 5));
              if ( v47 + 1 > 0x20 )
              {
                if ( (v23 & 0x1F) != 0 )
                {
                  v51 = v23 & 0x1F;
                  _InterlockedOr(v49++, ((1 << (32 - v51)) - 1) << v47);
                  v48 = 1LL - (unsigned int)(32 - v51);
                  if ( v48 >= 0x20 )
                  {
                    v52 = v48 >> 5;
                    v48 += -32LL * (v48 >> 5);
                    do
                    {
                      *v49++ = -1;
                      --v52;
                    }
                    while ( v52 );
                  }
                  if ( !v48 )
                    goto LABEL_57;
                }
                v50 = (1 << v48) - 1;
              }
              else
              {
                v50 = 1 << v47;
              }
              _InterlockedOr(v49, v50);
            }
LABEL_57:
            if ( v39 )
              KxReleaseQueuedSpinLock(&v64);
            if ( v38 == 1 )
              MiInsertPageInList(v20, 8);
            v17 = v59;
            v10 = v56;
            goto LABEL_29;
          }
          MiDiscardTransitionPte(v20);
          _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v18 = v57;
          v14 += 8LL;
          v15 = v53;
          v10 = v56;
          result = v72;
          v8 = v62;
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
              v44 = *(_QWORD *)(v54 + 8LL * ((unsigned __int16)v26 >> 12) + 7136);
              if ( qword_14043B180 && (v26 & 0x10) == 0 )
                v26 &= ~qword_14043B180;
              MiTransferSoftwarePte(*(_QWORD *)(v20 + 16), v44, HIDWORD(v26), 2LL);
            }
            else
            {
              v55 = *(_QWORD *)(v20 + 16);
              MiSetNonResidentPteHeat(&v55, 0LL);
              if ( (v27 & 0x400) == 0 )
                v55 &= 0xFFFFFFFFFFFFFFF9uLL;
            }
            v28 = 48 * (*(_QWORD *)(v20 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            if ( MiPteInShadowRange(v14) )
            {
              if ( (unsigned int)MiPteHasShadow(v30, v29) )
              {
                if ( !HIBYTE(word_14043B26C) && (v29 & 1) != 0 )
                  v29 |= 0x8000000000000000uLL;
                *(_QWORD *)v14 = v29;
                MiWritePteShadow(v14);
                goto LABEL_28;
              }
              if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
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
              MiReleasePageFileInfo((struct _KEVENT *)v54, v24, 1);
            goto LABEL_31;
          }
          MiDiscardTransitionPte(v20);
          _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v18 = v57;
          v14 += 8LL;
          v15 = v53;
          result = v72;
          v8 = v62;
          v16 = Size;
        }
      }
      else
      {
        if ( v21 && v14 != v17 && v14 != v10 )
        {
          if ( (v21 & 2) != 0 )
          {
            v45 = *(_QWORD *)(v54 + 8LL * ((unsigned __int16)v21 >> 12) + 7136);
            if ( qword_14043B180 && (v21 & 0x10) == 0 )
              v21 &= ~qword_14043B180;
            v31 = MiTransferSoftwarePte(v22, v45, HIDWORD(v21), 2LL);
          }
          else
          {
            v60 = v21;
            MiSetNonResidentPteHeat(&v60, 0LL);
            v31 = v60 & 0xFFFFFFFFFFFFFFF9uLL;
            v60 &= 0xFFFFFFFFFFFFFFF9uLL;
          }
          MiReleasePageFileSpace(v54, v22, 0LL);
          if ( !MiPteInShadowRange(v14) )
            goto LABEL_42;
          if ( !(unsigned int)MiPteHasShadow(v33, v32) )
          {
            if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
              && (v31 & 1) != 0 )
            {
              v31 |= 0x8000000000000000uLL;
            }
LABEL_42:
            *(_QWORD *)v14 = v31;
            goto LABEL_31;
          }
          if ( !HIBYTE(word_14043B26C) && (v31 & 1) != 0 )
            v31 |= 0x8000000000000000uLL;
          *(_QWORD *)v14 = v31;
          MiWritePteShadow(v14);
        }
LABEL_31:
        v18 = v57;
        v14 += 8LL;
        v15 = v53;
        v19 = v61;
        result = v72;
        v8 = v62;
        v16 = Size;
      }
    }
    else
    {
      v15 = v53;
      v14 = (v14 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      result = v72;
      v16 = Size;
    }
  }
  while ( result != v8 )
  {
    result = *(_QWORD *)(result + 16);
    v72 = result;
    if ( *(_QWORD *)(result + 8) )
      goto LABEL_79;
  }
  if ( v18 )
    return MiUnlockProtoPoolPage(v18, v69);
  return result;
}
