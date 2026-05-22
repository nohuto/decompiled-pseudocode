/*
 * XREFs of ?OnInputReport@SpatialRimDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800629B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@RawInputProvidersContinuousTracing@@KAPEAV1@XZ @ 0x1800605FC (-Instance@RawInputProvidersContinuousTracing@@KAPEAV1@XZ.c)
 *     ?InputReportReceived_@RawInputProvidersContinuousTracing@@QEAAXKK@Z @ 0x180060734 (-InputReportReceived_@RawInputProvidersContinuousTracing@@QEAAXKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialRimDeviceCollection::OnInputReport(
        SpatialRimDeviceCollection *this,
        unsigned int a2,
        void *a3,
        unsigned int a4)
{
  _DWORD *v8; // r10
  RawInputProvidersContinuousTracing *v9; // rcx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v8 = (_DWORD *)*((_QWORD *)RawInputProvidersContinuousTracing::Instance() + 1);
  if ( v8 && *v8 )
  {
    RawInputProvidersContinuousTracing::Instance();
    RawInputProvidersContinuousTracing::InputReportReceived_(v9, a2, a4);
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void *, _QWORD, unsigned __int64))(**((_QWORD **)this + 347) + 56LL))(
          *((_QWORD *)this + 347),
          a2,
          a3,
          a4,
          ((unsigned __int64)this + 2760) & -(__int64)(this != 0LL));
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1A1,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)(unsigned int)v10);
  return 0LL;
}
