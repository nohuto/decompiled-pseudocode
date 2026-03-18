/*
 * XREFs of VidSchiSignalSyncObject @ 0x1C00045B0
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0003AA0 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C0037360 (VidSchSubmitSignalToHwQueue.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiSignalSyncObject(unsigned int a1, __int64 a2, char a3, __int64 a4, char a5)
{
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned __int64 v9; // r14
  _QWORD *v10; // rsi
  unsigned __int64 v11; // rbp
  _QWORD *v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rsi
  __int64 v16; // rdi
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  _QWORD *v30; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v32; // [rsp+38h] [rbp-30h] BYREF

  v6 = 8LL * a1;
  v7 = *(_QWORD *)(v6 + a2);
  if ( !a5 )
    goto LABEL_11;
  v8 = *(unsigned int *)(v7 + 44);
  if ( (_DWORD)v8 == 4 )
    goto LABEL_3;
  if ( (_DWORD)v8 )
  {
    if ( (_DWORD)v8 == 1 )
    {
      v19 = *(_DWORD *)(v7 + 64);
      if ( v19 >= *(_DWORD *)(v7 + 60) )
      {
        v20 = ((__int64 (*)(void))WdLogNewEntry5_WdWarning)();
        *(_QWORD *)(v20 + 24) = *(_QWORD *)(v7 + 16);
        WdLogEvent5_WdWarning(v20);
      }
      else
      {
        *(_DWORD *)(v7 + 64) = v19 + 1;
      }
      goto LABEL_11;
    }
    a2 = (unsigned int)(v8 - 2);
    if ( (_DWORD)v8 != 2 )
    {
      if ( (_DWORD)v8 != 5 )
        goto LABEL_11;
LABEL_3:
      if ( *(_BYTE *)(v7 + 28) )
      {
LABEL_11:
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 32));
        return;
      }
      if ( *(_BYTE *)(v7 + 27) )
      {
        v22 = *(_QWORD *)(v6 + a4);
        v23 = *(_QWORD *)(v7 + 208);
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v23 + 8), &v32);
        if ( *(_QWORD *)(v23 + 40) >= v22 )
        {
          v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24);
          v26[3] = *(_QWORD *)(v7 + 16);
          v26[4] = *(_QWORD *)(v23 + 40);
          v26[5] = v22;
          WdLogEvent5_WdWarning(v26);
        }
        else
        {
          *(_QWORD *)(v23 + 40) = v22;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v32);
        goto LABEL_11;
      }
      if ( (a3 & 4) != 0 )
        goto LABEL_9;
      v9 = *(_QWORD *)(v6 + a4);
      v10 = (_QWORD *)(v6 + a4);
      v11 = *(_QWORD *)(v7 + 88);
      if ( *(_BYTE *)(v7 + 29) )
      {
        if ( v9 >= v11 )
        {
          if ( v9 != v11 )
            goto LABEL_9;
          v13 = WdLogNewEntry5_WdWarning(v8, a2);
          *(_QWORD *)(v13 + 24) = v9;
          goto LABEL_15;
        }
        v27 = WdLogNewEntry5_WdWarning(v8, a2);
        *(_QWORD *)(v27 + 24) = v9;
        *(_QWORD *)(v27 + 32) = v11;
      }
      else
      {
        if ( (int)v11 - (int)v9 <= 0 )
        {
          if ( (_DWORD)v11 != (_DWORD)v9 )
          {
LABEL_9:
            v10 = (_QWORD *)(v6 + a4);
            *(_QWORD *)(v7 + 88) = *(_QWORD *)(v6 + a4);
LABEL_10:
            v12 = (_QWORD *)WdLogNewEntry5_WdEvent();
            v12[3] = v7;
            v12[4] = **(_QWORD **)(v7 + 64);
            v12[5] = *v10;
            v12[6] = *(unsigned __int8 *)(v7 + 28);
            WdLogEvent5_WdEvent(v12);
            goto LABEL_11;
          }
          v13 = WdLogNewEntry5_WdWarning(v8, a2);
          *(_QWORD *)(v13 + 24) = (unsigned int)v9;
LABEL_15:
          WdLogEvent5_WdWarning(v13);
          goto LABEL_9;
        }
        v27 = WdLogNewEntry5_WdWarning(v8, a2);
        *(_QWORD *)(v27 + 24) = (unsigned int)v9;
        *(_QWORD *)(v27 + 32) = (unsigned int)v11;
      }
      WdLogEvent5_WdWarning(v27);
      v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28);
      v30[3] = *(_QWORD *)(v7 + 16);
      v30[4] = *(_QWORD *)(v7 + 88);
      v30[5] = *v10;
      WdLogEvent5_WdWarning(v30);
      goto LABEL_10;
    }
    if ( *(_BYTE *)(v7 + 27) )
    {
      v15 = *(_QWORD *)(v6 + a4);
      v16 = *(_QWORD *)(v7 + 208);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v16 + 8), &LockHandle);
      if ( *(_QWORD *)(v16 + 40) >= v15 )
      {
        v17 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdWarning)();
        v17[3] = *(_QWORD *)(v7 + 16);
        v17[4] = *(_QWORD *)(v16 + 40);
        v17[5] = v15;
        WdLogEvent5_WdWarning(v17);
      }
      else
      {
        *(_QWORD *)(v16 + 40) = v15;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      goto LABEL_11;
    }
    v14 = *(_QWORD *)(v6 + a4);
    if ( *(_QWORD *)(v7 + 64) >= v14 )
    {
      v18 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdWarning)();
      v18[3] = *(_QWORD *)(v7 + 16);
      v18[4] = *(_QWORD *)(v7 + 64);
      v18[5] = *(_QWORD *)(v6 + a4);
      WdLogEvent5_WdWarning(v18);
      goto LABEL_11;
    }
    *(_QWORD *)(v7 + 64) = v14;
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 32));
  }
  else
  {
    if ( !*(_QWORD *)(v7 + 64) )
    {
      v21 = WdLogNewEntry5_WdWarning(v8, (unsigned int)v8);
      *(_QWORD *)(v21 + 24) = *(_QWORD *)(v7 + 16);
      WdLogEvent5_WdWarning(v21);
    }
    *(_QWORD *)(v7 + 64) = 0LL;
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 32));
  }
}
