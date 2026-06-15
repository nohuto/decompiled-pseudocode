/*
 * XREFs of ??1CSubmixImpl@@QEAA@XZ @ 0x1400102E0
 * Callers:
 *     ??1?$CComObject@VCStreamGroup@@@ATL@@UEAA@XZ @ 0x140013258 (--1-$CComObject@VCStreamGroup@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCProcessSubmix@@@ATL@@UEAA@XZ @ 0x1400132EC (--1-$CComObject@VCProcessSubmix@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComAggObject@VCStreamGroup@@@ATL@@UEAA@XZ @ 0x140031674 (--1-$CComAggObject@VCStreamGroup@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCStreamGroup@@@ATL@@QEAA@XZ @ 0x1400316DC (--1-$CComContainedObject@VCStreamGroup@@@ATL@@QEAA@XZ.c)
 *     ??1?$CComAggObject@VCProcessSubmix@@@ATL@@UEAA@XZ @ 0x1400420B4 (--1-$CComAggObject@VCProcessSubmix@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCProcessSubmix@@@ATL@@QEAA@XZ @ 0x14004211C (--1-$CComContainedObject@VCProcessSubmix@@@ATL@@QEAA@XZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140009730 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x14000BC60 (-Cleanup@CPipeInstance@@AEAAXXZ.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000D050 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x14000D280 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x14000EEC0 (-RemoveAll@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXX.c)
 *     ?RemoveAll@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x1400100C4 (-RemoveAll@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@.c)
 *     ?DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z @ 0x140010200 (-DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x1400105D0 (-RemoveAll@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QE.c)
 *     ?RemoveAt@?$CAtlList@PEAVCSubmixImpl@@V?$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140010750 (-RemoveAt@-$CAtlList@PEAVCSubmixImpl@@V-$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@QEAAXPEAU__.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001B8FC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x1400318CC (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031A04 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x140031D0C (-FreeNode@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@AEA.c)
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x140034BB0 (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 *     ?RemoveHead@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAPEAVCStreamInstance@@XZ @ 0x14003520C (-RemoveHead@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@Q.c)
 *     ?GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z @ 0x140042974 (-GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z.c)
 *     ?GetNode@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@AEBAPEAVCNode@12@_KAEAI1AEAPEAV312@@Z @ 0x1400429D8 (-GetNode@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V-$.c)
 *     ?RemoveNode@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@AEAAXPEAVCNode@12@0@Z @ 0x140042E3C (-RemoveNode@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSubmixImpl::~CSubmixImpl(CSubmixImpl *this)
{
  void (__fastcall ***v2)(struct ISubmix *, GUID *, __int64 *); // rdx
  __int64 v3; // rdx
  unsigned int v4; // edx
  __int64 v5; // rcx
  void *v6; // rcx
  CPipeInstance *v7; // rcx
  __int64 v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  void *v16; // rcx
  unsigned int v17; // edx
  CStreamInstance *v18; // rbp
  __int64 v19; // rdi
  struct _RTL_CRITICAL_SECTION *v20; // rsi
  __int64 Node; // rax
  __int64 *v22; // rdx
  void *v23; // rsi
  __int64 v24; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-50h] BYREF
  char v26; // [rsp+40h] [rbp-48h]
  char v27; // [rsp+90h] [rbp+8h] BYREF
  char v28; // [rsp+98h] [rbp+10h] BYREF
  LPCRITICAL_SECTION v29; // [rsp+A0h] [rbp+18h] BYREF

  *(_QWORD *)this = &CSubmixImpl::`vftable';
  v2 = (void (__fastcall ***)(struct ISubmix *, GUID *, __int64 *))*((_QWORD *)this + 38);
  if ( v2 )
    CSubmixImpl::DisconnectFromRightSubmix(this, v2);
  while ( *((_QWORD *)this + 11) )
  {
    v18 = (CStreamInstance *)ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveHead((char *)this + 72);
    if ( *((_QWORD *)v18 + 12) )
    {
      v29 = 0LL;
      if ( GetHistoryBufferManager((struct CAudioHistoryBufferManager **)&v29) >= 0 )
      {
        v19 = *((_QWORD *)v18 + 12);
        v20 = v29;
        EnterCriticalSection(v29);
        v29 = 0LL;
        Node = ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::GetNode(
                 (int)v20 + 40,
                 v19,
                 (unsigned int)&v28,
                 (unsigned int)&v27,
                 (__int64)&v29);
        if ( Node )
          ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::RemoveNode(
            &v20[1],
            Node,
            v29);
        if ( v20 )
          LeaveCriticalSection(v20);
      }
    }
    CStreamInstance::`scalar deleting destructor'(v18, v17);
  }
  while ( *((_QWORD *)this + 17) )
  {
    v22 = (__int64 *)*((_QWORD *)this + 15);
    if ( !v22 )
      ATL::AtlThrowImpl(-2147467259);
    v23 = (void *)v22[2];
    v24 = *v22;
    *((_QWORD *)this + 15) = *v22;
    if ( v24 )
      *(_QWORD *)(v24 + 8) = 0LL;
    else
      *((_QWORD *)this + 16) = 0LL;
    ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::FreeNode((char *)this + 120);
    operator delete(v23);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)&g_CritSecSubmixList;
  v26 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v3 = SubmixList;
  if ( SubmixList )
  {
    while ( *(CSubmixImpl **)(v3 + 16) != this )
    {
      v3 = *(_QWORD *)v3;
      if ( !v3 )
        goto LABEL_8;
    }
    ATL::CAtlList<CSubmixImpl *,ATL::CElementTraits<CSubmixImpl *>>::RemoveAt();
  }
LABEL_8:
  if ( v26 )
    LeaveCriticalSection(lpCriticalSection);
  PublishDeviceGraphWnfState();
  v5 = *((_QWORD *)this + 38);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = (void *)*((_QWORD *)this + 35);
  if ( v6 )
    CoTaskMemFree(v6);
  v7 = (CPipeInstance *)*((_QWORD *)this + 34);
  if ( v7 )
    CPipeInstance::`scalar deleting destructor'(v7, v4);
  *((_QWORD *)this + 34) = 0LL;
  v8 = *((_QWORD *)this + 33);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = (void *)*((_QWORD *)this + 28);
  if ( v9 )
    CoTaskMemFree(v9);
  v10 = (void *)*((_QWORD *)this + 27);
  if ( v10 )
    CoTaskMemFree(v10);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveAll((char *)this + 120);
  ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveAll((char *)this + 72);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v11 = *((_QWORD *)this + 3);
  if ( v11 )
  {
    CPipeInstance::Cleanup(*((CPipeInstance **)this + 3));
    ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::RemoveAll(v11 + 240);
    v12 = *(_QWORD *)(v11 + 232);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    CoTaskMemFree(*(LPVOID *)(v11 + 184));
    *(_QWORD *)(v11 + 184) = 0LL;
    v13 = *(_QWORD *)(v11 + 176);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v14 = *(_QWORD *)(v11 + 168);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    v15 = *(_QWORD *)(v11 + 144);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll(v11 + 64);
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll(v11 + 16);
    operator delete((void *)v11);
  }
  *((_QWORD *)this + 3) = 0LL;
  v16 = (void *)*((_QWORD *)this + 1);
  if ( v16 )
    CoTaskMemFree(v16);
}
