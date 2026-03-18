/*
 * XREFs of MiLockPageTablePage @ 0x1400CD620
 * Callers:
 *     NtLockVirtualMemory @ 0x1400CB120 (NtLockVirtualMemory.c)
 *     MiProbeLockFrame @ 0x1400CC670 (MiProbeLockFrame.c)
 *     MiLockPageTableRange @ 0x1401596C8 (MiLockPageTableRange.c)
 *     MiBuildForkPte @ 0x1402E1BC0 (MiBuildForkPte.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiReleasePageFileInfo @ 0x14008A250 (MiReleasePageFileInfo.c)
 *     MiChargePartitionResidentAvailable @ 0x1400CA9C8 (MiChargePartitionResidentAvailable.c)
 *     MiReturnResidentAvailable @ 0x1400CEF50 (MiReturnResidentAvailable.c)
 *     MiCapturePageFileInfoInline @ 0x140119998 (MiCapturePageFileInfoInline.c)
 */

__int64 __fastcall MiLockPageTablePage(__int64 a1, int a2)
{
  unsigned int v2; // esi
  __int64 v3; // rbx
  __int64 v5; // r13
  ULONG_PTR *v6; // r11
  unsigned int v7; // r12d
  unsigned __int64 v8; // r14
  __int64 v9; // r9
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 CachedResidentAvailable; // rdx
  unsigned __int32 v12; // eax
  unsigned int i; // r15d
  bool v14; // zf
  unsigned __int64 v15; // rcx
  unsigned __int8 v16; // r9
  unsigned __int64 v17; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // r14
  int v22; // [rsp+68h] [rbp+10h] BYREF
  int v23; // [rsp+70h] [rbp+18h] BYREF
  __int64 v24; // [rsp+78h] [rbp+20h]

  v2 = 0;
  v3 = a1;
  if ( a2 == 1 )
  {
    v5 = a1;
    if ( (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFFLL )
      return 1LL;
  }
  else
  {
    v5 = 0LL;
    if ( !a2 )
      v5 = a1;
  }
  v6 = &MiSystemPartition;
  v7 = 1;
  while ( 1 )
  {
LABEL_5:
    if ( a2 == 1 )
      v3 = 48 * (*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( (*(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
      goto LABEL_8;
    v22 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v22);
        while ( *(__int64 *)(v3 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) );
      v6 = &MiSystemPartition;
    }
    if ( a2 != 1 || v3 == 48 * (*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  v19 = *(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( v19 < 0x10000 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_8:
    if ( a2 == 2 )
    {
      v8 = 3LL;
    }
    else
    {
      v8 = 1LL;
      if ( !a2 )
        v8 = 4LL;
    }
    v9 = *(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(v3 + 40) >> 40) & 0x3FFLL));
    v24 = v9;
    if ( (ULONG_PTR *)v9 == v6 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      if ( v8 <= CachedResidentAvailable )
      {
        do
        {
          if ( (_DWORD)CachedResidentAvailable == -1 )
            break;
          v12 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                  CachedResidentAvailable - v8,
                  CachedResidentAvailable);
          v14 = (_DWORD)CachedResidentAvailable == v12;
          LODWORD(CachedResidentAvailable) = v12;
          if ( v14 )
            goto LABEL_14;
        }
        while ( v8 <= v12 );
      }
    }
    if ( !(unsigned int)MiChargePartitionResidentAvailable(v9, v8, 512LL) )
      return 0LL;
LABEL_14:
    for ( i = 0; ; ++i )
    {
      v14 = i == v8;
      if ( i >= v8 )
      {
LABEL_29:
        if ( !v14 )
        {
          v20 = v8 - i;
          if ( (ULONG_PTR *)v24 == &MiSystemPartition )
            MiReturnResidentAvailable(v20);
          else
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + 8128), v20);
        }
        return v7;
      }
      v23 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v23);
        while ( *(__int64 *)(v3 + 24) < 0 );
      }
      if ( a2 == 1 && v3 != 48 * (*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v6 = &MiSystemPartition;
        v21 = v8 - i;
        if ( (ULONG_PTR *)v24 == &MiSystemPartition )
          MiReturnResidentAvailable(v21);
        else
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + 8128), v21);
        goto LABEL_5;
      }
      v15 = *(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      if ( i )
      {
        if ( v15 >= 0x3FFFFFFFFFFEFDFFLL )
          goto LABEL_21;
      }
      else if ( v15 >= 0x3FFFFFFFFFFEFDFFLL )
      {
        v7 = 0;
LABEL_28:
        _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v14 = i == v8;
        goto LABEL_29;
      }
      *(_QWORD *)(v3 + 24) ^= (*(_QWORD *)(v3 + 24) ^ (*(_QWORD *)(v3 + 24) + 0x10000LL)) & 0x3FFFFFFFFFFFFFFFLL;
LABEL_21:
      if ( v15 >= 0x10000 )
        goto LABEL_28;
      v16 = *(_BYTE *)(v3 + 34);
      v17 = 0LL;
      if ( (v16 & 0x10) == 0 )
      {
        if ( (!_bittest64((const signed __int64 *)(v3 + 16), 0xAu) & (unsigned __int8)~(v16 >> 3)) != 0 )
        {
          v17 = MiCapturePageFileInfoInline(v3 + 16, 1LL);
          v16 = *(_BYTE *)(v3 + 34);
        }
        *(_BYTE *)(v3 + 34) = v16 | 0x10;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v17 )
        MiReleasePageFileInfo(v24, v17, 1);
      v3 = 48 * (*(_QWORD *)(v3 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    }
  }
  if ( v19 < 0x3FFFFFFFFFFEFDFFLL )
  {
    v2 = 1;
    *(_QWORD *)(v3 + 24) ^= (*(_QWORD *)(v3 + 24) ^ (*(_QWORD *)(v3 + 24) + 0x10000LL)) & 0x3FFFFFFFFFFFFFFFLL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v2;
}
