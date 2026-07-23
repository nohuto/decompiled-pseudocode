/*
 * XREFs of RtlpHpFreeWithExceptionProtection @ 0x180018460
 * Callers:
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 * Callees:
 *     RtlpHpStackLoggingEnabled @ 0x180018410 (RtlpHpStackLoggingEnabled.c)
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpFreeHeap @ 0x180018FF0 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180019360 (RtlpFreeHeapInternal.c)
 *     RtlpFreeHeap @ 0x180019FC0 (RtlpFreeHeap.c)
 *     RtlpIsSubSegmentReuseable @ 0x18001B588 (RtlpIsSubSegmentReuseable.c)
 *     RtlpFreeUserBlock @ 0x18001B65C (RtlpFreeUserBlock.c)
 *     RtlNtStatusToDosError @ 0x18004EDE0 (RtlNtStatusToDosError.c)
 *     RtlpProbeUserBufferSafe @ 0x18005AF08 (RtlpProbeUserBufferSafe.c)
 *     RtlpGetHeapProtection @ 0x180060908 (RtlpGetHeapProtection.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x180063D68 (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpLogHeapFailure @ 0x18009F7CC (RtlpLogHeapFailure.c)
 *     ZwProtectVirtualMemory @ 0x1800A0D00 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A3DF0 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1800A3E30 (RtlpInterlockedFlushSList.c)
 *     RtlpCallInterceptRoutine @ 0x1800F2E74 (RtlpCallInterceptRoutine.c)
 *     RtlpHpStackTraceRemoveStack @ 0x180105188 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpLogHeapFreeEvent @ 0x180105E78 (RtlpLogHeapFreeEvent.c)
 *     RtlpGetReservedBlockSize @ 0x18010A39C (RtlpGetReservedBlockSize.c)
 *     RtlpValidateLFHBlock @ 0x18010A7D8 (RtlpValidateLFHBlock.c)
 *     RtlpHeapExceptionFilter @ 0x18010C5C8 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHpFreeWithExceptionProtection(PVOID BaseAddress, unsigned __int64 a2, int a3)
{
  unsigned __int64 v4; // r15
  int v6; // r12d
  unsigned __int64 v7; // rsi
  int v8; // r8d
  unsigned int v9; // esi
  char v10; // bl
  __int64 v11; // rax
  int v12; // ecx
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rcx
  volatile signed __int32 *v16; // r13
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 i; // rdx
  unsigned __int32 v21; // ebx
  __int64 v22; // r9
  __int64 v23; // rcx
  unsigned int v24; // esi
  _QWORD *v25; // rax
  int j; // r8d
  _QWORD *v27; // rcx
  int v28; // ecx
  int v29; // eax
  volatile signed __int64 *v30; // r8
  signed __int64 v31; // rdx
  _QWORD *v32; // r9
  __int64 *v33; // rsi
  _DWORD *v34; // rbx
  __int64 v35; // rcx
  signed __int32 v36; // eax
  unsigned int k; // ecx
  __int64 v38; // rbx
  ULONG HeapProtection; // eax
  int v40; // r8d
  __int64 *v41; // rdx
  signed __int64 v42; // rtt
  __int64 v43; // rcx
  signed __int32 v44; // eax
  __int64 *v45; // r9
  unsigned int m; // ecx
  __int64 *v47; // r8
  _QWORD **v48; // rdx
  unsigned __int8 v49; // al
  __int64 v51; // [rsp+48h] [rbp-130h]
  __int64 *v52; // [rsp+48h] [rbp-130h]
  signed __int64 v53; // [rsp+48h] [rbp-130h]
  unsigned int v54; // [rsp+5Ch] [rbp-11Ch]
  ULONG_PTR RegionSize; // [rsp+88h] [rbp-F0h] BYREF
  unsigned __int64 v56; // [rsp+90h] [rbp-E8h]
  PVOID BaseAddressa; // [rsp+98h] [rbp-E0h] BYREF
  int v58; // [rsp+A0h] [rbp-D8h]
  unsigned int v59; // [rsp+A4h] [rbp-D4h]
  ULONG OldProtect; // [rsp+A8h] [rbp-D0h] BYREF
  __int64 v61; // [rsp+B0h] [rbp-C8h]
  __int64 v62; // [rsp+B8h] [rbp-C0h]
  PVOID v63; // [rsp+C8h] [rbp-B0h]
  struct _TEB *v64; // [rsp+D0h] [rbp-A8h]
  struct _TEB *v65; // [rsp+D8h] [rbp-A0h]
  struct _TEB *v66; // [rsp+E0h] [rbp-98h]
  struct _TEB *v67; // [rsp+E8h] [rbp-90h]
  __int64 v68; // [rsp+F0h] [rbp-88h]
  __int64 v69; // [rsp+F8h] [rbp-80h]
  signed __int64 v70; // [rsp+100h] [rbp-78h]
  __int128 v71; // [rsp+110h] [rbp-68h] BYREF
  int v72; // [rsp+128h] [rbp-50h]
  int v73; // [rsp+138h] [rbp-40h]
  int v74; // [rsp+148h] [rbp-30h]
  unsigned __int16 v75; // [rsp+198h] [rbp+20h] BYREF

  v4 = a2;
  if ( (RtlpHpHeapFeatures & 2) != 0 )
  {
    v9 = RtlpFreeHeapInternal(BaseAddress, (__int64)&v75);
    if ( v9 && v75 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(qword_180163AB8 + 8LL * v75 - 8) + 32LL), -v61);
    return v9;
  }
  v6 = 0;
  v7 = 0LL;
  v63 = BaseAddress;
  if ( *((_DWORD *)BaseAddress + 4) == -571548178 )
  {
    if ( (RtlpHpAppCompatFlags & 2) != 0 && a2 )
      v4 = a2 - *(_QWORD *)(a2 - 16);
    if ( a3 )
    {
      if ( a3 == 8 )
      {
        v8 = 2;
      }
      else
      {
        v8 = (a3 & 1) != 0;
        if ( (a3 & 8) != 0 )
          v8 |= 2u;
        if ( (a3 & 4) != 0 )
          v8 |= 0x80000000;
        if ( (a3 & 0x100) != 0 )
          v8 |= 0x100u;
        if ( (a3 & 0xE00) != 0 )
          v8 |= a3 & 0xE00;
        if ( (a3 & 0x10) != 0 )
          v8 |= 0x2000000u;
        if ( (a3 & 2) != 0 )
          v8 |= 0x1000000u;
      }
    }
    else
    {
      v8 = 0;
    }
    v9 = RtlpHpFreeHeap((_DWORD)BaseAddress, v4, v8 & 0x11000001, 0, 0LL);
    if ( v9 )
    {
      if ( (dword_180166388 & 1) != 0 && (dword_180166388 & 2) != 0 )
      {
        if ( NtCurrentPeb()->ProcessHeap )
        {
          v71 = RtlpHpEnvHandle;
          LOBYTE(v6) = BaseAddress != *(PVOID *)RtlpHpMetadataHeapCtxGet(&v71);
          v58 = v6;
          if ( v6 )
            goto LABEL_157;
        }
      }
    }
    else
    {
      NtCurrentTeb()->LastStatusValue = -1073741811;
      v64 = NtCurrentTeb();
      v64->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    }
    return v9;
  }
  if ( (*((_DWORD *)BaseAddress + 29) & 0x1000000) != 0 )
  {
LABEL_154:
    v49 = RtlpFreeHeap(BaseAddress);
    v9 = v49;
    if ( v49 )
      goto LABEL_155;
    return v9;
  }
  if ( (*((_BYTE *)BaseAddress + 120) & 1) != 0 )
  {
    v7 = RtlpProbeUserBufferSafe(BaseAddress, a2);
    goto LABEL_44;
  }
  if ( (a2 & 0xF) != 0 )
  {
    RtlpLogHeapFailure(9, (_DWORD)BaseAddress, a2, 0, 0LL, 0LL);
  }
  else
  {
    v7 = a2 - 16;
    _m_prefetchw((const void *)(a2 - 16));
    if ( *(_BYTE *)(a2 - 16 + 15) == 5 )
      v7 -= 16LL * *(unsigned __int8 *)(v7 + 14);
    if ( (*(_BYTE *)(v7 + 15) & 0x3F) != 0 )
    {
      v56 = v7;
      goto LABEL_44;
    }
    RtlpLogHeapFailure(8, (_DWORD)BaseAddress, v7, 0, 0LL, 0LL);
    v7 = 0LL;
  }
  v56 = 0LL;
LABEL_44:
  if ( !v7 )
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v65 = NtCurrentTeb();
    v65->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return 0;
  }
  if ( *(_BYTE *)(v4 - 1) != 5 )
    goto LABEL_78;
  if ( *(char *)(v7 + 15) >= 0 )
  {
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      v72 = *(_DWORD *)(v7 + 8) ^ *((_DWORD *)BaseAddress + 34);
      if ( HIBYTE(v72) != ((unsigned __int8)v72 ^ (unsigned __int8)(BYTE1(v72) ^ BYTE2(v72))) )
        goto LABEL_50;
    }
    v10 = 1;
    goto LABEL_54;
  }
  v10 = RtlpValidateLFHBlock(BaseAddress, v7);
  if ( v10 )
  {
LABEL_54:
    if ( *(char *)(v7 + 15) >= 0 )
    {
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        v12 = *(_DWORD *)(v7 + 8);
        v73 = v12;
        if ( (v12 & *((_DWORD *)BaseAddress + 31)) != 0 )
        {
          v73 = v12 ^ *((_DWORD *)BaseAddress + 34);
          LOWORD(v12) = v73;
        }
      }
      else
      {
        LOWORD(v12) = *(_WORD *)(v7 + 8);
      }
    }
    else
    {
      if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)((unsigned __int16)BaseAddress ^ *(_WORD *)(v7 + 8) ^ (v7 >> 4)) )
        v11 = 0LL;
      else
        v11 = *(_QWORD *)(v7
                        - (((unsigned int)RtlpLFHKey ^ (unsigned int)BaseAddress ^ *(_DWORD *)(v7 + 8) ^ (unsigned int)(v7 >> 4)) >> 12));
      LOWORD(v12) = *(_WORD *)(v11 + 36);
    }
    if ( *(_BYTE *)(v7 + 15) == 4 )
    {
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        v13 = *(_DWORD *)(v7 + 8);
        v74 = v13;
        if ( (v13 & *((_DWORD *)BaseAddress + 31)) != 0 )
        {
          v74 = v13 ^ *((_DWORD *)BaseAddress + 34);
          LOWORD(v13) = v74;
        }
      }
      else
      {
        LOWORD(v13) = *(_WORD *)(v7 + 8);
      }
      v14 = (unsigned __int16)v12 + *(_QWORD *)(v7 - 16) - (unsigned __int16)v13;
    }
    else
    {
      v14 = 16LL * (unsigned __int16)v12;
    }
    if ( v14 + v7 < v4 )
      goto LABEL_50;
  }
  if ( !v10 )
  {
LABEL_50:
    RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v7, v4, 0LL, 0LL);
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v66 = NtCurrentTeb();
    v66->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return 0;
  }
  if ( (a3 & 0x3C000102) == 0 )
  {
    v15 = *(_BYTE *)(v4 - 16 + 15) == 5 ? v4 - 16LL * *(unsigned __int8 *)(v4 - 16 + 14) : 0LL;
    v62 = v15;
    if ( (int)RtlpCallInterceptRoutine(*(_DWORD *)(v4 - 8), (_DWORD)BaseAddress, v4, 3, v15) < 0 )
    {
      NtCurrentTeb()->LastStatusValue = -1073741811;
      v67 = NtCurrentTeb();
      v67->LastErrorValue = RtlNtStatusToDosError(-1073741811);
      return 0;
    }
  }
LABEL_78:
  if ( *(char *)(v7 + 15) >= 0 )
    goto LABEL_154;
  if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)((unsigned __int16)BaseAddress ^ *(_WORD *)(v7 + 8) ^ (v7 >> 4)) )
    v16 = 0LL;
  else
    v16 = *(volatile signed __int32 **)(v7
                                      - (((unsigned int)RtlpLFHKey ^ (unsigned int)BaseAddress ^ *(_DWORD *)(v7 + 8) ^ (unsigned int)(v7 >> 4)) >> 12));
  if ( !v16 )
  {
    RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v7, 0, 0LL, 0LL);
    goto LABEL_152;
  }
  _m_prefetchw((const void *)v16);
  v51 = *((_QWORD *)v16 + 1);
  v68 = v51;
  v54 = (unsigned __int16)(*(_DWORD *)(v7 + 12) >> 8);
  v17 = *(_QWORD *)(**(_QWORD **)v16 + 24LL);
  v69 = v17;
  v59 = RtlpLFHKey ^ v51 ^ v17 ^ *(_DWORD *)(v51 + 24);
  if ( v51 + v54 * HIWORD(v59) + (unsigned __int16)v59 != v7 )
  {
    RtlpLogHeapFailure(3, *(_QWORD *)(v17 + 24), v7, 0, 0LL, 0LL);
    goto LABEL_152;
  }
  if ( RtlGetCurrentServiceSessionId() )
    v18 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v18 = 2147353472LL;
  if ( *(_BYTE *)v18 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapFreeEvent(*(_QWORD *)(v17 + 24), v7 + 16, 2LL);
  v19 = 0LL;
  if ( MEMORY[0x7FFE036A] > 1u )
    v19 = 100LL;
  for ( i = 0LL; (unsigned int)i <= (unsigned int)v19; i = (unsigned int)(i + 1) )
  {
    v21 = *((_DWORD *)v16 + 8);
    if ( (v21 & 0x80000000) == 0 )
    {
      v22 = v21;
      if ( v21 == _InterlockedCompareExchange(v16 + 8, v21 | 0x80000000, v21) )
        goto LABEL_100;
    }
  }
  LOWORD(v21) = -1;
  v22 = 0xFFFFFFFFLL;
LABEL_100:
  *(_BYTE *)(v7 + 15) = 0x80;
  if ( (_DWORD)v22 == -1 )
  {
    v23 = (__int64)(v16 + 4);
    goto LABEL_151;
  }
  v24 = v54;
  _bittestandreset64(*(signed __int64 **)(v51 + 40), v54);
  if ( *((_WORD *)v16 + 8) )
  {
    v25 = (_QWORD *)RtlpInterlockedFlushSList(v16 + 4, i, v19, v22);
    for ( j = 0; ; ++j )
    {
      v27 = v25;
      if ( !v25 )
        break;
      v25 = (_QWORD *)*v25;
      v28 = *((_DWORD *)v27 - 1) >> 8;
      v24 = (unsigned __int16)v28;
      _bittestandreset64(*(signed __int64 **)(v51 + 40), (unsigned __int16)v28);
    }
  }
  else
  {
    j = 0;
  }
  v29 = (v24 << 16) | (j + 1 + (unsigned __int16)v21);
  v30 = *(volatile signed __int64 **)v16;
  if ( (_WORD)v29 == *((_WORD *)v16 + 20) )
  {
    v31 = *(unsigned int *)(*v30 + 32);
    v32 = (_QWORD *)*((unsigned int *)v30 + 42);
    if ( *((_DWORD *)v30 + 41) != 1
      || (unsigned int)v31 < (unsigned int)v32
      || (v31 = (unsigned int)(v31 - (_DWORD)v32), (unsigned int)v31 >= *(_DWORD *)(*v30 + 36)) )
    {
      v33 = *(__int64 **)v16;
      v34 = (_DWORD *)_InterlockedExchange64((volatile __int64 *)(*(_QWORD *)v16 + 8LL), 0LL);
      if ( v34 )
      {
        _m_prefetchw(v34 + 11);
        if ( _InterlockedAnd(v34 + 11, 0xFFFFFFF9) == 6 )
        {
          v35 = **(_QWORD **)v34;
          *(_QWORD *)v34 = 0LL;
          goto LABEL_128;
        }
        if ( (unsigned __int8)RtlpIsSubSegmentReuseable(v33, v34) )
        {
          do
          {
            v36 = v34[11];
            if ( !v36 || (v36 & 2) != 0 )
              goto LABEL_129;
          }
          while ( v36 != _InterlockedCompareExchange(v34 + 11, v36 | 2, v36) );
          v32 = *(_QWORD **)v34;
          for ( k = 0; ; ++k )
          {
            if ( k >= 0x10 )
            {
              v35 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v34 + 24LL)
                              + 8LL * *(unsigned __int16 *)(*(_QWORD *)v34 + 172LL)
                              + 1192)
                  + 144LL;
              goto LABEL_128;
            }
            v30 = &v32[((_BYTE)k + (unsigned __int8)*((_WORD *)v32 + 87)) & 0xF];
            v31 = *((_QWORD *)v30 + 2);
            if ( v31 )
            {
              if ( (*(_DWORD *)(v31 + 44) & 1) == 0
                && v31 == _InterlockedCompareExchange64(v30 + 2, (signed __int64)v34, v31) )
              {
                _m_prefetchw((const void *)(v31 + 44));
                if ( _InterlockedAnd((volatile signed __int32 *)(v31 + 44), 0xFFFFFFFD) != 2 )
                  break;
                v35 = **(_QWORD **)v31;
                *(_QWORD *)v31 = 0LL;
LABEL_128:
                RtlpInterlockedPushEntrySList(v35);
                break;
              }
            }
            else if ( !_InterlockedCompareExchange64(v30 + 2, (signed __int64)v34, 0LL) )
            {
              break;
            }
          }
        }
      }
LABEL_129:
      v38 = *(_QWORD *)(*v33 + 24);
      v52 = *(__int64 **)v16;
      if ( (*((_BYTE *)v16 + 38) & 3) != 0 )
      {
        BaseAddressa = (PVOID)((*((_QWORD *)v16 + 1) + 4151LL) & 0xFFFFFFFFFFFFF000uLL);
        RegionSize = (unsigned __int16)RtlpGetReservedBlockSize(v16, v31, v30, v32);
        RegionSize *= 16LL * *((unsigned __int16 *)v16 + 20);
        v9 = 1;
        HeapProtection = RtlpGetHeapProtection(*(_QWORD *)(v38 + 24), 1LL);
        ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, &RegionSize, HeapProtection, &OldProtect);
      }
      else
      {
        v9 = 1;
      }
      *(_DWORD *)(*((_QWORD *)v16 + 1) + 20LL) = 0;
      RtlpFreeUserBlock(v38, *((_QWORD *)v16 + 1));
      v40 = *((unsigned __int16 *)v16 + 20);
      v41 = v52;
      do
      {
        v70 = v41[20];
        LODWORD(v53) = v70 - v40;
        HIDWORD(v53) = HIDWORD(v70) - 1;
        v42 = v70;
      }
      while ( v42 != _InterlockedCompareExchange64(v41 + 20, v53, v70) );
      *((_QWORD *)v16 + 1) = 0LL;
      _InterlockedIncrement((volatile signed __int32 *)(v38 + 60));
      *((_DWORD *)v16 + 8) = 0;
      _m_prefetchw((const void *)(v16 + 11));
      if ( _InterlockedAnd(v16 + 11, 0xFFFFFFFE) == 1 )
      {
        v43 = **(_QWORD **)v16;
        *(_QWORD *)v16 = 0LL;
        RtlpInterlockedPushEntrySList(v43);
      }
      goto LABEL_155;
    }
  }
  *((_DWORD *)v16 + 8) = v29;
  if ( (v16[11] & 2) != 0 || !(unsigned __int8)RtlpIsSubSegmentReuseable(v30, v16) )
    goto LABEL_152;
  do
  {
    v44 = *((_DWORD *)v16 + 11);
    if ( !v44 || (v44 & 2) != 0 )
      goto LABEL_152;
  }
  while ( v44 != _InterlockedCompareExchange(v16 + 11, v44 | 2, v44) );
  v45 = *(__int64 **)v16;
  for ( m = 0; ; ++m )
  {
    if ( m >= 0x10 )
    {
      v23 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v16 + 24LL) + 8LL * *(unsigned __int16 *)(*(_QWORD *)v16 + 172LL) + 1192)
          + 144LL;
      goto LABEL_151;
    }
    v47 = &v45[((_BYTE)m + (unsigned __int8)*((_WORD *)v45 + 87)) & 0xF];
    v48 = (_QWORD **)v47[2];
    if ( v48 )
      break;
    if ( !_InterlockedCompareExchange64(v47 + 2, (signed __int64)v16, 0LL) )
      goto LABEL_152;
LABEL_145:
    ;
  }
  if ( (*((_DWORD *)v48 + 11) & 1) != 0
    || v48 != (_QWORD **)_InterlockedCompareExchange64(v47 + 2, (signed __int64)v16, (signed __int64)v48) )
  {
    goto LABEL_145;
  }
  _m_prefetchw((char *)v48 + 44);
  if ( _InterlockedAnd((volatile signed __int32 *)v48 + 11, 0xFFFFFFFD) != 2 )
    goto LABEL_152;
  v23 = **v48;
  *v48 = 0LL;
LABEL_151:
  RtlpInterlockedPushEntrySList(v23);
LABEL_152:
  v9 = 1;
LABEL_155:
  if ( RtlpHpStackLoggingEnabled() && (a3 & 0x10000000) == 0 )
LABEL_157:
    RtlpHpStackTraceRemoveStack(BaseAddress, v4);
  return v9;
}
