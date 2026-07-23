/*
 * XREFs of PopRecordPepWorkorderBlackboxInformation @ 0x1402E8D04
 * Callers:
 *     PopRecordPoBlackboxInformation @ 0x14087E1F4 (PopRecordPoBlackboxInformation.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 */

void PopRecordPepWorkorderBlackboxInformation()
{
  unsigned int v0; // esi
  _DWORD *v1; // rbx
  __int64 *v2; // rax
  __int64 v3; // rcx
  SIZE_T v4; // rdi
  _DWORD *PoolWithTag; // rax
  _DWORD *v6; // r8
  __int64 *i; // r9
  unsigned __int64 v8; // kr00_8
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD InputBuffer[5]; // [rsp+30h] [rbp-28h] BYREF

  v0 = 0;
  v1 = 0LL;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopWorkOrderLock, 0LL);
  v2 = (__int64 *)PopWorkOrderList;
  if ( (__int64 *)PopWorkOrderList == &PopWorkOrderList )
    goto LABEL_13;
  do
  {
    v2 = (__int64 *)*v2;
    v3 = v0++;
  }
  while ( v2 != &PopWorkOrderList );
  if ( !v0 )
  {
LABEL_13:
    v4 = 0LL;
  }
  else
  {
    v4 = 48 * v3 + 64;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x42424F50u);
    v1 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v4);
      *v1 = 1;
      v6 = v1 + 4;
      v1[1] = v4;
      v1[2] = v0;
      for ( i = (__int64 *)PopWorkOrderList; i != &PopWorkOrderList; v6 += 12 )
      {
        v8 = MEMORY[0xFFFFF78000000008] - i[20];
        *((_QWORD *)v6 + 1) = i;
        *v6 = v8 / 0x2710;
        *((_QWORD *)v6 + 2) = i[18];
        v9 = i[19];
        *((_QWORD *)v6 + 3) = v9;
        if ( v9 )
        {
          v6[8] = *(_DWORD *)v9;
          if ( v9 != -8 )
          {
            v10 = *(_QWORD *)(v9 + 8);
            if ( v10 )
            {
              v11 = *(_QWORD *)(v10 + 64);
              if ( v11 )
                *((_QWORD *)v6 + 5) = *(_QWORD *)(v11 + 96);
            }
          }
        }
        i = (__int64 *)*i;
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopWorkOrderLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopWorkOrderLock);
  KeAbPostRelease((ULONG_PTR)&PopWorkOrderLock);
  if ( v4 )
  {
    memset(InputBuffer, 0, 0x20uLL);
    InputBuffer[1] = (unsigned int)v4;
    LODWORD(InputBuffer[3]) = 7;
    InputBuffer[0] = v1;
    NtPowerInformation(UpdateBlackBoxRecorder, InputBuffer, 0x20u, 0LL, 0);
  }
  if ( v1 )
    ExFreePoolWithTag(v1, 0x42424F50u);
}
