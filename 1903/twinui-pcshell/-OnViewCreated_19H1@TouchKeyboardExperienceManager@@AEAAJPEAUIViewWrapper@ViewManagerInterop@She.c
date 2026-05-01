/*
 * XREFs of ?OnViewCreated_19H1@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x180312504
 * Callers:
 *     ?OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1803127C0 (-OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18002758C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180036E68 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18004D924 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18004DC78 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@AEBV?$ComPtr@UIWeakReference@@@12@@Z @ 0x1800823C0 (--0WeakRef@WRL@Microsoft@@QEAA@AEBV-$ComPtr@UIWeakReference@@@12@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_a34f77da1c118d252c6ac03565c5dcbb___ @ 0x18009C4D8 (Windows--Internal--ComTaskPool--QueueTask__lambda_a34f77da1c118d252c6ac03565c5dcbb___.c)
 *     _lambda_a34f77da1c118d252c6ac03565c5dcbb_::__lambda_a34f77da1c118d252c6ac03565c5dcbb_ @ 0x18009C9E8 (_lambda_a34f77da1c118d252c6ac03565c5dcbb_--__lambda_a34f77da1c118d252c6ac03565c5dcbb_.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18014E0A0 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180167508 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801D6DD0 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x18030BEEC (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ??$emplace_back@AEAV?$shared_ptr@UKBViewInfo@@@std@@@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@QEAAXAEAV?$shared_ptr@UKBViewInfo@@@1@@Z @ 0x18030C798 (--$emplace_back@AEAV-$shared_ptr@UKBViewInfo@@@std@@@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V.c)
 *     ??$make_shared@UKBViewInfo@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@std@@YA?AV?$shared_ptr@UKBViewInfo@@@0@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18030C7DC (--$make_shared@UKBViewInfo@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@std@.c)
 *     ??0?$weak_ptr@UKBViewInfo@@@std@@QEAA@AEBV01@@Z @ 0x18030CB34 (--0-$weak_ptr@UKBViewInfo@@@std@@QEAA@AEBV01@@Z.c)
 *     _anonymous_namespace_::GetTaskApartment @ 0x18030FEAC (_anonymous_namespace_--GetTaskApartment.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall TouchKeyboardExperienceManager::OnViewCreated_19H1(
        TouchKeyboardExperienceManager *this,
        struct IUnknown *a2,
        struct EventRegistrationToken a3)
{
  struct IUnknown ***v5; // rbx
  struct IUnknown ***v6; // r14
  __int64 *v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  __int64 *v10; // rax
  const char *v11; // r9
  std::_Ref_count_base *v12; // rbx
  unsigned int TaskApartment; // eax
  __int64 v14; // rdx
  int v15; // edi
  std::_Ref_count_base *v17[2]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v18; // [rsp+40h] [rbp-78h] BYREF
  std::_Ref_count_base *v19; // [rsp+48h] [rbp-70h]
  __int128 v20; // [rsp+50h] [rbp-68h] BYREF
  struct IUnknown *v21; // [rsp+60h] [rbp-58h] BYREF
  __int64 v22[2]; // [rsp+68h] [rbp-50h] BYREF
  _QWORD v23[8]; // [rsp+78h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  __int64 *p_value; // [rsp+C0h] [rbp+8h] BYREF
  struct IUnknown *v26; // [rsp+C8h] [rbp+10h] BYREF
  __int64 value; // [rsp+D0h] [rbp+18h] BYREF
  RTL_SRWLOCK *v28; // [rsp+D8h] [rbp+20h] BYREF

  value = a3.value;
  v26 = a2;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v28, (RTL_SRWLOCK *)this + 57);
  v5 = (struct IUnknown ***)*((_QWORD *)this + 58);
  v6 = (struct IUnknown ***)*((_QWORD *)this + 59);
  while ( v5 != v6 && !(unsigned int)SHIsSameObject(**v5, a2) )
    v5 += 2;
  if ( v5 == *((struct IUnknown ****)this + 59) )
  {
    value = 0LL;
    p_value = &value;
    v7 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&p_value);
    v8 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this, v7);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x909,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
LABEL_26:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&value);
      goto LABEL_22;
    }
    *(_OWORD *)v17 = 0LL;
    try
    {
      v10 = std::make_shared<KBViewInfo,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper * &>(
              &v18,
              (__int64 *)&v26);
      std::shared_ptr<KBViewInfo>::operator=(v17, v10);
      if ( v19 )
        std::_Ref_count_base::_Decref(v19);
      std::vector<std::shared_ptr<KBViewInfo>>::emplace_back<std::shared_ptr<KBViewInfo> &>((_QWORD *)this + 58, v17);
    }
    catch ( ... )
    {
      LODWORD(v26) = wil::details::in1diag3::Return_CaughtException(
                       retaddr,
                       (void *)0x913,
                       (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                       v11);
      if ( v17[1] )
        std::_Ref_count_base::_Decref(v17[1]);
      v9 = (unsigned int)v26;
      goto LABEL_26;
    }
    v12 = v17[1];
    if ( v17[1] )
    {
      _InterlockedIncrement((volatile signed __int32 *)v17[1] + 3);
      v12 = v17[1];
    }
    v20 = *(_OWORD *)v17;
    v21 = v26;
    Microsoft::WRL::WeakRef::WeakRef(v22, &value);
    v22[1] = (__int64)this;
    std::weak_ptr<KBViewInfo>::weak_ptr<KBViewInfo>(v23, &v20);
    TaskApartment = anonymous_namespace_::GetTaskApartment();
    v15 = Windows::Internal::ComTaskPool::QueueTask__lambda_a34f77da1c118d252c6ac03565c5dcbb___(
            TaskApartment,
            v14,
            *((_DWORD *)this + 231),
            &v21);
    lambda_a34f77da1c118d252c6ac03565c5dcbb_::__lambda_a34f77da1c118d252c6ac03565c5dcbb_((__int64)&v21);
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x973,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v15);
      if ( v12 )
      {
        std::_Ref_count_base::_Decwref(v12);
        std::_Ref_count_base::_Decref(v12);
      }
      v9 = v15;
      goto LABEL_26;
    }
    if ( v12 )
    {
      std::_Ref_count_base::_Decwref(v12);
      std::_Ref_count_base::_Decref(v12);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&value);
  }
  v9 = 0;
LABEL_22:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v28);
  return v9;
}
