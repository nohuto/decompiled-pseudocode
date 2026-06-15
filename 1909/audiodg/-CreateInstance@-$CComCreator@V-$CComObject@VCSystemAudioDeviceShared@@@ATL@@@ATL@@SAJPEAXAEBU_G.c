/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCSystemAudioDeviceShared@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400113E4
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCSystemAudioDeviceShared@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140011500 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCSystemAudioDeviceShared@@@ATL@@@AT.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140010C3C (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ??0?$CComObject@VCSystemAudioDeviceShared@@@ATL@@QEAA@PEAX@Z @ 0x14001135C (--0-$CComObject@VCSystemAudioDeviceShared@@@ATL@@QEAA@PEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x140015B14 (--2@YAPEAX_K@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x140017A9C (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?InternalFinalConstructRelease@CSystemAudioDeviceShared@@QEAAXXZ @ 0x140032F84 (-InternalFinalConstructRelease@CSystemAudioDeviceShared@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CSystemAudioDeviceShared>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // r14
  __int64 v4; // r15
  unsigned int v6; // esi
  CSystemAudioDeviceShared *v7; // rax
  volatile int *v8; // rdx
  CSystemAudioDeviceShared *v9; // rdi
  int v10; // eax
  _QWORD v11[11]; // [rsp+0h] [rbp-58h] BYREF
  CSystemAudioDeviceShared *v14; // [rsp+78h] [rbp+20h]

  v11[4] = -2LL;
  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  try
  {
    *a3 = 0LL;
    v6 = -2147024882;
    v7 = (CSystemAudioDeviceShared *)operator new(0x1A8uLL);
    v11[5] = v7;
    if ( v7 )
      v9 = ATL::CComObject<CSystemAudioDeviceShared>::CComObject<CSystemAudioDeviceShared>(v7);
    else
      v9 = 0LL;
    v14 = v9;
  }
  catch ( ... )
  {
    v8 = (volatile int *)v11;
    v3 = a3;
    v4 = a2;
    v6 = -2147024882;
    v9 = v14;
  }
  if ( v9 )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference((CSystemAudioDeviceShared *)((char *)v9 + 368), v8);
    v10 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)((char *)v9 + 376));
    if ( v10 >= 0 )
    {
      *((_BYTE *)v9 + 416) = 1;
      v10 = 0;
    }
    v6 = 0;
    if ( v10 < 0 )
      v6 = v10;
    CSystemAudioDeviceShared::InternalFinalConstructRelease(v9);
    if ( v6 || (v6 = (**(__int64 (__fastcall ***)(CSystemAudioDeviceShared *, __int64, _QWORD *))v9)(v9, v4, v3)) != 0 )
      (*(void (__fastcall **)(CSystemAudioDeviceShared *, __int64))(*(_QWORD *)v9 + 184LL))(v9, 1LL);
  }
  return v6;
}
