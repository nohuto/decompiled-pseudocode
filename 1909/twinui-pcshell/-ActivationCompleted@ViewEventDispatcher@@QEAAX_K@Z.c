/*
 * XREFs of ?ActivationCompleted@ViewEventDispatcher@@QEAAX_K@Z @ 0x1802897DC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8b8102a789654bc38db8b1e79dbee23f___::Run @ 0x18028D6A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8b8102a789654bc38db8b1e79dbee23f___--Run.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZE@Z @ 0x1800627A4 (--$SetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_3c4847642c4b84887b271ddb5cdb57d9___ @ 0x180286F10 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_3c4847642c4b84887b271ddb5cdb57d9___.c)
 *     ?_FindPendingActivation@ViewEventDispatcher@@AEAAJ_KPEAPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x18029362C (-_FindPendingActivation@ViewEventDispatcher@@AEAAJ_KPEAPEAU-$CLinkedNode@UPendingActivationData@.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ViewEventDispatcher::ActivationCompleted(RTL_SRWLOCK *this, __int64 a2)
{
  __int128 v2; // rdi
  RTL_SRWLOCK *v3; // rbx
  HSTRING_HEADER *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // [rsp+20h] [rbp-50h]
  __int64 v10; // [rsp+30h] [rbp-40h] BYREF
  __int64 v11[2]; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER v12; // [rsp+48h] [rbp-28h] BYREF

  v11[1] = -2LL;
  *((_QWORD *)&v2 + 1) = a2;
  *(_QWORD *)&v2 = this;
  v3 = this + 35;
  AcquireSRWLockExclusive(this + 35);
  v11[0] = (__int64)v3;
  if ( (int)ViewEventDispatcher::_FindPendingActivation(v2, *((_QWORD *)&v2 + 1), &v10) >= 0 )
  {
    v10 = *(_QWORD *)(v10 + 32);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v10);
    v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v12, (const WCHAR **)off_180487E88);
    Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned char>(
      (Windows::Internal::ShellHelpers::PropertySetHelper *)&v10,
      (HSTRING)v4[1].Reserved.Reserved1,
      v5,
      1);
    v11[0] = v2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v11);
    v12.Reserved.Reserved1 = (PVOID)v2;
    *(_OWORD *)&v12.Reserved.Reserved2[8] = v2;
    v11[0] = 0LL;
    Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_3c4847642c4b84887b271ddb5cdb57d9___(
      v7,
      v6,
      *(_DWORD *)(v2 + 272),
      v8,
      v9,
      &v12);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12.Reserved.Reserved2[8]);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v11);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  }
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
}
