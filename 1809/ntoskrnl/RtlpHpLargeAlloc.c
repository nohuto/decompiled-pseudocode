/*
 * XREFs of RtlpHpLargeAlloc @ 0x140009ED8
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x14000981C (RtlpHpAllocateHeapInternal.c)
 *     ExAllocateHeapPool @ 0x1400BA0B0 (ExAllocateHeapPool.c)
 * Callees:
 *     RtlpHpMetadataFree @ 0x1400080A4 (RtlpHpMetadataFree.c)
 *     RtlpHpLargeLockAcquire @ 0x1400097B4 (RtlpHpLargeLockAcquire.c)
 *     RtlpHpMetadataAlloc @ 0x1400099CC (RtlpHpMetadataAlloc.c)
 *     RtlpHpQueryVA @ 0x14000A390 (RtlpHpQueryVA.c)
 *     RtlpHpSegHeapCheckCommitLimit @ 0x14000C51C (RtlpHpSegHeapCheckCommitLimit.c)
 *     RtlpHpAllocVA @ 0x14000CE68 (RtlpHpAllocVA.c)
 *     RtlpHpFreeVA @ 0x14000D214 (RtlpHpFreeVA.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x1400BD5F0 (RtlRbInsertNodeEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

void *__fastcall RtlpHpLargeAlloc(__int64 a1, __int64 a2, size_t a3, int a4)
{
  __int128 v4; // xmm0
  void *v5; // r13
  void *v8; // rax
  __int64 v9; // r15
  BOOL v10; // edi
  unsigned int v11; // r12d
  int v12; // r8d
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rsi
  int v15; // r9d
  char v16; // si
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  char v20; // di
  unsigned __int8 v21; // r14
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  BOOLEAN v24; // r8
  int v25; // ecx
  unsigned __int64 v26; // rax
  void *v28; // [rsp+38h] [rbp-79h] BYREF
  signed __int64 v29; // [rsp+40h] [rbp-71h] BYREF
  unsigned __int64 v30; // [rsp+48h] [rbp-69h]
  __int64 v31; // [rsp+50h] [rbp-61h] BYREF
  _QWORD *v32; // [rsp+58h] [rbp-59h] BYREF
  __int128 v33; // [rsp+68h] [rbp-49h] BYREF
  __int128 v34; // [rsp+78h] [rbp-39h] BYREF
  __int128 v35; // [rsp+88h] [rbp-29h] BYREF
  __int128 v36; // [rsp+98h] [rbp-19h] BYREF
  __int128 v37; // [rsp+A8h] [rbp-9h] BYREF
  __int128 v38; // [rsp+B8h] [rbp+7h] BYREF
  __int128 v39[4]; // [rsp+C8h] [rbp+17h] BYREF
  char v40; // [rsp+118h] [rbp+67h] BYREF
  __int64 v41; // [rsp+120h] [rbp+6Fh]
  int v42; // [rsp+130h] [rbp+7Fh]

  v42 = a4;
  v41 = a2;
  v4 = *(_OWORD *)a1;
  v5 = 0LL;
  v28 = 0LL;
  v33 = v4;
  v8 = RtlpHpMetadataAlloc(0x28uLL, 0x28uLL, 0, &v33);
  v9 = (__int64)v8;
  if ( v8 )
  {
    memset(v8, 0, 0x28uLL);
    v10 = 0;
    if ( (*(_DWORD *)(a1 + 20) & 0x4000000) != 0 )
      v10 = 0x1FFFFF - ((a3 - 1) & 0x1FFFFF) < a3 >> 2;
    while ( 1 )
    {
      v11 = 0;
      if ( v10 )
      {
        v12 = 0x200000;
        v13 = a3 - ((a3 - 1) & 0x1FFFFF) + 0x1FFFFF;
      }
      else
      {
        v11 = BYTE1(*(_QWORD *)a1) < 2u;
        v12 = 0;
        v13 = a3 + (v11 << 12);
      }
      v29 = v13;
      if ( v13 < a3 )
        break;
      v34 = *(_OWORD *)a1;
      if ( (int)RtlpHpAllocVA(
                  (unsigned int)&v28,
                  (unsigned int)&v29,
                  v12,
                  0x2000,
                  (*(_DWORD *)(a1 + 20) & 0x40000000) != 0 ? 64 : 4,
                  (__int64)&v34) < 0 )
      {
        v28 = 0LL;
        break;
      }
      v35 = *(_OWORD *)a1;
      RtlpHpQueryVA(v28, &v35, &v32, &v40);
      *v32 = a1;
      v30 = (a3 + 4095) >> 12;
      v14 = v30 << 12;
      v31 = v30 << 12;
      if ( !(unsigned int)RtlpHpSegHeapCheckCommitLimit(v30 << 12, a1) )
        break;
      if ( v10 )
      {
        v15 = 536875008;
        v31 = v14 - ((v14 - 1) & 0x1FFFFF) + 0x1FFFFF;
        v16 = v42;
      }
      else
      {
        v16 = v42;
        v15 = 4096;
        if ( (v42 & 2) != 0 )
          v15 = 1073745920;
      }
      v36 = *(_OWORD *)a1;
      if ( (int)RtlpHpAllocVA(
                  (unsigned int)&v28,
                  (unsigned int)&v31,
                  0,
                  v15,
                  (*(_DWORD *)(a1 + 20) & 0x40000000) != 0 ? 64 : 4,
                  (__int64)&v36) >= 0 )
      {
        if ( v10 && (v16 & 2) != 0 )
          memset(v28, 0, a3);
        v17 = v30;
        *(_QWORD *)(v9 + 24) = v28;
        v18 = *(_DWORD *)(v9 + 32) & 0xFFD | (2 * (v11 | (v17 << 11)));
        *(_QWORD *)(v9 + 32) = v18;
        _BitScanForward64(&v19, v29);
        LODWORD(v30) = v19;
        *(_QWORD *)(v9 + 32) = v18 ^ (unsigned __int8)(v18 ^ (4 * v19)) & 0xFC;
        *(_WORD *)(v9 + 24) = ((_WORD)v17 << 12) - v41;
        v20 = v42;
        v21 = RtlpHpLargeLockAcquire((_DWORD *)a1, v42);
        v22 = *(_QWORD *)(a1 + 80);
        v23 = *(_QWORD *)(a1 + 72);
        if ( (v22 & 1) != 0 && v23 )
          v23 ^= a1 + 72;
        v24 = 0;
        v25 = v22 & 1;
        if ( v23 )
        {
          while ( 1 )
          {
            if ( (unsigned __int64)v28 < (*(_QWORD *)(v23 + 24) & 0xFFFFFFFFFFFF0000uLL) )
            {
              v26 = *(_QWORD *)v23;
              if ( v25 )
              {
                if ( !v26 )
                  goto LABEL_35;
                v26 ^= v23;
              }
              if ( !v26 )
              {
LABEL_35:
                v24 = 0;
                break;
              }
            }
            else
            {
              v26 = *(_QWORD *)(v23 + 8);
              if ( v25 )
              {
                if ( !v26 )
                  goto LABEL_29;
                v26 ^= v23;
              }
              if ( !v26 )
              {
LABEL_29:
                v24 = 1;
                break;
              }
            }
            v23 = v26;
          }
        }
        RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 72), (PRTL_BALANCED_NODE)v23, v24, (PRTL_BALANCED_NODE)v9);
        if ( (v20 & 1) == 0 )
        {
          if ( (*(_DWORD *)a1 & 1) != 0 )
          {
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v21 < 2u )
            {
              _InterlockedAnd((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick();
            }
            __writecr8(v21);
          }
          else
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(a1 + 64);
            KeAbPostRelease(a1 + 64);
            KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
          }
        }
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v29 / 4096);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), v17);
        v5 = v28;
        v9 = 0LL;
        v28 = 0LL;
        break;
      }
      if ( !v10 )
        break;
      v10 = 0;
      v37 = *(_OWORD *)a1;
      RtlpHpFreeVA(&v28, &v29, 0x8000LL, &v37);
      v28 = 0LL;
    }
    if ( v9 )
    {
      v38 = *(_OWORD *)a1;
      RtlpHpMetadataFree(v9, &v38);
    }
  }
  if ( v28 )
  {
    v39[0] = *(_OWORD *)a1;
    RtlpHpFreeVA(&v28, &v29, 0x8000LL, v39);
  }
  return v5;
}
