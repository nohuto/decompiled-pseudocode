/*
 * XREFs of PpmRegisterProfiles @ 0x140757D74
 * Callers:
 *     PdcPoPpmRegisterProfiles @ 0x140757D60 (PdcPoPpmRegisterProfiles.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     PpmAcquireLock @ 0x140006020 (PpmAcquireLock.c)
 *     RtlStringCchLengthW @ 0x14000733C (RtlStringCchLengthW.c)
 *     PpmReleaseLock @ 0x14008BC20 (PpmReleaseLock.c)
 *     RtlStringCchCopyW @ 0x140092360 (RtlStringCchCopyW.c)
 *     RtlStringCbLengthW @ 0x14011CB38 (RtlStringCbLengthW.c)
 *     PpmResetProfileSettings @ 0x14018E950 (PpmResetProfileSettings.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     PpmEventTraceProfiles @ 0x140757F58 (PpmEventTraceProfiles.c)
 */

__int64 __fastcall PpmRegisterProfiles(unsigned __int8 a1, __int64 a2)
{
  __int64 v4; // r15
  NTSTATUS v5; // ebp
  SIZE_T v6; // rbx
  unsigned __int8 v7; // r11
  SIZE_T v8; // r12
  char v9; // r11
  PVOID PoolWithTag; // rax
  __int64 v11; // r14
  unsigned __int8 v12; // r15
  __int64 v13; // r13
  SIZE_T v14; // r14
  __int64 v15; // r12
  char v16; // al
  size_t v17; // rbx
  __int64 v19; // [rsp+20h] [rbp-48h]
  size_t pcbLength; // [rsp+80h] [rbp+18h] BYREF

  if ( a1 > 0x1Fu )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v4 = a1;
    if ( is_mul_ok(a1, 0x15A0uLL) )
    {
      v5 = 0;
      v6 = (5536LL * a1 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
      v7 = 0;
      v8 = v6;
      if ( a1 )
      {
        while ( 1 )
        {
          v5 = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(32LL * v7 + a2 + 8), 0x7FFFFFFFuLL, &pcbLength);
          if ( v5 < 0 )
            break;
          v7 = v9 + 1;
          v6 += pcbLength + 2;
          if ( v7 >= a1 )
            goto LABEL_6;
        }
      }
      else
      {
LABEL_6:
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x664D5050u);
        v19 = (__int64)PoolWithTag;
        v11 = (__int64)PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, v6);
          if ( a1 )
          {
            v12 = 0;
            v13 = v11 + 32;
            v14 = v11 + v8;
            v15 = a2 + 8;
            do
            {
              ++v12;
              *(_OWORD *)(v13 - 20) = *(_OWORD *)*(_QWORD *)(v15 - 8);
              v16 = *(_BYTE *)(v15 + 8);
              *(_QWORD *)(v13 + 5488) = -1LL;
              *(_BYTE *)v13 = v16;
              *(_QWORD *)(v13 - 32) = v14;
              *(_BYTE *)(v13 - 24) = v12;
              RtlStringCchLengthW(*(STRSAFE_PCNZWCH *)v15, 0x7FFFFFFFuLL, &pcbLength);
              v17 = pcbLength;
              RtlStringCchCopyW(*(NTSTRSAFE_PWSTR *)(v13 - 32), pcbLength + 1, *(NTSTRSAFE_PCWSTR *)v15);
              *(_QWORD *)(v15 + 16) = v13 - 32;
              v14 += 2 * v17 + 2;
              v13 += 5536LL;
              v15 += 32LL;
            }
            while ( v12 < a1 );
            v11 = v19;
            v4 = a1;
          }
          PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
          PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
          PpmProfiles = v11;
          PpmProfileCount = a1;
          if ( a1 )
          {
            do
            {
              PpmResetProfileSettings(v11);
              v11 += 5536LL;
              --v4;
            }
            while ( v4 );
          }
          PpmEventTraceProfiles(0LL);
          PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
          PpmReleaseLock(&PpmPerfPolicyLock);
          PpmProfileStatus |= 1u;
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741675;
    }
  }
  return (unsigned int)v5;
}
