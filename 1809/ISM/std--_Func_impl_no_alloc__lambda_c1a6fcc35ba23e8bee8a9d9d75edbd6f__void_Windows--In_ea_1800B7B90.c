/*
 * XREFs of std::_Func_impl_no_alloc__lambda_c1a6fcc35ba23e8bee8a9d9d75edbd6f__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks_____ptr64_::_Do_call @ 0x1800B7B90
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?SpatialObjectDeviceInitializationDone_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_WJ@Z @ 0x1800ACE64 (-SpatialObjectDeviceInitializationDone_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAX.c)
 *     ?QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@V?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@6@_N@Z @ 0x1800AFC34 (-QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_c1a6fcc35ba23e8bee8a9d9d75edbd6f__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks_____ptr64_::_Do_call(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rbx
  int v4; // esi
  const wchar_t *v5; // rbx
  _DWORD *v6; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rbx
  __int128 v13; // [rsp+30h] [rbp-11h] BYREF
  __int64 v14; // [rsp+40h] [rbp-1h]
  _QWORD v15[9]; // [rsp+50h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  v3 = *a2;
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 80LL))(*a2);
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 8) + 64LL))(*(_QWORD *)(a1 + 8), v3);
  v5 = (const wchar_t *)(*(_QWORD *)(a1 + 8) + 80LL);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 104LL) >= 8uLL )
    v5 = *(const wchar_t **)v5;
  v6 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( v6 && *v6 )
  {
    SpatialInteractionDevices::SpatialInteractionTrace::Instance();
    SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectDeviceInitializationDone_(v7, v5, v4);
  }
  v13 = 0LL;
  v8 = *(_QWORD *)(a1 + 16);
  v9 = *(_QWORD *)(a1 + 8);
  v14 = v9;
  v10 = v8;
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    v10 = *(_QWORD *)(a1 + 16);
  }
  v15[0] = off_18013E6D0;
  v15[1] = v9;
  v15[2] = v8;
  v15[7] = v15;
  v11 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem(
          v10,
          (__int64)&v13,
          (__int64)v15,
          1);
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x544,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v11);
  if ( *((_QWORD *)&v13 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v13 + 1) + 8LL), 0xFFFFFFFF) == 1 )
  {
    v12 = *((_QWORD *)&v13 + 1);
    (***((void (__fastcall ****)(_QWORD))&v13 + 1))(*((_QWORD *)&v13 + 1));
    if ( !_InterlockedDecrement((volatile signed __int32 *)(v12 + 12)) )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v13 + 1) + 8LL))(*((_QWORD *)&v13 + 1));
  }
}
