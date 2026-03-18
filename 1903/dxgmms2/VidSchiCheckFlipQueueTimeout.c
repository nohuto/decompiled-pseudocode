/*
 * XREFs of VidSchiCheckFlipQueueTimeout @ 0x1C00094F0
 * Callers:
 *     VidSchiReportHwHang @ 0x1C003A6AC (VidSchiReportHwHang.c)
 *     VidSchiCheckHwProgress @ 0x1C007AA10 (VidSchiCheckHwProgress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiCheckFlipQueueTimeout(__int64 a1, _QWORD *a2, unsigned int *a3)
{
  KSPIN_LOCK *v3; // rbp
  _QWORD *v4; // r13
  char v6; // bl
  unsigned int v7; // r9d
  unsigned int v8; // ecx
  __int64 v9; // rax
  unsigned int v11; // r12d
  __int64 v12; // rax
  int v13; // ebx
  __int64 v14; // rsi
  _QWORD *v15; // r15
  int i; // r14d
  __int64 v17; // r15
  __int64 v18; // r15
  __int64 v20; // rbx
  __int64 v21; // r13
  int v22; // eax
  __int64 v24; // rbx
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rbp
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // [rsp+20h] [rbp-88h]
  struct _KLOCK_QUEUE_HANDLE v32; // [rsp+28h] [rbp-80h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-68h] BYREF
  __int64 v34; // [rsp+B0h] [rbp+8h]
  unsigned __int64 v37; // [rsp+C8h] [rbp+20h]

  v3 = (KSPIN_LOCK *)(a1 + 1648);
  v4 = a2;
  v6 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1648), &LockHandle);
  v7 = *(_DWORD *)(a1 + 40);
  v8 = 0;
  if ( v7 )
  {
    v9 = a1 + 2576;
    while ( !*(_QWORD *)v9 || !*(_DWORD *)(*(_QWORD *)v9 + 2344LL) )
    {
      ++v8;
      v9 += 8LL;
      if ( v8 >= v7 )
        goto LABEL_6;
    }
    v6 = 1;
  }
LABEL_6:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !v6 )
    return 0LL;
  v11 = 0;
  if ( !*(_DWORD *)(a1 + 40) )
    return 0LL;
LABEL_10:
  v12 = v11 + 322LL;
  v13 = 0;
  v14 = *(_QWORD *)(a1 + 8 * v12);
  v15 = (_QWORD *)(a1 + 8 * v12);
  v34 = v14;
  v31 = v15;
  KeAcquireInStackQueuedSpinLock(v3, &v32);
  for ( i = -1; ; ++i )
  {
    if ( i == *(_DWORD *)(a1 + 140) )
    {
LABEL_17:
      KeReleaseInStackQueuedSpinLock(&v32);
      if ( v13 )
        goto LABEL_46;
      if ( ++v11 >= *(_DWORD *)(a1 + 40) )
        return 0LL;
      v3 = (KSPIN_LOCK *)(a1 + 1648);
      goto LABEL_10;
    }
    v17 = *v15;
    v18 = i == -1 ? *(_QWORD *)(v17 + 24) : *(_QWORD *)(v17 + 8LL * i + 32);
    if ( v18 )
    {
      if ( *(int *)(v14 + 4) >= 4 || *(_BYTE *)(a1 + 144) )
        break;
    }
LABEL_15:
    v15 = v31;
  }
  if ( (*(_DWORD *)v18 & 1) == 0 )
  {
    v20 = MEMORY[0xFFFFF78000000320];
    *(_QWORD *)(v18 + 8) = MEMORY[0xFFFFF78000000320];
    if ( !*(_DWORD *)(v14 + 2332) )
      goto LABEL_30;
    v21 = 1312LL * *(unsigned int *)(v18 + 44);
    v22 = *(_DWORD *)(v21 + v18 + 1132);
    if ( v22 == 5 || v22 == 15 )
    {
      v24 = v20 - *(_QWORD *)(v21 + v18 + 1184);
      v25 = 10000000LL * g_TdrConfig[1];
      if ( v24 * (unsigned __int64)KeQueryTimeIncrement() > v25 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 308LL) & 0x200) == 0 )
          goto LABEL_41;
        v26 = __rdtsc();
        v27 = __readmsr(0x400000F6u);
        v28 = *((unsigned int *)KeGetCurrentPrcb() + 17);
        v37 = 10 * (v26 - v27) / v28;
        v29 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v28, 10 * (v26 - v27) % v28);
        v29[5] = v37;
        v29[3] = v27;
        v29[4] = v26;
        WdLogEvent5_WdPresentTokenEvent(v29);
        if ( v27 <= v26 && v37 > 10000000 * (unsigned __int64)g_TdrConfig[1] )
        {
LABEL_41:
          *(_DWORD *)v18 |= 1u;
          v14 = v34;
          *(_QWORD *)(v18 + 16) = v24;
          v30 = *(_QWORD *)(v21 + v18 + 1184);
          v4 = a2;
          *(_QWORD *)(v18 + 24) = v30;
          if ( a2 )
            *a2 = v30;
LABEL_30:
          v13 = *(_DWORD *)v18 & 1;
          if ( v13 )
            goto LABEL_17;
          goto LABEL_15;
        }
      }
      v14 = v34;
    }
    v4 = a2;
    goto LABEL_30;
  }
  if ( v4 )
    *v4 = *(_QWORD *)(v18 + 24);
  KeReleaseInStackQueuedSpinLock(&v32);
LABEL_46:
  if ( a3 )
    *a3 = v11;
  return 1LL;
}
