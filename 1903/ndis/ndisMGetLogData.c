/*
 * XREFs of ndisMGetLogData @ 0x1C0091DF0
 * Callers:
 *     ndisDeviceControlHandler @ 0x1C0008BE0 (ndisDeviceControlHandler.c)
 * Callees:
 *     memmove @ 0x1C0041100 (memmove.c)
 */

__int64 __fastcall ndisMGetLogData(KSPIN_LOCK *a1, __int64 a2)
{
  KSPIN_LOCK v4; // rbx
  KSPIN_LOCK *v5; // r15
  unsigned int v6; // edi
  __int64 v7; // rcx
  char *v8; // rbp
  __int64 v9; // rcx
  const void *v10; // rdx
  unsigned int v11; // eax
  char *v12; // rcx
  size_t v13; // r8
  __int64 v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // ebx
  UCHAR Irql; // [rsp+60h] [rbp+8h] BYREF

  IoAcquireCancelSpinLock(&Irql);
  KeAcquireSpinLockAtDpcLevel(a1 + 12);
  v4 = a1[117];
  a1[65] = (KSPIN_LOCK)KeGetCurrentThread();
  if ( v4 )
  {
    v5 = (KSPIN_LOCK *)(v4 + 8);
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 8));
    v6 = *(_DWORD *)(v4 + 28);
    if ( v6 )
    {
      v7 = *(_QWORD *)(a2 + 8);
      if ( *(_DWORD *)(v7 + 40) <= v6 )
        v6 = *(_DWORD *)(v7 + 40);
      if ( (*(_BYTE *)(v7 + 10) & 5) != 0 )
        v8 = *(char **)(v7 + 24);
      else
        v8 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v7, 0, MmCached, 0LL, 0, 0x40000000u);
      if ( v8 )
      {
        v9 = *(unsigned int *)(v4 + 36);
        v10 = (const void *)(v9 + v4 + 40);
        v11 = *(_DWORD *)(v4 + 24) - v9;
        v12 = v8;
        if ( v11 < v6 )
        {
          memmove(v8, v10, v11);
          v10 = (const void *)(v4 + 40);
          v14 = *(unsigned int *)(v4 + 24);
          v13 = v6 + *(_DWORD *)(v4 + 36) - (_DWORD)v14;
          v12 = &v8[v14 - *(unsigned int *)(v4 + 36)];
        }
        else
        {
          v13 = v6;
        }
        memmove(v12, v10, v13);
        *(_DWORD *)(v4 + 36) += v6;
        *(_DWORD *)(v4 + 28) -= v6;
        v15 = *(_DWORD *)(v4 + 36);
        v16 = *(_DWORD *)(v4 + 24);
        if ( v15 >= v16 )
          *(_DWORD *)(v4 + 36) = v15 - v16;
        v17 = 0;
        *(_QWORD *)(a2 + 56) = v6;
      }
      else
      {
        v17 = -1073741670;
      }
    }
    else if ( *(_QWORD *)(v4 + 16) )
    {
      v17 = -1073741823;
    }
    else
    {
      _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)&ndisCancelLogIrp);
      *(_QWORD *)(v4 + 16) = a2;
      v17 = 259;
    }
    KeReleaseSpinLockFromDpcLevel(v5);
  }
  else
  {
    v17 = -1073741823;
  }
  a1[65] = 0LL;
  KeReleaseSpinLockFromDpcLevel(a1 + 12);
  IoReleaseCancelSpinLock(Irql);
  return v17;
}
