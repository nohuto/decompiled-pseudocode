/*
 * XREFs of ?IsCellularEnabled@PhoneTopology@@UEAAHXZ @ 0x1801485E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180058C3C (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
_BOOL8 __fastcall PhoneTopology::IsCellularEnabled(PhoneTopology *this)
{
  BOOL v2; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v5; // [rsp+30h] [rbp-28h]
  LPCRITICAL_SECTION v6; // [rsp+38h] [rbp-20h] BYREF
  char v7; // [rsp+40h] [rbp-18h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&v6,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 136));
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 48));
  v2 = *((_QWORD *)this + 13) || *((_QWORD *)this + 24);
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v7 )
    LeaveCriticalSection(v6);
  return v2;
}
