/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14004F210
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14004EB60 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCCrossProcessClientOutputEndpoint@@.c)
 * Callees:
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140008C60 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140008CDC (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140010C3C (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x140017A9C (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14004CE98 (--0-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ?InternalFinalConstructRelease@CCrossProcessServerOutputEndpoint@@QEAAXXZ @ 0x14004F734 (-InternalFinalConstructRelease@CCrossProcessServerOutputEndpoint@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CCrossProcessClientOutputEndpoint>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // r14
  __int64 v4; // r15
  unsigned int v6; // esi
  void *v7; // rax
  __int64 v8; // r8
  CCrossProcessClientOutputEndpoint *v9; // rax
  volatile int *v10; // rdx
  CCrossProcessClientOutputEndpoint *v11; // rdi
  int v12; // eax
  _QWORD v13[11]; // [rsp+0h] [rbp-58h] BYREF
  CCrossProcessClientOutputEndpoint *v16; // [rsp+78h] [rbp+20h]

  v13[4] = -2LL;
  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v6 = -2147024882;
  v7 = (void *)AERTGetDLLRTHeap();
  try
  {
    v9 = (CCrossProcessClientOutputEndpoint *)AERTAllocate((_QWORD *)0x228, v7, v8);
    v13[5] = v9;
    if ( v9 )
      v11 = ATL::CComObject<CCrossProcessClientOutputEndpoint>::CComObject<CCrossProcessClientOutputEndpoint>(v9);
    else
      v11 = 0LL;
    v16 = v11;
  }
  catch ( ... )
  {
    v10 = (volatile int *)v13;
    v3 = a3;
    v4 = a2;
    v6 = -2147024882;
    v11 = v16;
  }
  if ( v11 )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference(
      (CCrossProcessClientOutputEndpoint *)((char *)v11 + 488),
      v10);
    v12 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)((char *)v11 + 496));
    if ( v12 >= 0 )
    {
      *((_BYTE *)v11 + 536) = 1;
      v12 = 0;
    }
    v6 = 0;
    if ( v12 < 0 )
      v6 = v12;
    CCrossProcessServerOutputEndpoint::InternalFinalConstructRelease(v11);
    if ( v6
      || (v6 = (**(__int64 (__fastcall ***)(CCrossProcessClientOutputEndpoint *, __int64, _QWORD *))v11)(v11, v4, v3)) != 0 )
    {
      (*(void (__fastcall **)(CCrossProcessClientOutputEndpoint *, __int64))(*(_QWORD *)v11 + 64LL))(v11, 1LL);
    }
  }
  return v6;
}
