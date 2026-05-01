/*
 * XREFs of _lambda_ab0326ecea74eabee98d06838221c40f_::operator() @ 0x18009358C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ab0326ecea74eabee98d06838221c40f___::Run @ 0x180093B50 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ab0326ecea74eabee98d06838221c40f___--Run.c)
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000EF5C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180017738 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::ResultFromException__lambda_bfc3357b9cce858772fcd000f9055967___ @ 0x180092458 (wil--ResultFromException__lambda_bfc3357b9cce858772fcd000f9055967___.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x1800FCAC8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 *     ??0?$shared_ptr@UKBViewInfo@@@std@@QEAA@AEBV01@@Z @ 0x1802B451C (--0-$shared_ptr@UKBViewInfo@@@std@@QEAA@AEBV01@@Z.c)
 *     ?DismissView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x1802B5824 (-DismissView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_ab0326ecea74eabee98d06838221c40f_::operator()(__int64 a1)
{
  unsigned int v2; // edi
  int v3; // eax
  struct IUnknown *v4; // rbx
  __int64 v5; // rax
  struct IUnknown ***v6; // rsi
  struct IUnknown ***v7; // r15
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rdx
  struct KBViewInfo *v12; // [rsp+28h] [rbp-28h] BYREF
  std::_Ref_count_base *v13; // [rsp+30h] [rbp-20h]
  __int64 v14[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct IInspectable *v16; // [rsp+80h] [rbp+30h] BYREF
  struct IUnknown ***v17; // [rsp+88h] [rbp+38h] BYREF
  RTL_SRWLOCK *v18; // [rsp+90h] [rbp+40h] BYREF

  v2 = 0;
  v16 = 0LL;
  v3 = Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)a1, &v16);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1778LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  if ( v16 )
  {
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(*(_QWORD *)(a1 + 24) + 448LL, &v18);
    v4 = *(struct IUnknown **)(a1 + 8);
    v5 = *(_QWORD *)(a1 + 24);
    v6 = *(struct IUnknown ****)(v5 + 456);
    v7 = *(struct IUnknown ****)(v5 + 464);
    while ( v6 != v7 && !(unsigned int)SHIsSameObject(**v6, v4) )
      v6 += 2;
    v17 = v6;
    if ( v6 != *(struct IUnknown ****)(*(_QWORD *)(a1 + 24) + 464LL) )
    {
      std::shared_ptr<KBViewInfo>::shared_ptr<KBViewInfo>(&v12, v6);
      v8 = TouchKeyboardExperienceManager::DismissView(*(TouchKeyboardExperienceManager **)(a1 + 24), v12);
      v9 = v8;
      if ( v8 >= 0 )
      {
        v14[0] = *(_QWORD *)(a1 + 24);
        v14[1] = (__int64)&v17;
        v8 = wil::ResultFromException__lambda_bfc3357b9cce858772fcd000f9055967___(v14);
        v9 = v8;
        if ( v8 >= 0 )
        {
          if ( v13 )
            std::_Ref_count_base::_Decref(v13);
          goto LABEL_18;
        }
        v10 = 1799LL;
      }
      else
      {
        v10 = 1795LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
      if ( v13 )
        std::_Ref_count_base::_Decref(v13);
      v2 = v9;
    }
LABEL_18:
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v18);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  return v2;
}
