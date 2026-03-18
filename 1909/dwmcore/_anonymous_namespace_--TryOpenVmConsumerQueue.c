/*
 * XREFs of _anonymous_namespace_::TryOpenVmConsumerQueue @ 0x1801BB250
 * Callers:
 *     ?GetTipPointQueue@CRemoteSuperWetSharedSection@@QEAAPEAVCSuperWetInkDataCircularQueue@@XZ @ 0x1801BAF58 (-GetTipPointQueue@CRemoteSuperWetSharedSection@@QEAAPEAVCSuperWetInkDataCircularQueue@@XZ.c)
 *     ?LookupPerFrameData@CRemoteSuperWetSharedSection@@QEAAJIPEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x1801BAF84 (-LookupPerFrameData@CRemoteSuperWetSharedSection@@QEAAJIPEAV-$vector@EV-$allocator@E@std@@@std@@.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?GetContainerAddress@CCommonRegistryData@@SA?AU_GUID@@XZ @ 0x1801587D0 (-GetContainerAddress@CCommonRegistryData@@SA-AU_GUID@@XZ.c)
 *     ??RVmMappedSectionDeleter@@QEAAXPEAE@Z @ 0x1801758E0 (--RVmMappedSectionDeleter@@QEAAXPEAE@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180187DB0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CSuperWetInkDataCircularQueue@@SAJV?$span@E$0?0@gsl@@PEAPEAV1@_N@Z @ 0x1801BAEA0 (-Create@CSuperWetInkDataCircularQueue@@SAJV-$span@E$0-0@gsl@@PEAPEAV1@_N@Z.c)
 *     ?OpenReadOnly@CVmSharedSection@@SAJAEBU_GUID@@0PEAPEAV1@@Z @ 0x180228E98 (-OpenReadOnly@CVmSharedSection@@SAJAEBU_GUID@@0PEAPEAV1@@Z.c)
 */

__int64 __fastcall anonymous_namespace_::TryOpenVmConsumerQueue(
        struct CVmSharedSection **a1,
        struct CVmSharedSection **a2,
        const struct _GUID *a3)
{
  int v3; // edi
  struct CVmSharedSection *v8; // rax
  UUID v9; // xmm0
  __int64 v10; // rax
  struct CVmSharedSection *v11; // rcx
  struct CVmSharedSection *v12; // rbx
  void *v13; // rdx
  __int64 v14; // rax
  int v15; // eax
  struct CVmSharedSection *v16; // rcx
  struct CVmSharedSection *v17; // [rsp+28h] [rbp-38h] BYREF
  char v18; // [rsp+30h] [rbp-30h]
  UUID Uuid; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v3 = 0;
  if ( *a1 )
    return 0LL;
  v8 = *a2;
  if ( *a2 )
    goto LABEL_16;
  v9 = *CCommonRegistryData::GetContainerAddress(&Uuid);
  v10 = *(_QWORD *)&v9.Data1 - *(_QWORD *)&GUID_NULL.Data1;
  Uuid = v9;
  if ( *(_QWORD *)&v9.Data1 == *(_QWORD *)&GUID_NULL.Data1 )
    v10 = *(_QWORD *)Uuid.Data4 - *(_QWORD *)GUID_NULL.Data4;
  if ( !v10 )
    goto LABEL_15;
  v17 = 0LL;
  v18 = 1;
  v3 = CVmSharedSection::OpenReadOnly(a3, &Uuid, &v17);
  if ( v18 )
  {
    v11 = v17;
    v12 = *a2;
    *a2 = v17;
    if ( v12 )
    {
      v13 = (void *)*((_QWORD *)v12 + 3);
      if ( v13 )
        VmMappedSectionDeleter::operator()((__int64)v11, v13);
      if ( (unsigned __int64)(*(_QWORD *)v12 - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(*(HANDLE *)v12);
      operator delete(v12);
    }
  }
  if ( v3 >= 0 )
  {
LABEL_15:
    v8 = *a2;
    if ( *a2 )
    {
LABEL_16:
      v14 = *((_QWORD *)v8 + 3);
      v17 = 0LL;
      v18 = 1;
      *(_QWORD *)&Uuid.Data1 = 4096LL;
      *(_QWORD *)Uuid.Data4 = v14;
      if ( !v14 )
      {
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      v15 = CSuperWetInkDataCircularQueue::Create((__int64)&Uuid, (volatile __int32 ***)&v17, 0);
      if ( v15 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x29,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\remotesuperwetsharedsection.cpp",
          (const char *)(unsigned int)v15);
        __debugbreak();
      }
      if ( v18 )
      {
        v16 = *a1;
        *a1 = v17;
        if ( v16 )
          operator delete(v16);
      }
    }
  }
  return (unsigned int)v3;
}
