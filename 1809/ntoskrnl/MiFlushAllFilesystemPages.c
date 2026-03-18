/*
 * XREFs of MiFlushAllFilesystemPages @ 0x1402AAEF0
 * Callers:
 *     MiWaitForInPageComplete @ 0x14001B7E0 (MiWaitForInPageComplete.c)
 *     MiGetNextPageTablePte @ 0x140070A30 (MiGetNextPageTablePte.c)
 *     MiCommitExistingVad @ 0x140071470 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140071E80 (MiSetProtectionOnSection.c)
 *     MiMakeSystemAddressValid @ 0x140088180 (MiMakeSystemAddressValid.c)
 *     MiInPageSingleKernelStack @ 0x14013D480 (MiInPageSingleKernelStack.c)
 *     MiLockPagedAddress @ 0x1401408F0 (MiLockPagedAddress.c)
 *     MiMakeOutswappedPageResident @ 0x1402A4268 (MiMakeOutswappedPageResident.c)
 *     MiShutdownSystem @ 0x14057BBF4 (MiShutdownSystem.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     KeSetEvent @ 0x1400C2AE0 (KeSetEvent.c)
 *     MiIsWorkingSetTrimThread @ 0x1400E94A0 (MiIsWorkingSetTrimThread.c)
 *     CcForEachPartition @ 0x140120060 (CcForEachPartition.c)
 *     MiEmptyAllWorkingSets @ 0x1402B2EAC (MiEmptyAllWorkingSets.c)
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
            result = (unsigned int)_InterlockedIncrement(&dword_14043A768);
            if ( (_DWORD)result != 1 )
              return result;
            MiEmptyAllWorkingSets(&MiSystemPartition);
          }
          _InterlockedIncrement(&dword_14043CC44);
          result = qword_14043E7B0;
          if ( qword_14043E740 != qword_14043E7B0 )
          {
            v4 = dword_14043CBDC;
            do
            {
              KeSetEvent(&stru_14043CC48, 0, 0);
              CcForEachPartition((__int64 (__fastcall *)(__int64, __int64))CcNotifyWriteBehindHelper, 2LL, 0);
              result = qword_14043E7B0;
              if ( qword_14043E740 == qword_14043E7B0 )
                break;
              KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
              result = (unsigned int)dword_14043CBDC;
              if ( v4 != dword_14043CBDC )
              {
                v4 = dword_14043CBDC;
                v3 = -1;
              }
              ++v3;
            }
            while ( v3 < 0xFF );
          }
          _InterlockedDecrement(&dword_14043CC44);
        }
      }
    }
  }
  return result;
}
