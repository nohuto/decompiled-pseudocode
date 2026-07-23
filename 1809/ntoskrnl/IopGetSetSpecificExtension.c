/*
 * XREFs of IopGetSetSpecificExtension @ 0x14008CFBC
 * Callers:
 *     IopSetLockOperationProcess @ 0x14008C644 (IopSetLockOperationProcess.c)
 *     IopCheckInitiatorHint @ 0x1400A392C (IopCheckInitiatorHint.c)
 *     IopGetSetStreamIdentifier @ 0x140283F9C (IopGetSetStreamIdentifier.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x140284A38 (IopAdjustFileObjectKeepAliveCount.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1405A45A0 (IoCreateStreamFileObjectEx2.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x1405FA484 (IopAllocateFoExtensionsOnCreate.c)
 *     IopRetrieveTransactionParameters @ 0x14063A990 (IopRetrieveTransactionParameters.c)
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 *     IoCopyDeviceObjectHint @ 0x14081D360 (IoCopyDeviceObjectHint.c)
 * Callees:
 *     IopAllocateFileObjectExtension @ 0x140062920 (IopAllocateFileObjectExtension.c)
 *     IopVerifierExAllocatePool @ 0x14008CF8C (IopVerifierExAllocatePool.c)
 *     IopSetTypeSpecificFoExtension @ 0x14008D778 (IopSetTypeSpecificFoExtension.c)
 *     IopGetFileObjectExtension @ 0x1400B78B0 (IopGetFileObjectExtension.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetSetSpecificExtension(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6)
{
  char v6; // si
  SIZE_T v7; // r15
  __int64 result; // rax
  __int64 FileObjectExtension; // rax
  __int64 v12; // rcx
  __int64 v13; // r14
  void *v14; // rbx
  PVOID Pool; // rax
  __int64 v16; // r9
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF

  v17[0] = 0LL;
  v6 = a4;
  v7 = a3;
  if ( !(_BYTE)a4 || (result = IopAllocateFileObjectExtension(a1, 0LL), (int)result >= 0) )
  {
    FileObjectExtension = IopGetFileObjectExtension(a1, a2, v17, a4);
    v13 = v17[0];
    v14 = (void *)FileObjectExtension;
    if ( !FileObjectExtension && v6 )
    {
      Pool = IopVerifierExAllocatePool(v12, v7);
      v14 = Pool;
      if ( !Pool )
        return 3221225626LL;
      memset(Pool, 0, v7);
      if ( (int)IopSetTypeSpecificFoExtension(v13, a2, v14) < 0 )
      {
        ExFreePoolWithTag(v14, 0);
        v14 = (void *)IopGetFileObjectExtension(a1, a2, 0LL, v16);
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
