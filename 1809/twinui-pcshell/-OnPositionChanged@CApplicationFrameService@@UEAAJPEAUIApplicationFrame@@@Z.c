/*
 * XREFs of ?OnPositionChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z @ 0x180048EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFrameByWindow@CApplicationFrameService@@UEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z @ 0x180048FA0 (-GetFrameByWindow@CApplicationFrameService@@UEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationFrameService::OnPositionChanged(
        CApplicationFrameService *this,
        struct IApplicationFrame *a2)
{
  __int64 v3; // rbx
  __int64 v5; // [rsp+50h] [rbp+10h] BYREF
  struct IApplicationFrameProxy *v6; // [rsp+60h] [rbp+20h] BYREF
  HWND v7; // [rsp+68h] [rbp+28h] BYREF

  if ( *((_DWORD *)this + 36)
    && (*(int (__fastcall **)(struct IApplicationFrame *, HWND *))(*(_QWORD *)a2 + 24LL))(a2, &v7) >= 0 )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v6 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
    if ( (int)CApplicationFrameService::GetFrameByWindow((CApplicationFrameService *)((char *)this - 8), v7, &v6) >= 0 )
    {
      v5 = 0LL;
      v3 = *((_QWORD *)this + 15);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
      if ( (*(int (__fastcall **)(__int64, struct IApplicationFrameProxy *, GUID *, __int64 *))(*(_QWORD *)v3 + 48LL))(
             v3,
             v6,
             &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
             &v5) >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 488LL))(v5);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v5);
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  }
  return 0LL;
}
