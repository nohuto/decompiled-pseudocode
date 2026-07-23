/*
 * XREFs of EtwpFlushActiveBuffers @ 0x1405C3178
 * Callers:
 *     EtwpLogger @ 0x1405C2430 (EtwpLogger.c)
 * Callees:
 *     EtwpLockUnlockBufferList @ 0x140014AC8 (EtwpLockUnlockBufferList.c)
 *     EtwpRequestFlushTimer @ 0x140014B58 (EtwpRequestFlushTimer.c)
 *     EtwpEnqueueAvailableBuffer @ 0x1400153E0 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpQueryUsedProcessorCount @ 0x14001557C (EtwpQueryUsedProcessorCount.c)
 *     EtwpPrepareDirtyBuffer @ 0x140015598 (EtwpPrepareDirtyBuffer.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     EtwpWaitForBufferReferenceCount @ 0x1405C2CE0 (EtwpWaitForBufferReferenceCount.c)
 *     EtwpFlushBuffer @ 0x1405C2D14 (EtwpFlushBuffer.c)
 *     EtwpAdjustFreeBuffers @ 0x1405C2E48 (EtwpAdjustFreeBuffers.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x14065C014 (EtwpRealtimeSendEmptyMarker.c)
 */

__int64 __fastcall EtwpFlushActiveBuffers(unsigned int *a1, int a2)
{
  __int64 *v5; // rax
  __int64 *v6; // r15
  int v7; // esi
  __int64 v8; // rax
  int v9; // eax
  signed __int64 v10; // r9
  __int64 v11; // rbp
  unsigned __int64 *v12; // r14
  __int64 v13; // r12
  _QWORD *v14; // rdx
  unsigned __int64 v15; // rbx
  unsigned __int32 v16; // eax
  signed __int64 i; // rcx
  signed __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  _QWORD **v22; // r14
  __int64 v23; // rbx
  __int64 *v24; // rsi
  int v25; // r10d
  int v26; // r11d
  __int64 v27; // r8
  __int64 j; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rax
  unsigned int v35; // eax
  __int16 v36; // r15
  unsigned int v37; // ebp
  _QWORD *v38; // rbx
  __int16 v39; // ax
  unsigned int *v40; // rsi
  _QWORD *v41; // r12
  _QWORD *v42; // r13
  unsigned int v43; // eax
  unsigned int v44; // ecx
  char v45; // [rsp+20h] [rbp-148h]
  BOOL v46; // [rsp+24h] [rbp-144h]
  int v47; // [rsp+28h] [rbp-140h]
  char v48; // [rsp+30h] [rbp-138h] BYREF

  v47 = a2;
  if ( !*((_QWORD *)a1 + 102) && !*((_QWORD *)a1 + 47) )
  {
    if ( a1[56] )
      EtwpRequestFlushTimer((__int64)a1, 0);
    return 259LL;
  }
  v5 = (__int64 *)*((_QWORD *)a1 + 130);
  v6 = (__int64 *)&v48;
  v45 = 0;
  v7 = 0;
  if ( v5 )
    v6 = v5;
  if ( (a1[3] & 0x40000) != 0 )
  {
    v8 = _InterlockedExchange64((volatile __int64 *)a1 + 18, 0LL);
    if ( v8 )
    {
      *v6 = v8;
      v7 = 1;
    }
    goto LABEL_36;
  }
  v9 = EtwpQueryUsedProcessorCount((__int64)a1) - 1;
  v11 = v9;
  if ( v9 >= 0 )
  {
    v12 = (unsigned __int64 *)v6;
    v13 = (__int64)v9 << 6;
    while ( 1 )
    {
      if ( (a1[3] & 0x10000000) != 0 )
        v14 = a1 + 36;
      else
        v14 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 135) + 4136LL) + v13) + 8LL * *a1);
      v15 = *v14 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( !v15 )
        goto LABEL_34;
      if ( a2 )
        break;
      v21 = *(_QWORD *)((*v14 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20);
      if ( v21 )
      {
        *v12 = v21;
        *(_QWORD *)(v15 + 32) = v10;
LABEL_33:
        ++v7;
        ++v12;
      }
LABEL_34:
      v13 -= 64LL;
      if ( --v11 < 0 )
        goto LABEL_35;
    }
    v16 = _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 8), a1[1]);
    if ( v16 <= a1[1] )
      *(_DWORD *)(v15 + 4) = v16;
    _m_prefetchw(v14);
    for ( i = *v14; (v15 ^ i) <= 0xF; i = v18 )
    {
      v18 = _InterlockedCompareExchange64(v14, v10, i);
      if ( i == v18 )
        break;
    }
    v19 = i & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (i & 0xFFFFFFFFFFFFFFF0uLL) == v15 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 12), -(i & 0xF));
      EtwpPrepareDirtyBuffer((__int64)a1, v19);
      v10 = 0LL;
    }
    else
    {
      if ( v19 )
      {
        do
        {
          v20 = *(_QWORD *)(v19 + 32);
          if ( v20 == v15 )
            break;
          v19 = *(_QWORD *)(v19 + 32);
        }
        while ( v20 );
      }
      *(_QWORD *)(v19 + 32) = v10;
      v45 = 1;
    }
    *v12 = v15;
    goto LABEL_33;
  }
LABEL_35:
  EtwpLockUnlockBufferList((__int64)a1);
LABEL_36:
  v22 = 0LL;
  if ( v7 > 0 )
  {
    v23 = v7;
    v24 = &v6[v7 - 1];
    do
    {
      v25 = 1;
      v26 = 0;
      v27 = 0LL;
      for ( j = 1LL; j < v23; ++j )
      {
        v29 = *(_QWORD *)(v6[j] + 16);
        v30 = *(_QWORD *)(v6[v27] + 16);
        v31 = j;
        if ( v29 <= v30 )
          v31 = v27;
        v27 = v31;
        v32 = v25;
        if ( v29 <= v30 )
          v32 = v26;
        ++v25;
        v26 = v32;
      }
      v33 = v6[v27];
      v34 = *(_QWORD *)(v33 + 32);
      v6[v27] = v34;
      if ( !v34 )
      {
        --v23;
        v6[v27] = *v24--;
      }
      if ( *(int *)(v33 + 12) <= 0
        && (v35 = *(_DWORD *)(v33 + 4), v35 <= 0x48)
        && (v35 || *(_DWORD *)(v33 + 8) <= 0x48u) )
      {
        *(_WORD *)(v33 + 52) = 0;
        EtwpEnqueueAvailableBuffer((__int64)a1, (unsigned int *)v33, 0);
      }
      else
      {
        *(_QWORD *)(v33 + 32) = v22;
        v22 = (_QWORD **)(v33 + 32);
      }
    }
    while ( v23 > 0 );
  }
  v36 = 0;
  v37 = 0;
  if ( v22 )
  {
    v38 = *v22;
    v39 = a2 != 0;
    v46 = a2 != 0;
    do
    {
      v40 = (unsigned int *)(v22 - 4);
      if ( v38 )
        v39 = v36;
      v36 = v39;
      EtwpAdjustFreeBuffers((__int64)a1);
      EtwpWaitForBufferReferenceCount((__int64)(v22 - 4));
      *v22 = 0LL;
      v41 = 0LL;
      v42 = 0LL;
      if ( (a1[3] & 0x40000) != 0 )
      {
        v41 = (_QWORD *)*((_QWORD *)v40 + 7);
        v42 = (_QWORD *)*((_QWORD *)v40 + 8);
        *((_QWORD *)v40 + 7) = 0LL;
        *((_QWORD *)v40 + 8) = 0LL;
      }
      v43 = EtwpFlushBuffer((__int64)a1, v40, v36);
      v44 = a1[3];
      v37 = v43;
      *((_WORD *)v40 + 26) = 0;
      if ( (v44 & 0x40000) != 0 )
        ((void (__fastcall *)(_QWORD, unsigned int *, _QWORD *))v41)(v43, v40, v42);
      else
        EtwpEnqueueAvailableBuffer((__int64)a1, v40, 0);
      v22 = (_QWORD **)v38;
      if ( v38 )
        v38 = (_QWORD *)*v38;
      v39 = v46;
    }
    while ( v22 );
    if ( a1[56] && v47 && ((a1[3] & 0x10000000) == 0 || v45) )
      EtwpRequestFlushTimer((__int64)a1, 0);
  }
  else if ( a2 && (a1[208] & 8) != 0 && !a1[110] && a1[90] )
  {
    EtwpRealtimeSendEmptyMarker(a1);
  }
  return v37;
}
