/*
 * XREFs of privateCreateSpatialCrossProcessEndpoint @ 0x140058F80
 * Callers:
 *     CreateSpatialCrossProcessEndpointRT @ 0x1400590BC (CreateSpatialCrossProcessEndpointRT.c)
 * Callees:
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140008C60 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140008CDC (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14005720C (--0-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x1400572BC (--0-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005ABC8 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall privateCreateSpatialCrossProcessEndpoint(_QWORD *a1, _OWORD *a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  void *v8; // rdx
  __int64 v9; // r8
  CSpatialCrossProcessServerInputEndpoint *v10; // rax
  CSpatialCrossProcessClientOutputEndpoint *v11; // rdi
  __int64 v12; // rax
  void *v13; // rdx
  __int64 v14; // r8
  CSpatialCrossProcessClientOutputEndpoint *v15; // rax

  v6 = *(_QWORD *)&GUID_6b78656b_c0e1_4190_83ee_ef91c2908926.Data1 - *a1;
  if ( *(_QWORD *)&GUID_6b78656b_c0e1_4190_83ee_ef91c2908926.Data1 == *a1 )
    v6 = *(_QWORD *)GUID_6b78656b_c0e1_4190_83ee_ef91c2908926.Data4 - a1[1];
  v7 = 0;
  if ( v6 )
  {
    v12 = *(_QWORD *)&GUID_9371e7ff_df2d_4962_9585_40424d054550.Data1 - *a1;
    if ( *(_QWORD *)&GUID_9371e7ff_df2d_4962_9585_40424d054550.Data1 == *a1 )
      v12 = *(_QWORD *)GUID_9371e7ff_df2d_4962_9585_40424d054550.Data4 - a1[1];
    if ( v12 )
    {
      v7 = -2147024846;
      goto LABEL_17;
    }
    v13 = (void *)AERTGetDLLRTHeap();
    v15 = (CSpatialCrossProcessClientOutputEndpoint *)AERTAllocate((_QWORD *)0x440, v13, v14);
    if ( v15 )
      v11 = ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::CComObject<CSpatialCrossProcessClientOutputEndpoint>(v15);
    else
      v11 = 0LL;
  }
  else
  {
    v8 = (void *)AERTGetDLLRTHeap();
    v10 = (CSpatialCrossProcessServerInputEndpoint *)AERTAllocate((_QWORD *)0x480, v8, v9);
    if ( v10 )
      v11 = ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::CComObject<CSpatialCrossProcessServerInputEndpoint>(v10);
    else
      v11 = 0LL;
  }
  if ( !v11 )
  {
    v7 = -2147024882;
LABEL_17:
    SpatialCPTraceLoggingErrorHelper("privateCreateSpatialCrossProcessEndpoint", 0x69u, v7);
    return v7;
  }
  (*(void (__fastcall **)(CSpatialCrossProcessClientOutputEndpoint *))(*(_QWORD *)v11 + 8LL))(v11);
  *(_OWORD *)((char *)v11 + 408) = *a2;
  *a4 = (char *)v11 + 8;
  return v7;
}
