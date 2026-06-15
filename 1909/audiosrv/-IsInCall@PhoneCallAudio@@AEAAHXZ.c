/*
 * XREFs of ?IsInCall@PhoneCallAudio@@AEAAHXZ @ 0x180128058
 * Callers:
 *     ?OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ @ 0x18012827C (-OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ.c)
 *     ?OnPhoneCallEnded@PhoneCallAudio@@AEAAJXZ @ 0x180128324 (-OnPhoneCallEnded@PhoneCallAudio@@AEAAJXZ.c)
 *     ?OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ @ 0x180128390 (-OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180058C3C (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x1800BCD54 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::IsInCall(struct _RTL_CRITICAL_SECTION *this)
{
  unsigned int v2; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v5; // [rsp+30h] [rbp-18h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    this + 2);
  v2 = 0;
  if ( HIDWORD(this[1].LockSemaphore)
    || (*(unsigned int (__fastcall **)(HANDLE))(*(_QWORD *)this[1].OwningThread + 16LL))(this[1].OwningThread) )
  {
    ATL::CCritSecLock::~CCritSecLock(&lpCriticalSection);
    return 1;
  }
  else if ( v5 )
  {
    LeaveCriticalSection(lpCriticalSection);
  }
  return v2;
}
