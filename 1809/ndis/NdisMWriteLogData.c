/*
 * XREFs of NdisMWriteLogData @ 0x1C005D410
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0026E40 (memmove.c)
 */

NDIS_STATUS __stdcall NdisMWriteLogData(NDIS_HANDLE LogHandle, PVOID LogBuffer, UINT LogBufferSize)
{
  NDIS_STATUS v6; // ebp
  UINT v7; // r14d
  __int64 v8; // rax
  __int64 v9; // r14
  char *v10; // rcx
  char *v11; // rdx
  size_t v12; // r8
  unsigned int v13; // ebx
  unsigned int v14; // ecx
  unsigned int v15; // eax
  __int64 v16; // rsi
  __int64 v17; // r10
  char *v18; // rcx
  char *v19; // rdx
  size_t v20; // r8
  char *v21; // r14
  __int64 v22; // rcx
  unsigned int v23; // eax
  unsigned int v24; // ecx
  UCHAR Irql; // [rsp+70h] [rbp+18h] BYREF

  v6 = 0;
  IoAcquireCancelSpinLock(&Irql);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)LogHandle + 1);
  v7 = *((_DWORD *)LogHandle + 6);
  if ( LogBufferSize > v7 )
  {
    v6 = -2147483643;
    goto LABEL_31;
  }
  v8 = *((unsigned int *)LogHandle + 8);
  v9 = v7 - (unsigned int)v8;
  v10 = (char *)LogHandle + v8 + 40;
  v11 = (char *)LogBuffer;
  if ( LogBufferSize > (unsigned int)v9 )
  {
    memmove(v10, LogBuffer, (unsigned int)v9);
    v11 = (char *)LogBuffer + v9;
    v12 = LogBufferSize - (unsigned int)v9;
    v10 = (char *)LogHandle + 40;
  }
  else
  {
    v12 = LogBufferSize;
  }
  memmove(v10, v11, v12);
  *((_DWORD *)LogHandle + 7) += LogBufferSize;
  v13 = *((_DWORD *)LogHandle + 7);
  v14 = *((_DWORD *)LogHandle + 6);
  if ( v13 > v14 )
  {
    *((_DWORD *)LogHandle + 7) = v14;
    v13 = v14;
  }
  *((_DWORD *)LogHandle + 8) += LogBufferSize;
  v15 = *((_DWORD *)LogHandle + 8);
  if ( v15 >= v14 )
  {
    v15 -= v14;
    *((_DWORD *)LogHandle + 8) = v15;
  }
  if ( v13 == v14 )
    *((_DWORD *)LogHandle + 9) = v15;
  v16 = *((_QWORD *)LogHandle + 2);
  if ( v16 )
  {
    *((_QWORD *)LogHandle + 2) = 0LL;
    v17 = *(_QWORD *)(v16 + 8);
    if ( *(_DWORD *)(v17 + 40) <= v13 )
      v13 = *(_DWORD *)(v17 + 40);
    if ( v14 - *((_DWORD *)LogHandle + 9) < v13 )
    {
      if ( (*(_BYTE *)(v17 + 10) & 5) != 0 )
        v21 = *(char **)(v17 + 24);
      else
        v21 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v17, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
      if ( v21 )
      {
        memmove(
          v21,
          (char *)LogHandle + *((unsigned int *)LogHandle + 9) + 40,
          (unsigned int)(*((_DWORD *)LogHandle + 6) - *((_DWORD *)LogHandle + 9)));
        v19 = (char *)LogHandle + 40;
        v22 = *((unsigned int *)LogHandle + 6);
        v20 = v13 + *((_DWORD *)LogHandle + 9) - (_DWORD)v22;
        v18 = &v21[v22 - *((unsigned int *)LogHandle + 9)];
        goto LABEL_25;
      }
    }
    else
    {
      if ( (*(_BYTE *)(v17 + 10) & 5) != 0 )
        v18 = *(char **)(v17 + 24);
      else
        v18 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v17, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
      if ( v18 )
      {
        v19 = (char *)LogHandle + *((unsigned int *)LogHandle + 9) + 40;
        v20 = v13;
LABEL_25:
        memmove(v18, v19, v20);
LABEL_27:
        *((_DWORD *)LogHandle + 9) += v13;
        *((_DWORD *)LogHandle + 7) -= v13;
        v23 = *((_DWORD *)LogHandle + 9);
        v24 = *((_DWORD *)LogHandle + 6);
        if ( v23 >= v24 )
          *((_DWORD *)LogHandle + 9) = v23 - v24;
        *(_QWORD *)(v16 + 56) = v13;
        _InterlockedExchange64((volatile __int64 *)(v16 + 104), 0LL);
        *(_DWORD *)(v16 + 48) = 0;
        IofCompleteRequest((PIRP)v16, 2);
        goto LABEL_31;
      }
    }
    v6 = -1073741670;
    goto LABEL_27;
  }
LABEL_31:
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)LogHandle + 1);
  IoReleaseCancelSpinLock(Irql);
  return v6;
}
