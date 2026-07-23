/*
 * XREFs of MiGetFileOnlyRanges @ 0x1402A6698
 * Callers:
 *     MiGetPhysicalMemoryRanges @ 0x1406DC09C (MiGetPhysicalMemoryRanges.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiGetNextNonGapPfnPage @ 0x1401845A8 (MiGetNextNonGapPfnPage.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

char *__fastcall MiGetFileOnlyRanges(_QWORD *a1)
{
  char v1; // al
  char *v2; // rdi
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 v5; // r15
  char *AnyMultiplexedVm; // rax
  char v9; // bl
  __int64 NextNonGapPfnPage; // rsi
  __int64 v11; // r12
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rcx
  size_t v14; // rbx
  __int64 v15; // rsi
  char *PoolWithTag; // rax
  char *v17; // r15
  unsigned __int64 v18; // [rsp+20h] [rbp-58h]
  __int64 v19; // [rsp+80h] [rbp+8h]
  __int64 v20; // [rsp+88h] [rbp+10h]
  unsigned __int64 v21; // [rsp+90h] [rbp+18h] BYREF
  unsigned __int64 v22; // [rsp+98h] [rbp+20h] BYREF

  v1 = MiFlags;
  v2 = 0LL;
  *a1 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  v5 = -1LL;
  if ( (v1 & 0x30) == 0 )
    return 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v21 = 0LL;
  v19 = (__int64)AnyMultiplexedVm;
LABEL_4:
  while ( 1 )
  {
    v9 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
    NextNonGapPfnPage = MiGetNextNonGapPfnPage(&v21, &v22, v9, 0);
    MiUnlockWorkingSetShared(v19, v9);
    if ( !NextNonGapPfnPage )
      break;
    v11 = 48 * ((NextNonGapPfnPage + 0x58000000000LL) / 48);
    v12 = v11 - 0x58000000000LL;
    v20 = v11 - 0x58000000000LL;
    v13 = 48 * ((__int64)(NextNonGapPfnPage + v22 + 0x58000000000LL) / 48) - 0x58000000000LL;
    AnyMultiplexedVm = (char *)v19;
    v18 = v13;
    if ( v11 - 0x58000000000LL < v13 )
    {
      v14 = 16 * v4;
      while ( 1 )
      {
        if ( (*(_QWORD *)(v11 - 0x57FFFFFFFD8LL) & 0x10000000000000LL) != 0 )
        {
          v15 = v11 / 48;
          if ( v5 == -1 || v5 + 1 != v15 )
          {
            if ( v4 == v3 )
            {
              if ( v3 )
                v3 *= 2LL;
              else
                v3 = 16LL;
              PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 16 * v3, 0x66506D4Du);
              v17 = PoolWithTag;
              if ( !PoolWithTag && v2 )
              {
                ExFreePoolWithTag(v2, 0);
                return 0LL;
              }
              if ( v4 )
              {
                memmove(PoolWithTag, v2, v14);
                ExFreePoolWithTag(v2, 0);
              }
              v12 = v20;
              v2 = v17;
              v13 = v18;
            }
            *(_QWORD *)&v2[v14 + 8] = 4096LL;
            ++v4;
            *(_QWORD *)&v2[v14] = v15 << 12;
            v14 += 16LL;
          }
          else
          {
            *(_QWORD *)&v2[v14 - 8] += 4096LL;
          }
          v5 = v11 / 48;
        }
        v12 += 48LL;
        v11 += 48LL;
        v20 = v12;
        if ( v12 >= v13 )
        {
          AnyMultiplexedVm = (char *)v19;
          goto LABEL_4;
        }
      }
    }
  }
  *a1 = v4;
  return v2;
}
