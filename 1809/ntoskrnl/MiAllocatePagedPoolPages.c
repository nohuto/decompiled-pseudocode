/*
 * XREFs of MiAllocatePagedPoolPages @ 0x140162D70
 * Callers:
 *     MiAllocatePoolPages @ 0x140162C10 (MiAllocatePoolPages.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     RtlFindClearBitsAndSetEx @ 0x14008AB40 (RtlFindClearBitsAndSetEx.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     MmAllocatePoolMemory @ 0x140099080 (MmAllocatePoolMemory.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     MiFreePagedPoolPages @ 0x140161B50 (MiFreePagedPoolPages.c)
 *     MiExpandPagedPool @ 0x1401642EC (MiExpandPagedPool.c)
 *     MiFreeExcessSegments @ 0x1401644D4 (MiFreeExcessSegments.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401C5530 (RtlpInterlockedPopEntrySList.c)
 */

ULONG_PTR __fastcall MiAllocatePagedPoolPages(int a1, unsigned __int64 a2)
{
  int v2; // r8d
  unsigned __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rcx
  _SLIST_HEADER *v6; // rcx
  ULONG_PTR v7; // r15
  unsigned __int16 *v8; // rax
  struct _KTHREAD *CurrentThread; // r9
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rdi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // r9
  __int64 v18; // r8
  unsigned __int64 *v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // r12
  int v23; // r13d
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rsi
  unsigned __int64 ClearBitsAndSet; // rcx
  __int64 v27; // rsi
  ULONG_PTR v28; // rsi
  unsigned __int64 v29; // rdi
  struct _KTHREAD *v30; // rbx
  ULONG_PTR BugCheckParameter4; // r11
  unsigned int SessionId; // r8d
  int v33; // r12d
  __int64 v34; // rdx
  bool v35; // zf
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rcx
  _KLOCK_ENTRY *v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // rcx
  ULONG_PTR result; // rax
  unsigned __int64 v43; // rax
  __int64 v44; // r10
  unsigned __int64 *v45; // rdi
  __int64 v46; // rcx
  unsigned int v47; // r11d
  unsigned __int64 v48; // r10
  unsigned __int64 v49; // rcx
  __int64 v50; // r10
  unsigned __int64 v51; // rdx
  __int64 v52; // rcx
  bool v53; // sf
  __int64 v54; // rdx
  unsigned int v55; // ecx
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // r11
  __int64 v59; // r8
  unsigned int v60; // edx
  unsigned __int64 *v61; // r8
  unsigned int v62; // r8d
  __int64 v63; // rdx
  __int64 v64; // rcx
  PSLIST_ENTRY v65; // rax
  struct _KTHREAD *v66; // rbx
  unsigned int v67; // r8d
  unsigned __int8 v68; // si
  __int64 v69; // rdx
  __int64 v70; // rcx
  int v71; // eax
  __int64 v72; // rcx
  _KLOCK_ENTRY *v73; // rdi
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rcx
  int v77; // r14d
  struct _KEVENT *v78; // rcx
  struct _KEVENT *v79; // rcx
  unsigned __int64 v80; // [rsp+30h] [rbp-59h]
  unsigned __int64 v81; // [rsp+38h] [rbp-51h]
  __int64 v82; // [rsp+50h] [rbp-39h]
  unsigned __int64 v83; // [rsp+58h] [rbp-31h]
  __int64 v84; // [rsp+60h] [rbp-29h]
  ULONG_PTR v85; // [rsp+70h] [rbp-19h] BYREF
  unsigned int v86; // [rsp+78h] [rbp-11h]
  unsigned int v87; // [rsp+7Ch] [rbp-Dh]
  int v88; // [rsp+80h] [rbp-9h]
  unsigned int v89; // [rsp+84h] [rbp-5h]
  int v90; // [rsp+88h] [rbp-1h]
  int v91; // [rsp+8Ch] [rbp+3h]
  __int64 v92; // [rsp+90h] [rbp+7h]
  ULONG_PTR v93[2]; // [rsp+98h] [rbp+Fh] BYREF
  int v95; // [rsp+F8h] [rbp+6Fh] BYREF
  int v96; // [rsp+100h] [rbp+77h] BYREF
  int v97; // [rsp+108h] [rbp+7Fh]

  v2 = a1;
  v3 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v4 = KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
  v5 = *(unsigned __int16 *)(*(_QWORD *)(v4 + 192) + 146LL);
  v97 = *(unsigned __int16 *)(*(_QWORD *)(v4 + 192) + 146LL);
  if ( (v2 & 0x20) != 0 )
  {
    v83 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v7 = v83 + 184;
    v8 = (unsigned __int16 *)(v83 + 3182);
  }
  else
  {
    if ( (unsigned __int64)(qword_14043C058 - qword_14043C048) < 0x500 )
    {
      ++dword_140439B98;
      MiFreeExcessSegments(v5);
      v2 = a1;
      LODWORD(v5) = v97;
    }
    if ( v3 == 1 && v2 >= 0 )
    {
      v6 = &qword_14043B118[25 * (unsigned int)v5];
      if ( LOWORD(v6->Alignment) )
      {
        v65 = RtlpInterlockedPopEntrySList(v6);
        if ( v65 )
        {
          result = (ULONG_PTR)&v65[-1];
          if ( *(_QWORD *)result != (result ^ qword_14043BF80) )
            KeBugCheckEx(0x1Au, 0x5300uLL, result, *(_QWORD *)result, result ^ qword_14043BF80);
          return result;
        }
      }
    }
    v83 = 0LL;
    v7 = (ULONG_PTR)&qword_14043C018;
    v8 = (unsigned __int16 *)&unk_14043C40E;
  }
  CurrentThread = KeGetCurrentThread();
  v10 = *(_QWORD *)(v7 + 40);
  v11 = v10;
  v12 = *(_QWORD *)(qword_14043B808 + 8LL * *v8);
  v13 = *(_QWORD *)(v7 + 8);
  v14 = *(_QWORD *)(v7 + 16);
  if ( v10 >= v13 )
    v11 = 0LL;
  v92 = v12;
  v15 = v13 - 1;
  v82 = (__int64)CurrentThread;
  v81 = v10;
  v80 = v13;
  v84 = v14;
  if ( v3 )
  {
    while ( v15 - v11 + 1 < v3 )
    {
      v21 = -1LL;
LABEL_74:
      if ( !v11 )
      {
LABEL_18:
        v22 = v21;
        CurrentThread = (struct _KTHREAD *)v82;
        goto LABEL_19;
      }
      v51 = v10 + v3;
      if ( v10 + v3 > v13 )
        v51 = v13;
      v14 = v84;
      v15 = v51 - 1;
      v11 = 0LL;
    }
    v16 = v15 - v3 + 1;
    v17 = v14 + 8 * (v16 >> 6);
    v18 = *(_QWORD *)(v14 + 8 * (v11 >> 6)) | ((1LL << (v11 & 0x3F)) - 1);
    v19 = (unsigned __int64 *)(v14 + 8 * (v11 >> 6));
    if ( v3 > 0x7F )
    {
      v58 = v17 + 8;
      if ( (v16 & 0x3F) == 0 )
        v58 = v14 + 8 * ((v15 - v3 + 1) >> 6);
      if ( !v18 )
      {
        v60 = 0;
        goto LABEL_115;
      }
      if ( !*++v19 )
      {
        v35 = !_BitScanReverse64((unsigned __int64 *)&v64, v18);
        if ( v35 )
          v60 = 64;
        else
          v60 = 63 - v64;
        v86 = v60;
        goto LABEL_115;
      }
      while ( (unsigned __int64)v19 <= v58 )
      {
        if ( !*++v19 )
        {
          v35 = !_BitScanReverse64((unsigned __int64 *)&v59, *(v19 - 1));
          if ( v35 )
            v60 = 64;
          else
            v60 = 63 - v59;
          v87 = v60;
LABEL_115:
          v21 = (((__int64)v19 - v14) >> 3 << 6) - v60;
          if ( v21 > v16 )
            break;
          v61 = &v19[(v3 - v60) >> 6];
          if ( ++v19 == v61 )
          {
LABEL_119:
            v62 = ((_BYTE)v3 - (_BYTE)v60) & 0x3F;
            if ( (((_BYTE)v3 - (_BYTE)v60) & 0x3F) == 0 )
              goto LABEL_17;
            v35 = !_BitScanForward64((unsigned __int64 *)&v63, *v19);
            if ( v35 )
              LODWORD(v63) = 64;
            v88 = v63;
            if ( (unsigned int)v63 >= v62 )
              goto LABEL_17;
          }
          else
          {
            while ( !*v19 )
            {
              if ( ++v19 == v61 )
                goto LABEL_119;
            }
          }
        }
      }
    }
    else
    {
      if ( v3 >= 0x40 )
      {
        while ( 2 )
        {
          v53 = v18 < 0;
          while ( 1 )
          {
            if ( v53 )
            {
              do
              {
                if ( (unsigned __int64)++v19 > v17 )
                  goto LABEL_72;
                v18 = *v19;
              }
              while ( (*v19 & 0x8000000000000000uLL) != 0LL );
            }
            v35 = !_BitScanReverse64((unsigned __int64 *)&v54, v18);
            if ( v35 )
              v55 = 64;
            else
              v55 = 63 - v54;
            v89 = v55;
            v21 = (((((__int64)v19 - v14) >> 3) + 1) << 6) - v55;
            if ( v21 > v16 )
              goto LABEL_72;
            v56 = v3 - v55;
            if ( v3 == v55 )
              goto LABEL_17;
            v18 = v19[1];
            ++v19;
            if ( v56 < 0x40 )
              break;
            v53 = v18 < 0;
            if ( !v18 )
            {
              v56 -= 64LL;
              if ( !v56 )
                goto LABEL_17;
              v18 = v19[1];
              ++v19;
              break;
            }
          }
          v35 = !_BitScanForward64(&v57, v18);
          if ( v35 )
            v57 = 64LL;
          v90 = v57;
          if ( v57 < v56 )
            continue;
          break;
        }
LABEL_17:
        if ( v21 != -1LL )
          goto LABEL_18;
        goto LABEL_73;
      }
      if ( v3 > 1 )
      {
        v44 = 0LL;
        v45 = (unsigned __int64 *)(v14 + 8 * (v15 >> 6));
        while ( 1 )
        {
          if ( v18 == -1 )
          {
            while ( 1 )
            {
              if ( (unsigned __int64)++v19 > v17 )
                goto LABEL_72;
              v18 = *v19;
              if ( *v19 != -1LL )
              {
                v44 = 0LL;
                break;
              }
            }
          }
          v35 = !_BitScanForward64((unsigned __int64 *)&v46, v18);
          if ( v35 )
            LODWORD(v46) = 64;
          if ( (unsigned int)(v44 + v46) >= v3 )
            break;
          v47 = v3;
          v48 = ~v18;
          while ( 1 )
          {
            v48 &= v48 >> (v47 >> 1);
            if ( !v48 )
              break;
            v47 -= v47 >> 1;
            if ( v47 <= 1 )
            {
              _BitScanForward64(&v49, v48);
              v50 = (unsigned int)v49;
              goto LABEL_71;
            }
          }
          if ( v19 == v45 )
            goto LABEL_72;
          v35 = !_BitScanReverse64((unsigned __int64 *)&v52, v18);
          if ( v35 )
            v44 = 64LL;
          else
            v44 = (unsigned int)(63 - v52);
          v18 = v19[1];
          ++v19;
          v91 = v44;
        }
        v50 = -v44;
LABEL_71:
        v21 = (((__int64)v19 - v84) >> 3 << 6) + v50;
        if ( v21 <= v16 )
          goto LABEL_17;
      }
      else
      {
        if ( v18 != -1 )
        {
LABEL_16:
          _BitScanForward64(&v20, ~v18);
          v21 = (unsigned int)v20 + (((__int64)v19 - v14) >> 3 << 6);
          if ( v21 <= v16 )
            goto LABEL_17;
          v21 = -1LL;
LABEL_73:
          v10 = v81;
          v13 = v80;
          goto LABEL_74;
        }
        while ( (unsigned __int64)++v19 <= v17 )
        {
          v18 = *v19;
          if ( *v19 != -1LL )
            goto LABEL_16;
        }
      }
    }
LABEL_72:
    v21 = -1LL;
    goto LABEL_73;
  }
  v22 = v11 & 0xFFFFFFFFFFFFFFF8uLL;
LABEL_19:
  v23 = 0;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(v7, 0LL);
  v24 = *(_QWORD *)(v7 + 40);
  v25 = v24;
  if ( v22 >= v24 )
    v25 = v22;
  ClearBitsAndSet = RtlFindClearBitsAndSetEx((unsigned __int64 *)(v7 + 8), v3, v25);
  if ( ClearBitsAndSet != -1LL )
  {
LABEL_22:
    if ( ClearBitsAndSet != v24 && (v25 != v24 || v3 != 1) )
    {
LABEL_24:
      v27 = *(_QWORD *)(v7 + 24);
      *(_QWORD *)(v7 + 48) += v3;
      v28 = (__int64)((ClearBitsAndSet << 28) + (v27 << 25)) >> 16;
      if ( v83 )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v83 + 48), v3);
      }
      else
      {
        v29 = qword_14043C058 - qword_14043C048;
        if ( qword_14043C058 - qword_14043C048 < (unsigned __int64)qword_140439B88 )
        {
          v78 = *(struct _KEVENT **)(v92 + 248);
          if ( v78->Header.SignalState )
            KeResetEvent(v78);
          if ( v29 <= qword_140439B80 )
          {
            v79 = *(struct _KEVENT **)(v92 + 240);
            if ( !v79->Header.SignalState )
              KeSetEvent(v79, 0, 0);
          }
        }
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v7);
      v96 = 0;
      v30 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v7) == 1 )
      {
        SessionId = MmGetSessionIdEx((__int64)v30->ApcState.Process);
        BugCheckParameter4 = 0LL;
      }
      else
      {
        SessionId = -1;
      }
      --v30->SpecialApcDisable;
      ++v30->AbAllocationRegionCount;
      v33 = BugCheckParameter4;
      if ( v30->AbAllocationRegionCount == 1 )
        v33 = 1;
      LODWORD(v34) = ((char)v30->AbEntrySummary | (char)v30->AbOrphanedEntrySummary) ^ 0x3F;
      v35 = !_BitScanReverse((unsigned int *)&v36, v34);
      if ( v35 )
        goto LABEL_85;
      while ( 1 )
      {
        v37 = 1 << v36;
        v38 = v36;
        v39 = &v30->LockEntries[v38];
        v34 = ~v37 & (unsigned int)v34;
        if ( (v39->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v39->LockState.0 & 1) == 0
          && (*(_QWORD *)&v39->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v7 & 0x7FFFFFFFFFFFFFFCLL)
          && v39->LockState.SessionId == SessionId )
        {
          v39->AcquiredByte &= ~1u;
          if ( v39->LockState.0 )
            break;
        }
        v35 = !_BitScanReverse((unsigned int *)&v36, v34);
        if ( v35 )
          goto LABEL_85;
      }
      if ( !v39 )
      {
LABEL_85:
        if ( (*((_DWORD *)&v30->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v30, v7, SessionId, BugCheckParameter4);
      }
      else
      {
        v39->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v39->LockState.LockState < 0 )
        {
          KiAbEntryRemoveFromTree(&v30->LockEntries[v38].TreeNode, v34);
          BugCheckParameter4 = 0LL;
        }
        v96 = BugCheckParameter4;
        v96 = v39->BoostBitmap.AllFields & 0x1FFFF;
        v39->BoostBitmap.AllFields &= 0xFFFE0000;
        v39->ThreadLocalFlags &= ~1u;
        v39->LockState.0 = ($A1A49EE4C6E599293708B9EDC35F5B5E)BugCheckParameter4;
        v40 = ((char *)v39 - (char *)v30 - 800) / 96;
        if ( v33 )
          v30->AbEntrySummary |= 1 << v40;
        else
          _InterlockedOr8((volatile signed __int8 *)&v30->AbOrphanedEntrySummary, 1 << v40);
      }
      --v30->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v30, v7, (__int64)&v96);
      v35 = v30->SpecialApcDisable++ == -1;
      if ( v35 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v30->ApcState.ApcListHead[0].Flink != &v30->152 )
        KiCheckForKernelApcDelivery(v41);
      KiLeaveGuardedRegionUnsafe(v82);
      if ( v23 )
        return v28;
      v85 = v3 << 12;
      v93[0] = v28;
      if ( (int)MmAllocatePoolMemory(v93, &v85, (v97 + 1) | 0x1000u, 4, a1) >= 0 )
        return v28;
      MiFreePagedPoolPages(v28, v85);
      v77 = 0;
      goto LABEL_172;
    }
LABEL_57:
    *(_QWORD *)(v7 + 40) = ClearBitsAndSet + v3;
    goto LABEL_24;
  }
  v43 = MiExpandPagedPool(v7, v3);
  ClearBitsAndSet = v43;
  if ( v43 != -1LL )
  {
    v23 = 1;
    if ( (v3 & 0x1FF) != 0 && (v3 == 1 || v43 < v24) )
      goto LABEL_57;
    goto LABEL_22;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v7);
  v95 = 0;
  v66 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v7) == 1 )
    v67 = MmGetSessionIdEx((__int64)v66->ApcState.Process);
  else
    v67 = -1;
  --v66->SpecialApcDisable;
  v68 = ++v66->AbAllocationRegionCount;
  LODWORD(v69) = ((char)v66->AbEntrySummary | (char)v66->AbOrphanedEntrySummary) ^ 0x3F;
  v35 = !_BitScanReverse((unsigned int *)&v70, v69);
  if ( v35 )
    goto LABEL_161;
  while ( 1 )
  {
    v71 = 1 << v70;
    v72 = v70;
    v73 = &v66->LockEntries[v72];
    v69 = ~v71 & (unsigned int)v69;
    if ( (v73->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v73->LockState.0 & 1) == 0
      && (*(_QWORD *)&v73->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v7 & 0x7FFFFFFFFFFFFFFCLL)
      && v73->LockState.SessionId == v67 )
    {
      v73->AcquiredByte &= ~1u;
      if ( v73->LockState.0 )
        break;
    }
    v35 = !_BitScanReverse((unsigned int *)&v70, v69);
    if ( v35 )
      goto LABEL_161;
  }
  if ( !v73 )
  {
LABEL_161:
    if ( (*((_DWORD *)&v66->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v66, v7, v67, 0LL);
  }
  else
  {
    v73->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v73->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&v66->LockEntries[v72].TreeNode, v69);
    v95 = 0;
    v95 = v73->BoostBitmap.AllFields & 0x1FFFF;
    v73->BoostBitmap.AllFields &= 0xFFFE0000;
    v73->ThreadLocalFlags &= ~1u;
    v73->LockState.0 = 0LL;
    v74 = ((char *)v73 - (char *)v66 - 800) / 96;
    if ( v68 == 1 )
      v66->AbEntrySummary |= 1 << v74;
    else
      _InterlockedOr8((volatile signed __int8 *)&v66->AbOrphanedEntrySummary, 1 << v74);
  }
  --v66->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v66, v7, (__int64)&v95);
  v35 = v66->SpecialApcDisable++ == -1;
  if ( v35 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v66->ApcState.ApcListHead[0].Flink != &v66->152 )
    KiCheckForKernelApcDelivery(v75);
  KiLeaveGuardedRegionUnsafe(v82);
  v77 = 1;
LABEL_172:
  MiFreeExcessSegments(v76);
  if ( !v77 )
  {
    if ( v83 )
    {
      ++dword_140439B48;
      ++dword_140439B74;
      ++*(_DWORD *)(v83 + 100);
    }
    else
    {
      ++dword_140439B3C;
      ++dword_140439B70;
    }
  }
  return 0LL;
}
