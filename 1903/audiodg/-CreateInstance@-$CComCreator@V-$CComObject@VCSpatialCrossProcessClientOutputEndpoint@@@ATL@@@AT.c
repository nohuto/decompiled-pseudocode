/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140058614
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140058350 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCSpatialCrossProcessClientOutputEnd.c)
 * Callees:
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140008C70 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140008CEC (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140010CA8 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x1400572FC (--0-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // r14
  __int64 v4; // r15
  unsigned int v6; // esi
  void *v7; // rax
  __int64 v8; // r8
  CSpatialCrossProcessClientOutputEndpoint *v9; // rax
  CSpatialCrossProcessClientOutputEndpoint *v10; // rdi
  int v11; // eax
  CSpatialCrossProcessClientOutputEndpoint *v14; // [rsp+78h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v6 = -2147024882;
  v7 = (void *)AERTGetDLLRTHeap();
  try
  {
    v9 = (CSpatialCrossProcessClientOutputEndpoint *)AERTAllocate((_QWORD *)0x440, v7, v8);
    if ( v9 )
      v10 = ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::CComObject<CSpatialCrossProcessClientOutputEndpoint>(v9);
    else
      v10 = 0LL;
    v14 = v10;
  }
  catch ( ... )
  {
    v3 = a3;
    v4 = a2;
    v6 = -2147024882;
    v10 = v14;
  }
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v10 + 250);
    v11 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)((char *)v10 + 1008));
    if ( v11 >= 0 )
    {
      *((_BYTE *)v10 + 1048) = 1;
      v11 = 0;
    }
    v6 = 0;
    if ( v11 < 0 )
      v6 = v11;
    _InterlockedDecrement((volatile signed __int32 *)v10 + 250);
    if ( v6
      || (v6 = (**(__int64 (__fastcall ***)(CSpatialCrossProcessClientOutputEndpoint *, __int64, _QWORD *))v10)(
                 v10,
                 v4,
                 v3)) != 0 )
    {
      (*(void (__fastcall **)(CSpatialCrossProcessClientOutputEndpoint *, __int64))(*(_QWORD *)v10 + 64LL))(v10, 1LL);
    }
  }
  return v6;
}
