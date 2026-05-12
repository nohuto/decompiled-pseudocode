/*
 * XREFs of McGenControlCallbackV2 @ 0x1C00232E0
 * Callers:
 *     <none>
 * Callees:
 *     RaidGetPortData @ 0x1C0002678 (RaidGetPortData.c)
 *     RaidReleasePortData @ 0x1C00026F4 (RaidReleasePortData.c)
 *     RaidAcquireAdapterRemoveLock @ 0x1C00062A4 (RaidAcquireAdapterRemoveLock.c)
 *     StorEtwEnableAdapter @ 0x1C001FE90 (StorEtwEnableAdapter.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 *     StorEtwAdapterNeedsUpdate @ 0x1C004C82C (StorEtwAdapterNeedsUpdate.c)
 */

void __stdcall McGenControlCallbackV2(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        PVOID CallbackContext)
{
  int v7; // ebx
  ULONG v8; // ebp
  unsigned int v9; // r8d
  unsigned __int8 v10; // cl
  __int64 v11; // rdx
  bool v12; // r11
  int v13; // edx
  int *v14; // rcx
  int v15; // eax
  int v16; // edx
  char *PortData; // rax
  char *v18; // r13
  char *v19; // r15
  char *i; // rdi
  unsigned __int16 v21; // ax
  __int64 v22; // rbx
  __int64 *v23; // rsi
  __int64 v24; // rdx
  __int64 *v25; // r14
  __int64 *v26; // r8
  char v27; // al
  __int64 **v28; // r8
  unsigned int v29; // ecx
  __int64 *PoolWithTag; // rax
  __int64 v31; // rdx
  __int64 *v32; // r15
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 *v35; // r14
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  char v37; // [rsp+78h] [rbp+10h]
  char *CallbackContexta; // [rsp+A0h] [rbp+38h]

  v37 = ControlCode;
  v7 = MatchAnyKeyword;
  v8 = ControlCode;
  if ( CallbackContext )
  {
    if ( ControlCode )
    {
      if ( ControlCode == 1 )
      {
        *((_BYTE *)CallbackContext + 40) = Level;
        v9 = 0;
        *((_QWORD *)CallbackContext + 3) = MatchAllKeyword;
        *((_QWORD *)CallbackContext + 2) = MatchAnyKeyword;
        for ( *((_DWORD *)CallbackContext + 9) = 1; v9 < *((unsigned __int16 *)CallbackContext + 21); ++v9 )
        {
          v10 = *((_BYTE *)CallbackContext + 40);
          v12 = 0;
          if ( *(_BYTE *)(v9 + *((_QWORD *)CallbackContext + 8)) <= v10 || !v10 )
          {
            v11 = *(_QWORD *)(*((_QWORD *)CallbackContext + 7) + 8LL * v9);
            if ( !v11
              || (v11 & *((_QWORD *)CallbackContext + 2)) != 0
              && (v11 & *((_QWORD *)CallbackContext + 3)) == *((_QWORD *)CallbackContext + 3) )
            {
              v12 = 1;
            }
          }
          v13 = 1 << (v9 & 0x1F);
          v14 = (int *)(*((_QWORD *)CallbackContext + 6) + 4 * ((unsigned __int64)v9 >> 5));
          v15 = *v14;
          if ( v12 )
            v16 = v15 | v13;
          else
            v16 = v15 & ~v13;
          *v14 = v16;
        }
      }
    }
    else
    {
      v21 = *((_WORD *)CallbackContext + 21);
      *((_DWORD *)CallbackContext + 9) = 0;
      *((_BYTE *)CallbackContext + 40) = 0;
      *((_QWORD *)CallbackContext + 2) = 0LL;
      *((_QWORD *)CallbackContext + 3) = 0LL;
      if ( v21 )
        memset(*((void **)CallbackContext + 6), 0, 4LL * ((v21 - 1) / 32 + 1));
    }
    StorRequestThresholdTime = 0LL;
    StorEtwLoggingEnabled = v8 != 0;
    if ( (*(_QWORD *)&v7 & 0x100000LL) != 0 && FilterData && FilterData->Size == 8 )
      StorRequestThresholdTime = *(_QWORD *)FilterData->Ptr;
    PortData = RaidGetPortData();
    CallbackContexta = PortData;
    v18 = PortData;
    if ( PortData )
    {
      v19 = PortData + 8;
      for ( i = (char *)*((_QWORD *)PortData + 1); i != v19; i = *(char **)i )
      {
        v22 = 0LL;
        v23 = 0LL;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)i + 7, &LockHandle);
        if ( *((_DWORD *)i + 12) )
        {
          v25 = (__int64 *)(i + 32);
          v26 = (__int64 *)*((_QWORD *)i + 4);
          if ( v26 != (__int64 *)(i + 32) )
          {
            do
            {
              LOBYTE(v24) = v8;
              v27 = StorEtwAdapterNeedsUpdate(v26 - 8, v24);
              v26 = *v28;
              v29 = v22 + 1;
              if ( !v27 )
                v29 = v22;
              v22 = v29;
            }
            while ( v26 != v25 );
            if ( v29 )
            {
              PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * v29, 0x54456152u);
              v23 = PoolWithTag;
              if ( PoolWithTag )
              {
                v8 = 0;
                memset(PoolWithTag, 0, 8LL * (unsigned int)v22);
                v32 = (__int64 *)*v25;
                if ( (__int64 *)*v25 != v25 )
                {
                  do
                  {
                    if ( v8 >= (unsigned int)v22 )
                      break;
                    LOBYTE(v31) = v37;
                    if ( (unsigned __int8)StorEtwAdapterNeedsUpdate(v32 - 8, v31)
                      && (int)RaidAcquireAdapterRemoveLock((__int64)(v32 - 8)) >= 0 )
                    {
                      v33 = v8++;
                      v23[v33] = (__int64)(v32 - 8);
                    }
                    v32 = (__int64 *)*v32;
                  }
                  while ( v32 != v25 );
                  v18 = CallbackContexta;
                }
                v22 = v8;
                LOBYTE(v8) = v37;
              }
              v19 = v18 + 8;
            }
          }
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        if ( v23 )
        {
          if ( (_DWORD)v22 )
          {
            v35 = v23;
            do
            {
              LOBYTE(v34) = v8;
              StorEtwEnableAdapter(*v35, v34);
              ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*v35++ + 272));
              --v22;
            }
            while ( v22 );
          }
          ExFreePoolWithTag(v23, 0x54456152u);
        }
      }
      RaidReleasePortData(v18);
    }
  }
}
