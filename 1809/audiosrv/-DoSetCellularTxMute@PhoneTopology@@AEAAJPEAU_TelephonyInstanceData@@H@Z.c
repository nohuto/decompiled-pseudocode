/*
 * XREFs of ?DoSetCellularTxMute@PhoneTopology@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x180143AC8
 * Callers:
 *     ?Process@CallTxMuteWorkItem@@UEAAXPEAVPhoneTopology@@@Z @ 0x180144A00 (-Process@CallTxMuteWorkItem@@UEAAXPEAVPhoneTopology@@@Z.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180058D1C (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?Lookup@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@QEBA_NIAEAV?$CComPtr@UITelephonyControllerCallInstance@@@2@@Z @ 0x180144828 (-Lookup@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CElementTraits@I@2@V-$.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PhoneTopology::DoSetCellularTxMute(
        PhoneTopology *this,
        struct _TelephonyInstanceData *a2,
        unsigned int a3)
{
  __int64 v6; // rbx
  unsigned int v7; // edi
  char v8; // al
  int v9; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v12; // [rsp+30h] [rbp-18h]
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 136));
  v6 = 0LL;
  v13 = 0LL;
  if ( a2 )
  {
    v8 = ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::Lookup(
           (char *)this + 184,
           *((unsigned int *)a2 + 1),
           &v13);
    v6 = v13;
    if ( v8 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 48LL))(v13, a3);
      v7 = 0;
      if ( v9 < 0 )
        v7 = v9;
    }
    else
    {
      v7 = -2147024809;
    }
  }
  else
  {
    v7 = -2147467261;
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  return v7;
}
