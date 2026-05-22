/*
 * XREFs of ?AttachDevice@MPCRawInputProvider@@QEAAJW4InputType@@PEAK@Z @ 0x18009411C
 * Callers:
 *     ??0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z @ 0x1800952EC (--0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z.c)
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180010B18 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18002A874 (-InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002B220 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@ULegacyDeviceInfo@@@std@@@?$vector@V?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@ULegacyDeviceInfo@@@1@QEAV21@AEBV21@@Z @ 0x180093978 (--$_Emplace_reallocate@AEBV-$shared_ptr@ULegacyDeviceInfo@@@std@@@-$vector@V-$shared_ptr@ULegacy.c)
 *     ??$make_shared@ULegacyDeviceInfo@@$$V@std@@YA?AV?$shared_ptr@ULegacyDeviceInfo@@@0@XZ @ 0x180093B6C (--$make_shared@ULegacyDeviceInfo@@$$V@std@@YA-AV-$shared_ptr@ULegacyDeviceInfo@@@0@XZ.c)
 *     ?AttachDeviceImpl@MPCRawInputProvider@@AEAAXAEBV?$shared_ptr@ULegacyDeviceInfo@@@std@@@Z @ 0x180094240 (-AttachDeviceImpl@MPCRawInputProvider@@AEAAXAEBV-$shared_ptr@ULegacyDeviceInfo@@@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCRawInputProvider::AttachDevice(__int64 a1, int a2, _DWORD *a3)
{
  _DWORD *v6; // rbx
  _QWORD *v7; // rdx
  _DWORD *v9; // [rsp+28h] [rbp-18h] BYREF
  std::_Ref_count_base *v10; // [rsp+30h] [rbp-10h]
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+60h] [rbp+20h] BYREF

  std::make_shared<LegacyDeviceInfo,>(&v9);
  v6 = v9;
  *v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 32LL))(*(_QWORD *)(a1 + 16));
  v9[1] = a2;
  if ( GetCurrentThreadId() == *(_DWORD *)(a1 + 88) && *(_BYTE *)(a1 + 80) )
  {
    MPCRawInputProvider::AttachDeviceImpl(a1, &v9);
  }
  else
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
    v11 = (struct _RTL_CRITICAL_SECTION *)(a1 + 96);
    v7 = *(_QWORD **)(a1 + 144);
    if ( *(_QWORD **)(a1 + 152) == v7 )
    {
      std::vector<std::shared_ptr<LegacyDeviceInfo>>::_Emplace_reallocate<std::shared_ptr<LegacyDeviceInfo> const &>(
        (_QWORD *)(a1 + 136),
        v7,
        &v9);
    }
    else
    {
      *v7 = 0LL;
      v7[1] = 0LL;
      if ( v10 )
        _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
      *v7 = v9;
      v7[1] = v10;
      *(_QWORD *)(a1 + 144) += 16LL;
    }
    wil::details::SetEvent(*(wil::details **)(a1 + 72), v7);
    Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(&v11);
  }
  *a3 = *v9;
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  return 0LL;
}
