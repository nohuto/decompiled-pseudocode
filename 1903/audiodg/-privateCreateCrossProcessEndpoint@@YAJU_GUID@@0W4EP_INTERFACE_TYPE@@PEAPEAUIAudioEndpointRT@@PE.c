/*
 * XREFs of ?privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PEAPEAUIAudioEndpoint@@@Z @ 0x14000F268
 * Callers:
 *     ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x14000F97C (-CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUS.c)
 * Callees:
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140008C70 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140008CEC (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ??0?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14000F1F4 (--0-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14004CF10 (--0-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14004CFB8 (--0-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14004D060 (--0-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall privateCreateCrossProcessEndpoint(_QWORD *a1, _OWORD *a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  void *v8; // rdx
  __int64 v9; // r8
  CCrossProcessServerInputEndpoint *v10; // rax
  CCrossProcessServerInputEndpoint *v11; // rdi
  __int64 v13; // rax
  void *v14; // rax
  __int64 v15; // r8
  void *v16; // rax
  __int64 v17; // rax
  void *v18; // rax
  __int64 v19; // r8
  void *v20; // rax
  __int64 v21; // rax
  void *v22; // rax
  __int64 v23; // r8
  void *v24; // rax

  v6 = *(_QWORD *)&GUID_9dba709c_b3e1_4013_95b7_5ed33a2e8561.Data1 - *a1;
  if ( *(_QWORD *)&GUID_9dba709c_b3e1_4013_95b7_5ed33a2e8561.Data1 == *a1 )
    v6 = *(_QWORD *)GUID_9dba709c_b3e1_4013_95b7_5ed33a2e8561.Data4 - a1[1];
  v7 = 0;
  if ( v6 )
  {
    v13 = *(_QWORD *)&GUID_5bfd515e_4aba_4483_a1c5_6651b7110ab6.Data1 - *a1;
    if ( *(_QWORD *)&GUID_5bfd515e_4aba_4483_a1c5_6651b7110ab6.Data1 == *a1 )
      v13 = *(_QWORD *)GUID_5bfd515e_4aba_4483_a1c5_6651b7110ab6.Data4 - a1[1];
    if ( v13 )
    {
      v17 = *(_QWORD *)&GUID_f64a6da6_e8af_4b7b_bca8_847ae765d538.Data1 - *a1;
      if ( *(_QWORD *)&GUID_f64a6da6_e8af_4b7b_bca8_847ae765d538.Data1 == *a1 )
        v17 = *(_QWORD *)GUID_f64a6da6_e8af_4b7b_bca8_847ae765d538.Data4 - a1[1];
      if ( v17 )
      {
        v21 = *(_QWORD *)&GUID_cd773740_b187_4974_a1d5_e0ff91372277.Data1 - *a1;
        if ( *(_QWORD *)&GUID_cd773740_b187_4974_a1d5_e0ff91372277.Data1 == *a1 )
          v21 = *(_QWORD *)GUID_cd773740_b187_4974_a1d5_e0ff91372277.Data4 - a1[1];
        if ( v21 )
          return (unsigned int)-2147024846;
        v22 = (void *)AERTGetDLLRTHeap();
        v24 = AERTAllocate((_QWORD *)0x228, v22, v23);
        if ( v24 )
          v11 = (CCrossProcessServerInputEndpoint *)ATL::CComObject<CCrossProcessClientOutputEndpoint>::CComObject<CCrossProcessClientOutputEndpoint>(v24);
        else
          v11 = 0LL;
      }
      else
      {
        v18 = (void *)AERTGetDLLRTHeap();
        v20 = AERTAllocate((_QWORD *)0x220, v18, v19);
        if ( v20 )
          v11 = (CCrossProcessServerInputEndpoint *)ATL::CComObject<CCrossProcessClientInputEndpoint>::CComObject<CCrossProcessClientInputEndpoint>(v20);
        else
          v11 = 0LL;
      }
    }
    else
    {
      v14 = (void *)AERTGetDLLRTHeap();
      v16 = AERTAllocate((_QWORD *)0x250, v14, v15);
      if ( v16 )
        v11 = (CCrossProcessServerInputEndpoint *)ATL::CComObject<CCrossProcessServerOutputEndpoint>::CComObject<CCrossProcessServerOutputEndpoint>(v16);
      else
        v11 = 0LL;
    }
  }
  else
  {
    v8 = (void *)AERTGetDLLRTHeap();
    v10 = (CCrossProcessServerInputEndpoint *)AERTAllocate((_QWORD *)0x2C0, v8, v9);
    if ( v10 )
      v11 = ATL::CComObject<CCrossProcessServerInputEndpoint>::CComObject<CCrossProcessServerInputEndpoint>(v10);
    else
      v11 = 0LL;
  }
  if ( v11 )
  {
    (*(void (__fastcall **)(CCrossProcessServerInputEndpoint *))(*(_QWORD *)v11 + 8LL))(v11);
    *((_OWORD *)v11 + 13) = *a2;
    *a4 = (char *)v11 + 8;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v7;
}
