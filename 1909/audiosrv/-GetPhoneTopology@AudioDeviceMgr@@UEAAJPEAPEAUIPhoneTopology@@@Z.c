/*
 * XREFs of ?GetPhoneTopology@AudioDeviceMgr@@UEAAJPEAPEAUIPhoneTopology@@@Z @ 0x180058BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180058C3C (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioDeviceMgr::GetPhoneTopology(AudioDeviceMgr *this, struct IPhoneTopology **a2)
{
  unsigned int v4; // ebx
  void (__fastcall ***v5)(_QWORD, GUID *, struct IPhoneTopology **); // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    &lpCriticalSection,
    (char *)this + 80);
  v4 = 0;
  if ( a2
    && (*a2 = 0LL, (v5 = (void (__fastcall ***)(_QWORD, GUID *, struct IPhoneTopology **))*((_QWORD *)this + 9)) != 0LL) )
  {
    (**v5)(v5, &GUID_242cf56d_42d8_4b1f_ae71_9dc02d4a7d37, a2);
  }
  else
  {
    v4 = -2147467261;
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
