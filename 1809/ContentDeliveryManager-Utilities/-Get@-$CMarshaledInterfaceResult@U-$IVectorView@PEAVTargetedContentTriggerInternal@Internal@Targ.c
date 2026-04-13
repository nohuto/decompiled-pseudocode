/*
 * XREFs of ?Get@?$CMarshaledInterfaceResult@U?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@3@@Z @ 0x18006BA18
 * Callers:
 *     ?GetResults@?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@3@@Z @ 0x18006AEB0 (-GetResults@-$AsyncOperation@U-$IAsyncOperation@PEAU-$IVectorView@PEAVTargetedContentTriggerInte.c)
 * Callees:
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x18006250C (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>::Get(
        RTL_SRWLOCK *a1,
        void **a2)
{
  PVOID Ptr; // rbx
  PVOID v5; // rdi
  RTL_SRWLOCK *v6; // r15
  PVOID v7; // rsi
  PVOID v8; // rcx
  PVOID v9; // rcx
  unsigned int v10; // esi
  PVOID v12; // [rsp+70h] [rbp+38h] BYREF
  PVOID v13; // [rsp+78h] [rbp+40h] BYREF
  PVOID v14; // [rsp+80h] [rbp+48h] BYREF
  PVOID v15; // [rsp+88h] [rbp+50h]

  Ptr = 0LL;
  v14 = 0LL;
  v5 = 0LL;
  v15 = 0LL;
  v6 = a1 + 4;
  AcquireSRWLockShared(a1 + 4);
  if ( a1[3].Ptr )
  {
    Ptr = a1[3].Ptr;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v14 = Ptr;
  }
  v7 = a1[2].Ptr;
  if ( v7 )
  {
    v12 = 0LL;
    v13 = v7;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v7 + 8LL))(v7);
    (*(void (__fastcall **)(PVOID, GUID *, PVOID *))(*(_QWORD *)v7 + 24LL))(
      v7,
      &GUID_8dfdeb21_2650_5acc_bdc8_79f7c2de1b11,
      &v12);
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v7 + 16LL))(v7);
    v8 = v12;
    if ( v12 )
    {
      v13 = 0LL;
      if ( (int)RoGetAgileReference(0LL, &GUID_8dfdeb21_2650_5acc_bdc8_79f7c2de1b11, v12, &v13) < 0 )
      {
        v9 = v13;
      }
      else
      {
        v5 = v13;
        v15 = v13;
        v9 = 0LL;
      }
      if ( v9 )
      {
        v13 = 0LL;
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v9 + 16LL))(v9);
      }
      v8 = v12;
    }
    if ( v8 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  ReleaseSRWLockShared(v6);
  *a2 = 0LL;
  if ( v5 )
  {
    v12 = v5;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v5 + 8LL))(v5);
    v10 = (*(__int64 (__fastcall **)(PVOID, GUID *, void **))(*(_QWORD *)v5 + 24LL))(
            v5,
            &GUID_8dfdeb21_2650_5acc_bdc8_79f7c2de1b11,
            a2);
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else if ( Ptr )
  {
    v10 = CMarshaledInterface::_Unmarshal((CMarshaledInterface *)&v14, &GUID_8dfdeb21_2650_5acc_bdc8_79f7c2de1b11, a2);
    Ptr = v14;
  }
  else
  {
    v10 = 0;
  }
  if ( v5 )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v5 + 16LL))(v5);
  if ( Ptr )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  return v10;
}
