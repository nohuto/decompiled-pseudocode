/*
 * XREFs of MiLockPageTablePage @ 0x1400403C0
 * Callers:
 *     NtLockVirtualMemory @ 0x14001A570 (NtLockVirtualMemory.c)
 *     MiProbeLockFrame @ 0x140041950 (MiProbeLockFrame.c)
 *     MiLockPageTableRange @ 0x140155FEC (MiLockPageTableRange.c)
 *     MiBuildForkPte @ 0x1402C7DE0 (MiBuildForkPte.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiChargePartitionResidentAvailable @ 0x140022F3C (MiChargePartitionResidentAvailable.c)
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiCapturePageFileInfoInline @ 0x140119E40 (MiCapturePageFileInfoInline.c)
 */

__int64 __fastcall MiLockPageTablePage(__int64 a1, int a2)
{
  unsigned int v2; // r15d
  __int64 v3; // rbx
  __int64 v5; // r13
  unsigned int v6; // r12d
  unsigned __int64 v7; // rsi
  struct _KEVENT *v8; // r9
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 CachedResidentAvailable; // rdx
  unsigned __int32 v11; // eax
  unsigned int i; // r14d
  bool v13; // zf
  unsigned __int64 v14; // rcx
  unsigned __int8 v15; // r9
  unsigned __int64 v16; // rax
  __int64 result; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rsi
  int v20; // [rsp+68h] [rbp+10h] BYREF
  int v21; // [rsp+70h] [rbp+18h] BYREF
  struct _KEVENT *v22; // [rsp+78h] [rbp+20h]

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
  v6 = 1;
  while ( 1 )
  {
LABEL_5:
    if ( a2 == 1 )
      v3 = 48 * (*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( (*(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
      goto LABEL_8;
    v20 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v20);
      while ( *(__int64 *)(v3 + 24) < 0 );
    }
    if ( a2 != 1 || v3 == 48 * (*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  v18 = *(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( v18 < 0x10000 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_8:
    if ( a2 == 2 )
    {
      v7 = 3LL;
    }
    else
    {
      v7 = 1LL;
      if ( !a2 )
        v7 = 4LL;
    }
    v8 = *(struct _KEVENT **)(qword_14043B808 + 8 * ((*(_QWORD *)(v3 + 40) >> 40) & 0x3FFLL));
    v22 = v8;
    if ( v8 == (struct _KEVENT *)&MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      if ( v7 <= CachedResidentAvailable )
      {
        do
        {
          if ( (_DWORD)CachedResidentAvailable == -1 )
            break;
          v11 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                  CachedResidentAvailable - v7,
                  CachedResidentAvailable);
          v13 = (_DWORD)CachedResidentAvailable == v11;
          LODWORD(CachedResidentAvailable) = v11;
          if ( v13 )
            goto LABEL_14;
        }
        while ( v7 <= v11 );
      }
    }
    result = MiChargePartitionResidentAvailable((__int64)v8, v7, 512LL);
    if ( !(_DWORD)result )
      return result;
LABEL_14:
    for ( i = 0; ; ++i )
    {
      v13 = i == v7;
      if ( i >= v7 )
      {
LABEL_29:
        if ( !v13 )
        {
          v19 = v7 - i;
          if ( v22 == (struct _KEVENT *)&MiSystemPartition )
            MiReturnResidentAvailable(v19);
          else
            _InterlockedExchangeAdd64((volatile signed __int64 *)&v22[306].Header.WaitListHead.Blink, v19);
        }
        return v6;
      }
      v21 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v21);
        while ( *(__int64 *)(v3 + 24) < 0 );
      }
      if ( a2 == 1 && v3 != 48 * (*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v22 == (struct _KEVENT *)&MiSystemPartition )
          MiReturnResidentAvailable(v7 - i);
        else
          _InterlockedExchangeAdd64((volatile signed __int64 *)&v22[306].Header.WaitListHead.Blink, v7 - i);
        goto LABEL_5;
      }
      v14 = *(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      if ( i )
      {
        if ( v14 >= 0x3FFFFFFFFFFEFDFFLL )
          goto LABEL_21;
      }
      else if ( v14 >= 0x3FFFFFFFFFFEFDFFLL )
      {
        v6 = 0;
LABEL_28:
        _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v13 = i == v7;
        goto LABEL_29;
      }
      *(_QWORD *)(v3 + 24) ^= (*(_QWORD *)(v3 + 24) ^ (*(_QWORD *)(v3 + 24) + 0x10000LL)) & 0x3FFFFFFFFFFFFFFFLL;
LABEL_21:
      if ( v14 >= 0x10000 )
        goto LABEL_28;
      v15 = *(_BYTE *)(v3 + 34);
      v16 = 0LL;
      if ( (v15 & 0x10) == 0 )
      {
        if ( (!_bittest64((const signed __int64 *)(v3 + 16), 0xAu) & (unsigned __int8)~(v15 >> 3)) != 0 )
        {
          v16 = MiCapturePageFileInfoInline(v3 + 16, 1LL);
          v15 = *(_BYTE *)(v3 + 34);
        }
        *(_BYTE *)(v3 + 34) = v15 | 0x10;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v16 )
        MiReleasePageFileInfo(v22, v16, 1);
      v3 = 48 * (*(_QWORD *)(v3 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    }
  }
  if ( v18 < 0x3FFFFFFFFFFEFDFFLL )
  {
    v2 = 1;
    *(_QWORD *)(v3 + 24) ^= (*(_QWORD *)(v3 + 24) ^ (*(_QWORD *)(v3 + 24) + 0x10000LL)) & 0x3FFFFFFFFFFFFFFFLL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v2;
}
