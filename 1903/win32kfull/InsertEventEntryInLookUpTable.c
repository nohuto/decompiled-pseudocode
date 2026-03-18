/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x1C00B7ED4
 * Callers:
 *     NtUserCheckProcessForClipboardAccess @ 0x1C000A7F0 (NtUserCheckProcessForClipboardAccess.c)
 *     NtUserOpenClipboard @ 0x1C00B7020 (NtUserOpenClipboard.c)
 *     NtUserCloseClipboard @ 0x1C00B75E0 (NtUserCloseClipboard.c)
 *     NtUserSetClipboardData @ 0x1C00B89D0 (NtUserSetClipboardData.c)
 *     NtUserGetClipboardData @ 0x1C0125AC0 (NtUserGetClipboardData.c)
 * Callees:
 *     ComputeEventEntryHash @ 0x1C00B8134 (ComputeEventEntryHash.c)
 *     CompareEventEntry @ 0x1C00B827C (CompareEventEntry.c)
 *     CreateNewEventEntry @ 0x1C0127B04 (CreateNewEventEntry.c)
 *     EnableFlushTimer @ 0x1C0141940 (EnableFlushTimer.c)
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
  int v13; // r8d
  volatile signed __int64 *i; // rsi
  volatile signed __int64 v15; // rsi
  int v16; // eax
  unsigned __int8 v17; // r9
  __int64 v18; // rbx
  signed __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // r10d
  volatile signed __int64 *v22; // r8
  unsigned int NewEventEntry; // eax
  unsigned int v25; // eax
  signed __int64 v26; // rcx
  BOOL v27; // eax
  volatile LONG *v28; // rcx
  __int64 v29; // [rsp+40h] [rbp-48h]
  KIRQL CurrentIrql; // [rsp+48h] [rbp-40h]
  signed __int64 v31; // [rsp+90h] [rbp+8h] BYREF
  __int64 v32; // [rsp+98h] [rbp+10h]
  __int64 v33; // [rsp+A8h] [rbp+20h]

  v33 = a4;
  v32 = a2;
  v5 = a5;
  v7 = qword_1C0321260;
  v8 = 0;
  LOBYTE(a2) = a3;
  v31 = 0LL;
  LOBYTE(a1) = a5;
  v29 = qword_1C0321260;
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
        i = (volatile signed __int64 *)((((__int64)v16 >> 63) & 0xFFFFFFFFFFFFFFF8uLL) + v15 + 32) )
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
      NewEventEntry = CreateNewEventEntry(v12, v32, v13, v33, v5, v11, (__int64)&v31);
      v9 = v31;
      v10 = NewEventEntry;
      if ( !v31 )
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
    v9 = v31;
LABEL_6:
    v15 = *i;
    v12 = *(unsigned int *)(v15 + 40);
    if ( v11 == (_DWORD)v12 )
    {
      LOBYTE(v12) = a3;
      v16 = CompareEventEntry(v12, v33, v15);
    }
    else
    {
      v16 = v11 - v12;
    }
    if ( !v16 )
    {
      if ( !v15 )
        goto LABEL_16;
      v17 = 2;
      if ( !v5 )
        goto LABEL_16;
      v18 = v33;
      while ( 1 )
      {
        v19 = **(_QWORD **)(v18 + 16LL * v17);
        v20 = *(_QWORD *)(v15 + 16);
        v21 = *(unsigned __int8 *)(v20 + 16LL * v17 + 13);
        v22 = *(volatile signed __int64 **)(v20 + 16LL * v17);
        if ( v21 != 113 )
          break;
        _InterlockedExchangeAdd64(v22, v19);
LABEL_14:
        if ( ++v17 >= (unsigned int)v5 + 2 )
        {
          v9 = v31;
          v7 = v29;
          goto LABEL_16;
        }
      }
      if ( (unsigned int)(v21 - 114) > 1 )
        goto LABEL_14;
      while ( 1 )
      {
        v26 = *v22;
        if ( (_BYTE)v21 == 114 )
          break;
        if ( v19 <= v26 )
        {
          v27 = 0;
LABEL_48:
          if ( !v27 )
            goto LABEL_14;
        }
        if ( v26 == _InterlockedCompareExchange64(v22, v19, v26) )
          goto LABEL_14;
      }
      v27 = v19 < v26;
      goto LABEL_48;
    }
  }
  v31 = 0LL;
  if ( _InterlockedIncrement((volatile signed __int32 *)(v7 + 256)) == 1 )
    EnableFlushTimer(*(_QWORD *)(v7 + 360), *(unsigned int *)(v7 + 368));
  v25 = *(_DWORD *)(v7 + 256);
  v9 = v31;
  if ( *(_DWORD *)(v7 + 304) < v25 )
    *(_DWORD *)(v7 + 304) = v25;
LABEL_16:
  if ( v8 )
  {
    v28 = (volatile LONG *)(v7 + 280);
    if ( CurrentIrql >= 2u )
      ExReleaseSpinLockSharedFromDpcLevel(v28);
    else
      ExReleaseSpinLockShared(v28, CurrentIrql);
  }
  else
  {
    ExReleasePushLockSharedEx(v7 + 272, 0LL);
  }
  if ( v9 )
    ExFreePoolWithTag(*(PVOID *)(v9 + 16), 0);
  return v10;
}
