/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x1C00DA21C
 * Callers:
 *     NtUserOpenClipboard @ 0x1C00D92E0 (NtUserOpenClipboard.c)
 *     NtUserCloseClipboard @ 0x1C00D9890 (NtUserCloseClipboard.c)
 *     NtUserSetClipboardData @ 0x1C00DB250 (NtUserSetClipboardData.c)
 *     NtUserGetClipboardData @ 0x1C00DCA10 (NtUserGetClipboardData.c)
 *     NtUserCheckProcessForClipboardAccess @ 0x1C0212200 (NtUserCheckProcessForClipboardAccess.c)
 * Callees:
 *     RunningHash @ 0x1C00DA504 (RunningHash.c)
 *     CreateNewEventEntry @ 0x1C00DDDF8 (CreateNewEventEntry.c)
 *     EnableFlushTimer @ 0x1C01576A0 (EnableFlushTimer.c)
 *     memcmp @ 0x1C015AFC0 (memcmp.c)
 */

__int64 __fastcall InsertEventEntryInLookUpTable(
        __int64 a1,
        _WORD *a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  __int64 v5; // rbx
  signed __int64 v6; // rdi
  unsigned __int8 v7; // r15
  _WORD *v9; // r12
  char v10; // r14
  unsigned __int8 v11; // cl
  __int64 v12; // r11
  __int64 v13; // rsi
  __int64 v14; // r11
  unsigned int v15; // r13d
  __int64 v16; // rsi
  int v17; // ecx
  int v18; // r8d
  volatile signed __int64 *i; // rsi
  volatile signed __int64 v20; // r14
  int v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // esi
  __int64 v24; // r12
  __int64 v25; // r10
  __int64 v26; // rax
  unsigned __int8 v27; // r9
  signed __int64 v28; // rdx
  __int64 v29; // rax
  int v30; // r10d
  volatile signed __int64 *v31; // r8
  unsigned int v32; // esi
  signed __int64 v34; // rsi
  unsigned int NewEventEntry; // eax
  unsigned int v36; // eax
  signed __int64 v37; // rcx
  BOOL v38; // eax
  volatile LONG *v39; // rcx
  unsigned int v40; // [rsp+40h] [rbp-28h]
  int v41; // [rsp+44h] [rbp-24h] BYREF
  signed __int64 v42; // [rsp+48h] [rbp-20h] BYREF
  __int64 CurrentIrql; // [rsp+50h] [rbp-18h]
  char v44; // [rsp+B0h] [rbp+48h]

  v5 = qword_1C030C270;
  v6 = 0LL;
  v41 = 0;
  v7 = a3;
  v42 = 0LL;
  v9 = a2;
  v40 = 0;
  RunningHash(&v41, a2, 2LL);
  v10 = a5;
  v11 = a5 + 2;
  if ( (unsigned __int8)(a5 + 2) < v7 )
  {
    v12 = a4 + 16LL * v11;
    v13 = (unsigned __int8)(v7 - v11);
    do
    {
      RunningHash(&v41, *(_QWORD *)v12, *(unsigned int *)(v12 + 8));
      v12 = v14 + 16;
      --v13;
    }
    while ( v13 );
  }
  v15 = 32769 * ((9 * v41) ^ ((unsigned int)(9 * v41) >> 11));
  v16 = ((unsigned __int8)(9 * v41) ^ (unsigned __int8)((unsigned int)(9 * v41) >> 11)) & 0x1F;
  CurrentIrql = KeGetCurrentIrql();
  if ( (unsigned __int8)CurrentIrql >= 2u )
  {
    if ( *(_BYTE *)(v5 + 373) )
      KeBugCheckEx(0xD1u, v5 + 280, KeGetCurrentIrql(), 1uLL, 0LL);
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v5 + 280));
    goto LABEL_50;
  }
  if ( (unsigned int)KeIsExecutingDpc() )
  {
    if ( *(_BYTE *)(v5 + 373) )
      KeBugCheckEx(0xD1u, v5 + 280, KeGetCurrentIrql(), 1uLL, 0LL);
    ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v5 + 280));
LABEL_50:
    v44 = 1;
    goto LABEL_7;
  }
  ExAcquirePushLockSharedEx(v5 + 272, 0LL);
  v44 = 0;
LABEL_7:
  for ( i = (volatile signed __int64 *)(v5 + 8 * v16);
        ;
        i = (volatile signed __int64 *)((((__int64)v17 >> 63) & 0xFFFFFFFFFFFFFFF8uLL) + v34) )
  {
    if ( *i )
      goto LABEL_9;
    if ( *(_DWORD *)(v5 + 256) >= 0x400u )
    {
      ++*(_DWORD *)(v5 + 316);
      v32 = -1073741789;
      goto LABEL_27;
    }
    if ( !v6 )
    {
      LOBYTE(v17) = *(_BYTE *)(v5 + 373);
      LOBYTE(v18) = v7;
      NewEventEntry = CreateNewEventEntry(v17, (_DWORD)v9, v18, a4, v10, v15, (__int64)&v42);
      v6 = v42;
      v40 = NewEventEntry;
      if ( !v42 )
      {
        v32 = NewEventEntry;
        if ( NewEventEntry == -1073741801 )
          ++*(_DWORD *)(v5 + 320);
        else
          ++*(_DWORD *)(v5 + 324);
        goto LABEL_27;
      }
    }
    if ( !_InterlockedCompareExchange64(i, v6, 0LL) )
      break;
    v6 = v42;
LABEL_9:
    v20 = *i;
    v21 = *(_DWORD *)(*i + 40);
    if ( v15 != v21 )
    {
      v22 = v15;
LABEL_33:
      v17 = v22 - v21;
LABEL_18:
      v25 = a4;
      goto LABEL_19;
    }
    LOWORD(v22) = *v9;
    LOWORD(v21) = *(_WORD *)v20;
    if ( *v9 != *(_WORD *)v20 )
    {
      v21 = (unsigned __int16)v21;
      v22 = (unsigned __int16)v22;
      goto LABEL_33;
    }
    v23 = *(unsigned __int8 *)(v20 + 45) + 2;
    if ( v23 >= v7 )
    {
LABEL_16:
      v17 = 0;
LABEL_17:
      v7 = a3;
      goto LABEL_18;
    }
    v24 = *(_QWORD *)(v20 + 16);
    while ( 1 )
    {
      v25 = a4;
      v26 = 16LL * v23;
      v17 = *(_DWORD *)(v26 + a4 + 8) - *(_DWORD *)(v26 + v24 + 8);
      if ( v17 )
        break;
      v17 = memcmp(*(const void **)(v26 + a4), *(const void **)(v26 + v24), *(unsigned int *)(v26 + a4 + 8));
      if ( v17 )
        goto LABEL_17;
      if ( ++v23 >= v7 )
        goto LABEL_16;
    }
    v7 = a3;
LABEL_19:
    if ( !v17 )
    {
      if ( !v20 )
        goto LABEL_26;
      v27 = 2;
      if ( !a5 )
        goto LABEL_26;
      while ( 1 )
      {
        v28 = **(_QWORD **)(v25 + 16LL * v27);
        v29 = *(_QWORD *)(v20 + 16);
        v30 = *(unsigned __int8 *)(v29 + 16LL * v27 + 13);
        v31 = *(volatile signed __int64 **)(v29 + 16LL * v27);
        if ( v30 != 113 )
          break;
        _InterlockedExchangeAdd64(v31, v28);
LABEL_24:
        v25 = a4;
        if ( ++v27 >= (unsigned int)a5 + 2 )
        {
          v6 = v42;
LABEL_26:
          v32 = v40;
          goto LABEL_27;
        }
      }
      if ( (unsigned int)(v30 - 114) > 1 )
        goto LABEL_24;
      while ( 1 )
      {
        v37 = *v31;
        if ( (_BYTE)v30 == 114 )
          break;
        if ( v28 <= v37 )
        {
          v38 = 0;
LABEL_62:
          if ( !v38 )
            goto LABEL_24;
        }
        if ( v37 == _InterlockedCompareExchange64(v31, v28, v37) )
          goto LABEL_24;
      }
      v38 = v28 < v37;
      goto LABEL_62;
    }
    v9 = a2;
    v34 = v20 + 32;
    v10 = a5;
  }
  v42 = 0LL;
  if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 256)) == 1 )
    EnableFlushTimer(*(_QWORD *)(v5 + 360), *(unsigned int *)(v5 + 368));
  v36 = *(_DWORD *)(v5 + 256);
  v6 = v42;
  v32 = v40;
  if ( *(_DWORD *)(v5 + 304) < v36 )
    *(_DWORD *)(v5 + 304) = v36;
LABEL_27:
  if ( v44 )
  {
    v39 = (volatile LONG *)(v5 + 280);
    if ( (unsigned __int8)CurrentIrql >= 2u )
      ExReleaseSpinLockSharedFromDpcLevel(v39);
    else
      ExReleaseSpinLockShared(v39, CurrentIrql);
  }
  else
  {
    ExReleasePushLockSharedEx(v5 + 272, 0LL);
  }
  if ( v6 )
    ExFreePoolWithTag(*(PVOID *)(v6 + 16), 0);
  return v32;
}
