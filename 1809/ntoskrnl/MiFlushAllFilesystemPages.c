/*
 * XREFs of MiFlushAllFilesystemPages @ 0x1402AB1E0
 * Callers:
 *     MiWaitForInPageComplete @ 0x14001B7E0 (MiWaitForInPageComplete.c)
 *     MiGetNextPageTablePte @ 0x140070A20 (MiGetNextPageTablePte.c)
 *     MiCommitExistingVad @ 0x140071460 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140071E70 (MiSetProtectionOnSection.c)
 *     MiMakeSystemAddressValid @ 0x140088170 (MiMakeSystemAddressValid.c)
 *     MiInPageSingleKernelStack @ 0x14013D5A0 (MiInPageSingleKernelStack.c)
 *     MiLockPagedAddress @ 0x140140A10 (MiLockPagedAddress.c)
 *     MiMakeOutswappedPageResident @ 0x1402A4558 (MiMakeOutswappedPageResident.c)
 *     MiShutdownSystem @ 0x14057CBF4 (MiShutdownSystem.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     MiIsWorkingSetTrimThread @ 0x1400E9540 (MiIsWorkingSetTrimThread.c)
 *     CcForEachPartition @ 0x1401200F0 (CcForEachPartition.c)
 *     MiEmptyAllWorkingSets @ 0x1402B319C (MiEmptyAllWorkingSets.c)
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
            result = (unsigned int)_InterlockedIncrement(&dword_14043B828);
            if ( (_DWORD)result != 1 )
              return result;
            MiEmptyAllWorkingSets(&MiSystemPartition);
          }
          _InterlockedIncrement(&dword_14043DD04);
          result = qword_14043F870;
          if ( qword_14043F800 != qword_14043F870 )
          {
            v4 = dword_14043DC9C;
            do
            {
              KeSetEvent(&stru_14043DD08, 0, 0);
              CcForEachPartition((__int64 (__fastcall *)(__int64, __int64))CcNotifyWriteBehindHelper, 2LL, 0);
              result = qword_14043F870;
              if ( qword_14043F800 == qword_14043F870 )
                break;
              KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
              result = (unsigned int)dword_14043DC9C;
              if ( v4 != dword_14043DC9C )
              {
                v4 = dword_14043DC9C;
                v3 = -1;
              }
              ++v3;
            }
            while ( v3 < 0xFF );
          }
          _InterlockedDecrement(&dword_14043DD04);
        }
      }
    }
  }
  return result;
}
