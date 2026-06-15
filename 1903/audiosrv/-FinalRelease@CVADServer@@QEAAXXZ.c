/*
 * XREFs of ?FinalRelease@CVADServer@@QEAAXXZ @ 0x180049C30
 * Callers:
 *     ??_E?$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z @ 0x180049AA0 (--_E-$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003EA64 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ @ 0x180049E1C (-RemoveAll@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ @ 0x18004DCB4 (-RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800C2620 (WPP_SF_.c)
 *     WPP_SF_q @ 0x1800C3F68 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1800D2488 (WPP_SF_qq.c)
 */

void __fastcall CVADServer::FinalRelease(CVADServer *this, __int64 a2, __int64 a3)
{
  std::_Ref_count_base *v4; // rcx
  CServerAudioSessionControl *v5; // rcx
  __int64 v6; // r9
  CAudioSessionManager *v7; // rcx
  __int64 v8; // rdx
  volatile signed __int32 *v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  bool v13; // zf
  __int64 v14; // rdx
  __int64 v15; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v17; // [rsp+38h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids, this);
  }
  *((_QWORD *)this + 57) = 0LL;
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 58);
  *((_QWORD *)this + 58) = 0LL;
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  v5 = (CServerAudioSessionControl *)*((_QWORD *)this + 20);
  if ( v5 )
    CServerAudioSessionControl::RemoveClientReference(v5);
  v6 = *((_QWORD *)this + 24);
  if ( v6 )
  {
    v14 = *((_QWORD *)this + 24);
    v15 = v14;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        13LL,
        &WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids,
        v6,
        *(_QWORD *)(v6 + 48));
      v14 = *((_QWORD *)this + 24);
      v15 = v14;
    }
    if ( *(_QWORD *)(v14 + 48) )
    {
      if ( *((_BYTE *)this + 188) )
      {
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 304LL))(*((_QWORD *)this + 21));
        v14 = *((_QWORD *)this + 24);
      }
      LOBYTE(a3) = 1;
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 21) + 312LL))(
        *((_QWORD *)this + 21),
        v14,
        a3);
      v15 = *((_QWORD *)this + 24);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 64LL))(v15);
    *((_QWORD *)this + 24) = 0LL;
  }
  v7 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      14LL,
      &WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids,
      *((_QWORD *)this + 21));
    v7 = WPP_GLOBAL_Control;
  }
  v8 = *((_QWORD *)this + 21);
  if ( v8 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 16LL))(*((_QWORD *)this + 21));
    *((_QWORD *)this + 21) = 0LL;
    v7 = WPP_GLOBAL_Control;
  }
  if ( v7 != (CAudioSessionManager *)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)v7 + 7) & 0x100) != 0 && *((_BYTE *)v7 + 25) >= 5u )
    {
      WPP_SF_(*((_QWORD *)v7 + 2), 15LL, &WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids);
      v7 = WPP_GLOBAL_Control;
    }
    if ( v7 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v7 + 7) & 0x100) != 0
      && *((_BYTE *)v7 + 25) >= 5u )
    {
      WPP_SF_q(*((_QWORD *)v7 + 2), 16LL, &WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids, *((_QWORD *)this + 19));
      v7 = WPP_GLOBAL_Control;
    }
  }
  v9 = (volatile signed __int32 *)*((_QWORD *)this + 19);
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v9 + 104LL))(v9, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    *((_QWORD *)this + 19) = 0LL;
    v7 = WPP_GLOBAL_Control;
  }
  if ( v7 != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)v7 + 7) & 0x100) != 0
    && *((_BYTE *)v7 + 25) >= 5u )
  {
    WPP_SF_(*((_QWORD *)v7 + 2), 17LL, &WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids);
  }
  v17 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)&g_csVadList;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v10 = g_VADServerList;
  if ( g_VADServerList )
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)v10;
      if ( *(CVADServer **)(v10 + 16) == this )
        break;
      v10 = *(_QWORD *)v10;
      if ( !v11 )
        goto LABEL_29;
    }
    if ( v10 == g_VADServerList )
      g_VADServerList = *(_QWORD *)v10;
    else
      **(_QWORD **)(v10 + 8) = v11;
    v12 = *(_QWORD *)(v10 + 8);
    if ( v10 == qword_1801B7808 )
      qword_1801B7808 = *(_QWORD *)(v10 + 8);
    else
      *(_QWORD *)(*(_QWORD *)v10 + 8LL) = v12;
    *(_QWORD *)v10 = qword_1801B7820;
    v13 = qword_1801B7810-- == 1;
    qword_1801B7820 = v10;
    if ( v13 )
      ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAll(&g_VADServerList, v12);
  }
LABEL_29:
  if ( v17 )
    LeaveCriticalSection(lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids, this);
  }
}
