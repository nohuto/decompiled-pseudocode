/*
 * XREFs of ?ExecuteWorkItems@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAXXZ @ 0x1800E240C
 * Callers:
 *     ?StaticExecuteWorkItems@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800E4FA0 (-StaticExecuteWorkItems@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wi.c)
 * Callees:
 *     ?InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18002A874 (-InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002B220 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?pop_front@?$deque@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@2@@std@@QEAAXXZ @ 0x1800E71A4 (-pop_front@-$deque@V-$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::ExecuteWorkItems(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  _QWORD *v3; // rax
  __int64 *v4; // rsi
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rcx
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+50h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 496);
  while ( 1 )
  {
    EnterCriticalSection(v2);
    v8 = v2;
    if ( *((_BYTE *)this + 536) || !*((_QWORD *)this + 72) )
      break;
    v3 = (_QWORD *)*((_QWORD *)this + 68);
    if ( v3 )
      v3 = (_QWORD *)*v3;
    v4 = *(__int64 **)(v3[1] + 8 * (*((_QWORD *)this + 71) & (v3[2] - 1LL)));
    v5 = (volatile signed __int32 *)v4[1];
    if ( v5 )
    {
      _InterlockedIncrement(v5 + 2);
      v5 = (volatile signed __int32 *)v4[1];
    }
    v6 = *v4;
    std::deque<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>::pop_front((char *)this + 544);
    Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(&v8);
    v7 = *(_QWORD *)(v6 + 72);
    if ( !v7 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 16LL))(v7, v6);
    if ( v5 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
  }
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(&v8);
}
