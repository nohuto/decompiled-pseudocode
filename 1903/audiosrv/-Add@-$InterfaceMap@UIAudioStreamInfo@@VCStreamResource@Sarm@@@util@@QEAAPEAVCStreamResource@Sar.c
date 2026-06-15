/*
 * XREFs of ?Add@?$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAAPEAVCStreamResource@Sarm@@PEAUIAudioStreamInfo@@PEAPEAU__POSITION@@@Z @ 0x18011F6F0
 * Callers:
 *     ?AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x18011FA28 (-AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAXPEAUISaDeviceProxy@@@Z @ 0x18011FB30 (-Attach@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAXPEAUISaDeviceProxy@@@Z.c)
 *     ?GetKey@?$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@AEAAPEAUIAudioStreamInfo@@PEAU3@@Z @ 0x1801201D0 (-GetKey@-$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@AEAAPEAUIAudioStreamInfo.c)
 *     ?GetNode@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@AEBAPEAVCNode@12@AEBQEAUIAudioStreamInfo@@AEAI1AEAPEAV312@@Z @ 0x1801203F0 (-GetNode@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAudioStre.c)
 *     ?SetAt@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIAudioStreamInfo@@AEBVCStreamResource@Sarm@@@Z @ 0x1801220B8 (-SetAt@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAudioStream.c)
 *     ?Reclaim@CStreamResource@Sarm@@QEAAXXZ @ 0x180124C6C (-Reclaim@CStreamResource@Sarm@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall util::InterfaceMap<IAudioStreamInfo,Sarm::CStreamResource>::Add(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v3; // r14
  __int64 v5; // rsi
  __int64 Key; // rax
  __int64 v7; // rbx
  __int64 v9; // rax
  __int64 result; // rax
  ATL::CAtlException *v11; // rbx
  __int64 v12; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v13; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v15; // [rsp+50h] [rbp-98h] BYREF
  __int64 v16; // [rsp+60h] [rbp-88h]
  __int64 v17; // [rsp+68h] [rbp-80h]
  __int128 v18; // [rsp+70h] [rbp-78h]
  __int64 v19; // [rsp+80h] [rbp-68h]
  __int64 v20; // [rsp+88h] [rbp-60h]
  __int64 v21; // [rsp+90h] [rbp-58h]
  __int64 v22; // [rsp+98h] [rbp-50h]
  __int64 v23; // [rsp+A0h] [rbp-48h]
  char v24; // [rsp+A8h] [rbp-40h]
  __int64 v25; // [rsp+B0h] [rbp-38h]
  char v26[8]; // [rsp+B8h] [rbp-30h] BYREF
  ATL::CAtlException *v27; // [rsp+C0h] [rbp-28h] BYREF
  __int64 v29; // [rsp+108h] [rbp+20h] BYREF

  v25 = -2LL;
  v3 = a3;
  v5 = 0LL;
  v12 = 0LL;
  Key = util::InterfaceMap<IAudioStreamInfo,Sarm::CStreamResource>::GetKey();
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::Attach(&v12, Key);
  v7 = v12;
  if ( !v12 )
    goto LABEL_11;
  v14 = v12;
  if ( ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::GetNode(
         a1,
         (unsigned int)&v14,
         (unsigned int)&v13,
         (unsigned int)&v29,
         (__int64)v26) )
  {
    goto LABEL_11;
  }
  try
  {
    v15 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    v23 = 0LL;
    v24 = 0;
    v13 = 0LL;
    v29 = v7;
    v9 = ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::SetAt(
           a1,
           &v29,
           &v15);
    v13 = v9;
  }
  catch ( ATL::CAtlException *v27 )
  {
    v11 = v27;
    if ( *(_DWORD *)v27 == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v29) = *(_DWORD *)v11;
    v7 = v12;
    if ( (int)v29 >= 0 )
    {
      v3 = a3;
      v9 = v13;
      goto LABEL_6;
    }
    v5 = 0LL;
LABEL_9:
    Sarm::CStreamResource::Reclaim((Sarm::CStreamResource *)&v15);
    if ( (_QWORD)v15 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15 + 16LL))(v15);
LABEL_11:
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    result = v5;
  }
LABEL_6:
  v5 = v9 + 8;
  if ( v3 )
    *v3 = v9;
  goto LABEL_9;
}
