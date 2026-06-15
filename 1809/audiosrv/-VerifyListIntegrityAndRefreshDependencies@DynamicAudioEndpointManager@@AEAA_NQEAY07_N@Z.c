/*
 * XREFs of ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY07_N@Z @ 0x18011FC44
 * Callers:
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z @ 0x18011D72C (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z.c)
 *     ?OnDeviceStateChanged@DynamicAudioEndpointManager@@QEAAXPEBGK@Z @ 0x18011E7DC (-OnDeviceStateChanged@DynamicAudioEndpointManager@@QEAAXPEBGK@Z.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_N@Z @ 0x18011EF1C (-RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_N@Z.c)
 *     ?SetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x18011F490 (-SetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_.c)
 *     ?UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_JPEAU_DynamicRoutingRule@@@Z @ 0x18011F5F8 (-UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_JPEAU_DynamicRoutingRule@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x1800B0B7C (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     ?RemoveAll@?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAXXZ @ 0x1800B46A4 (-RemoveAll@-$CAtlList@PEAUIPolicyRule@@V-$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?RemoveHead@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAPEAUSampleDataBlock@CMonitor@@XZ @ 0x1801033F0 (-RemoveHead@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMoni.c)
 *     ?AddHead@?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIPolicyRule@@@Z @ 0x18011D6D4 (-AddHead@-$CAtlList@PEAUIPolicyRule@@V-$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAPEAU__PO.c)
 *     ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@QEAY07_NPEAV?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@@Z @ 0x18011FAC0 (-VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NKW4__MIDL___MIDL_i.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies(
        DynamicAudioEndpointManager *this,
        bool (*const a2)[8])
{
  char v2; // di
  signed int v3; // r12d
  __int64 v4; // r14
  char *v5; // rax
  __int64 v6; // rsi
  _QWORD **v7; // r13
  __int64 v8; // r15
  int v9; // ebx
  __int64 v10; // r8
  unsigned int v11; // eax
  unsigned int v12; // eax
  _QWORD v14[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v15; // [rsp+40h] [rbp-38h] BYREF
  __int64 v16; // [rsp+50h] [rbp-28h]
  __int128 v17; // [rsp+58h] [rbp-20h]
  int v18; // [rsp+68h] [rbp-10h]
  _QWORD *v21; // [rsp+D0h] [rbp+58h] BYREF
  char *v22; // [rsp+D8h] [rbp+60h]

  v14[1] = -2LL;
  v15 = 0LL;
  v2 = 0;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 10;
  v3 = 0;
  v4 = 0LL;
  v5 = (char *)this + 56;
  v22 = (char *)this + 56;
  do
  {
    v6 = 0LL;
    v7 = (_QWORD **)v5;
    do
    {
      v21 = *v7;
      while ( v21 )
      {
        v8 = *ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext((__int64)this, &v21);
        v14[0] = v8;
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v8 + 56LL))(v8) - 2 <= 1 )
        {
          v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 64LL))(v8);
          ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::AddHead((__int64 *)&v15, (__int64)v14, v10);
          v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 120LL))(v8);
          if ( !DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies(
                  (__int64)this,
                  v9,
                  v3,
                  v11,
                  (__int64)a2,
                  (__int64 *)&v15) )
            goto LABEL_13;
          ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::RemoveHead((__int64 *)&v15);
          v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 120LL))(v8);
          if ( v12 > 7 )
            goto LABEL_13;
          if ( (*a2)[v4 + (int)v12] )
            (*a2)[v4 + v6] = 1;
        }
      }
      ++v6;
      v7 += 6;
    }
    while ( v6 < 8 );
    ++v3;
    v4 += 8LL;
    v5 = v22 + 384;
    v22 += 384;
  }
  while ( v3 < 2 );
  v2 = 1;
LABEL_13:
  ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::RemoveAll((__int64 *)&v15);
  return v2;
}
