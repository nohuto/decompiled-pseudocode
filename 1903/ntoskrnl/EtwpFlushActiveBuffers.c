/*
 * XREFs of EtwpFlushActiveBuffers @ 0x1405C5018
 * Callers:
 *     EtwpLogger @ 0x1406B76B0 (EtwpLogger.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x140003AC0 (EtwpQueryUsedProcessorCount.c)
 *     EtwpPrepareDirtyBuffer @ 0x140003ADC (EtwpPrepareDirtyBuffer.c)
 *     EtwpRequestFlushTimer @ 0x1400B27D8 (EtwpRequestFlushTimer.c)
 *     EtwpLockUnlockBufferList @ 0x140109AB0 (EtwpLockUnlockBufferList.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     EtwpAdjustFreeBuffers @ 0x1405C3D58 (EtwpAdjustFreeBuffers.c)
 *     EtwpFlushBuffer @ 0x14062FCC0 (EtwpFlushBuffer.c)
 *     EtwpRealtimeSendEmptyMarker @ 0x1406B687C (EtwpRealtimeSendEmptyMarker.c)
 *     EtwpCompleteBuffer @ 0x1406DB060 (EtwpCompleteBuffer.c)
 *     EtwpWaitForBufferReferenceCount @ 0x1406DD29C (EtwpWaitForBufferReferenceCount.c)
 */

__int64 __fastcall EtwpFlushActiveBuffers(unsigned int *a1, __int64 a2, __int64 a3)
{
  int v3; // r13d
  __int64 *v5; // r14
  int v6; // ebp
  int v7; // eax
  signed __int64 v8; // r9
  __int64 v9; // r15
  unsigned __int64 *v10; // rdi
  __int64 v11; // r12
  _QWORD *v12; // rdx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rax
  unsigned __int32 v15; // eax
  signed __int64 i; // rcx
  signed __int64 v17; // rax
  unsigned __int64 v18; // rax
  _QWORD **v19; // rdi
  __int64 v20; // rbx
  __int64 *v21; // r15
  int v22; // r10d
  int v23; // r11d
  __int64 j; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rax
  unsigned int v30; // eax
  unsigned __int16 v31; // r15
  __int64 v32; // rbp
  _QWORD *v33; // rbx
  unsigned __int16 v34; // ax
  _QWORD **v35; // rdi
  __int64 v37; // rax
  __int64 v38; // rcx
  char v39; // [rsp+20h] [rbp-148h]
  char v40; // [rsp+30h] [rbp-138h] BYREF

  v3 = a2;
  if ( *((_QWORD *)a1 + 102) || *((_QWORD *)a1 + 47) )
  {
    v5 = (__int64 *)&v40;
    v39 = 0;
    v6 = 0;
    if ( *((_QWORD *)a1 + 130) )
      v5 = (__int64 *)*((_QWORD *)a1 + 130);
    if ( (a1[3] & 0x40000) != 0 )
    {
      v37 = _InterlockedExchange64((volatile __int64 *)a1 + 18, 0LL);
      if ( v37 )
      {
        *v5 = v37;
        v6 = 1;
      }
    }
    else
    {
      v7 = EtwpQueryUsedProcessorCount((__int64)a1) - 1;
      v9 = v7;
      if ( v7 >= 0 )
      {
        v10 = (unsigned __int64 *)v5;
        v11 = (__int64)v7 << 6;
        while ( 1 )
        {
          if ( (a1[3] & 0x10000000) != 0 )
            v12 = a1 + 36;
          else
            v12 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 139) + 4136LL) + v11) + 8LL * *a1);
          v13 = *v12 & 0xFFFFFFFFFFFFFFF0uLL;
          if ( !v13 )
            goto LABEL_23;
          if ( v3 )
            break;
          v14 = *(_QWORD *)((*v12 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20);
          if ( v14 )
          {
            *v10 = v14;
            *(_QWORD *)(v13 + 32) = v8;
LABEL_22:
            ++v6;
            ++v10;
          }
LABEL_23:
          v11 -= 64LL;
          if ( --v9 < 0 )
            goto LABEL_24;
        }
        v15 = _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 8), a1[1]);
        if ( v15 <= a1[1] )
          *(_DWORD *)(v13 + 4) = v15;
        _m_prefetchw(v12);
        for ( i = *v12; (v13 ^ i) <= 0xF; i = v17 )
        {
          v17 = _InterlockedCompareExchange64(v12, v8, i);
          if ( i == v17 )
            break;
        }
        v18 = i & 0xFFFFFFFFFFFFFFF0uLL;
        if ( (i & 0xFFFFFFFFFFFFFFF0uLL) == v13 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 12), -(i & 0xF));
          EtwpPrepareDirtyBuffer((__int64)a1, v18);
          v8 = 0LL;
        }
        else
        {
          if ( v18 )
          {
            do
            {
              v38 = *(_QWORD *)(v18 + 32);
              if ( v38 == v13 )
                break;
              v18 = *(_QWORD *)(v18 + 32);
            }
            while ( v38 );
          }
          *(_QWORD *)(v18 + 32) = v8;
          v39 = 1;
        }
        *v10 = v13;
        goto LABEL_22;
      }
LABEL_24:
      EtwpLockUnlockBufferList((__int64)a1);
    }
    v19 = 0LL;
    if ( v6 > 0 )
    {
      v20 = v6;
      v21 = &v5[v6 - 1];
      do
      {
        v22 = 1;
        v23 = 0;
        a3 = 0LL;
        for ( j = 1LL; j < v20; ++j )
        {
          v25 = *(_QWORD *)(v5[j] + 16);
          v26 = *(_QWORD *)(v5[a3] + 16);
          v27 = j;
          if ( v25 <= v26 )
            v27 = a3;
          a3 = v27;
          v28 = v22;
          if ( v25 <= v26 )
            v28 = v23;
          ++v22;
          v23 = v28;
        }
        a2 = v5[a3];
        v29 = *(_QWORD *)(a2 + 32);
        v5[a3] = v29;
        if ( !v29 )
        {
          --v20;
          v5[a3] = *v21--;
        }
        if ( *(int *)(a2 + 12) <= 0 && (v30 = *(_DWORD *)(a2 + 4), v30 <= 0x48) && (v30 || *(_DWORD *)(a2 + 8) <= 0x48u) )
        {
          EtwpCompleteBuffer(a1, a2, 0LL);
        }
        else
        {
          *(_QWORD *)(a2 + 32) = v19;
          v19 = (_QWORD **)(a2 + 32);
        }
      }
      while ( v20 > 0 );
    }
    v31 = 0;
    LODWORD(v32) = 0;
    if ( v19 )
    {
      v33 = *v19;
      do
      {
        v34 = v3 != 0;
        if ( v33 )
          v34 = v31;
        v35 = v19 - 4;
        v31 = v34;
        EtwpAdjustFreeBuffers((__int64)a1);
        EtwpWaitForBufferReferenceCount(v35);
        v32 = (unsigned int)EtwpFlushBuffer(a1, v35, v31);
        EtwpCompleteBuffer(a1, v35, v32);
        v19 = (_QWORD **)v33;
        if ( v33 )
          v33 = (_QWORD *)*v33;
      }
      while ( v19 );
      if ( a1[56] && v3 && ((a1[3] & 0x10000000) == 0 || v39) )
        EtwpRequestFlushTimer((__int64)a1, 0);
    }
    else if ( v3 && (a1[208] & 8) != 0 )
    {
      EtwpRealtimeSendEmptyMarker(a1, a2, a3, 0LL);
    }
    return (unsigned int)v32;
  }
  else
  {
    if ( a1[56] )
      EtwpRequestFlushTimer((__int64)a1, 0);
    return 259LL;
  }
}
