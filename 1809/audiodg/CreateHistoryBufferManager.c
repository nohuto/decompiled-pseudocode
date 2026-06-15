/*
 * XREFs of CreateHistoryBufferManager @ 0x140042680
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateRehashThresholds@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@AEAAXXZ @ 0x140001520 (-UpdateRehashThresholds@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001B8FC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001C35C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x14001CA76 (memset_0.c)
 *     ?RemoveAll@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@QEAAXXZ @ 0x140042D38 (-RemoveAll@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V.c)
 */

__int64 __fastcall CreateHistoryBufferManager(PINIT_ONCE InitOnce, PVOID Parameter, PVOID *Context)
{
  struct _RTL_CRITICAL_SECTION *v3; // rax
  unsigned int v4; // ebx
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  struct _RTL_CRITICAL_SECTION *v6; // rdi

  v3 = (struct _RTL_CRITICAL_SECTION *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = 0;
  v5 = v3;
  if ( v3 )
  {
    memset_0(v3, 0, 0x70uLL);
    InitializeCriticalSectionEx(v5, 0, 0);
    v5[1].DebugInfo = 0LL;
    *(_QWORD *)&v5[1].LockCount = 0LL;
    LODWORD(v5[1].OwningThread) = 17;
    v5[1].SpinCount = 0xFFFFFFFFLL;
    v5[2].DebugInfo = 0LL;
    v5[2].LockCount = 0;
    v5[2].RecursionCount = 10;
    v5[2].OwningThread = 0LL;
    v5[2].LockSemaphore = 0LL;
    HIDWORD(v5[1].OwningThread) = 1061158912;
    LODWORD(v5[1].LockSemaphore) = 1048576000;
    HIDWORD(v5[1].LockSemaphore) = 1074790400;
    ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::UpdateRehashThresholds((__int64)&v5[1]);
  }
  else
  {
    v5 = 0LL;
  }
  v6 = lpCriticalSection;
  if ( v5 != lpCriticalSection )
  {
    if ( lpCriticalSection )
    {
      ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::RemoveAll(&lpCriticalSection[1]);
      DeleteCriticalSection(v6);
      operator delete(v6);
    }
    v6 = v5;
    lpCriticalSection = v5;
  }
  LOBYTE(v4) = v6 != 0LL;
  return v4;
}
