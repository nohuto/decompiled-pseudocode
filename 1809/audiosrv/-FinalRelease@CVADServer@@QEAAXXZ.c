/*
 * XREFs of ?FinalRelease@CVADServer@@QEAAXXZ @ 0x180044BF0
 * Callers:
 *     ??_E?$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z @ 0x180044A50 (--_E-$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ @ 0x180002DB0 (-RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ @ 0x180013BBC (-RemoveAll@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004E2A0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x180063980 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800B3E78 (WPP_SF_.c)
 *     WPP_SF_q @ 0x1800B5888 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1800C3C58 (WPP_SF_qq.c)
 */

void __fastcall CVADServer::FinalRelease(CServerAudioSessionControl **this, __int64 a2, __int64 a3)
{
  std::_Ref_count_base *v4; // rcx
  CServerAudioSessionControl *v5; // rcx
  CServerAudioSessionControl *v6; // r9
  CServerAudioSessionControl *v7; // rdx
  CServerAudioSessionControl *v8; // rcx
  CAudioSessionManager *v9; // rcx
  CServerAudioSessionControl *v10; // rdx
  CServerAudioSessionControl *v11; // r10
  __int64 v12; // r10
  __int64 v13; // rcx
  bool v14; // zf
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v16; // [rsp+38h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_8f522ea4bf9e3fa5b38ae1f25d9817c8_Traceguids, this);
  }
  this[53] = 0LL;
  v4 = this[54];
  this[54] = 0LL;
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  v5 = this[20];
  if ( v5 )
    CServerAudioSessionControl::RemoveClientReference(v5);
  v6 = this[24];
  if ( v6 )
  {
    v7 = this[24];
    v8 = v7;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        13LL,
        &WPP_8f522ea4bf9e3fa5b38ae1f25d9817c8_Traceguids,
        v6,
        *((_QWORD *)v6 + 6));
      v7 = this[24];
      v8 = v7;
    }
    if ( *((_QWORD *)v7 + 6) )
    {
      if ( *((_BYTE *)this + 188) )
      {
        (*(void (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)this[21] + 304LL))(this[21]);
        v7 = this[24];
      }
      LOBYTE(a3) = 1;
      (*(void (__fastcall **)(CServerAudioSessionControl *, CServerAudioSessionControl *, __int64))(*(_QWORD *)this[21]
                                                                                                  + 312LL))(
        this[21],
        v7,
        a3);
      v8 = this[24];
    }
    (*(void (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)v8 + 64LL))(v8);
    this[24] = 0LL;
  }
  v9 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_8f522ea4bf9e3fa5b38ae1f25d9817c8_Traceguids, this[21]);
    v9 = WPP_GLOBAL_Control;
  }
  v10 = this[21];
  if ( v10 )
  {
    (*(void (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)v10 + 16LL))(this[21]);
    this[21] = 0LL;
    v9 = WPP_GLOBAL_Control;
  }
  if ( v9 != (CAudioSessionManager *)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)v9 + 7) & 0x100) != 0 && *((_BYTE *)v9 + 25) >= 5u )
    {
      WPP_SF_(*((_QWORD *)v9 + 2), 15LL, &WPP_8f522ea4bf9e3fa5b38ae1f25d9817c8_Traceguids);
      v9 = WPP_GLOBAL_Control;
    }
    if ( v9 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v9 + 7) & 0x100) != 0
      && *((_BYTE *)v9 + 25) >= 5u )
    {
      WPP_SF_q(*((_QWORD *)v9 + 2), 16LL, &WPP_8f522ea4bf9e3fa5b38ae1f25d9817c8_Traceguids, this[19]);
      v9 = WPP_GLOBAL_Control;
    }
  }
  v11 = this[19];
  if ( v11 )
  {
    if ( !ATL::SafeDecrementReferenceMultiThread((int *)v11 + 3) )
    {
      if ( v12 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 104LL))(v12, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    this[19] = 0LL;
    v9 = WPP_GLOBAL_Control;
  }
  if ( v9 != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)v9 + 7) & 0x100) != 0
    && *((_BYTE *)v9 + 25) >= 5u )
  {
    WPP_SF_(*((_QWORD *)v9 + 2), 17LL, &WPP_8f522ea4bf9e3fa5b38ae1f25d9817c8_Traceguids);
  }
  v16 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)&g_csVadList;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v13 = g_VADServerList;
  if ( g_VADServerList )
  {
    while ( *(CServerAudioSessionControl ***)(v13 + 16) != this )
    {
      v13 = *(_QWORD *)v13;
      if ( !v13 )
        goto LABEL_56;
    }
    if ( v13 == g_VADServerList )
      g_VADServerList = *(_QWORD *)v13;
    else
      **(_QWORD **)(v13 + 8) = *(_QWORD *)v13;
    if ( v13 == qword_1801B2798 )
      qword_1801B2798 = *(_QWORD *)(v13 + 8);
    else
      *(_QWORD *)(*(_QWORD *)v13 + 8LL) = *(_QWORD *)(v13 + 8);
    *(_QWORD *)v13 = qword_1801B27B0;
    v14 = qword_1801B27A0-- == 1;
    qword_1801B27B0 = v13;
    if ( v14 )
      ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAll((__int64)&g_VADServerList);
  }
LABEL_56:
  if ( v16 )
    LeaveCriticalSection(lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_8f522ea4bf9e3fa5b38ae1f25d9817c8_Traceguids, this);
  }
}
