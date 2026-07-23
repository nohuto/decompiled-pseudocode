/*
 * XREFs of ?SmCompressCtxCreateThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x14017737C
 * Callers:
 *     ?SmCompressCtxStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x14018E640 (-SmCompressCtxStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1401918C0 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     ?SmCompressContextDeleteThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAMS@1@@Z @ 0x140159A14 (-SmCompressContextDeleteThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_P.c)
 *     ?SmCompressCtxCreateThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU_SM_COMPRESS_THREAD_PARAMS@1@PEAU_SM_COMPRESS_CONTEXT@1@K@Z @ 0x14017747C (-SmCompressCtxCreateThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU_SM_COMPRESS_THREAD_PARAMS.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     PsCreateSystemThread @ 0x14066BC30 (PsCreateSystemThread.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCreateThread(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 ThreadParams; // rax
  void *StartContext; // rbx
  void (__fastcall *StartRoutine)(PVOID); // rax
  NTSTATUS v8; // edi
  __int16 Object; // [rsp+40h] [rbp-20h] BYREF
  char v11; // [rsp+42h] [rbp-1Eh]
  int v12; // [rsp+44h] [rbp-1Ch]
  _QWORD v13[3]; // [rsp+48h] [rbp-18h] BYREF
  HANDLE ThreadHandle; // [rsp+88h] [rbp+28h] BYREF

  ThreadHandle = 0LL;
  ThreadParams = SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCreateThreadParams(a1, a3);
  StartContext = (void *)ThreadParams;
  if ( ThreadParams )
  {
    *(_QWORD *)(ThreadParams + 8) = a2;
    if ( a3 )
    {
      Object = 0;
      v12 = 0;
      v13[1] = v13;
      v13[0] = v13;
      v11 = 6;
      *(_QWORD *)(ThreadParams + 16) = &Object;
      StartRoutine = SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxWorkerThread;
    }
    else
    {
      StartRoutine = (void (__fastcall *)(PVOID))SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxBalancerThread;
    }
    v8 = PsCreateSystemThread(
           &ThreadHandle,
           0x1FFFFFu,
           0LL,
           *(HANDLE *)(a2 + 1856),
           0LL,
           (PKSTART_ROUTINE)StartRoutine,
           StartContext);
    if ( v8 >= 0 )
    {
      if ( a3 )
        KeWaitForSingleObject(&Object, WrKernel, 0, 0, 0LL);
      StartContext = 0LL;
      v8 = 0;
    }
    if ( StartContext )
      SMKM_STORE_MGR<SM_TRAITS>::SmCompressContextDeleteThreadParams((struct _EX_RUNDOWN_REF **)StartContext);
    if ( ThreadHandle )
      ObCloseHandle(ThreadHandle, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v8;
}
