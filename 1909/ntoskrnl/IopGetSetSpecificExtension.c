/*
 * XREFs of IopGetSetSpecificExtension @ 0x14009A238
 * Callers:
 *     IopSetLockOperationProcess @ 0x14000672C (IopSetLockOperationProcess.c)
 *     IopCheckInitiatorHint @ 0x1400173FC (IopCheckInitiatorHint.c)
 *     IopGetSetStreamIdentifier @ 0x140298F04 (IopGetSetStreamIdentifier.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1402998F0 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopRetrieveTransactionParameters @ 0x1405D8C50 (IopRetrieveTransactionParameters.c)
 *     IopParseDevice @ 0x1406018D0 (IopParseDevice.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14064C13C (IopAllocateFoExtensionsOnCreate.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1406A0820 (IoCreateStreamFileObjectEx2.c)
 *     IoCopyDeviceObjectHint @ 0x1408558D0 (IoCopyDeviceObjectHint.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x14000A970 (IopGetFileObjectExtension.c)
 *     IopSetTypeSpecificFoExtension @ 0x140098B44 (IopSetTypeSpecificFoExtension.c)
 *     IopAllocateFileObjectExtension @ 0x14009D080 (IopAllocateFileObjectExtension.c)
 *     IopVerifierExAllocatePool_1 @ 0x14009F4E8 (IopVerifierExAllocatePool_1.c)
 *     memset @ 0x1401D77C0 (memset.c)
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
