/*
 * XREFs of ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C005B0EC
 * Callers:
 *     ?ProbeAndLockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C005B030 (-ProbeAndLockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATI.c)
 * Callees:
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C005A33C (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C005B200 (-Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@.c)
 *     ?Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C005B490 (-Unlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C005C270 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z @ 0x1C005D424 (-SplitAt@VIDMM_RECYCLE_RANGE@@QEAAX_KPEA_N@Z.c)
 *     ?ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C005DEC4 (-ZeroIfNeeded@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C00814A8 (-GetPreviousRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z @ 0x1C00B8748 (-SplitMiddle@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@_K0@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::Lock(
        struct VIDMM_RECYCLE_RANGE **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        struct VIDMM_RECYCLE_RANGE *a4,
        enum _LOCK_OPERATION a5,
        struct VIDMM_SEGMENT *a6,
        unsigned __int8 a7)
{
  struct VIDMM_RECYCLE_RANGE *v7; // r13
  __int64 v8; // rsi
  struct VIDMM_RECYCLE_RANGE *v11; // rcx
  VIDMM_RECYCLE_RANGE *k; // rdi
  int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  unsigned __int8 v17; // dl
  __int64 result; // rax
  _QWORD *v19; // rax
  struct VIDMM_RECYCLE_RANGE *NextRange; // rdi
  unsigned __int64 v21; // r14
  unsigned __int64 i; // rbp
  unsigned __int64 v23; // rax
  VIDMM_RECYCLE_RANGE *v24; // rcx
  __int64 v25; // r12
  unsigned __int64 v26; // rdx
  int v27; // r13d
  struct VIDMM_RECYCLE_RANGE *v28; // rax
  enum _LOCK_OPERATION v29; // r8d
  VIDMM_RECYCLE_RANGE *v30; // rsi
  __int64 v31; // r13
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  int v34; // ebp
  enum _LOCK_OPERATION v35; // r8d
  VIDMM_RECYCLE_RANGE *v36; // rcx
  VIDMM_RECYCLE_RANGE *j; // rcx
  VIDMM_RECYCLE_RANGE *PreviousRange; // rax
  VIDMM_RECYCLE_RANGE *v39; // rbx
  VIDMM_RECYCLE_RANGE *v40; // rax
  VIDMM_RECYCLE_RANGE *v41; // rbx
  VIDMM_RECYCLE_RANGE *v42; // rax
  VIDMM_RECYCLE_RANGE *v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rcx

  v7 = a4;
  v8 = a3;
  if ( *((_BYTE *)this + 130) )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v19[3] = 270LL;
    v19[4] = 52LL;
    v19[5] = 12LL;
    v19[6] = 0LL;
    v19[7] = 0LL;
    WdLogEvent5_WdCriticalError(v19);
  }
  if ( v8 || (v11 = this[6], v7 != (struct VIDMM_RECYCLE_RANGE *)(this[5] - v11)) || v11 != this[4] )
  {
    NextRange = this[8];
    v21 = (unsigned __int64)this[6] + v8;
    for ( i = (unsigned __int64)v7 + v21; NextRange; NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange) )
    {
      if ( *((_QWORD *)NextRange + 5) > v21 )
        break;
    }
    v23 = *((_QWORD *)NextRange + 5);
    v24 = NextRange;
    v25 = *((_QWORD *)NextRange + 4);
    if ( v23 < i )
    {
      while ( 1 )
      {
        v28 = VIDMM_RECYCLE_RANGE::GetNextRange(v24);
        v30 = v28;
        if ( !v28 || *((_QWORD *)v28 + 5) >= i )
          break;
        v27 = VIDMM_RECYCLE_RANGE::Lock(v28, a2, v29, a6);
        v24 = v30;
        if ( v27 < 0 )
        {
          while ( 1 )
          {
            PreviousRange = VIDMM_RECYCLE_RANGE::GetPreviousRange(v24);
            v39 = PreviousRange;
            if ( PreviousRange == NextRange )
              break;
            VIDMM_RECYCLE_RANGE::Unlock(PreviousRange);
            v24 = v39;
          }
          return (unsigned int)v27;
        }
      }
      v31 = *((_QWORD *)v28 + 5);
      if ( v21 != v25 )
      {
        v32 = v21 - *((_QWORD *)NextRange + 4);
        LOBYTE(a5) = 1;
        VIDMM_RECYCLE_RANGE::SplitAt(NextRange, v32, (bool *)&a5);
        if ( (_BYTE)a5 )
          NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
      }
      if ( v31 != i )
      {
        v33 = i - *((_QWORD *)v30 + 4);
        LOBYTE(a5) = 1;
        VIDMM_RECYCLE_RANGE::SplitAt(v30, v33, (bool *)&a5);
      }
      v34 = VIDMM_RECYCLE_RANGE::Lock(NextRange, a2, v29, a6);
      v36 = v30;
      if ( v34 < 0 )
      {
        while ( 1 )
        {
          v40 = VIDMM_RECYCLE_RANGE::GetPreviousRange(v36);
          v41 = v40;
          if ( v40 == NextRange )
            break;
          VIDMM_RECYCLE_RANGE::Unlock(v40);
          v36 = v41;
        }
      }
      else
      {
        v34 = VIDMM_RECYCLE_RANGE::Lock(v30, a2, v35, a6);
        if ( v34 >= 0 )
        {
          v7 = a4;
          v8 = a3;
LABEL_53:
          ++*((_DWORD *)this + 23);
          if ( a7 )
            *((_BYTE *)this + 129) = 1;
          else
            *((_BYTE *)this + 128) = 1;
          VIDMM_RECYCLE_MULTIRANGE::ZeroIfNeeded((VIDMM_RECYCLE_MULTIRANGE *)this);
          v16 = (_QWORD *)WdLogNewEntry5_WdEvent(v45, v44);
          v16[4] = v8;
LABEL_12:
          v16[3] = this;
          v16[5] = v7;
          WdLogEvent5_WdEvent(v16);
          *((_DWORD *)this + 54) = 4;
          VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible((VIDMM_RECYCLE_MULTIRANGE *)this, v17);
          return 0LL;
        }
        for ( j = v30; ; j = v43 )
        {
          v42 = VIDMM_RECYCLE_RANGE::GetPreviousRange(j);
          v43 = v42;
          if ( v42 == NextRange )
            break;
          VIDMM_RECYCLE_RANGE::Unlock(v42);
        }
        VIDMM_RECYCLE_RANGE::Unlock(NextRange);
      }
      return (unsigned int)v34;
    }
    if ( v21 == v25 )
    {
      if ( v23 == i )
      {
LABEL_46:
        result = VIDMM_RECYCLE_RANGE::Lock(v24, a2, (enum _LOCK_OPERATION)a3, a6);
        if ( (int)result < 0 )
          return result;
        goto LABEL_53;
      }
      LOBYTE(a5) = 1;
      VIDMM_RECYCLE_RANGE::SplitAt(NextRange, i - v25, (bool *)&a5);
    }
    else
    {
      v26 = v21 - v25;
      if ( v23 != i )
      {
        v24 = VIDMM_RECYCLE_RANGE::SplitMiddle(NextRange, v26, i - v25);
        goto LABEL_46;
      }
      LOBYTE(a5) = 1;
      VIDMM_RECYCLE_RANGE::SplitAt(NextRange, v26, (bool *)&a5);
      if ( (_BYTE)a5 )
        NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(NextRange);
    }
    v24 = NextRange;
    goto LABEL_46;
  }
  for ( k = this[8]; ; k = VIDMM_RECYCLE_RANGE::GetNextRange(k) )
  {
    v13 = VIDMM_RECYCLE_RANGE::Lock(k, a2, (enum _LOCK_OPERATION)a3, a6);
    if ( v13 < 0 )
      break;
    if ( k == this[9] )
    {
      ++*((_DWORD *)this + 23);
      if ( a7 )
        *((_BYTE *)this + 129) = 1;
      else
        *((_BYTE *)this + 128) = 1;
      VIDMM_RECYCLE_MULTIRANGE::ZeroIfNeeded((VIDMM_RECYCLE_MULTIRANGE *)this);
      v16 = (_QWORD *)WdLogNewEntry5_WdEvent(v15, v14);
      v16[4] = 0LL;
      goto LABEL_12;
    }
  }
  while ( k != this[8] )
  {
    k = VIDMM_RECYCLE_RANGE::GetPreviousRange(k);
    VIDMM_RECYCLE_RANGE::Unlock(k);
  }
  return (unsigned int)v13;
}
