/*
 * XREFs of ndisMWanSend @ 0x1C008C420
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ndisMQueueWorkItem @ 0x1C009B628 (ndisMQueueWorkItem.c)
 */

__int64 __fastcall ndisMWanSend(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  char v4; // bp
  KIRQL v5; // r15
  int v8; // eax
  _QWORD *v10; // rcx
  unsigned int v11; // r14d
  KSPIN_LOCK *v12; // rsi
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rdx

  v3 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  v5 = 0;
  v8 = *(_DWORD *)(v3 + 120);
  if ( v8 < 0 )
    return 3221225473LL;
  if ( (v8 & 0x40000) == 0 )
  {
    v4 = 0;
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
    *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
    if ( !*(_BYTE *)(v3 + 89) )
    {
      *(_BYTE *)(v3 + 89) = 1;
      v4 = 1;
      *(_QWORD *)(v3 + 1864) = KeGetCurrentThread();
    }
  }
  if ( (*(_DWORD *)(v3 + 120) & 0x40000) != 0 )
  {
    v12 = (KSPIN_LOCK *)(v3 + 96);
    goto LABEL_13;
  }
  if ( v4 )
  {
    *(_QWORD *)(v3 + 520) = 0LL;
    v12 = (KSPIN_LOCK *)(v3 + 96);
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v3 + 96));
LABEL_13:
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(v3 + 3760) + 200LL))(
            *(_QWORD *)(v3 + 24),
            a2,
            a3);
    if ( (*(_DWORD *)(v3 + 120) & 0x40000) == 0 )
    {
      KeAcquireSpinLockAtDpcLevel(v12);
      *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
    }
    if ( !v11 )
    {
      v13 = *(_QWORD *)(v3 + 3152);
      if ( v13 )
      {
        v14 = 112LL * KeGetPcr()->Prcb.Number;
        ++*(_QWORD *)(v14 + v13 + 64);
        v15 = *(_QWORD *)(v3 + 3152);
        if ( v15 )
        {
          v16 = v15 + 112LL * KeGetPcr()->Prcb.Number;
          *(_QWORD *)(v16 + 88) += *(unsigned int *)(a3 + 24);
          *(_QWORD *)(v16 + 56) += *(unsigned int *)(a3 + 24);
        }
      }
    }
    goto LABEL_19;
  }
  *(_QWORD *)(a3 + 8) = a3;
  *(_QWORD *)a3 = a3;
  v10 = *(_QWORD **)(v3 + 136);
  if ( *v10 != v3 + 128 )
    __fastfail(3u);
  *(_QWORD *)(a3 + 8) = v10;
  *(_QWORD *)a3 = v3 + 128;
  *v10 = a3;
  *(_QWORD *)(v3 + 136) = a3;
  *(_QWORD *)(a3 + 80) = a2;
  ndisMQueueWorkItem(v3);
  v11 = 259;
LABEL_19:
  if ( (*(_DWORD *)(v3 + 120) & 0x40000) == 0 )
  {
    if ( v4 )
    {
      *(_QWORD *)(v3 + 1864) = 0LL;
      *(_BYTE *)(v3 + 89) = 0;
    }
    *(_QWORD *)(v3 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v5);
  }
  return v11;
}
