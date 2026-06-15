/*
 * XREFs of CreateHistoryBufferManager @ 0x14003F700
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateRehashThresholds@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@AEAAXXZ @ 0x14000480C (-UpdateRehashThresholds@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015744 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001619C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1400168B6 (memset_0.c)
 *     ?RemoveAll@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@QEAAXXZ @ 0x14003FDB8 (-RemoveAll@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V.c)
 */

__int64 __fastcall CreateHistoryBufferManager(PINIT_ONCE InitOnce, PVOID Parameter, PVOID *Context)
{
  struct _RTL_CRITICAL_SECTION *v3; // rax
  unsigned int v4; // edi
  LPCRITICAL_SECTION v5; // rbx
  struct _RTL_CRITICAL_SECTION *v6; // rsi

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
  lpCriticalSection = v5;
  if ( v6 )
  {
    ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::RemoveAll(&v6[1]);
    DeleteCriticalSection(v6);
    operator delete(v6);
    v5 = lpCriticalSection;
  }
  LOBYTE(v4) = v5 != 0LL;
  return v4;
}
