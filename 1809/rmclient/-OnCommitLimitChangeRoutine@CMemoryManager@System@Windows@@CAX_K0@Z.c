/*
 * XREFs of ?OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CAX_K0@Z @ 0x1800029E0
 * Callers:
 *     <none>
 * Callees:
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_7a3eaf1d56c5be833176df6bff83e236__Windows::Foundation::IEventHandler_Windows::System::AppMemoryUsageLimitChangingEventArgs_____ptr64___ @ 0x180001854 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_7a3eaf1d56c5be833176df6bff83e236__Wind.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180003350 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800040C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180009404 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180009BE0 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18000D9B0 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@.c)
 */

void __fastcall Windows::System::CMemoryManager::OnCommitLimitChangeRoutine(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // r10
  __int64 v9; // r8
  _QWORD *v10[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF
  _QWORD *v12; // [rsp+68h] [rbp+20h] BYREF

  v4 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v4 + 2));
    v6 = Microsoft::WRL::Details::ModuleBase::module_;
    *v5 = &Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase>::`vftable';
    v5[1] = &Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
    v5[2] = &Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v5[7] = 1LL;
    if ( v6 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v6 + 8LL))(v6);
    v5[8] = a1;
    *v5 = &Windows::System::AppMemoryUsageLimitChangingEventArgs::`vftable';
    v5[1] = &Windows::System::AppMemoryUsageLimitChangingEventArgs::`vftable'{for `IWeakReferenceSource'};
    v5[2] = &Windows::System::AppMemoryUsageLimitChangingEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v5[9] = a2;
    if ( v5 )
    {
      v12 = v5;
      v10[0] = &v11;
      v7 = 0LL;
      v10[1] = &v12;
      v11 = 0LL;
      AcquireSRWLockExclusive(&stru_1800226E0);
      if ( Windows::System::CMemoryManager::s_limitChangeEvent )
      {
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::InternalAddRef(Windows::System::CMemoryManager::s_limitChangeEvent);
        v7 = v8;
      }
      ReleaseSRWLockExclusive(&stru_1800226E0);
      if ( v7 )
      {
        Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_7a3eaf1d56c5be833176df6bff83e236__Windows::Foundation::IEventHandler_Windows::System::AppMemoryUsageLimitChangingEventArgs_____ptr64___(
          v10,
          v7,
          v9);
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v7);
      }
      (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
    }
  }
}
