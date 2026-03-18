/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x1C00593C4
 * Callers:
 *     NtUserCheckProcessForClipboardAccess @ 0x1C000A7E0 (NtUserCheckProcessForClipboardAccess.c)
 *     NtUserOpenClipboard @ 0x1C0058510 (NtUserOpenClipboard.c)
 *     NtUserCloseClipboard @ 0x1C0058AD0 (NtUserCloseClipboard.c)
 *     NtUserSetClipboardData @ 0x1C0059EC0 (NtUserSetClipboardData.c)
 *     NtUserGetClipboardData @ 0x1C00FF9B0 (NtUserGetClipboardData.c)
 * Callees:
 *     ComputeEventEntryHash @ 0x1C0059624 (ComputeEventEntryHash.c)
 *     CompareEventEntry @ 0x1C005976C (CompareEventEntry.c)
 *     CreateNewEventEntry @ 0x1C0102B6C (CreateNewEventEntry.c)
 *     EnableFlushTimer @ 0x1C011C0D0 (EnableFlushTimer.c)
 */

__int64 __fastcall InsertEventEntryInLookUpTable(__int64 a1, __int64 a2, char a3, __int64 a4, unsigned __int8 a5)
{
  unsigned __int8 v5; // r15
  __int64 v7; // rbx
  char v8; // r13
  signed __int64 v9; // rdi
  unsigned int v10; // r14d
  int v11; // ebp
  __int64 v12; // rcx
  volatile signed __int64 *v13; // r8
  __int64 v14; // r9
  volatile signed __int64 *i; // rsi
  volatile signed __int64 v16; // rsi
  int v17; // eax
  __int64 v18; // rbx
  signed __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // r10d
  unsigned int NewEventEntry; // eax
  unsigned int v24; // eax
  signed __int64 v25; // rcx
  BOOL v26; // eax
  volatile LONG *v27; // rcx
  __int64 v28; // [rsp+40h] [rbp-48h]
  KIRQL CurrentIrql; // [rsp+48h] [rbp-40h]
  signed __int64 v30; // [rsp+90h] [rbp+8h] BYREF
  __int64 v31; // [rsp+98h] [rbp+10h]
  __int64 v32; // [rsp+A8h] [rbp+20h]

  v32 = a4;
  v31 = a2;
  v5 = a5;
  v7 = qword_1C031F260;
  v8 = 0;
  LOBYTE(a2) = a3;
  v30 = 0LL;
  LOBYTE(a1) = a5;
  v28 = qword_1C031F260;
  v9 = 0LL;
  v10 = 0;
  v11 = ComputeEventEntryHash(a1, a2, a4);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql >= 2u )
  {
    if ( *(_BYTE *)(v7 + 373) )
      KeBugCheckEx(0xD1u, v7 + 280, KeGetCurrentIrql(), 1uLL, 0LL);
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v7 + 280));
    goto LABEL_38;
  }
  if ( (unsigned int)KeIsExecutingDpc() )
  {
    if ( *(_BYTE *)(v7 + 373) )
      KeBugCheckEx(0xD1u, v7 + 280, KeGetCurrentIrql(), 1uLL, 0LL);
    ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v7 + 280));
LABEL_38:
    v8 = 1;
    goto LABEL_4;
  }
  ExAcquirePushLockSharedEx(v7 + 272, 0LL);
LABEL_4:
  for ( i = (volatile signed __int64 *)(v7 + 8LL * (v11 & 0x1F));
        ;
        i = (volatile signed __int64 *)((((__int64)v17 >> 63) & 0xFFFFFFFFFFFFFFF8uLL) + v16 + 32) )
  {
    if ( *i )
      goto LABEL_6;
    if ( *(_DWORD *)(v7 + 256) >= 0x400u )
    {
      ++*(_DWORD *)(v7 + 316);
      v10 = -1073741789;
      goto LABEL_16;
    }
    if ( !v9 )
    {
      LOBYTE(v13) = a3;
      LOBYTE(v12) = *(_BYTE *)(v7 + 373);
      NewEventEntry = CreateNewEventEntry(v12, v31, (_DWORD)v13, v32, v5, v11, (__int64)&v30);
      v9 = v30;
      v10 = NewEventEntry;
      if ( !v30 )
      {
        if ( NewEventEntry == -1073741801 )
          ++*(_DWORD *)(v7 + 320);
        else
          ++*(_DWORD *)(v7 + 324);
        goto LABEL_16;
      }
    }
    if ( !_InterlockedCompareExchange64(i, v9, 0LL) )
      break;
    v9 = v30;
LABEL_6:
    v16 = *i;
    v12 = *(unsigned int *)(v16 + 40);
    if ( v11 == (_DWORD)v12 )
    {
      LOBYTE(v12) = a3;
      v17 = CompareEventEntry(v12, v32, v16);
    }
    else
    {
      v17 = v11 - v12;
    }
    if ( !v17 )
    {
      if ( !v16 )
        goto LABEL_16;
      LOBYTE(v14) = 2;
      if ( !v5 )
        goto LABEL_16;
      v18 = v32;
      while ( 1 )
      {
        v19 = **(_QWORD **)(v18 + 16LL * (unsigned __int8)v14);
        v20 = *(_QWORD *)(v16 + 16);
        v21 = *(unsigned __int8 *)(v20 + 16LL * (unsigned __int8)v14 + 13);
        v13 = *(volatile signed __int64 **)(v20 + 16LL * (unsigned __int8)v14);
        if ( v21 != 113 )
          break;
        _InterlockedExchangeAdd64(v13, v19);
LABEL_14:
        LOBYTE(v14) = v14 + 1;
        if ( (unsigned __int8)v14 >= (unsigned int)v5 + 2 )
        {
          v9 = v30;
          v7 = v28;
          goto LABEL_16;
        }
      }
      if ( (unsigned int)(v21 - 114) > 1 )
        goto LABEL_14;
      while ( 1 )
      {
        v25 = *v13;
        if ( (_BYTE)v21 == 114 )
          break;
        if ( v19 <= v25 )
        {
          v26 = 0;
LABEL_48:
          if ( !v26 )
            goto LABEL_14;
        }
        if ( v25 == _InterlockedCompareExchange64(v13, v19, v25) )
          goto LABEL_14;
      }
      v26 = v19 < v25;
      goto LABEL_48;
    }
  }
  v30 = 0LL;
  if ( _InterlockedIncrement((volatile signed __int32 *)(v7 + 256)) == 1 )
    EnableFlushTimer(*(_QWORD *)(v7 + 360), *(unsigned int *)(v7 + 368));
  v24 = *(_DWORD *)(v7 + 256);
  v9 = v30;
  if ( *(_DWORD *)(v7 + 304) < v24 )
    *(_DWORD *)(v7 + 304) = v24;
LABEL_16:
  if ( v8 )
  {
    v27 = (volatile LONG *)(v7 + 280);
    if ( CurrentIrql >= 2u )
      ExReleaseSpinLockSharedFromDpcLevel(v27);
    else
      ExReleaseSpinLockShared(v27, CurrentIrql);
  }
  else
  {
    ExReleasePushLockSharedEx(v7 + 272, 0LL, v13, v14);
  }
  if ( v9 )
    ExFreePoolWithTag(*(PVOID *)(v9 + 16), 0);
  return v10;
}
