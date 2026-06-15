/*
 * XREFs of ?RemoveFromCpuManager@GraphStreamingResourceManager@@UEAAXXZ @ 0x14002E660
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000BCC4 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GraphStreamingResourceManager::RemoveFromCpuManager(GraphStreamingResourceManager *this)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v3; // [rsp+28h] [rbp-10h]

  v3 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_QWORD *)this + 34) )
    (*(void (__fastcall **)(char *))(*((_QWORD *)this - 1) + 80LL))((char *)this - 8);
  if ( v3 )
    LeaveCriticalSection(lpCriticalSection);
}
