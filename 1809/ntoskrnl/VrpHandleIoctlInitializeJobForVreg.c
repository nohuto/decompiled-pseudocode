/*
 * XREFs of VrpHandleIoctlInitializeJobForVreg @ 0x140809E80
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x140808EC0 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x140017780 (RtlUnicodeStringCopy.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     PsIsThreadInSilo @ 0x1400CC350 (PsIsThreadInSilo.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ULongLongMult @ 0x14026D9D8 (ULongLongMult.c)
 *     PsGetJobSilo @ 0x1402EA310 (PsGetJobSilo.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObCreateObjectEx @ 0x1405E15E0 (ObCreateObjectEx.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 *     PspGetStorageArray @ 0x140731D68 (PspGetStorageArray.c)
 *     CmSetCallbackObjectContext @ 0x1407EBFD0 (CmSetCallbackObjectContext.c)
 *     CmGetRootKeyObjectForSilo @ 0x1407F7DD0 (CmGetRootKeyObjectForSilo.c)
 *     CmInitSiloNamespace @ 0x1407F7E48 (CmInitSiloNamespace.c)
 *     VrpIncrementSiloCount @ 0x140808DE8 (VrpIncrementSiloCount.c)
 *     VrpAllocateKeyContext @ 0x140809568 (VrpAllocateKeyContext.c)
 *     VrpFreeKeyContext @ 0x140809690 (VrpFreeKeyContext.c)
 *     PsInsertSiloContext @ 0x1408879C0 (PsInsertSiloContext.c)
 *     PsRemoveSiloContext @ 0x140887B10 (PsRemoveSiloContext.c)
 */

__int64 __fastcall VrpHandleIoctlInitializeJobForVreg(
        ULONG_PTR *a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        PVOID a5,
        __int64 a6)
{
  UNICODE_STRING *v6; // r14
  void *RootKeyObjectForSilo; // r12
  int JobSilo; // ebx
  _QWORD *v9; // rdi
  size_t v10; // r15
  void *v11; // r13
  PVOID PoolWithTag; // rax
  void *v13; // rbx
  size_t v14; // r8
  void *v15; // rcx
  char v16; // r9
  __int64 v17; // rsi
  char IsThreadInSilo; // al
  PVOID v19; // rcx
  UNICODE_STRING *KeyContext; // rax
  UNICODE_STRING v21; // xmm0
  wchar_t *v22; // rax
  ULONG_PTR v23; // rbx
  __int64 Tag; // [rsp+20h] [rbp-58h]
  ULONGLONG NumberOfBytes; // [rsp+50h] [rbp-28h] BYREF
  ULONGLONG pullResult; // [rsp+58h] [rbp-20h] BYREF
  __int64 v28[3]; // [rsp+60h] [rbp-18h] BYREF
  unsigned int v30; // [rsp+C8h] [rbp+50h] BYREF
  char v31; // [rsp+D0h] [rbp+58h]
  PVOID Object; // [rsp+D8h] [rbp+60h] BYREF

  v31 = a3;
  a5 = 0LL;
  v6 = 0LL;
  Object = 0LL;
  RootKeyObjectForSilo = 0LL;
  a6 = 0LL;
  if ( a2 < 8 )
    return (unsigned int)-1073741811;
  JobSilo = ObCreateObjectEx(0, (_DWORD *)VrpJobContextType, 0, 1u, Tag, 96, 0, 0, &Object, 0LL);
  if ( JobSilo >= 0 )
  {
    v9 = Object;
    memset(Object, 0, 0x60uLL);
    v9[2] = 0LL;
    memset(v9 + 4, 0, 0x30uLL);
    v9[4] = 0LL;
    v9[8] = 16LL;
    v9[6] = 0LL;
    v9[7] = 0LL;
    v9[9] = 0LL;
    v9[5] = 8LL;
    if ( ULongLongMult(0LL, 8uLL, &pullResult) < 0 || ULongLongMult(0x20uLL, v9[5], &NumberOfBytes) < 0 )
    {
      JobSilo = -2147483637;
LABEL_17:
      v15 = (void *)v9[9];
      if ( v15 )
        ExFreePoolWithTag(v15, 0x72615452u);
      memset(v9 + 4, 0, 0x30uLL);
      goto LABEL_20;
    }
    v10 = NumberOfBytes;
    v11 = (void *)v9[9];
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x72615452u);
    v13 = PoolWithTag;
    if ( v11 )
    {
      if ( !PoolWithTag )
      {
LABEL_16:
        JobSilo = -2147024882;
        goto LABEL_17;
      }
      memset(PoolWithTag, 0, v10);
      v14 = pullResult;
      if ( pullResult >= v10 )
        v14 = v10;
      memmove(v13, v11, v14);
      ExFreePoolWithTag(v11, 0x72615452u);
    }
    else if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v10);
    }
    if ( v13 )
    {
      v9[9] = v13;
      v9[7] = 32LL;
      JobSilo = 0;
LABEL_20:
      if ( JobSilo >= 0 )
      {
        JobSilo = VrpIncrementSiloCount();
        if ( JobSilo >= 0 )
        {
          v16 = v31;
          *((_DWORD *)v9 + 22) = 1;
          JobSilo = ObpReferenceObjectByHandleWithTag(*a1, 6, (__int64)PsJobType, v16, 0x52566D43u, &a5, 0LL, 0LL);
          if ( JobSilo >= 0 )
          {
            JobSilo = PsGetJobSilo((__int64)a5);
            if ( JobSilo >= 0 )
            {
              v17 = a6;
              IsThreadInSilo = PsIsThreadInSilo((__int64)KeGetCurrentThread(), a6);
              v9 = Object;
              if ( IsThreadInSilo )
              {
                JobSilo = -1073741811;
              }
              else
              {
                v19 = Object;
                *(_OWORD *)Object = *(_OWORD *)(v17 + 1224);
                KeyContext = (UNICODE_STRING *)VrpAllocateKeyContext(v19);
                v6 = KeyContext;
                if ( KeyContext
                  && (v21 = *(UNICODE_STRING *)(v17 + 1224),
                      KeyContext[2].Length = 1,
                      *KeyContext = v21,
                      v22 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, CmRegistryRootName.Length, 0x67655256u),
                      (v6[1].Buffer = v22) != 0LL) )
                {
                  v6[1].Length = 0;
                  v6[1].MaximumLength = CmRegistryRootName.Length;
                  RtlUnicodeStringCopy(v6 + 1, &CmRegistryRootName);
                  JobSilo = CmInitSiloNamespace();
                  if ( JobSilo >= 0 )
                  {
                    JobSilo = PsInsertSiloContext(v17, (unsigned int)VrpSiloContextSlot, v9);
                    if ( JobSilo >= 0 )
                    {
                      RootKeyObjectForSilo = (void *)CmGetRootKeyObjectForSilo();
                      JobSilo = CmSetCallbackObjectContext(RootKeyObjectForSilo, &VrpCallbackCookie, v6, 0LL);
                      if ( JobSilo < 0 )
                      {
                        PsRemoveSiloContext(v17, (unsigned int)VrpSiloContextSlot, 0LL);
                      }
                      else
                      {
                        v6 = 0LL;
                        if ( (int)PspGetStorageArray(*(_QWORD *)(v17 + 1288), VrpSiloContextSlot, &v30, v28) >= 0 )
                        {
                          v23 = v28[0] + 16LL * v30;
                          ExAcquirePushLockExclusiveEx(v23, 0LL);
                          if ( (*(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
                            *(_QWORD *)(v23 + 8) = *(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFFEuLL | 1;
                          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                            ExfTryToWakePushLock((volatile signed __int64 *)v23);
                          KeAbPostRelease(v23);
                          v9 = Object;
                        }
                        JobSilo = 0;
                      }
                    }
                  }
                }
                else
                {
                  JobSilo = -1073741670;
                }
              }
            }
          }
        }
      }
      goto LABEL_41;
    }
    goto LABEL_16;
  }
  v9 = Object;
LABEL_41:
  if ( v9 )
    ObfDereferenceObjectWithTag(v9, 0x67655256u);
  if ( RootKeyObjectForSilo )
    ObfDereferenceObject(RootKeyObjectForSilo);
  if ( v6 )
    VrpFreeKeyContext(v6);
  if ( a5 )
    ObfDereferenceObjectWithTag(a5, 0x52566D43u);
  return (unsigned int)JobSilo;
}
