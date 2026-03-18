/*
 * XREFs of DpiMapMemoryTrackerToIoMmu @ 0x1C0049510
 * Callers:
 *     DpiAddMemoryTracker @ 0x1C0049288 (DpiAddMemoryTracker.c)
 *     DpiMapMemoryTrackersToIoMmu @ 0x1C00495BC (DpiMapMemoryTrackersToIoMmu.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     DpiMapIommuContiguousInternal @ 0x1C0049394 (DpiMapIommuContiguousInternal.c)
 */

__int64 __fastcall DpiMapMemoryTrackerToIoMmu(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  int v6; // r8d
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 v8; // rax

  result = 0LL;
  v4 = *(_QWORD *)(a1 + 80);
  if ( v4 )
  {
    v6 = *(_DWORD *)(a2 + 16);
    if ( v6 )
    {
      if ( v6 != 1 && v6 != 2 )
      {
        v8 = WdLogNewEntry5_WdAssertion(v4);
        *(_QWORD *)(v8 + 24) = 463LL;
        WdLogEvent5_WdAssertion(v8);
        v4 = *(_QWORD *)(a1 + 80);
      }
      return ((__int64 (__fastcall *)(__int64, __int64, _QWORD))qword_1C008EC88)(v4, 3LL, *(_QWORD *)(a2 + 24));
    }
    else
    {
      PhysicalAddress = MmGetPhysicalAddress(*(PVOID *)(a2 + 24));
      return DpiMapIommuContiguousInternal(a1, (struct _MDL *)(PhysicalAddress.QuadPart / 4096), *(_QWORD *)(a2 + 32));
    }
  }
  return result;
}
