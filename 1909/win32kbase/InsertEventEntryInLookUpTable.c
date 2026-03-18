/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x1C01C8798
 * Callers:
 *     NtUserWin32kSysCallFilterStub @ 0x1C011C220 (NtUserWin32kSysCallFilterStub.c)
 * Callees:
 *     memcmp @ 0x1C00BE670 (memcmp.c)
 *     CreateNewEventEntry @ 0x1C01C8320 (CreateNewEventEntry.c)
 *     EnableFlushTimer @ 0x1C01C8588 (EnableFlushTimer.c)
 *     RunningHash @ 0x1C01C8B80 (RunningHash.c)
 */

__int64 __fastcall InsertEventEntryInLookUpTable(__int64 a1, __int128 *a2, char a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v5; // rbx
  signed __int64 v6; // rdi
  __int64 v7; // r14
  unsigned int v8; // r13d
  unsigned __int8 v9; // r15
  unsigned __int8 v10; // cl
  __int64 v11; // r11
  __int64 v12; // rsi
  __int64 v13; // r11
  int v14; // r12d
  __int64 v15; // rsi
  __int64 v16; // r8
  volatile signed __int64 *i; // rsi
  unsigned int v18; // eax
  volatile signed __int64 v19; // r14
  int v20; // ecx
  int v21; // eax
  __int64 v22; // r15
  unsigned int j; // esi
  __int64 v24; // r10
  __int64 v25; // rcx
  signed __int64 v26; // rsi
  unsigned int v27; // eax
  unsigned __int8 v28; // r9
  signed __int64 v29; // rdx
  __int64 v30; // rax
  int v31; // r10d
  volatile signed __int64 *v32; // r8
  signed __int64 v33; // rcx
  BOOL v34; // eax
  volatile LONG *v35; // rcx
  __int64 v37; // [rsp+40h] [rbp-28h] BYREF
  void *Buf1; // [rsp+48h] [rbp-20h]
  __int64 CurrentIrql; // [rsp+50h] [rbp-18h]
  int v40; // [rsp+B0h] [rbp+48h] BYREF
  int v41; // [rsp+B4h] [rbp+4Ch]
  __int128 *v42; // [rsp+B8h] [rbp+50h]
  char v43; // [rsp+C0h] [rbp+58h]
  __int64 v44; // [rsp+C8h] [rbp+60h]

  v44 = a4;
  v43 = a3;
  v42 = a2;
  v41 = HIDWORD(a1);
  v5 = qword_1C020C530;
  v6 = 0LL;
  Buf1 = (void *)(a4 + 16);
  v40 = 0;
  v37 = 0LL;
  v7 = a4;
  v8 = 0;
  RunningHash(&v40, a4 + 16, 8LL);
  v9 = a5;
  v10 = a5 + 2;
  if ( (unsigned __int8)(a5 + 2) < 7u )
  {
    v11 = v7 + 16LL * v10;
    v12 = (unsigned __int8)(7 - v10);
    do
    {
      RunningHash(&v40, *(_QWORD *)v11, *(unsigned int *)(v11 + 8));
      v11 = v13 + 16;
      --v12;
    }
    while ( v12 );
  }
  v14 = 32769 * ((9 * v40) ^ ((unsigned int)(9 * v40) >> 11));
  v15 = ((unsigned __int8)(9 * v40) ^ (unsigned __int8)((unsigned int)(9 * v40) >> 11)) & 0x1F;
  CurrentIrql = KeGetCurrentIrql();
  if ( (unsigned __int8)CurrentIrql >= 2u )
  {
    if ( *(_BYTE *)(v5 + 373) )
      KeBugCheckEx(0xD1u, v5 + 280, KeGetCurrentIrql(), 1uLL, 0LL);
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v5 + 280));
    goto LABEL_13;
  }
  if ( (unsigned int)KeIsExecutingDpc() )
  {
    if ( *(_BYTE *)(v5 + 373) )
      KeBugCheckEx(0xD1u, v5 + 280, KeGetCurrentIrql(), 1uLL, 0LL);
    ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v5 + 280));
LABEL_13:
    v43 = 1;
    goto LABEL_14;
  }
  ExAcquirePushLockSharedEx(v5 + 272, 0LL);
  v43 = 0;
LABEL_14:
  for ( i = (volatile signed __int64 *)(v5 + 8 * v15);
        ;
        i = (volatile signed __int64 *)((((__int64)v21 >> 63) & 0xFFFFFFFFFFFFFFF8uLL) + v26) )
  {
    if ( *i )
      goto LABEL_21;
    if ( *(_DWORD *)(v5 + 256) >= 0x400u )
    {
      ++*(_DWORD *)(v5 + 316);
      v8 = -1073741789;
      goto LABEL_57;
    }
    if ( !v6 )
    {
      v18 = CreateNewEventEntry(*(_BYTE *)(v5 + 373), v42, v16, v7, v9, v14, &v37);
      v6 = v37;
      v8 = v18;
      if ( !v37 )
      {
        if ( v18 == -1073741801 )
          ++*(_DWORD *)(v5 + 320);
        else
          ++*(_DWORD *)(v5 + 324);
        goto LABEL_57;
      }
    }
    if ( !_InterlockedCompareExchange64(i, v6, 0LL) )
      break;
    v6 = v37;
LABEL_21:
    v19 = *i;
    v20 = *(_DWORD *)(*i + 40);
    if ( v14 != v20 )
    {
      v21 = v14 - v20;
LABEL_31:
      v24 = v44;
      goto LABEL_32;
    }
    v22 = *(_QWORD *)(v19 + 16);
    v21 = memcmp(Buf1, (const void *)(v22 + 16), 8uLL);
    if ( v21 )
    {
LABEL_30:
      v9 = a5;
      goto LABEL_31;
    }
    for ( j = *(unsigned __int8 *)(v19 + 45) + 2; ; ++j )
    {
      if ( j >= 7 )
      {
        v21 = 0;
        goto LABEL_30;
      }
      v24 = v44;
      v25 = 16LL * j;
      v21 = *(_DWORD *)(v25 + v44 + 8) - *(_DWORD *)(v25 + v22 + 8);
      if ( v21 )
        break;
      v21 = memcmp(*(const void **)(v25 + v44), *(const void **)(v25 + v22), *(unsigned int *)(v25 + v44 + 8));
      if ( v21 )
        goto LABEL_30;
    }
    v9 = a5;
LABEL_32:
    if ( !v21 )
    {
      if ( !v19 )
        goto LABEL_57;
      v28 = 2;
      if ( !v9 )
        goto LABEL_57;
      while ( 1 )
      {
        v29 = **(_QWORD **)(v24 + 16LL * v28);
        v30 = *(_QWORD *)(v19 + 16);
        v31 = *(unsigned __int8 *)(v30 + 16LL * v28 + 13);
        v32 = *(volatile signed __int64 **)(v30 + 16LL * v28);
        if ( v31 == 113 )
        {
          _InterlockedExchangeAdd64(v32, v29);
        }
        else if ( (unsigned int)(v31 - 114) <= 1 )
        {
          while ( 1 )
          {
            v33 = *v32;
            if ( (_BYTE)v31 == 114 )
              break;
            if ( v29 <= v33 )
            {
              v34 = 0;
LABEL_51:
              if ( !v34 )
                goto LABEL_55;
            }
            if ( v33 == _InterlockedCompareExchange64(v32, v29, v33) )
              goto LABEL_55;
          }
          v34 = v29 < v33;
          goto LABEL_51;
        }
LABEL_55:
        v24 = v44;
        if ( ++v28 >= (unsigned int)v9 + 2 )
        {
          v6 = v37;
          goto LABEL_57;
        }
      }
    }
    v26 = v19 + 32;
    v7 = v44;
  }
  v37 = 0LL;
  if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 256)) == 1 )
    EnableFlushTimer(*(_QWORD *)(v5 + 360), *(_DWORD *)(v5 + 368));
  v27 = *(_DWORD *)(v5 + 256);
  v6 = v37;
  if ( *(_DWORD *)(v5 + 304) < v27 )
    *(_DWORD *)(v5 + 304) = v27;
LABEL_57:
  if ( v43 )
  {
    v35 = (volatile LONG *)(v5 + 280);
    if ( (unsigned __int8)CurrentIrql >= 2u )
      ExReleaseSpinLockSharedFromDpcLevel(v35);
    else
      ExReleaseSpinLockShared(v35, CurrentIrql);
  }
  else
  {
    ExReleasePushLockSharedEx(v5 + 272, 0LL);
  }
  if ( v6 )
    ExFreePoolWithTag(*(PVOID *)(v6 + 16), 0);
  return v8;
}
