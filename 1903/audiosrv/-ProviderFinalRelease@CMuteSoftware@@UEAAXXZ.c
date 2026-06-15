/*
 * XREFs of ?ProviderFinalRelease@CMuteSoftware@@UEAAXXZ @ 0x1800C4B50
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800444C8 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?PersistMuteState@CMuteSoftware@@AEAAXXZ @ 0x1800C4938 (-PersistMuteState@CMuteSoftware@@AEAAXXZ.c)
 */

void __fastcall CMuteSoftware::ProviderFinalRelease(const wchar_t **this)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v3; // [rsp+28h] [rbp-10h]

  if ( this[4] && *((_BYTE *)this + 104) )
    CMuteSoftware::PersistMuteState(this);
  v3 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 7);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(this + 6));
  if ( v3 )
    LeaveCriticalSection(lpCriticalSection);
}
