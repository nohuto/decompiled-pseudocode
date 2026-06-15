/*
 * XREFs of ?SetAt@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAPEAU__POSITION@@AEBQEAUISaDeviceProxy@@AEBVCEndpointResourcePool@Sarm@@@Z @ 0x180122178
 * Callers:
 *     ?Add@?$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@QEAAPEAVCEndpointResourcePool@Sarm@@PEAUISaDeviceProxy@@PEAPEAU__POSITION@@@Z @ 0x18011F8C4 (-Add@-$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@QEAAPEAVCEndpointResour.c)
 * Callees:
 *     ??4?$shared_ptr@UPool@CEndpointResourcePool@Sarm@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18011F4F8 (--4-$shared_ptr@UPool@CEndpointResourcePool@Sarm@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?CreateNode@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@AEAAPEAVCNode@12@AEBQEAUISaDeviceProxy@@II@Z @ 0x18011FC50 (-CreateNode@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUISa.c)
 *     ?GetNode@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@AEBAPEAVCNode@12@AEBQEAUISaDeviceProxy@@AEAI1AEAPEAV312@@Z @ 0x18012046C (-GetNode@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUISaDev.c)
 */

__int64 __fastcall ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::SetAt(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  __int64 Node; // rax
  __int64 v7; // rbx
  unsigned int v9; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+38h] [rbp-30h]
  _QWORD v11[5]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+88h] [rbp+20h] BYREF

  v10 = -2LL;
  Node = ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::GetNode(
           a1,
           a2,
           (int *)&v9,
           (unsigned int *)&v12,
           v11);
  v7 = Node;
  if ( Node )
  {
    *(_QWORD *)(Node + 8) = *(_QWORD *)a3;
    *(_BYTE *)(Node + 16) = *(_BYTE *)(a3 + 8);
  }
  else
  {
    v7 = ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::CreateNode(
           a1,
           (__int64)a2,
           v9,
           v12);
    v12 = v7;
    *(_QWORD *)(v7 + 8) = *(_QWORD *)a3;
    *(_BYTE *)(v7 + 16) = *(_BYTE *)(a3 + 8);
  }
  *(_DWORD *)(v7 + 20) = *(_DWORD *)(a3 + 12);
  std::shared_ptr<Sarm::CEndpointResourcePool::Pool>::operator=((_QWORD *)(v7 + 24), (_QWORD *)(a3 + 16));
  return v7;
}
