/*
 * XREFs of ??0TelephonyController@@IEAA@XZ @ 0x1801498A0
 * Callers:
 *     ?CreateInstance@TelephonyController@@SAJPEAPEAUITelephonyController@@@Z @ 0x180149CBC (-CreateInstance@TelephonyController@@SAJPEAPEAUITelephonyController@@@Z.c)
 * Callees:
 *     ??0?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@QEAA@IMMMI@Z @ 0x180053D0C (--0-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VRe.c)
 */

TelephonyController *__fastcall TelephonyController::TelephonyController(TelephonyController *this, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // r10

  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &TelephonyController::`vftable'{for `ITelephonyController'};
  *((_QWORD *)this + 1) = &TelephonyController::`vftable'{for `CUnknown'};
  *((_DWORD *)this + 16) = 10;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 10;
  ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>(
    (__int64)this + 120,
    a2,
    0.75,
    0.25,
    SLODWORD(FLOAT_2_25));
  *(_QWORD *)(v2 + 192) = v3;
  *(_DWORD *)(v2 + 216) = v3;
  *(_QWORD *)(v2 + 200) = 0LL;
  *(_QWORD *)(v2 + 208) = 0LL;
  return (TelephonyController *)v2;
}
