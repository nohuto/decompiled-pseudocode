/*
 * XREFs of ?RemoveInterface@?$CLockedList@VCMasterVolumeNotificationProcess@@$00$0A@@@QEAAJVCMasterVolumeNotificationProcess@@@Z @ 0x18004841C
 * Callers:
 *     ?DeleteVolumeClientNotification@CVolumeStrip@@UEAAJK@Z @ 0x1800483D0 (-DeleteVolumeClientNotification@CVolumeStrip@@UEAAJK@Z.c)
 * Callees:
 *     ?RemoveAt@?$CAtlArray@KV?$CElementTraits@K@ATL@@@ATL@@QEAAX_K0@Z @ 0x1800484C8 (-RemoveAt@-$CAtlArray@KV-$CElementTraits@K@ATL@@@ATL@@QEAAX_K0@Z.c)
 *     ?RemoveAt@?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x180048514 (-RemoveAt@-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotific.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AE7FC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall CLockedList<CMasterVolumeNotificationProcess,1,0>::RemoveInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        int a2)
{
  unsigned int i; // edx
  unsigned int v5; // edi
  ULONG_PTR *p_SpinCount; // r15

  EnterCriticalSection(lpCriticalSection);
  for ( i = 0; ; ++i )
  {
    v5 = i;
    if ( (unsigned __int64)i >= *(_QWORD *)&lpCriticalSection[1].LockCount )
      break;
    if ( *((_DWORD *)&lpCriticalSection[1].DebugInfo->Type + i) == a2 )
    {
      p_SpinCount = &lpCriticalSection[1].SpinCount;
      if ( (PRTL_CRITICAL_SECTION_DEBUG)i >= lpCriticalSection[2].DebugInfo )
        ATL::AtlThrowImpl(-2147024809);
      --*(_DWORD *)(*p_SpinCount + 4LL * i);
      if ( (PRTL_CRITICAL_SECTION_DEBUG)i >= lpCriticalSection[2].DebugInfo )
        ATL::AtlThrowImpl(-2147024809);
      if ( !*(_DWORD *)(*p_SpinCount + 4LL * i) )
      {
        ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::RemoveAt(
          &lpCriticalSection[1],
          i);
        ATL::CAtlArray<unsigned long,ATL::CElementTraits<unsigned long>>::RemoveAt(&lpCriticalSection[1].SpinCount, v5);
        break;
      }
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
