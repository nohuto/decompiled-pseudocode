/*
 * XREFs of DpiUnmapMemoryTrackerFromIoMmu @ 0x1C0049824
 * Callers:
 *     DpiRemoveMemoryTracker @ 0x1C004966C (DpiRemoveMemoryTracker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     DpiUnmapIommuContiguousInternal @ 0x1C0049704 (DpiUnmapIommuContiguousInternal.c)
 */

void __fastcall DpiUnmapMemoryTrackerFromIoMmu(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // eax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 v7; // rax

  v4 = *(_QWORD *)(a1 + 80);
  if ( v4 )
  {
    v5 = *(_DWORD *)(a2 + 16);
    if ( v5 )
    {
      if ( v5 != 1 && v5 != 2 )
      {
        v7 = WdLogNewEntry5_WdAssertion(v4);
        *(_QWORD *)(v7 + 24) = 507LL;
        WdLogEvent5_WdAssertion(v7);
        v4 = *(_QWORD *)(a1 + 80);
      }
      ((void (__fastcall *)(__int64, _QWORD))qword_1C008EC90)(v4, *(_QWORD *)(a2 + 24));
    }
    else
    {
      PhysicalAddress = MmGetPhysicalAddress(*(PVOID *)(a2 + 24));
      DpiUnmapIommuContiguousInternal(a1, (struct _MDL *)(PhysicalAddress.QuadPart / 4096), *(_QWORD *)(a2 + 32));
    }
  }
}
