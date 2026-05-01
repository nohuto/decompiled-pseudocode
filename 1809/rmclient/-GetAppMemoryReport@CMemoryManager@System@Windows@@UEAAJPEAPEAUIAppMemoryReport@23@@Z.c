/*
 * XREFs of ?GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z @ 0x180003B00
 * Callers:
 *     <none>
 * Callees:
 *     CempRpcBindToServer @ 0x1800038D0 (CempRpcBindToServer.c)
 *     ?RegisterCommitMemoryCallback@ModernResourceManagerProxy@@QEAAJP6AXPEAU_RM_COMMIT_LEVEL_CHANGE_PAYLOAD@@@ZP6AX_K2@Z@Z @ 0x180003A00 (-RegisterCommitMemoryCallback@ModernResourceManagerProxy@@QEAAJP6AXPEAU_RM_COMMIT_LEVEL_CHANGE_P.c)
 *     ?RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ @ 0x180003F00 (-RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ.c)
 *     ??0ModernResourceManagerProxy@@QEAA@XZ @ 0x180004010 (--0ModernResourceManagerProxy@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800092F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180009404 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180009984 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180009BE0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCAppMemoryReport@System@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18000CF00 (--1-$ComPtr@VCAppMemoryReport@System@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::GetAppMemoryReport(
        Windows::System::CMemoryManager *this,
        struct Windows::System::IAppMemoryReport **a2)
{
  int InformationProcess; // eax
  ModernResourceManagerProxy *v4; // rdi
  int v5; // ebx
  ModernResourceManagerProxy *v6; // rbx
  char *v7; // rsi
  signed int v8; // edi
  NTSTATUS v9; // eax
  __int64 v10; // rbx
  ModernResourceManagerProxy *v11; // rsi
  char *v12; // r14
  NTSTATUS v13; // eax
  struct Windows::System::IAppMemoryReport *v14; // rsi
  unsigned __int64 v15; // rdi
  struct Windows::System::IAppMemoryReport *v16; // rcx
  unsigned __int64 v17; // rsi
  Windows::System::CAppMemoryReport *v18; // rax
  Windows::System::CAppMemoryReport *v19; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v20; // rcx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rcx
  struct Windows::System::IAppMemoryReport *v24; // rcx
  ModernResourceManagerProxy *v26; // rax
  ModernResourceManagerProxy *v27; // rax
  int v28; // eax
  void (*v29)(struct _RM_COMMIT_LEVEL_CHANGE_PAYLOAD *); // rdx
  void (*v30)(unsigned __int64, unsigned __int64); // r8
  signed int v31; // eax
  signed int v32; // eax
  signed int v33; // eax
  unsigned __int64 v34; // [rsp+30h] [rbp-91h]
  struct Windows::System::IAppMemoryReport *v35; // [rsp+48h] [rbp-79h] BYREF
  int v36; // [rsp+50h] [rbp-71h] BYREF
  int v37; // [rsp+54h] [rbp-6Dh] BYREF
  Windows::System::CAppMemoryReport *v38; // [rsp+58h] [rbp-69h] BYREF
  unsigned __int64 v39; // [rsp+60h] [rbp-61h] BYREF
  ULONG v40[2]; // [rsp+68h] [rbp-59h] BYREF
  __int128 SystemInformation; // [rsp+70h] [rbp-51h] BYREF
  __int128 v42; // [rsp+80h] [rbp-41h]
  char v43[8]; // [rsp+98h] [rbp-29h] BYREF
  struct Windows::System::IAppMemoryReport *v44; // [rsp+A0h] [rbp-21h]
  struct Windows::System::IAppMemoryReport *v45; // [rsp+A8h] [rbp-19h]
  _OWORD ProcessInformation[2]; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v47; // [rsp+D0h] [rbp+Fh]
  char v48[8]; // [rsp+D8h] [rbp+17h] BYREF
  __int64 v49; // [rsp+E0h] [rbp+1Fh]

  v35 = 0LL;
  InformationProcess = NtQueryInformationProcess(
                         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                         ProcessBasePriority|0x40,
                         ProcessInformation,
                         0x28u,
                         0LL);
  if ( InformationProcess < 0 )
  {
LABEL_41:
    v31 = RtlNtStatusToDosError(InformationProcess);
    v8 = v31;
    if ( v31 > 0 )
      v8 = (unsigned __int16)v31 | 0x80070000;
    goto LABEL_20;
  }
  v4 = 0LL;
  RtlAcquireSRWLockExclusive(&Windows::System::CMemoryManager::s_Lock);
  if ( Windows::System::CMemoryManager::s_pProxy )
  {
    v5 = 0;
  }
  else
  {
    v26 = (ModernResourceManagerProxy *)operator new(0x70uLL);
    if ( v26 && (v27 = ModernResourceManagerProxy::ModernResourceManagerProxy(v26), (v4 = v27) != 0LL) )
    {
      v28 = CempRpcBindToServer(&unk_1800134E0, (RPC_BINDING_HANDLE *)v27 + 2);
      v5 = v28 | 0x10000000;
      if ( v28 >= 0 )
      {
        v5 = ModernResourceManagerProxy::RegisterCommitMemoryCallback(v4, v29, v30);
        if ( v5 >= 0 )
        {
          if ( Windows::System::CMemoryManager::s_pProxy )
            (*(void (__fastcall **)(ModernResourceManagerProxy *))(*(_QWORD *)Windows::System::CMemoryManager::s_pProxy
                                                                 + 16LL))(Windows::System::CMemoryManager::s_pProxy);
          Windows::System::CMemoryManager::s_pProxy = v4;
          v5 = 0;
          v4 = 0LL;
        }
      }
    }
    else
    {
      v5 = -2147024882;
    }
  }
  RtlReleaseSRWLockExclusive(&Windows::System::CMemoryManager::s_Lock);
  if ( v4 )
    (*(void (__fastcall **)(ModernResourceManagerProxy *))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v5 < 0 )
  {
    v10 = v47;
    v14 = (struct Windows::System::IAppMemoryReport *)v47;
LABEL_16:
    if ( ((v10 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
LABEL_19:
      v39 = v10;
      v8 = 0;
      *(_QWORD *)v40 = v14;
      SystemInformation = ProcessInformation[0];
      v42 = ProcessInformation[1];
      goto LABEL_20;
    }
    InformationProcess = NtQuerySystemInformation(
                           MaxSystemInfoClass|SystemFullMemoryInformation,
                           &SystemInformation,
                           0x20u,
                           v40);
    if ( InformationProcess >= 0 )
    {
      v10 = v42 * RmpPageSize;
      goto LABEL_19;
    }
    goto LABEL_41;
  }
  v6 = Windows::System::CMemoryManager::s_pProxy;
  v7 = (char *)Windows::System::CMemoryManager::s_pProxy + 96;
  RtlAcquireSRWLockExclusive((char *)Windows::System::CMemoryManager::s_pProxy + 96);
  *((_DWORD *)v7 + 2) = GetCurrentThreadId();
  v8 = ModernResourceManagerProxy::RegisterWithServer(v6);
  if ( v8 < 0 )
  {
    v10 = (__int64)v35;
  }
  else
  {
    v36 = 24;
    v9 = NtQueryWnfStateData((char *)v6 + 48, 0LL, 0LL, &v38, v48, &v36);
    if ( v9 < 0 )
    {
      v32 = RtlNtStatusToDosError(v9);
      v10 = (__int64)v35;
      v8 = v32;
      if ( v32 > 0 )
        v8 = (unsigned __int16)v32 | 0x80070000;
    }
    else
    {
      v10 = v49;
      v8 = 0;
    }
  }
  *((_DWORD *)v7 + 2) = 0;
  RtlReleaseSRWLockExclusive(v7);
  if ( v8 < 0 )
    goto LABEL_51;
  v11 = Windows::System::CMemoryManager::s_pProxy;
  v12 = (char *)Windows::System::CMemoryManager::s_pProxy + 96;
  RtlAcquireSRWLockExclusive((char *)Windows::System::CMemoryManager::s_pProxy + 96);
  *((_DWORD *)v11 + 26) = GetCurrentThreadId();
  v8 = ModernResourceManagerProxy::RegisterWithServer(v11);
  if ( v8 < 0 )
  {
    v14 = v35;
  }
  else
  {
    v37 = 24;
    v13 = NtQueryWnfStateData((char *)v11 + 48, 0LL, 0LL, &v39, v43, &v37);
    if ( v13 < 0 )
    {
      v33 = RtlNtStatusToDosError(v13);
      v14 = v35;
      v8 = v33;
      if ( v33 > 0 )
        v8 = (unsigned __int16)v33 | 0x80070000;
    }
    else
    {
      v14 = v45;
      v8 = 0;
      if ( !v45 )
        v14 = v44;
    }
  }
  *((_DWORD *)v12 + 2) = 0;
  RtlReleaseSRWLockExclusive(v12);
  if ( v8 >= 0 )
    goto LABEL_16;
LABEL_20:
  if ( v8 >= 0 )
  {
    v15 = *((_QWORD *)&SystemInformation + 1);
    v16 = v35;
    v17 = *((_QWORD *)&SystemInformation + 1) + SystemInformation;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(struct Windows::System::IAppMemoryReport *))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v35 = 0LL;
    v18 = (Windows::System::CAppMemoryReport *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
    v19 = v18;
    if ( v18 )
    {
      v20 = Microsoft::WRL::Details::ModuleBase::module_;
      *((_QWORD *)v18 + 5) = 1LL;
      *(_QWORD *)v18 = &Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>::`vftable'{for `Windows::System::IAppMemoryReport'};
      *((_QWORD *)v18 + 1) = &Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::System::IAppMemoryReport2,IInspectable>'};
      *((_QWORD *)v18 + 2) = &Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>::`vftable'{for `Windows::System::IAppMemoryReport2'};
      *((_QWORD *)v18 + 3) = &Microsoft::WRL::RuntimeClass<Windows::System::IAppMemoryReport,Windows::System::IAppMemoryReport2,IInspectable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IInspectable>'};
      if ( v20 )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v20 + 8LL))(v20);
      v21 = *(_QWORD *)v40;
      v22 = v42;
      *(_QWORD *)v19 = &Windows::System::CAppMemoryReport::`vftable'{for `Windows::System::IAppMemoryReport'};
      v34 = v21;
      v23 = v39;
      *((_QWORD *)v19 + 1) = &Windows::System::CAppMemoryReport::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::System::IAppMemoryReport2,IInspectable>'};
      *((_QWORD *)v19 + 2) = &Windows::System::CAppMemoryReport::`vftable'{for `Windows::System::IAppMemoryReport2'};
      *((_QWORD *)v19 + 3) = &Windows::System::CAppMemoryReport::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IInspectable>'};
      *((_QWORD *)v19 + 6) = 0LL;
      *((_QWORD *)v19 + 7) = 0LL;
      *((_QWORD *)v19 + 8) = 0LL;
      *((_QWORD *)v19 + 9) = 0LL;
      v38 = v19;
      v8 = Windows::System::CAppMemoryReport::RuntimeClassInitialize(v19, v15, v22, v17, v23, v34);
      if ( v8 < 0 )
      {
        Microsoft::WRL::ComPtr<Windows::System::CAppMemoryReport>::~ComPtr<Windows::System::CAppMemoryReport>(&v38);
      }
      else
      {
        v8 = (**(__int64 (__fastcall ***)(Windows::System::CAppMemoryReport *, GUID *, struct Windows::System::IAppMemoryReport **))v19)(
               v19,
               &GUID_6d65339b_4d6f_45bc_9c5e_e49b3ff2758d,
               &v35);
        (*(void (__fastcall **)(Windows::System::CAppMemoryReport *))(*(_QWORD *)v19 + 16LL))(v19);
      }
      if ( v8 >= 0 )
      {
        v24 = 0LL;
        *a2 = v35;
        goto LABEL_30;
      }
    }
    else
    {
      v8 = -2147024882;
    }
  }
LABEL_51:
  v24 = v35;
LABEL_30:
  if ( v24 )
  {
    v35 = 0LL;
    (*(void (__fastcall **)(struct Windows::System::IAppMemoryReport *))(*(_QWORD *)v24 + 16LL))(v24);
  }
  return (unsigned int)v8;
}
