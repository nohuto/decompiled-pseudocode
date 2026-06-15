/*
 * XREFs of ?FindRule@DynamicAudioEndpointManager@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4RuleType@@PEAV?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@@Z @ 0x18011E118
 * Callers:
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z @ 0x18011D72C (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z.c)
 *     ?FindRule@DynamicAudioEndpointManager@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4RuleType@@PEAV?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@@Z @ 0x18011E118 (-FindRule@DynamicAudioEndpointManager@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x1800B0B7C (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     ?AddHead@?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIPolicyRule@@@Z @ 0x18011D6D4 (-AddHead@-$CAtlList@PEAUIPolicyRule@@V-$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAPEAU__PO.c)
 *     ?FindRule@DynamicAudioEndpointManager@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4RuleType@@PEAV?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@@Z @ 0x18011E118 (-FindRule@DynamicAudioEndpointManager@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__.c)
 */

__int64 __fastcall DynamicAudioEndpointManager::FindRule(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        __int64 *a5)
{
  int v7; // ebp
  __int64 v8; // rdx
  int v10; // ebx
  int Rule; // eax
  unsigned int v12; // edi
  _QWORD *v13; // rcx
  __int64 v14; // r8
  _QWORD *v15; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v16[4]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v7 = a1;
  if ( a3 > 7 )
  {
    v8 = 838LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      v8,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( a2 > 2 )
  {
    v8 = 839LL;
    goto LABEL_3;
  }
  if ( a2 == 2 )
  {
    v10 = 0;
    while ( 1 )
    {
      Rule = DynamicAudioEndpointManager::FindRule(v7, v10, a3, a4, (_DWORD)a5);
      v12 = Rule;
      if ( Rule < 0 )
        break;
      if ( ++v10 >= 2 )
        return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      845LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)(unsigned int)Rule);
    return v12;
  }
  else
  {
    v13 = *(_QWORD **)(a1 + 48 * ((int)a3 + 8LL * (int)a2) + 56);
    v15 = v13;
    while ( v15 )
    {
      v16[0] = *ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext((__int64)v13, &v15);
      if ( a4 == (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v16[0] + 56LL))(v16[0]) )
        ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::AddHead(a5, (__int64)v16, v14);
    }
    return 0LL;
  }
}
