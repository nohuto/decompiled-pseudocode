/*
 * XREFs of ?DecrementGlobalOverride@CApplicationManager@@UEAAJXZ @ 0x180110870
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::DecrementGlobalOverride(CApplicationManager *this)
{
  unsigned int v2; // edi
  int v3; // eax
  int v4; // eax
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  v2 = -2147024891;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = *((_DWORD *)this + 156);
  if ( v3 )
  {
    v4 = v3 - 1;
    *((_DWORD *)this + 156) = v4;
    if ( !v4 )
    {
      HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[5].Ptr) = 1;
      v6 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
      (*(void (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**((_QWORD **)this + 49) + 32LL))(
        *((_QWORD *)this + 49),
        0LL,
        &GUID_af7f312d_0a79_47c9_9bb6_8bd386c0ffee,
        &v6);
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v6 + 24LL))(v6, 2LL, *((unsigned int *)this + 194));
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
    }
    v2 = 0;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return v2;
}
