/*
 * XREFs of ??1CSubmixImpl@@QEAA@XZ @ 0x14003DAB8
 * Callers:
 *     ??1?$CComAggObject@VCStreamGroup@@@ATL@@UEAA@XZ @ 0x140029B74 (--1-$CComAggObject@VCStreamGroup@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCStreamGroup@@@ATL@@QEAA@XZ @ 0x140029BDC (--1-$CComContainedObject@VCStreamGroup@@@ATL@@QEAA@XZ.c)
 *     ??1?$CComObject@VCStreamGroup@@@ATL@@UEAA@XZ @ 0x140029C14 (--1-$CComObject@VCStreamGroup@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComAggObject@VCProcessSubmix@@@ATL@@UEAA@XZ @ 0x14003EFB8 (--1-$CComAggObject@VCProcessSubmix@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComContainedObject@VCProcessSubmix@@@ATL@@QEAA@XZ @ 0x14003F020 (--1-$CComContainedObject@VCProcessSubmix@@@ATL@@QEAA@XZ.c)
 *     ??1?$CComObject@VCProcessSubmix@@@ATL@@UEAA@XZ @ 0x14003F058 (--1-$CComObject@VCProcessSubmix@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140001D58 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400046B4 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000BCC4 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x14000DE44 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015744 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14002A524 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x14002A888 (-FreeNode@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@AEAAXPE.c)
 *     ?RemoveAll@?$CAtlList@PEAVCVirtualProtectedOutput@@V?$CElementTraits@PEAVCVirtualProtectedOutput@@@ATL@@@ATL@@QEAAXXZ @ 0x14002B3EC (-RemoveAll@-$CAtlList@PEAVCVirtualProtectedOutput@@V-$CElementTraits@PEAVCVirtualProtectedOutput.c)
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x14002ED0C (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 *     ?RemoveHead@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAPEAVCStreamInstance@@XZ @ 0x14002F3BC (-RemoveHead@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@Q.c)
 *     ?DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z @ 0x14003E110 (-DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z.c)
 *     ?RemoveAt@?$CAtlList@PEAVCSubmixImpl@@V?$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14003EBB4 (-RemoveAt@-$CAtlList@PEAVCSubmixImpl@@V-$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@QEAAXPEAU__.c)
 *     ?GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z @ 0x14003F9F4 (-GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z.c)
 *     ?GetNode@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@AEBAPEAVCNode@12@_KAEAI1AEAPEAV312@@Z @ 0x14003FA58 (-GetNode@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V-$.c)
 *     ?RemoveNode@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@AEAAXPEAVCNode@12@0@Z @ 0x14003FEBC (-RemoveNode@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@.c)
 */

void __fastcall CSubmixImpl::~CSubmixImpl(CSubmixImpl *this)
{
  __int64 *v2; // r15
  struct ISubmix *v3; // rdx
  CStreamInstance *v4; // rsi
  __int64 v5; // rbx
  struct _RTL_CRITICAL_SECTION *v6; // r14
  __int64 Node; // rax
  __int64 **v8; // rbx
  __int64 *v9; // rdx
  void *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 i; // rdx
  unsigned int v14; // edx
  void *v15; // rcx
  __int64 v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  unsigned int v19; // edx
  void *v20; // rcx
  LPCRITICAL_SECTION v21; // [rsp+38h] [rbp-18h] BYREF
  char v22; // [rsp+40h] [rbp-10h]
  char v23; // [rsp+90h] [rbp+40h] BYREF
  char v24; // [rsp+98h] [rbp+48h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+A0h] [rbp+50h] BYREF

  *(_QWORD *)this = &CSubmixImpl::`vftable';
  v2 = (__int64 *)((char *)this + 304);
  v3 = (struct ISubmix *)*((_QWORD *)this + 38);
  if ( v3 )
    CSubmixImpl::DisconnectFromRightSubmix(this, v3);
  while ( *((_QWORD *)this + 11) )
  {
    v4 = (CStreamInstance *)ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveHead((__int64 *)this + 9);
    if ( *((_QWORD *)v4 + 12) )
    {
      lpCriticalSection = 0LL;
      if ( GetHistoryBufferManager((struct CAudioHistoryBufferManager **)&lpCriticalSection) >= 0 )
      {
        v5 = *((_QWORD *)v4 + 12);
        v6 = lpCriticalSection;
        EnterCriticalSection(lpCriticalSection);
        lpCriticalSection = 0LL;
        Node = ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::GetNode(
                 (int)v6 + 40,
                 v5,
                 (unsigned int)&v24,
                 (unsigned int)&v23,
                 (__int64)&lpCriticalSection);
        if ( Node )
          ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::RemoveNode(
            &v6[1],
            Node,
            lpCriticalSection);
        if ( v6 )
          LeaveCriticalSection(v6);
      }
    }
    CStreamInstance::`scalar deleting destructor'(v4);
  }
  if ( *((_QWORD *)this + 17) )
  {
    v8 = (__int64 **)((char *)this + 120);
    do
    {
      v9 = *v8;
      if ( !*v8 )
        ATL::AtlThrowImpl(-2147467259);
      v10 = (void *)v9[2];
      v11 = *v9;
      *v8 = (__int64 *)*v9;
      if ( v11 )
        *(_QWORD *)(v11 + 8) = 0LL;
      else
        *((_QWORD *)this + 16) = 0LL;
      ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::FreeNode((__int64)this + 120, v9);
      operator delete(v10);
    }
    while ( *((_QWORD *)this + 17) );
  }
  v21 = &g_CritSecSubmixList;
  v22 = 0;
  ATL::CCritSecLock::Lock(&v21);
  for ( i = SubmixList; i; i = *(_QWORD *)i )
  {
    if ( *(CSubmixImpl **)(i + 16) == this )
      goto LABEL_24;
  }
  i = 0LL;
LABEL_24:
  if ( i )
    ATL::CAtlList<CSubmixImpl *,ATL::CElementTraits<CSubmixImpl *>>::RemoveAt();
  if ( v22 )
    LeaveCriticalSection(v21);
  PublishDeviceGraphWnfState(v12, i);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(v2);
  v15 = (void *)*((_QWORD *)this + 35);
  *((_QWORD *)this + 35) = 0LL;
  if ( v15 )
    CoTaskMemFree(v15);
  ATL::CAutoPtr<CPipeInstance>::Free((CPipeInstance **)this + 34, v14);
  v16 = *((_QWORD *)this + 33);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  v17 = (void *)*((_QWORD *)this + 28);
  *((_QWORD *)this + 28) = 0LL;
  if ( v17 )
    CoTaskMemFree(v17);
  v18 = (void *)*((_QWORD *)this + 27);
  *((_QWORD *)this + 27) = 0LL;
  if ( v18 )
    CoTaskMemFree(v18);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::RemoveAll((__int64 *)this + 15);
  ATL::CAtlList<CVirtualProtectedOutput *,ATL::CElementTraits<CVirtualProtectedOutput *>>::RemoveAll((__int64 *)this + 9);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  ATL::CAutoPtr<CPipeInstance>::Free((CPipeInstance **)this + 3, v19);
  v20 = (void *)*((_QWORD *)this + 1);
  if ( v20 )
    CoTaskMemFree(v20);
}
