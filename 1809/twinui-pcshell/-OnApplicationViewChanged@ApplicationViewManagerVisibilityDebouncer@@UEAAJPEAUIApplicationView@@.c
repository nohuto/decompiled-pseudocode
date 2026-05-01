/*
 * XREFs of ?OnApplicationViewChanged@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18003CC60
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ @ 0x18003CE00 (-ProcessPendingNotifications@ApplicationViewManagerVisibilityDebouncer@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardCompareHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardMergeHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@@@QEAAJ_K0@Z @ 0x1800F6C30 (-_EnsureCapacity@-$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisib.c)
 *     ??0ApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAA@AEBU01@@Z @ 0x18012EA98 (--0ApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@QEAA@AEBU01@@Z.c)
 *     ?RemoveAt@?$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardCompareHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@V?$CSimpleArrayStandardMergeHelper@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDebouncer@@@@@@QEAAJ_K@Z @ 0x18012F498 (-RemoveAt@-$CTSimpleArray@UApplicationViewManagerNotification@ApplicationViewManagerVisibilityDe.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::OnApplicationViewChanged(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2,
        int a3,
        __int64 a4)
{
  int v5; // edi
  RTL_SRWLOCK *v7; // r12
  struct IUnknown *v8; // rbx
  ULONGLONG TickCount64; // r13
  int v10; // edi
  char *Ptr; // rdx
  char *v12; // rax
  int v13; // eax
  char *v15; // rdi
  char *v16; // rbx
  char v17; // bl
  __int64 v18; // r13
  __int64 v19; // rax
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // [rsp+28h] [rbp-59h]
  __int64 v23; // [rsp+30h] [rbp-51h]
  __int128 v24; // [rsp+38h] [rbp-49h] BYREF
  __int64 v25; // [rsp+48h] [rbp-39h] BYREF
  ULONGLONG v26; // [rsp+50h] [rbp-31h]
  __int64 v27; // [rsp+58h] [rbp-29h]
  RTL_SRWLOCK *v28; // [rsp+60h] [rbp-21h]
  char v29[32]; // [rsp+68h] [rbp-19h] BYREF
  char v30[80]; // [rsp+88h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  char v32; // [rsp+E8h] [rbp+67h]

  v27 = -2LL;
  v5 = a3;
  v7 = a1 + 13;
  AcquireSRWLockExclusive(a1 + 13);
  v28 = v7;
  if ( !v5 )
  {
    v26 = 0LL;
    v24 = 0LL;
    v25 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    if ( a1[9].Ptr )
    {
      v18 = 0LL;
      while ( 1 )
      {
        v23 = ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification::ApplicationViewManagerNotification(
                (ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)v29,
                (const struct ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)&v24);
        v19 = ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification::ApplicationViewManagerNotification(
                (ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)v30,
                (const struct ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification *)((char *)a1[8].Ptr + v18));
        v22 = v19;
        if ( *(_DWORD *)(v19 + 8) != 1 || (v32 = 1, !(unsigned int)SHIsSameObject(*(struct IUnknown **)v19, a2)) )
          v32 = 0;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v22 + 16);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v22);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v23 + 16);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v23);
        if ( v32 )
          break;
        ++v16;
        v18 += 32LL;
        if ( v16 >= a1[9].Ptr )
          goto LABEL_23;
      }
      v15 = v16;
      v17 = 1;
    }
    else
    {
LABEL_23:
      v17 = 0;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
    if ( v17 )
    {
      CTSimpleArray<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification,4294967294,CTPolicyCoTaskMem<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardCompareHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardMergeHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>>::RemoveAt(
        &a1[8],
        v15);
      if ( !v15 )
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&a1[21]);
      goto LABEL_18;
    }
    v5 = a3;
  }
  v8 = a2;
  *(_QWORD *)&v24 = a2;
  if ( a2 )
    ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->AddRef)(a2);
  DWORD2(v24) = v5;
  v25 = a4;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  TickCount64 = GetTickCount64();
  v26 = TickCount64;
  v10 = 0;
  Ptr = (char *)a1[9].Ptr;
  if ( Ptr != a1[11].Ptr
    || (v10 = CTSimpleArray<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification,4294967294,CTPolicyCoTaskMem<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardCompareHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>,CSimpleArrayStandardMergeHelper<ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerNotification>>::_EnsureCapacity(
                &a1[8],
                Ptr + 1),
        v10 >= 0) )
  {
    v12 = (char *)a1[8].Ptr + 32 * (__int64)a1[9].Ptr++;
    if ( v12 )
    {
      *(_QWORD *)v12 = 0LL;
      if ( v12 != (char *)&v24 )
      {
        *(_QWORD *)v12 = a2;
        v8 = 0LL;
      }
      *((_DWORD *)v12 + 2) = a3;
      *((_QWORD *)v12 + 2) = 0LL;
      if ( v12 + 16 != (char *)&v25 )
      {
        *((_QWORD *)v12 + 2) = a4;
        a4 = 0LL;
      }
      *((_QWORD *)v12 + 3) = TickCount64;
    }
  }
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 16LL))(a4);
  if ( v8 )
    ((void (__fastcall *)(struct IUnknown *))v8->lpVtbl->Release)(v8);
  if ( v10 < 0 )
  {
    v20 = (unsigned int)v10;
    v21 = 239LL;
    goto LABEL_40;
  }
LABEL_18:
  v13 = ApplicationViewManagerVisibilityDebouncer::ProcessPendingNotifications((ApplicationViewManagerVisibilityDebouncer *)&a1[-1]);
  v10 = v13;
  if ( v13 >= 0 )
    goto LABEL_19;
  v20 = (unsigned int)v13;
  v21 = 241LL;
LABEL_40:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v21,
    (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
    (const char *)v20,
    v22);
LABEL_19:
  if ( v7 )
    ReleaseSRWLockExclusive(v7);
  return (unsigned int)v10;
}
