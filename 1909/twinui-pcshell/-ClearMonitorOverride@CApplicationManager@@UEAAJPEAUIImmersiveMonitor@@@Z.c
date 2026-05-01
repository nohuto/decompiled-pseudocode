/*
 * XREFs of ?ClearMonitorOverride@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x18012EFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::ClearMonitorOverride(CApplicationManager *this, struct IImmersiveMonitor *a2)
{
  PSRWLOCK v4; // rcx
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( a2 )
  {
    LODWORD(CApplicationManagerUtility::g_pIAMGlobals[5].Ptr) = 0;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v4[6]);
  }
  else
  {
    HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[5].Ptr) = 0;
  }
  v6 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  (*(void (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**((_QWORD **)this + 49) + 32LL))(
    *((_QWORD *)this + 49),
    0LL,
    &GUID_af7f312d_0a79_47c9_9bb6_8bd386c0ffee,
    &v6);
  (*(void (__fastcall **)(__int64, __int64, _QWORD, struct IImmersiveMonitor *))(*(_QWORD *)v6 + 24LL))(
    v6,
    2LL,
    *((unsigned int *)this + 194),
    a2);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  return 0LL;
}
