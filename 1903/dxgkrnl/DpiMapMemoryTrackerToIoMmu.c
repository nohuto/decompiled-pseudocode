/*
 * XREFs of DpiMapMemoryTrackerToIoMmu @ 0x1C0050824
 * Callers:
 *     DpiAddMemoryTracker @ 0x1C0050584 (DpiAddMemoryTracker.c)
 *     DpiMapMemoryTrackersToIoMmu @ 0x1C0050910 (DpiMapMemoryTrackersToIoMmu.c)
 * Callees:
 *     DpiMapIommuContiguousInternal @ 0x1C0050694 (DpiMapIommuContiguousInternal.c)
 *     DpiMapIommuIdentityRangeInternal @ 0x1C00507DC (DpiMapIommuIdentityRangeInternal.c)
 */

__int64 __fastcall DpiMapMemoryTrackerToIoMmu(KSPIN_LOCK *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // edi
  __int64 v7; // rax
  unsigned int v8; // eax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  int v11; // ecx
  __int64 v12; // rax

  v6 = 0;
  if ( KeTestSpinLock(a1) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v7 + 24) = 1260LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *(_DWORD *)(a2 + 16);
  if ( v8 )
  {
    v11 = *(_DWORD *)(a2 + 16);
    if ( v8 != 1 && v8 != 2 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v8, v4);
      *(_QWORD *)(v12 + 24) = 1278LL;
      WdLogEvent5_WdAssertion(v12);
      v11 = *(_DWORD *)(a2 + 16);
    }
    LOBYTE(v6) = v11 != 1;
    return DpiMapIommuIdentityRangeInternal((__int64)a1, *(_QWORD *)(a2 + 24), v6, 0, a2);
  }
  else
  {
    PhysicalAddress = MmGetPhysicalAddress(*(PVOID *)(a2 + 24));
    return DpiMapIommuContiguousInternal(
             (int)a1,
             (struct _MDL *)(PhysicalAddress.QuadPart / 4096),
             *(_QWORD *)(a2 + 32),
             0,
             a2);
  }
}
