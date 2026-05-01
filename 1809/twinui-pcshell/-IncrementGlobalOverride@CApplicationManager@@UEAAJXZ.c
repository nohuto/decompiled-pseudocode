/*
 * XREFs of ?IncrementGlobalOverride@CApplicationManager@@UEAAJXZ @ 0x1800EF580
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::IncrementGlobalOverride(CApplicationManager *this)
{
  __int64 v3; // [rsp+50h] [rbp+8h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( ++*((_DWORD *)this + 156) == 1 )
  {
    v3 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v3);
    (*(void (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**((_QWORD **)this + 49) + 32LL))(
      *((_QWORD *)this + 49),
      0LL,
      &GUID_af7f312d_0a79_47c9_9bb6_8bd386c0ffee,
      &v3);
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v3 + 24LL))(v3, 1LL, *((unsigned int *)this + 192));
    HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[5].Ptr) = 2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v3);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
