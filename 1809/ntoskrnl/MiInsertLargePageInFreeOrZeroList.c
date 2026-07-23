/*
 * XREFs of MiInsertLargePageInFreeOrZeroList @ 0x140036320
 * Callers:
 *     MiDemoteLocalLargePage @ 0x140064050 (MiDemoteLocalLargePage.c)
 *     MiDemoteLargeFreePage @ 0x14012BB74 (MiDemoteLargeFreePage.c)
 *     MiDemoteLargeFreeZeroPage @ 0x140169A4C (MiDemoteLargeFreeZeroPage.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x1400043BC (KeAbPostReleaseEx.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140097DE0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiInsertLargePageInNodeListHelper @ 0x14009BA00 (MiInsertLargePageInNodeListHelper.c)
 *     ExfTryAcquirePushLockShared @ 0x140103CD0 (ExfTryAcquirePushLockShared.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiArePageContentsZero @ 0x1402BF958 (MiArePageContentsZero.c)
 *     MiAddColdPagesToHotRanges @ 0x1402CEC3C (MiAddColdPagesToHotRanges.c)
 *     MiNotifyPageHeat @ 0x1402CF130 (MiNotifyPageHeat.c)
 */

_QWORD *__fastcall MiInsertLargePageInFreeOrZeroList(__int64 a1, unsigned int a2, int a3, int a4, int a5)
{
  __int64 v7; // r13
  unsigned __int64 v8; // r8
  __int64 v9; // rdx
  int v10; // eax
  int v11; // ebx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned int v14; // r9d
  __int64 v15; // r9
  __int64 v16; // r12
  _QWORD *v17; // rsi
  unsigned __int64 v18; // rcx
  ULONG_PTR v19; // rdi
  bool v20; // zf
  unsigned __int64 v21; // rdx
  __int64 CurrentIrql; // rcx
  __int64 v23; // r12
  volatile signed __int32 *v24; // rbx
  ULONG_PTR v25; // r14
  volatile signed __int32 *v26; // r15
  unsigned __int64 v27; // rax
  ULONG_PTR v28; // r12
  volatile signed __int32 *v29; // r13
  volatile signed __int32 *v30; // r13
  unsigned __int8 v31; // bl
  char v33; // al
  _QWORD *v34; // r12
  __int64 v35; // rax
  __int64 v36; // rdi
  volatile signed __int64 *v37; // rcx
  volatile signed __int64 *v38; // r13
  volatile signed __int32 *v39; // rcx
  ULONG_PTR v40; // r13
  volatile signed __int32 *v41; // roff
  volatile signed __int64 *v42; // r14
  _KLOCK_ENTRY *v43; // rbx
  ULONG_PTR *v44; // rbx
  unsigned int i; // r14d
  volatile signed __int32 *v46; // r13
  unsigned __int64 v47; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 v49[8]; // [rsp+0h] [rbp-100h] BYREF
  int v50; // [rsp+20h] [rbp-E0h]
  int v51; // [rsp+24h] [rbp-DCh]
  unsigned __int64 v52; // [rsp+28h] [rbp-D8h]
  volatile signed __int32 *v53; // [rsp+30h] [rbp-D0h]
  int v54; // [rsp+38h] [rbp-C8h]
  __int64 v55; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v56; // [rsp+48h] [rbp-B8h]
  __int64 v57; // [rsp+50h] [rbp-B0h]
  _DWORD v58[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v59; // [rsp+60h] [rbp-A0h] BYREF
  int v60; // [rsp+64h] [rbp-9Ch] BYREF
  int v61; // [rsp+68h] [rbp-98h] BYREF
  int v62; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v63; // [rsp+70h] [rbp-90h]
  __int64 v64; // [rsp+78h] [rbp-88h]
  ULONG_PTR v65; // [rsp+80h] [rbp-80h]
  volatile signed __int32 *v66; // [rsp+88h] [rbp-78h]
  __int64 v67; // [rsp+90h] [rbp-70h]
  _QWORD *v68; // [rsp+98h] [rbp-68h]
  unsigned __int64 v69; // [rsp+A0h] [rbp-60h]
  __int64 v70; // [rsp+A8h] [rbp-58h]
  __int64 v71; // [rsp+B0h] [rbp-50h] BYREF
  int v72; // [rsp+B8h] [rbp-48h]
  ULONG_PTR v73; // [rsp+140h] [rbp+40h] BYREF
  ULONG_PTR v74; // [rsp+148h] [rbp+48h]
  ULONG_PTR v75; // [rsp+178h] [rbp+78h]
  ULONG_PTR v76; // [rsp+180h] [rbp+80h]

  v67 = a1;
  v63 = 0LL;
  v7 = a1;
  v68 = 0LL;
  v8 = MiLargePageSizes[a2];
  v54 = 0;
  v75 = 0LL;
  v76 = 0LL;
  v9 = (a1 + 0x58000000000LL) / 48;
  v73 = v9;
  v74 = v9 + 16;
  v10 = a5;
  if ( a3 == 1 )
  {
    v54 = 1;
    v11 = 512;
    if ( !a5 )
    {
      a4 = 0;
      v10 = 16;
    }
  }
  else
  {
    v11 = 64;
    if ( !a5 )
      goto LABEL_9;
  }
  v12 = (v10 + 15) & 0xFFFFFFF0;
  v13 = v8;
  if ( v12 <= v8 )
    v13 = v12;
  if ( a2 > 1 || v13 >= v8 )
  {
    v14 = a4 & 0xF;
  }
  else
  {
    v14 = dword_14043B148 & a4;
    v36 = v9 + (v14 & 0xFFFFFFF0);
    v73 = v36;
    v74 = v36 + v13;
    if ( v36 + v13 > v9 + v8 )
    {
      v74 = v9 + v8;
      v75 = v9;
      v76 = v13 + v36 - v8;
    }
  }
  v63 = 48 * (v9 + v14) - 0x58000000000LL;
LABEL_9:
  v15 = 0LL;
  if ( v8 > 0x10 )
  {
    v35 = a2 + 1;
    v16 = MiLargePageContainingFrames[v35];
    v56 = MiLargePageSizes[v35];
  }
  else
  {
    v56 = 0LL;
    v16 = 0LL;
    if ( !a3 )
      v54 = 1;
  }
  v17 = (_QWORD *)(v7 + 48 * v8);
  v51 = 0;
  v71 = 1LL;
  v72 = 16;
  v18 = *(_QWORD *)(v7 + 40);
  v52 = 0LL;
  v19 = (__int64)(v17 + 0xB000000000LL) / 48;
  v20 = (*(_BYTE *)(v7 + 34) & 7) == 0;
  v50 = *(_BYTE *)(v7 + 34) & 7;
  v58[1] = v11 | (!v20 + 1);
  v21 = *(_QWORD *)(qword_14043B808 + 8 * ((v18 >> 40) & 0x3FF));
  v69 = v21;
  CurrentIrql = KeGetCurrentIrql();
  v57 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( (HvlEnlightenments & 0x200000) != 0 && a3 == 1 )
  {
    v42 = (volatile signed __int64 *)(v21 + 184);
    v51 = 1;
    v43 = (_KLOCK_ENTRY *)KeAbPreAcquire(v21 + 184, 0LL);
    if ( !_InterlockedCompareExchange64(v42, 17LL, 0LL) || (unsigned __int8)ExfTryAcquirePushLockShared(v42) )
    {
      if ( v43 )
        v43->AcquiredByte |= 1u;
      v15 = 0LL;
    }
    else
    {
      if ( v43 )
        KeAbPostReleaseEx((ULONG_PTR)v42, v43);
      v44 = &v73;
      for ( i = 0; i < 2; ++i )
      {
        v8 = v44[1];
        if ( !v8 )
          break;
        MiAddColdPagesToHotRanges(&v71, *v44, v8);
        v44 += 7;
      }
      if ( HIDWORD(v71) )
        MiNotifyPageHeat(&v71);
      v15 = 0LL;
      v51 = 0;
    }
  }
  v23 = v16 & 0xFFFFFFFFFLL;
  v70 = v23;
  v24 = (volatile signed __int32 *)(v17 + 3);
  v25 = v19 + 1;
  v26 = (volatile signed __int32 *)(48 * v19 - 0x57FFFFFFFB8LL);
  while ( 1 )
  {
    --v25;
    v58[0] = 0;
    v26 -= 12;
    v65 = v25;
    v24 -= 12;
    v66 = v26;
    v17 -= 6;
    --v19;
    while ( _interlockedbittestandset64(v24, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(v58);
      while ( *(__int64 *)v24 < 0 );
    }
    *(_QWORD *)v24 &= 0xC000000000000000uLL;
    v27 = v23 | *((_QWORD *)v24 + 2) & 0xFFFFFFF000000000uLL;
    v20 = v54 == 1;
    *((_QWORD *)v24 + 2) = v27;
    if ( v20 && (v19 < v74 && v19 >= v73 || v19 < v76 && v19 >= v75) )
    {
      if ( v51 )
      {
        MiAddColdPagesToHotRanges(&v71, v19, v25);
        v27 = *((_QWORD *)v24 + 2);
      }
      *((_QWORD *)v24 + 2) = v27 & 0xFFFFFFF000000000uLL;
      if ( v17 == (_QWORD *)v63 )
      {
        *((_QWORD *)v24 - 2) |= 0x8000000000000000uLL;
        *(_QWORD *)v24 &= 0xFFFFFFF000000000uLL;
        *v17 = 0LL;
        _InterlockedOr(v49, 0);
        v33 = *((_BYTE *)v24 + 10);
        *(_QWORD *)v24 ^= (*(_QWORD *)v24 ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
        v20 = v50 == 0;
        *((_BYTE *)v24 + 10) = v33 & 0xF8 | 5;
        *((_QWORD *)v24 - 1) = ZeroPte;
        if ( v20 )
        {
          if ( (MiFlags & 0x80u) != 0 && (++dword_14043B92C & MmPageValidationFrequency) == 0 )
            MiArePageContentsZero(v19);
        }
        else
        {
          MiSetOriginalPtePfnFromFreeList(v24 - 2, v21, v8, v15);
        }
        v68 = v17;
      }
      else
      {
        MiInsertPageInFreeOrZeroedList(v19);
      }
      _InterlockedAnd64((volatile signed __int64 *)v24, 0x7FFFFFFFFFFFFFFFuLL);
      v28 = v25;
      if ( v52 )
      {
        v29 = v26;
        v53 = v26;
        do
        {
          v55 = 16LL;
          do
          {
            v59 = 0;
            while ( _interlockedbittestandset64(v29, 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v59);
              while ( *(__int64 *)v29 < 0 );
            }
            *((_QWORD *)v29 + 2) = *((_QWORD *)v29 + 2) & 0xFFFFFFF000000000uLL | 0xFFFFFFFFCLL;
            _InterlockedAnd64((volatile signed __int64 *)v29, 0x7FFFFFFFFFFFFFFFuLL);
            v29 += 12;
            --v55;
          }
          while ( v55 );
          v30 = v53;
          v60 = 0;
          while ( _interlockedbittestandset64(v30, 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v60);
            while ( *(__int64 *)v30 < 0 );
          }
          MiInsertLargePageInNodeListHelper(v28);
          _InterlockedAnd64((volatile signed __int64 *)v30, 0x7FFFFFFFFFFFFFFFuLL);
          v29 = v30 + 192;
          v53 = v29;
          v28 += 16LL;
          v52 -= 16LL;
        }
        while ( v52 );
        v25 = v65;
        v26 = v66;
        v7 = v67;
      }
    }
    else
    {
      v8 = ++v52;
      if ( ((v56 - 1) & v19) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)v24, 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        v55 = v19;
        v34 = v17;
        v21 = v8 % v56;
        if ( v8 % v56 )
        {
          v37 = (volatile signed __int64 *)v24;
          v53 = v24;
          do
          {
            if ( v34 == v17 )
              _InterlockedAnd64(v37, 0x7FFFFFFFFFFFFFFFuLL);
            v38 = v37;
            v64 = 16LL;
            do
            {
              v61 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)v38, 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v61);
                while ( *(__int64 *)v38 < 0 );
              }
              *((_QWORD *)v38 + 2) = v38[2] & 0xFFFFFFF000000000uLL | 0xFFFFFFFFCLL;
              _InterlockedAnd64(v38, 0x7FFFFFFFFFFFFFFFuLL);
              v38 += 6;
              --v64;
            }
            while ( v64 );
            v39 = v53;
            v40 = v55;
            v62 = 0;
            if ( _interlockedbittestandset64(v53, 0x3FuLL) )
            {
              v46 = v39;
              do
              {
                do
                  KeYieldProcessorEx(&v62);
                while ( *(__int64 *)v46 < 0 );
              }
              while ( _interlockedbittestandset64(v46, 0x3FuLL) );
              v40 = v55;
            }
            MiInsertLargePageInNodeListHelper(v40);
            v41 = v53;
            _InterlockedAnd64((volatile signed __int64 *)v53, 0x7FFFFFFFFFFFFFFFuLL);
            v52 -= 16LL;
            v8 = v52;
            v21 = v52 % v56;
            v37 = (volatile signed __int64 *)(v41 + 192);
            v55 = v40 + 16;
            v34 += 96;
            v53 = v41 + 192;
          }
          while ( v52 % v56 );
          v25 = v65;
          v26 = v66;
          v7 = v67;
        }
        if ( v8 )
        {
          MiInsertLargePageInNodeListHelper(v19);
          _InterlockedAnd64((volatile signed __int64 *)v24, 0x7FFFFFFFFFFFFFFFuLL);
          v52 = 0LL;
        }
      }
    }
    v23 = v70;
    if ( v17 == (_QWORD *)v7 )
      break;
    v15 = 0LL;
  }
  if ( v51 )
  {
    if ( HIDWORD(v71) )
      MiNotifyPageHeat(&v71);
    v47 = v69;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v69 + 184), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v47 + 184);
    KeAbPostRelease(v47 + 184);
  }
  v31 = v57;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v57 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v31);
  return v68;
}
