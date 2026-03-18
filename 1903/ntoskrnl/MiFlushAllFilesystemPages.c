/*
 * XREFs of MiFlushAllFilesystemPages @ 0x1402C3C00
 * Callers:
 *     MiWaitForInPageComplete @ 0x140006BE0 (MiWaitForInPageComplete.c)
 *     MiMakeSystemAddressValid @ 0x140021630 (MiMakeSystemAddressValid.c)
 *     MiGetNextPageTablePte @ 0x14004A9F0 (MiGetNextPageTablePte.c)
 *     MiSetProtectionOnSection @ 0x14004E5E0 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x1400509A0 (MiCommitExistingVad.c)
 *     MiInPageSingleKernelStack @ 0x1400E3774 (MiInPageSingleKernelStack.c)
 *     MiLockPagedAddress @ 0x140142C78 (MiLockPagedAddress.c)
 *     MiMakeOutswappedPageResident @ 0x1402BB748 (MiMakeOutswappedPageResident.c)
 *     MiShutdownSystem @ 0x1405ABB20 (MiShutdownSystem.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14003B180 (KeDelayExecutionThread.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     CcForEachPartition @ 0x1400F96E0 (CcForEachPartition.c)
 *     MiIsWorkingSetTrimThread @ 0x14011C5DC (MiIsWorkingSetTrimThread.c)
 *     MiEmptyAllWorkingSets @ 0x1402C83FC (MiEmptyAllWorkingSets.c)
 */

__int64 MiFlushAllFilesystemPages()
{
  __int64 result; // rax
  __int64 (__fastcall *v1)(__int64); // rdx
  int v2; // r8d
  unsigned int v3; // ebx
  int v4; // edi

  result = KeGetCurrentIrql();
  if ( (unsigned __int8)result <= 1u )
  {
    result = MiIsWorkingSetTrimThread();
    v3 = 0;
    if ( !(_DWORD)result )
    {
      result = (__int64)MiModifiedPageWriter;
      if ( (char *)v1 != (char *)MiModifiedPageWriter )
      {
        result = (__int64)MiMappedPageWriter;
        if ( v1 != MiMappedPageWriter )
        {
          if ( v2 == 1 )
          {
            result = (unsigned int)_InterlockedIncrement(&dword_140466208);
            if ( (_DWORD)result != 1 )
              return result;
            MiEmptyAllWorkingSets(&MiSystemPartition);
          }
          _InterlockedIncrement(&dword_14046878C);
          result = qword_14046A5F0;
          if ( qword_14046A580 != qword_14046A5F0 )
          {
            v4 = dword_140468724;
            do
            {
              KeSetEvent(&stru_140468790, 0, 0);
              CcForEachPartition((__int64 (__fastcall *)(__int64, __int64))CcNotifyWriteBehindHelper, 2LL, 0);
              result = qword_14046A5F0;
              if ( qword_14046A580 == qword_14046A5F0 )
                break;
              KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
              result = (unsigned int)dword_140468724;
              if ( v4 != dword_140468724 )
              {
                v4 = dword_140468724;
                v3 = -1;
              }
              ++v3;
            }
            while ( v3 < 0xFF );
          }
          _InterlockedDecrement(&dword_14046878C);
        }
      }
    }
  }
  return result;
}
