/*
 * XREFs of ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVJumpViewExperienceManager@Experience@Shell@Internal@Windows@@PEAVJumpViewExperienceEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVJumpViewExperienceManager@Experience@Shell@Internal@Windows@@PEAVJumpViewExperienceEventArgs@2345@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x18004D7AC
 * Callers:
 *     ?add_Cancelled@CJumpViewExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAVJumpViewExperienceManager@Experience@Shell@Internal@Windows@@PEAVJumpViewExperienceEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1800512A0 (-add_Cancelled@CJumpViewExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEAVJumpViewExperienceM.c)
 *     ?add_Hidden@CJumpViewExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAVJumpViewExperienceManager@Experience@Shell@Internal@Windows@@PEAVJumpViewExperienceEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1800512E0 (-add_Hidden@CJumpViewExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEAVJumpViewExperienceMana.c)
 *     ?add_Shown@CJumpViewExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAVJumpViewExperienceManager@Experience@Shell@Internal@Windows@@PEAVJumpViewExperienceEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180051320 (-add_Shown@CJumpViewExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEAVJumpViewExperienceManag.c)
 * Callees:
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x180043FBC (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18004D924 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18004DC78 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18004DCA0 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x18004E458 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::JumpViewExperienceManager *,Windows::Internal::Shell::Experience::JumpViewExperienceEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::AddInternal(
        _QWORD *a1,
        struct IUnknown *a2,
        void *a3,
        struct IUnknown **a4)
{
  _QWORD *v8; // rcx
  __int64 v9; // rax
  int v10; // edi
  _QWORD *v11; // rax
  Microsoft::WRL::Details::EventTargetArray *v12; // rcx
  void **v14; // rsi
  struct IUnknown **i; // rdi
  volatile signed __int32 *v16; // [rsp+20h] [rbp-20h] BYREF
  __int64 v17; // [rsp+28h] [rbp-18h] BYREF
  _BYTE v18[8]; // [rsp+30h] [rbp-10h] BYREF
  _BYTE v19[8]; // [rsp+38h] [rbp-8h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v20; // [rsp+88h] [rbp+48h] BYREF

  *a4 = 0LL;
  v16 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(v19, a1 + 2);
  v8 = (_QWORD *)*a1;
  v20 = 0LL;
  if ( v8 )
    v9 = ((__int64)(v8[3] - v8[2]) >> 3) + 1;
  else
    v9 = 1LL;
  v17 = v9;
  v10 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
          &v20,
          (unsigned __int64 *)&v17);
  if ( v10 < 0 )
  {
    if ( v20 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v20 + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(Microsoft::WRL::Details::EventTargetArray *, __int64))(*(_QWORD *)v20 + 24LL))(v20, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
  }
  else
  {
    v11 = (_QWORD *)*a1;
    if ( *a1 )
    {
      v14 = (void **)v11[4];
      for ( i = (struct IUnknown **)v11[2]; i != (struct IUnknown **)v11[3]; ++i )
      {
        Microsoft::WRL::Details::EventTargetArray::AddTail(v20, *i, *v14);
        v11 = (_QWORD *)*a1;
        ++v14;
      }
    }
    v12 = v20;
    *a4 = a2;
    Microsoft::WRL::Details::EventTargetArray::AddTail(v12, a2, a3);
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(v18, a1 + 1);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(&v16, a1);
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(a1, &v20);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)v18);
    if ( v20 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v20 + 3, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(Microsoft::WRL::Details::EventTargetArray *, __int64))(*(_QWORD *)v20 + 24LL))(v20, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
    v10 = 0;
  }
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)v19);
  if ( v16 )
  {
    if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v16 + 24LL))(v16, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return (unsigned int)v10;
}
