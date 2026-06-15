/*
 * XREFs of ?privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PEAPEAUIAudioEndpoint@@@Z @ 0x140004F54
 * Callers:
 *     ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x1400086E0 (-CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUS.c)
 * Callees:
 *     ??0?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140005018 (--0-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x14000ADF0 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14000AE7C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14004F498 (--0-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14004F540 (--0-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14004F5E8 (--0-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall privateCreateCrossProcessEndpoint(_QWORD *a1, _OWORD *a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  void *v8; // rdx
  void *v9; // rax
  _OWORD *v10; // rdi
  __int64 v12; // rax
  void *v13; // rax
  void *v14; // rax
  __int64 v15; // rax
  void *v16; // rax
  void *v17; // rax
  __int64 v18; // rax
  void *v19; // rax
  void *v20; // rax

  v6 = *(_QWORD *)&GUID_9dba709c_b3e1_4013_95b7_5ed33a2e8561.Data1 - *a1;
  if ( *(_QWORD *)&GUID_9dba709c_b3e1_4013_95b7_5ed33a2e8561.Data1 == *a1 )
    v6 = *(_QWORD *)GUID_9dba709c_b3e1_4013_95b7_5ed33a2e8561.Data4 - a1[1];
  v7 = 0;
  if ( v6 )
  {
    v12 = *(_QWORD *)&GUID_5bfd515e_4aba_4483_a1c5_6651b7110ab6.Data1 - *a1;
    if ( *(_QWORD *)&GUID_5bfd515e_4aba_4483_a1c5_6651b7110ab6.Data1 == *a1 )
      v12 = *(_QWORD *)GUID_5bfd515e_4aba_4483_a1c5_6651b7110ab6.Data4 - a1[1];
    if ( v12 )
    {
      v15 = *(_QWORD *)&GUID_f64a6da6_e8af_4b7b_bca8_847ae765d538.Data1 - *a1;
      if ( *(_QWORD *)&GUID_f64a6da6_e8af_4b7b_bca8_847ae765d538.Data1 == *a1 )
        v15 = *(_QWORD *)GUID_f64a6da6_e8af_4b7b_bca8_847ae765d538.Data4 - a1[1];
      if ( v15 )
      {
        v18 = *(_QWORD *)&GUID_cd773740_b187_4974_a1d5_e0ff91372277.Data1 - *a1;
        if ( *(_QWORD *)&GUID_cd773740_b187_4974_a1d5_e0ff91372277.Data1 == *a1 )
          v18 = *(_QWORD *)GUID_cd773740_b187_4974_a1d5_e0ff91372277.Data4 - a1[1];
        if ( v18 )
          return (unsigned int)-2147024846;
        v19 = AERTGetDLLRTHeap();
        v20 = AERTAllocate(0x228uLL, v19);
        if ( v20 )
          v10 = (_OWORD *)ATL::CComObject<CCrossProcessClientOutputEndpoint>::CComObject<CCrossProcessClientOutputEndpoint>(v20);
        else
          v10 = 0LL;
      }
      else
      {
        v16 = AERTGetDLLRTHeap();
        v17 = AERTAllocate(0x220uLL, v16);
        if ( v17 )
          v10 = (_OWORD *)ATL::CComObject<CCrossProcessClientInputEndpoint>::CComObject<CCrossProcessClientInputEndpoint>(v17);
        else
          v10 = 0LL;
      }
    }
    else
    {
      v13 = AERTGetDLLRTHeap();
      v14 = AERTAllocate(0x250uLL, v13);
      if ( v14 )
        v10 = (_OWORD *)ATL::CComObject<CCrossProcessServerOutputEndpoint>::CComObject<CCrossProcessServerOutputEndpoint>(v14);
      else
        v10 = 0LL;
    }
  }
  else
  {
    v8 = AERTGetDLLRTHeap();
    v9 = AERTAllocate(0x2C0uLL, v8);
    if ( v9 )
      v10 = (_OWORD *)ATL::CComObject<CCrossProcessServerInputEndpoint>::CComObject<CCrossProcessServerInputEndpoint>(v9);
    else
      v10 = 0LL;
  }
  if ( v10 )
  {
    (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v10 + 8LL))(v10);
    v10[13] = *a2;
    *a4 = (char *)v10 + 8;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v7;
}
