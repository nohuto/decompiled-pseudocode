/*
 * XREFs of ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001E234
 * Callers:
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001C494 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x180008188 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008498 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x180016620 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x180016BA8 (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 *     ?RemoveAt@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800187A4 (-RemoveAt@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::RemoveProcess(CApplicationManager *this, struct CProcess *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r15
  __int64 **v5; // r12
  __int64 i; // rbx
  RTL_SRWLOCK *v7; // r14

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v5 = (__int64 **)((char *)this + 128);
  for ( i = *((_QWORD *)this + 16); i && *(struct CProcess **)(i + 16) != a2; i = *(_QWORD *)i )
    ;
  if ( i )
  {
    v7 = (RTL_SRWLOCK *)((char *)this + 120);
    AcquireSRWLockExclusive(v7);
    ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::RemoveAt(v5, (__int64 *)i);
    if ( v7 )
      ReleaseSRWLockExclusive(v7);
    if ( a2 )
    {
      CProcess::CleanupProcessTerminationWatcher(a2, 0);
      CProcess::NotifyPLM((__int64)a2, 1);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)a2 + 32LL))(a2);
        (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)a2 + 24LL))(a2, 1LL);
      }
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
