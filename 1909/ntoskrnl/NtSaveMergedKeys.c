/*
 * XREFs of NtSaveMergedKeys @ 0x140824BF0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwSaveMergedKeys @ 0x1401C3C10 (ZwSaveMergedKeys.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpDetachFromRegistryProcess @ 0x1405FE58C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405FEFA0 (CmpAttachToRegistryProcess.c)
 *     CmpReleaseShutdownRundown @ 0x1405FF930 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x1405FFA40 (CmpAcquireShutdownRundown.c)
 *     CmObReferenceObjectByHandle @ 0x1405FFB10 (CmObReferenceObjectByHandle.c)
 *     CmConvertHandleToKernelHandle @ 0x14063D520 (CmConvertHandleToKernelHandle.c)
 *     CmCheckNoTxContext @ 0x14063D8D8 (CmCheckNoTxContext.c)
 *     SeSinglePrivilegeCheck @ 0x140678440 (SeSinglePrivilegeCheck.c)
 *     CmSaveMergedKeys @ 0x14083AE6C (CmSaveMergedKeys.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140855770 (IoConvertFileHandleToKernelHandle.c)
 */

NTSTATUS __stdcall NtSaveMergedKeys(HANDLE HighPrecedenceKeyHandle, HANDLE LowPrecedenceKeyHandle, HANDLE FileHandle)
{
  NTSTATUS v6; // ebx
  KPROCESSOR_MODE PreviousMode; // di
  void *v8; // rdx
  __int64 v9; // r8
  void *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  PVOID Object; // [rsp+30h] [rbp-29h] BYREF
  PVOID v15; // [rsp+38h] [rbp-21h] BYREF
  HANDLE FileHandlea; // [rsp+40h] [rbp-19h] BYREF
  HANDLE LowPrecedenceKeyHandlea; // [rsp+48h] [rbp-11h] BYREF
  HANDLE HighPrecedenceKeyHandlea; // [rsp+50h] [rbp-9h] BYREF
  _BYTE v19[48]; // [rsp+58h] [rbp-1h] BYREF

  memset(v19, 0, sizeof(v19));
  v15 = 0LL;
  Object = 0LL;
  FileHandlea = 0LL;
  LowPrecedenceKeyHandlea = 0LL;
  HighPrecedenceKeyHandlea = 0LL;
  if ( (unsigned __int8)CmpAcquireShutdownRundown() )
  {
    v6 = CmCheckNoTxContext();
    if ( v6 >= 0 )
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( SeSinglePrivilegeCheck(SeBackupPrivilege, PreviousMode) )
      {
        if ( PreviousMode )
        {
          v6 = CmConvertHandleToKernelHandle(HighPrecedenceKeyHandle, v8, PreviousMode, 0, &HighPrecedenceKeyHandlea);
          if ( v6 >= 0 )
          {
            v6 = CmConvertHandleToKernelHandle(LowPrecedenceKeyHandle, v10, PreviousMode, 0, &LowPrecedenceKeyHandlea);
            if ( v6 >= 0 )
            {
              LOBYTE(v11) = PreviousMode;
              v6 = IoConvertFileHandleToKernelHandle(FileHandle, v11, 2LL, 0LL, &FileHandlea);
              if ( v6 >= 0 )
                v6 = ZwSaveMergedKeys(HighPrecedenceKeyHandlea, LowPrecedenceKeyHandlea, FileHandlea);
            }
          }
        }
        else
        {
          v6 = CmObReferenceObjectByHandle(HighPrecedenceKeyHandle, 0, v9, 0, &v15, 0LL);
          if ( v6 >= 0 )
          {
            v6 = CmObReferenceObjectByHandle(LowPrecedenceKeyHandle, 0, v12, 0, &Object, 0LL);
            if ( v6 >= 0 )
            {
              CmpAttachToRegistryProcess((__int64)v19);
              v6 = CmSaveMergedKeys(v15, Object, FileHandle, 0LL);
              CmpDetachFromRegistryProcess((struct _KTHREAD *)v19);
            }
          }
        }
      }
      else
      {
        v6 = -1073741727;
      }
    }
    CmpReleaseShutdownRundown();
    if ( Object )
      ObfDereferenceObject(Object);
    if ( v15 )
      ObfDereferenceObject(v15);
    if ( FileHandlea )
      ZwClose(FileHandlea);
  }
  else
  {
    v6 = -1073741431;
  }
  if ( LowPrecedenceKeyHandlea )
    ZwClose(LowPrecedenceKeyHandlea);
  if ( HighPrecedenceKeyHandlea )
    ZwClose(HighPrecedenceKeyHandlea);
  return v6;
}
