/*
 * XREFs of VidSchSubmitCommand @ 0x1C0079B40
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_FLAGS@@@Z @ 0x1C0004498 (-VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C0004B50 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0004BD0 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0005810 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x1C000EC10 (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C0010404 (VidSchiPropagatePresentHistoryToken.c)
 *     VidSchiSetPriorityContext @ 0x1C001061C (VidSchiSetPriorityContext.c)
 *     VidSchiConvertDeferredWaits @ 0x1C00141E4 (VidSchiConvertDeferredWaits.c)
 *     VidMmFreeDeferredDmaBufferMapping @ 0x1C0014FE0 (VidMmFreeDeferredDmaBufferMapping.c)
 *     memmove @ 0x1C0018640 (memmove.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0077960 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C0077C4C (VidSchRegisterCompletionEvent.c)
 *     VidSchiAllocateHistoryBufferStorage @ 0x1C00C96D8 (VidSchiAllocateHistoryBufferStorage.c)
 */

__int64 __fastcall VidSchSubmitCommand(struct _VIDSCH_CONTEXT *a1, struct VIDSCH_SUBMIT_DATA2 *a2)
{
  struct _VIDSCH_CONTEXT *v3; // rsi
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 result; // rax
  __int64 v7; // rbp
  SIZE_T v8; // r15
  _QWORD *v9; // rax
  _DWORD *PoolWithTag; // rbx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  bool v13; // zf
  __int16 v14; // ax
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // r8d
  __int64 v19; // r9
  unsigned int v20; // eax
  __int64 v21; // rcx
  unsigned int v22; // ebp
  __int64 v23; // rax
  __int64 v24; // rdx
  int v25; // eax
  void *v26; // rcx
  __int64 v27; // rcx
  const void *v28; // rbp
  KPRIORITY PriorityThread; // eax
  struct _VIDSCH_CONTEXT *v30; // rax
  char *v31; // rbx
  struct _VIDSCH_CONTEXT **v32; // rcx
  unsigned int v33; // ebp
  __int64 *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rax
  void *v40; // rcx
  _QWORD v41[20]; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v42; // [rsp+158h] [rbp+20h] BYREF

  v3 = a1;
  if ( !a1 || !a2 )
  {
    v38 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v38 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v38);
    return 3221225485LL;
  }
  v4 = *((_QWORD *)a1 + 13);
  v5 = *(_QWORD *)(v4 + 32);
  if ( *(_BYTE *)(v4 + 204) || (a1 = 0LL, _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 200), 0, 0)) )
  {
    v37 = WdLogNewEntry5_WdWarning(a1, a2);
    *(_QWORD *)(v37 + 24) = v4;
    *(_QWORD *)(v37 + 32) = -1071775232LL;
    WdLogEvent5_WdWarning(v37);
    return 3223192064LL;
  }
  v42 = *(_QWORD *)a2;
  if ( (v42 & 0x20) != 0 )
  {
    result = VidSchValidatePresentFlags(a2, (struct _VIDSCH_DEVICE *)v4, (struct _VIDSCH_SUBMIT_FLAGS *)&v42);
    if ( (int)result < 0 )
      return result;
  }
  else if ( (v42 & 0x40000) != 0
         && !*((_DWORD *)v3 + 108)
         && !*((_DWORD *)v3 + 194)
         && (v42 & 0x1000000) == 0
         && (v42 & 0x400000000LL) == 0 )
  {
    VidSchiPropagatePresentHistoryToken(
      *((PKSPIN_LOCK *)a2 + 13),
      *((struct _D3DKMT_PRESENTHISTORYTOKEN **)a2 + 14),
      0,
      0,
      0,
      0,
      *((_QWORD *)a2 + 4),
      *((_QWORD *)a2 + 3),
      (__int64)a2);
    return 0LL;
  }
  v7 = *(_QWORD *)(*((_QWORD *)v3 + 12) + 24LL);
  v8 = *(_DWORD *)(v7 + 140) * ((*(_DWORD *)(v7 + 64) << 6) + ((8 * *(_DWORD *)(v7 + 64) + 191) & 0xFFFFFFF8))
     + 8 * (*(_DWORD *)(v7 + 64) + 105);
  if ( (unsigned int)v8 <= 0x410 )
    v8 = 1040LL;
  v9 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v7 + 1656), (_QWORD **)v3 + 88, (_DWORD *)v3 + 180);
  if ( v9 )
  {
    PoolWithTag = v9 - 1;
    goto LABEL_24;
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v8, 0x35616956u);
  if ( !PoolWithTag )
  {
    memset(v41, 0, sizeof(v41));
    v11 = *((_QWORD *)v3 + 12);
    LODWORD(v41[4]) |= 0x40u;
    LODWORD(v41[2]) = 1;
    LODWORD(v41[6]) = *(unsigned __int16 *)(v11 + 4);
    VidSchRegisterCompletionEvent(v7, (__int64)v41);
    do
    {
      v12 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v7 + 1656), (_QWORD **)v3 + 88, (_DWORD *)v3 + 180);
      if ( v12 )
        PoolWithTag = v12 - 1;
      else
        VidSchWaitForCompletionEvent(v7, (__int64)v41, (const GUID *)0x13);
    }
    while ( !PoolWithTag );
    VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v7 + 1664), v41, 0LL);
LABEL_24:
    if ( !PoolWithTag )
      goto LABEL_26;
  }
  memset(PoolWithTag, 0, v8);
  *((_QWORD *)PoolWithTag + 7) = MEMORY[0xFFFFF78000000320];
  PoolWithTag[13] = 1;
  VidSchiInterlockedInsertTailList(
    (KSPIN_LOCK *)(v7 + 1656),
    (__int64)v3 + 752,
    (_QWORD *)PoolWithTag + 1,
    (_DWORD *)v3 + 192);
LABEL_26:
  *PoolWithTag = 895576406;
  v13 = (v42 & 0x40000) == 0;
  *((_QWORD *)PoolWithTag + 7) = MEMORY[0xFFFFF78000000320];
  PoolWithTag[13] = 2;
  PoolWithTag[16] = 0;
  if ( v13 )
  {
    if ( ((*((_DWORD *)a2 + 32) - 3) & 0xFFFFFFFD) != 0 )
    {
      PoolWithTag[12] = 0;
    }
    else
    {
      PoolWithTag[12] = 3;
      v16 = *((unsigned int *)a2 + 31);
      if ( (_DWORD)v16 != -1 )
      {
        v17 = *((_DWORD *)a2 + 138);
        v18 = ((unsigned __int16)v17 | (unsigned __int16)(v17 >> 10)) & 0x3FF;
        if ( (((unsigned __int16)v17 | (unsigned __int16)(v17 >> 10)) & 0x3FF) != 0 )
        {
          v19 = *(_QWORD *)(v5 + 8 * v16 + 2576);
          do
          {
            v13 = !_BitScanForward(&v20, v18);
            v21 = 0xFFFFFFFFLL;
            if ( !v13 )
              v21 = v20;
            v22 = (char)v21;
            v23 = *(int *)(216LL * (unsigned int)(char)v21 + v19 + 172);
            if ( (int)v23 > -1 )
            {
              v24 = *(unsigned int *)(136 * v23 + *(_QWORD *)(v5 + 2704) + 112);
              if ( (_DWORD)v24 == 2 )
              {
                v39 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v24);
                v39[5] = v22;
                v39[3] = 281LL;
                v39[4] = 0x100000LL;
                v39[6] = *((unsigned int *)a2 + 31);
                v39[7] = v5;
                WdLogEvent5_WdCriticalError(v39);
                VidMmFreeDeferredDmaBufferMapping(v40);
                JUMPOUT(0x1C007A1F9LL);
              }
            }
            v18 &= ~(1 << v21);
          }
          while ( v18 );
        }
      }
    }
  }
  else
  {
    PoolWithTag[12] = 7;
  }
  *((_QWORD *)PoolWithTag + 11) = v3;
  *((_QWORD *)PoolWithTag + 13) = KeGetCurrentThread();
  v14 = v42;
  *((_QWORD *)PoolWithTag + 9) = v42;
  *((_QWORD *)PoolWithTag + 18) = *((_QWORD *)a2 + 13);
  *((_QWORD *)PoolWithTag + 19) = *((_QWORD *)a2 + 14);
  PoolWithTag[40] = *((_DWORD *)a2 + 31);
  if ( (v14 & 4) != 0 )
  {
    PoolWithTag[16] = (*(_DWORD *)(v5 + 1936) >> 4) & 4;
    if ( ((*((_DWORD *)a2 + 32) - 3) & 0xFFFFFFFD) == 0 && ((v14 & 0x400) == 0 || (v14 & 0x800) != 0) )
    {
      v15 = *((unsigned int *)a2 + 31);
      *((_QWORD *)a2 + 17) = ++*(_QWORD *)(v4 + 8 * v15 + 248);
    }
  }
  else
  {
    if ( (v14 & 0x20) != 0 )
    {
      v25 = (*(_DWORD *)(v5 + 1936) >> 5) & 4;
    }
    else
    {
      v25 = PoolWithTag[16];
      if ( PoolWithTag[12] != 7 )
        v25 = 4;
    }
    PoolWithTag[16] = v25;
  }
  memmove(PoolWithTag + 68, a2, *((unsigned int *)a2 + 135));
  if ( *((_QWORD *)a2 + 3) && !*((_BYTE *)v3 + 893) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)PoolWithTag + 37) + 4LL));
  if ( *((_QWORD *)a2 + 5) && !*((_BYTE *)v3 + 893) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)PoolWithTag + 39) + 4LL));
  v26 = (void *)*((_QWORD *)PoolWithTag + 46);
  if ( v26 )
    ObfReferenceObject(v26);
  v27 = *((_QWORD *)PoolWithTag + 35);
  if ( v27 && (PoolWithTag[68] & 0x8000000) != 0 && !*((_QWORD *)PoolWithTag + 40) )
    *((_QWORD *)PoolWithTag + 40) = *(_QWORD *)(v27 + 96);
  if ( (PoolWithTag[152] & 1) != 0 )
    VidSchiConvertDeferredWaits((__int64)v3);
  if ( *((_DWORD *)a2 + 88) )
  {
    v28 = (const void *)*((_QWORD *)a2 + 43);
    result = VidSchiAllocateHistoryBufferStorage(PoolWithTag);
    if ( (int)result < 0 )
      return result;
    memmove(*((void **)PoolWithTag + 77), v28, 8LL * *((unsigned int *)a2 + 88));
  }
  if ( (*(_DWORD *)(v5 + 1936) & 2) != 0 )
  {
    PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
    VidSchiSetPriorityContext(v3, PriorityThread);
  }
  *((_QWORD *)PoolWithTag + 7) = MEMORY[0xFFFFF78000000320];
  v30 = (struct _VIDSCH_CONTEXT *)(PoolWithTag + 8);
  PoolWithTag[13] = 3;
  v31 = (char *)v3 + 672;
  v32 = (struct _VIDSCH_CONTEXT **)*((_QWORD *)v3 + 85);
  if ( *v32 != (struct _VIDSCH_CONTEXT *)((char *)v3 + 672) )
    goto LABEL_78;
  *(_QWORD *)v30 = v31;
  *((_QWORD *)v30 + 1) = v32;
  *v32 = v30;
  *((_QWORD *)v3 + 85) = v30;
  ++*((_DWORD *)v3 + 108);
  v33 = (*(_DWORD *)a2 >> 6) & 1;
  if ( *((_DWORD *)v3 + 108) > v33 )
  {
    while ( 1 )
    {
      v34 = *(__int64 **)v31;
      if ( *(char **)(*(_QWORD *)v31 + 8LL) != v31 )
        break;
      v35 = *v34;
      if ( *(__int64 **)(*v34 + 8) != v34 )
        break;
      *(_QWORD *)v31 = v35;
      *(_QWORD *)(v35 + 8) = v31;
      --*((_DWORD *)v3 + 108);
      VidSchiSubmitCommandPacketToQueue((__int64)(v34 - 4));
      if ( *((_DWORD *)v3 + 108) <= v33 )
        goto LABEL_73;
    }
LABEL_78:
    __fastfail(3u);
  }
LABEL_73:
  v36 = *((unsigned int *)a2 + 31);
  if ( (unsigned int)v36 < *(_DWORD *)(v5 + 40) && (*(_BYTE *)a2 & 5) == 5 )
    _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v5 + 8 * v36 + 2576) + 66432LL), 2, 1);
  return 0LL;
}
