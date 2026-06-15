/*
 * XREFs of ?UnregisterProcess@GraphStreamingResourceManager@@UEAAXPEAUProcessRegistrationToken__@@@Z @ 0x140016C80
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140009730 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RemoveAtPos@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140016D7C (-RemoveAtPos@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElemen.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GraphStreamingResourceManager::UnregisterProcess(
        GraphStreamingResourceManager *this,
        struct ProcessRegistrationToken__ *a2)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  v5 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(char *, char *))(*((_QWORD *)this - 1) + 40LL))((char *)this - 8, (char *)a2 + 16);
    ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::RemoveAtPos(
      (char *)this + 56,
      a2);
  }
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
}
