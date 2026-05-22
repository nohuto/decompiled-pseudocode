/*
 * XREFs of ?RegisterPropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUISpatialGraphPropertiesUpdatedCallback@234@@Z @ 0x1801135A0
 * Callers:
 *     ?RegisterPropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJPEAUISpatialGraphPropertiesUpdatedCallback@234@@Z @ 0x180121E30 (-RegisterPropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800035C4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180030C74 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180109F10 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?RegisterPropertiesUpdateCallback_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@PEBX11@Z @ 0x18010C06C (-RegisterPropertiesUpdateCallback_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@PEBX11@.c)
 *     ?EnsurePropertyThread@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801134A0 (-EnsurePropertyThread@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEBV-$unique_a.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::RegisterPropertiesUpdatedCallback(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        struct Windows::Internal::Holographic::ISpatialGraphPropertiesUpdatedCallback *a2)
{
  int LastError; // ebx
  RTL_SRWLOCK *v5; // r15
  __int64 v6; // rcx
  __int64 (__fastcall **v7)(struct Windows::Internal::Holographic::ISpatialGraphPropertiesUpdatedCallback *, GUID *, struct _FILETIME *); // rax
  int v8; // eax
  struct _FILETIME v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rcx
  struct _FILETIME v14; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  const char *v16; // r9
  struct _TP_TIMER *v17; // rcx
  __int64 v18; // rbx
  _DWORD *v19; // rcx
  __int64 v20; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  struct _FILETIME pftDueTime; // [rsp+68h] [rbp+38h] BYREF
  __int64 v24; // [rsp+70h] [rbp+40h] BYREF

  if ( !a2 )
  {
    LastError = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D4,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)0x80070057LL);
    return (unsigned int)LastError;
  }
  v5 = (RTL_SRWLOCK *)((char *)this + 128);
  AcquireSRWLockExclusive((PSRWLOCK)this + 16);
  if ( !*((_QWORD *)this + 19) )
  {
    (*(void (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphPropertiesUpdatedCallback *))(*(_QWORD *)a2 + 8LL))(a2);
    v6 = *((_QWORD *)this + 19);
    *((_QWORD *)this + 19) = 0LL;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    v7 = *(__int64 (__fastcall ***)(struct Windows::Internal::Holographic::ISpatialGraphPropertiesUpdatedCallback *, GUID *, struct _FILETIME *))a2;
    pftDueTime = 0LL;
    v8 = (*v7)(a2, &GUID_00000038_0000_0000_c000_000000000046, &pftDueTime);
    v9 = pftDueTime;
    LastError = v8;
    if ( v8 >= 0 )
    {
      v24 = 0LL;
      LastError = (*(__int64 (__fastcall **)(struct _FILETIME, __int64 *))(**(_QWORD **)&pftDueTime + 24LL))(
                    pftDueTime,
                    &v24);
      if ( LastError >= 0 )
      {
        v11 = v24;
        v12 = v24;
        if ( v24 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
          v11 = v24;
        }
        v13 = *((_QWORD *)this + 19);
        *((_QWORD *)this + 19) = v12;
        if ( v13 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
          v11 = v24;
        }
        if ( v11 )
        {
          v24 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
        v14 = pftDueTime;
        if ( pftDueTime )
        {
          pftDueTime = 0LL;
          (*(void (__fastcall **)(struct _FILETIME))(**(_QWORD **)&v14 + 16LL))(v14);
        }
        LastError = 0;
        goto LABEL_23;
      }
      v10 = v24;
      if ( v24 )
      {
        v24 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      v9 = pftDueTime;
    }
    if ( v9 )
    {
      pftDueTime = 0LL;
      (*(void (__fastcall **)(struct _FILETIME))(**(_QWORD **)&v9 + 16LL))(v9);
    }
LABEL_23:
    if ( LastError >= 0 )
    {
      if ( *((_BYTE *)this + 115)
        || (ThreadpoolTimer = CreateThreadpoolTimer(
                                (PTP_TIMER_CALLBACK)Windows::Internal::Holographic::SpatialGraphDriverClient::StaticNodesChangeIdTimerCallback,
                                (char *)this - 8,
                                0LL),
            wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
              (struct _TP_TIMER **)this + 18,
              ThreadpoolTimer),
            *((_QWORD *)this + 18)) )
      {
        if ( *((_BYTE *)this + 113) && (*((_BYTE *)this + 114) || *((_BYTE *)this + 115)) )
          Windows::Internal::Holographic::SpatialGraphDriverClient::EnsurePropertyThread((HANDLE *)this - 1);
        v17 = (struct _TP_TIMER *)*((_QWORD *)this + 18);
        if ( v17 )
        {
          pftDueTime = 0LL;
          SetThreadpoolTimer(v17, &pftDueTime, 0x10u, 0);
        }
        v18 = *((_QWORD *)this + 19);
        v19 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
        if ( v19 && *v19 )
        {
          HolographicDriverClientTrace::Instance();
          HolographicDriverClientTrace::RegisterPropertiesUpdateCallback_(v20, 1, (char *)this - 8, a2, v18);
        }
        LastError = 0;
      }
      else
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x2E1,
                      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
                      v16);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2DB,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
        (const char *)(unsigned int)LastError);
    }
    (*(void (__fastcall **)(struct Windows::Internal::Holographic::ISpatialGraphPropertiesUpdatedCallback *))(*(_QWORD *)a2 + 16LL))(a2);
    goto LABEL_39;
  }
  LastError = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2D8,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
    (const char *)0x8000FFFFLL);
LABEL_39:
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  return (unsigned int)LastError;
}
