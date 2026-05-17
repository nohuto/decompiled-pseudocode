/*
 * XREFs of RtlWow64GetSharedInfoProcess @ 0x1800DD510
 * Callers:
 *     RtlWow64SuspendThread @ 0x1800DD780 (RtlWow64SuspendThread.c)
 * Callees:
 *     NtQueryInformationProcess @ 0x1800A0600 (NtQueryInformationProcess.c)
 *     ZwReadVirtualMemory @ 0x1800A0AC0 (ZwReadVirtualMemory.c)
 */

NTSTATUS __fastcall RtlWow64GetSharedInfoProcess(void *a1, _BYTE *a2)
{
  NTSTATUS result; // eax
  __int64 v4; // [rsp+58h] [rbp+20h] BYREF

  result = NtQueryInformationProcess(a1, ProcessWow64Information, &v4, 8u, 0LL);
  if ( result >= 0 )
  {
    if ( v4 )
    {
      *a2 = 1;
      return ZwReadVirtualMemory();
    }
    else
    {
      *a2 = 0;
    }
  }
  return result;
}
