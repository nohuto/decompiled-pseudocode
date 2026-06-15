/*
 * XREFs of ?SetCellularRxVolume@PhoneTopology@@UEAAJM@Z @ 0x180145210
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800320C0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180058D1C (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneTopology::SetCellularRxVolume(PhoneTopology *this, float a2)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-48h] BYREF
  char v5; // [rsp+28h] [rbp-40h]
  __int64 v6; // [rsp+30h] [rbp-38h]
  unsigned __int16 v7[8]; // [rsp+38h] [rbp-30h] BYREF

  v6 = -2LL;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 136));
  *((float *)this + 45) = a2;
  if ( *((_QWORD *)this + 3) )
  {
    StringCchPrintfW(v7, 5LL, L"%1.2f", a2);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 40LL))(*((_QWORD *)this + 3));
  }
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
