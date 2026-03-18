/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x1C0185C00
 * Callers:
 *     NtUserWin32kSysCallFilterStub @ 0x1C0085EF0 (NtUserWin32kSysCallFilterStub.c)
 * Callees:
 *     memcmp @ 0x1C00AE820 (memcmp.c)
 *     CreateNewEventEntry @ 0x1C0185790 (CreateNewEventEntry.c)
 *     EnableFlushTimer @ 0x1C01859EC (EnableFlushTimer.c)
 *     RunningHash @ 0x1C0185FF0 (RunningHash.c)
 */

__int64 __fastcall InsertEventEntryInLookUpTable(__int64 a1, __int128 *a2, char a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v5; // rbx
  signed __int64 v6; // rdi
  __int64 v7; // r15
  unsigned __int8 v9; // r14
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
  int v20; // eax
  int v21; // ecx
  int v22; // ecx
  unsigned int v23; // esi
  __int64 v24; // r15
  __int64 v25; // r10
  __int64 v26; // rax
  signed __int64 v27; // rsi
  unsigned int v28; // esi
  unsigned int v29; // eax
  unsigned __int8 v30; // r9
  unsigned int v31; // r11d
  signed __int64 v32; // rdx
  __int64 v33; // rax
  int v34; // r10d
  volatile signed __int64 *v35; // r8
  signed __int64 v36; // rcx
  BOOL v37; // eax
  volatile LONG *v38; // rcx
  __int64 v40; // [rsp+40h] [rbp-18h] BYREF
  __int64 CurrentIrql; // [rsp+48h] [rbp-10h]
  unsigned int v42; // [rsp+A0h] [rbp+48h]
  int v43; // [rsp+A8h] [rbp+50h] BYREF
  char v44; // [rsp+B0h] [rbp+58h]
  __int64 v45; // [rsp+B8h] [rbp+60h]

  v45 = a4;
  v44 = a3;
  v5 = qword_1C01C7608;
  v6 = 0LL;
  v43 = 0;
  v7 = a4;
  v40 = 0LL;
  v42 = 0;
  RunningHash(&v43, a2, 2LL);
  v9 = a5;
  v10 = a5 + 2;
  if ( (unsigned __int8)(a5 + 2) < 7u )
  {
    v11 = v7 + 16LL * v10;
    v12 = (unsigned __int8)(7 - v10);
    do
    {
      RunningHash(&v43, *(_QWORD *)v11, *(unsigned int *)(v11 + 8));
      v11 = v13 + 16;
      --v12;
    }
    while ( v12 );
  }
  v14 = 32769 * ((9 * v43) ^ ((unsigned int)(9 * v43) >> 11));
  v15 = ((unsigned __int8)(9 * v43) ^ (unsigned __int8)((unsigned int)(9 * v43) >> 11)) & 0x1F;
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
    v44 = 1;
    goto LABEL_14;
  }
  ExAcquirePushLockSharedEx(v5 + 272, 0LL);
  v44 = 0;
LABEL_14:
  for ( i = (volatile signed __int64 *)(v5 + 8 * v15);
        ;
        i = (volatile signed __int64 *)((((__int64)v22 >> 63) & 0xFFFFFFFFFFFFFFF8uLL) + v27) )
  {
    if ( *i )
      goto LABEL_21;
    if ( *(_DWORD *)(v5 + 256) >= 0x400u )
    {
      ++*(_DWORD *)(v5 + 316);
      v28 = -1073741789;
      goto LABEL_58;
    }
    if ( !v6 )
    {
      v18 = CreateNewEventEntry(*(_BYTE *)(v5 + 373), a2, v16, v7, v9, v14, &v40);
      v6 = v40;
      v42 = v18;
      if ( !v40 )
      {
        v28 = v18;
        if ( v18 == -1073741801 )
          ++*(_DWORD *)(v5 + 320);
        else
          ++*(_DWORD *)(v5 + 324);
        goto LABEL_58;
      }
    }
    if ( !_InterlockedCompareExchange64(i, v6, 0LL) )
      break;
    v6 = v40;
LABEL_21:
    v19 = *i;
    v20 = *(_DWORD *)(*i + 40);
    if ( v14 != v20 )
    {
      v21 = v14;
LABEL_23:
      v22 = v21 - v20;
LABEL_32:
      v25 = v45;
      goto LABEL_33;
    }
    LOWORD(v21) = *(_WORD *)a2;
    LOWORD(v20) = *(_WORD *)v19;
    if ( *(_WORD *)a2 != *(_WORD *)v19 )
    {
      v20 = (unsigned __int16)v20;
      v21 = (unsigned __int16)v21;
      goto LABEL_23;
    }
    v23 = *(unsigned __int8 *)(v19 + 45) + 2;
    if ( v23 >= 7 )
    {
LABEL_31:
      v22 = 0;
      goto LABEL_32;
    }
    v24 = *(_QWORD *)(v19 + 16);
    while ( 1 )
    {
      v25 = v45;
      v26 = 16LL * v23;
      v22 = *(_DWORD *)(v26 + v45 + 8) - *(_DWORD *)(v26 + v24 + 8);
      if ( v22 )
        break;
      v22 = memcmp(*(const void **)(v26 + v45), *(const void **)(v26 + v24), *(unsigned int *)(v26 + v45 + 8));
      if ( v22 )
        goto LABEL_32;
      if ( ++v23 >= 7 )
        goto LABEL_31;
    }
LABEL_33:
    if ( !v22 )
    {
      if ( v19 )
      {
        v30 = 2;
        v31 = a5 + 2;
        if ( a5 )
        {
          do
          {
            v32 = **(_QWORD **)(v25 + 16LL * v30);
            v33 = *(_QWORD *)(v19 + 16);
            v34 = *(unsigned __int8 *)(v33 + 16LL * v30 + 13);
            v35 = *(volatile signed __int64 **)(v33 + 16LL * v30);
            if ( v34 == 113 )
            {
              _InterlockedExchangeAdd64(v35, v32);
            }
            else if ( (unsigned int)(v34 - 114) <= 1 )
            {
              while ( 1 )
              {
                v36 = *v35;
                if ( (_BYTE)v34 == 114 )
                  break;
                if ( v32 <= v36 )
                {
                  v37 = 0;
LABEL_51:
                  if ( !v37 )
                    goto LABEL_55;
                }
                if ( v36 == _InterlockedCompareExchange64(v35, v32, v36) )
                  goto LABEL_55;
              }
              v37 = v32 < v36;
              goto LABEL_51;
            }
LABEL_55:
            v25 = v45;
            ++v30;
          }
          while ( v30 < v31 );
          v6 = v40;
        }
      }
      v28 = v42;
      goto LABEL_58;
    }
    v7 = v45;
    v27 = v19 + 32;
    v9 = a5;
  }
  v40 = 0LL;
  if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 256)) == 1 )
    EnableFlushTimer(*(_QWORD *)(v5 + 360), *(_DWORD *)(v5 + 368));
  v29 = *(_DWORD *)(v5 + 256);
  v6 = v40;
  v28 = v42;
  if ( *(_DWORD *)(v5 + 304) < v29 )
    *(_DWORD *)(v5 + 304) = v29;
LABEL_58:
  if ( v44 )
  {
    v38 = (volatile LONG *)(v5 + 280);
    if ( (unsigned __int8)CurrentIrql >= 2u )
      ExReleaseSpinLockSharedFromDpcLevel(v38);
    else
      ExReleaseSpinLockShared(v38, CurrentIrql);
  }
  else
  {
    ExReleasePushLockSharedEx(v5 + 272, 0LL);
  }
  if ( v6 )
    ExFreePoolWithTag(*(PVOID *)(v6 + 16), 0);
  return v28;
}
