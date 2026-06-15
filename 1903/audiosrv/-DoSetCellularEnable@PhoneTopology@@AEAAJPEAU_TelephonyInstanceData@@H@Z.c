/*
 * XREFs of ?DoSetCellularEnable@PhoneTopology@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x180147828
 * Callers:
 *     ?Process@CallEnableWorkItem@@UEAAXPEAVPhoneTopology@@@Z @ 0x180148CF0 (-Process@CallEnableWorkItem@@UEAAXPEAVPhoneTopology@@@Z.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x1800522DC (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?Lookup@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@QEBA_NIAEAV?$CComPtr@UITelephonyControllerCallInstance@@@2@@Z @ 0x180148B78 (-Lookup@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CElementTraits@I@2@V-$.c)
 *     ?RemoveKey@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@QEAA_NI@Z @ 0x180148EA8 (-RemoveKey@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CElementTraits@I@2@.c)
 *     ?SetAt@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@QEAAPEAU__POSITION@@IAEBV?$CComPtr@UITelephonyControllerCallInstance@@@2@@Z @ 0x18014910C (-SetAt@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CElementTraits@I@2@V-$C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PhoneTopology::DoSetCellularEnable(PhoneTopology *this, struct _TelephonyInstanceData *a2, int a3)
{
  unsigned int v5; // ebx
  struct _RTL_CRITICAL_SECTION *v6; // r15
  int v7; // r14d
  int v8; // eax
  int v9; // eax
  int v10; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-18h] BYREF
  char v13; // [rsp+30h] [rbp-10h]
  _QWORD *v14; // [rsp+78h] [rbp+38h] BYREF

  v5 = 0;
  v14 = 0LL;
  if ( !a2 )
  {
    v5 = -2147467261;
    goto LABEL_19;
  }
  if ( !a3 )
  {
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&lpCriticalSection,
      (struct _RTL_CRITICAL_SECTION *)((char *)this + 136));
    if ( (unsigned __int8)ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::Lookup(
                            (char *)this + 184,
                            *((unsigned int *)a2 + 1),
                            &v14) )
    {
      ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::RemoveKey(
        (char *)this + 184,
        *((unsigned int *)a2 + 1));
      v10 = (*(__int64 (__fastcall **)(_QWORD *, struct _TelephonyInstanceData *))(*v14 + 64LL))(v14, a2);
      if ( v10 < 0 )
        v5 = v10;
    }
LABEL_17:
    if ( v13 )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_19;
  }
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 136);
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 136));
  v7 = (unsigned __int8)ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::Lookup(
                          (char *)this + 184,
                          *((unsigned int *)a2 + 1),
                          &v14);
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  if ( !v7 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, struct _TelephonyInstanceData *, _QWORD **))(**((_QWORD **)this + 3) + 24LL))(
           *((_QWORD *)this + 3),
           a2,
           &v14);
    if ( v8 < 0 )
    {
      v5 = v8;
      goto LABEL_19;
    }
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&lpCriticalSection,
      v6);
    v9 = (*(__int64 (__fastcall **)(_QWORD *, struct _TelephonyInstanceData *))(*v14 + 72LL))(v14, a2);
    if ( v9 < 0
      || (ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::SetAt(
            (char *)this + 184,
            *((unsigned int *)a2 + 1),
            &v14),
          v9 = (*(__int64 (__fastcall **)(PhoneTopology *))(*(_QWORD *)this + 32LL))(this),
          v9 < 0) )
    {
      v5 = v9;
    }
    goto LABEL_17;
  }
LABEL_19:
  if ( v14 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v14 + 16LL))(v14, *v14);
  return v5;
}
