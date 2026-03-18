/*
 * XREFs of MiGetFileOnlyRanges @ 0x1402BD9F4
 * Callers:
 *     MiGetPhysicalMemoryRanges @ 0x14074630C (MiGetPhysicalMemoryRanges.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     MiGetNextNonGapPfnPage @ 0x140186558 (MiGetNextNonGapPfnPage.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

char *__fastcall MiGetFileOnlyRanges(_QWORD *a1)
{
  char v1; // al
  char *v2; // rdi
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 v5; // r15
  char *AnyMultiplexedVm; // rax
  char v9; // al
  unsigned __int8 v10; // bl
  __int64 NextNonGapPfnPage; // rsi
  __int64 v12; // rsi
  __int64 v13; // r12
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rcx
  size_t v16; // rbx
  __int64 v17; // rsi
  char *PoolWithTag; // rax
  char *v19; // r15
  __int64 v20; // [rsp+70h] [rbp+8h]
  unsigned __int64 v21; // [rsp+78h] [rbp+10h] BYREF
  __int64 v22; // [rsp+80h] [rbp+18h]
  unsigned __int64 v23; // [rsp+88h] [rbp+20h] BYREF

  v1 = MiFlags;
  v2 = 0LL;
  *a1 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  v5 = -1LL;
  if ( (v1 & 0x30) == 0 )
    return 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v23 = 0LL;
  v20 = (__int64)AnyMultiplexedVm;
LABEL_4:
  while ( 1 )
  {
    v9 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
    v21 = 0LL;
    v10 = v9;
    NextNonGapPfnPage = MiGetNextNonGapPfnPage(&v23, &v21, v9, 0);
    MiUnlockWorkingSetShared(v20, v10);
    if ( !NextNonGapPfnPage )
      break;
    v12 = NextNonGapPfnPage + 0x58000000000LL;
    v13 = 48 * (v12 / 48);
    v14 = v13 - 0x58000000000LL;
    v22 = v13 - 0x58000000000LL;
    v15 = 48 * ((__int64)(v12 + v21) / 48) - 0x58000000000LL;
    AnyMultiplexedVm = (char *)v20;
    v21 = v15;
    if ( v13 - 0x58000000000LL < v15 )
    {
      v16 = 16 * v4;
      while ( 1 )
      {
        if ( (*(_QWORD *)(v13 - 0x57FFFFFFFD8LL) & 0x10000000000000LL) != 0 )
        {
          v17 = v13 / 48;
          if ( v5 == -1 || v5 + 1 != v17 )
          {
            if ( v4 == v3 )
            {
              if ( v3 )
                v3 *= 2LL;
              else
                v3 = 16LL;
              PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 16 * v3, 0x66506D4Du);
              v19 = PoolWithTag;
              if ( !PoolWithTag && v2 )
              {
                ExFreePoolWithTag(v2, 0);
                return 0LL;
              }
              if ( v4 )
              {
                memmove(PoolWithTag, v2, v16);
                ExFreePoolWithTag(v2, 0);
              }
              v14 = v22;
              v2 = v19;
              v15 = v21;
            }
            *(_QWORD *)&v2[v16 + 8] = 4096LL;
            ++v4;
            *(_QWORD *)&v2[v16] = v17 << 12;
            v16 += 16LL;
          }
          else
          {
            *(_QWORD *)&v2[v16 - 8] += 4096LL;
          }
          v5 = v13 / 48;
        }
        v14 += 48LL;
        v13 += 48LL;
        v22 = v14;
        if ( v14 >= v15 )
        {
          AnyMultiplexedVm = (char *)v20;
          goto LABEL_4;
        }
      }
    }
  }
  *a1 = v4;
  return v2;
}
