/*
 * XREFs of IopGetSetSpecificExtension @ 0x1400BA3C8
 * Callers:
 *     IopSetLockOperationProcess @ 0x14000669C (IopSetLockOperationProcess.c)
 *     IopCheckInitiatorHint @ 0x14001700C (IopCheckInitiatorHint.c)
 *     IopGetSetStreamIdentifier @ 0x1402991A4 (IopGetSetStreamIdentifier.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x140299B90 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopRetrieveTransactionParameters @ 0x1405D8490 (IopRetrieveTransactionParameters.c)
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1406822C0 (IoCreateStreamFileObjectEx2.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x1406861CC (IopAllocateFoExtensionsOnCreate.c)
 *     IoCopyDeviceObjectHint @ 0x1408561D0 (IoCopyDeviceObjectHint.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x14000A8E0 (IopGetFileObjectExtension.c)
 *     IopSetTypeSpecificFoExtension @ 0x1400B8CD4 (IopSetTypeSpecificFoExtension.c)
 *     IopAllocateFileObjectExtension @ 0x1400BD200 (IopAllocateFileObjectExtension.c)
 *     IopVerifierExAllocatePool_1 @ 0x1400BF668 (IopVerifierExAllocatePool_1.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetSetSpecificExtension(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 *a6)
{
  char v6; // si
  size_t v7; // r15
  __int64 result; // rax
  __int64 FileObjectExtension; // rax
  __int64 v12; // rcx
  __int64 v13; // r14
  void *v14; // rbx
  void *Pool_1; // rax
  __int64 v16[5]; // [rsp+20h] [rbp-28h] BYREF

  v16[0] = 0LL;
  v6 = a4;
  v7 = (unsigned int)a3;
  if ( !(_BYTE)a4 || (result = IopAllocateFileObjectExtension(a1, 0LL, a3, a4), (int)result >= 0) )
  {
    FileObjectExtension = IopGetFileObjectExtension(a1, a2, v16);
    v13 = v16[0];
    v14 = (void *)FileObjectExtension;
    if ( !FileObjectExtension && v6 )
    {
      Pool_1 = (void *)IopVerifierExAllocatePool_1(v12, v7);
      v14 = Pool_1;
      if ( !Pool_1 )
        return 3221225626LL;
      memset(Pool_1, 0, v7);
      if ( (int)IopSetTypeSpecificFoExtension(v13, a2, (signed __int64)v14) < 0 )
      {
        ExFreePoolWithTag(v14, 0);
        v14 = (void *)IopGetFileObjectExtension(a1, a2, 0LL);
      }
    }
    if ( a5 )
      *a5 = v14;
    if ( a6 )
      *a6 = v13;
    return 0LL;
  }
  return result;
}
