/*
 * XREFs of ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@QEAY07_NPEAV?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@@Z @ 0x18011FAC0
 * Callers:
 *     ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@QEAY07_NPEAV?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@@Z @ 0x18011FAC0 (-VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NKW4__MIDL___MIDL_i.c)
 *     ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY07_N@Z @ 0x18011FC44 (-VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY07_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x1800B0B7C (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     ?RemoveHead@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAPEAUSampleDataBlock@CMonitor@@XZ @ 0x1801033F0 (-RemoveHead@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMoni.c)
 *     ?AddHead@?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIPolicyRule@@@Z @ 0x18011D6D4 (-AddHead@-$CAtlList@PEAUIPolicyRule@@V-$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAPEAU__PO.c)
 *     ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@QEAY07_NPEAV?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@@Z @ 0x18011FAC0 (-VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NKW4__MIDL___MIDL_i.c)
 */

char __fastcall DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 *a6)
{
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rbx
  int v12; // r15d
  _QWORD *i; // rax
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // rbx
  _QWORD *v18; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+38h] [rbp-30h] BYREF
  int v20; // [rsp+70h] [rbp+8h]

  v20 = a1;
  if ( a4 > 7 || a3 > 1 )
    return 0;
  v8 = 8LL * (int)a3;
  v9 = v8 + (int)a4;
  v10 = *(_QWORD *)(48 * v9 + a1 + 56);
  v18 = (_QWORD *)v10;
  if ( v10 )
  {
    do
    {
      v19 = *ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext(v10, &v18);
      v11 = v19;
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v11 + 56LL))(v11) - 2 <= 1 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 64LL))(v11);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v11 + 104LL))(v11) && (!v12 || a2 == v12) )
        {
          for ( i = (_QWORD *)*a6; i && i[2] != v11; i = (_QWORD *)*i )
            ;
          if ( i )
            return 0;
          v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 120LL))(v11);
          v16 = v14;
          v10 = (unsigned int)(v14 - 1);
          if ( (unsigned int)v10 <= 6 )
          {
            ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::AddHead(a6, (__int64)&v19, v15);
            if ( !(unsigned __int8)DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies(
                                     v20,
                                     a2,
                                     a3,
                                     v16,
                                     a5,
                                     (__int64)a6) )
              return 0;
            ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::RemoveHead(a6);
            v10 = v8 + v16;
            if ( *(_BYTE *)(v8 + v16 + a5) )
              *(_BYTE *)(v9 + a5) = 1;
          }
        }
      }
    }
    while ( v18 );
  }
  return 1;
}
