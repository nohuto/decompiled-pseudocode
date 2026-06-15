/*
 * XREFs of ?RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z @ 0x18001B6C0
 * Callers:
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x1800191B0 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEAG_KK@Z @ 0x18001CA1C (-OnApplicationClosed@CApplicationManager@@QEAAJPEAG_KK@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x1800041E0 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180004B98 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?RemoveAt@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180015614 (-RemoveAt@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::RemoveApplication(CApplicationManager *this, struct CApplication **a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 v5; // rdx
  volatile signed __int32 *v6; // rbx

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v5 = *((_QWORD *)this + 9);
  if ( v5 )
  {
    while ( *(struct CApplication **)(v5 + 16) != *a2 )
    {
      v5 = *(_QWORD *)v5;
      if ( !v5 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v5 = 0LL;
  }
  if ( v5 )
    ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::RemoveAt((__int64 **)this + 9, (__int64 *)v5);
  v6 = (volatile signed __int32 *)*a2;
  if ( *a2 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v6 + 8LL))(v6, 1LL);
    }
    *a2 = 0LL;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
