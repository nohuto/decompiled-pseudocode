/*
 * XREFs of ?RuntimeClassInitialize@CClassicWindowManager@@QEAAJPEAUIImmersiveSystemModeInternal@@@Z @ 0x1801498F8
 * Callers:
 *     ??$MakeAndInitialize@VCClassicWindowManager@@UIClassicWindowManagerPrivate@@AEAPEAUIImmersiveSystemModeInternal@@@Details@WRL@Microsoft@@YAJPEAPEAUIClassicWindowManagerPrivate@@AEAPEAUIImmersiveSystemModeInternal@@@Z @ 0x18014812C (--$MakeAndInitialize@VCClassicWindowManager@@UIClassicWindowManagerPrivate@@AEAPEAUIImmersiveSys.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIContextIdentifierStatics@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIContextIdentifierStatics@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800832E0 (--$GetActivationFactory@V-$ComPtr@UIContextIdentifierStatics@Holographic@Shell@Internal@Windows@.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x180132F80 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 */

__int64 __fastcall CClassicWindowManager::RuntimeClassInitialize(
        CClassicWindowManager *this,
        struct IImmersiveSystemModeInternal *a2)
{
  int inited; // ebx
  HWND ShellWindow; // rbx
  struct IImmersiveSystemModeInternal *v6; // rax
  struct IImmersiveSystemModeInternal *v8; // [rsp+30h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-30h] BYREF
  __int64 v10; // [rsp+50h] [rbp-18h]

  inited = CObjectWithThreadUseDetection::InitApartmentId((CClassicWindowManager *)((char *)this + 136));
  if ( inited >= 0 )
  {
    ShellWindow = GetShellWindow();
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    LODWORD(ShellWindow) = -((*(unsigned __int8 (__fastcall **)(char *, HWND, __int64, __int64, _QWORD))(*((_QWORD *)this + 9) + 24LL))(
                               (char *)this + 72,
                               ShellWindow,
                               1LL,
                               1LL,
                               0LL) == 0);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    inited = (unsigned int)ShellWindow & 0x8007139F;
    if ( inited >= 0 )
    {
      v6 = (struct IImmersiveSystemModeInternal *)*((_QWORD *)this + 33);
      if ( v6 != a2 )
      {
        if ( a2 )
        {
          (*(void (__fastcall **)(struct IImmersiveSystemModeInternal *))(*(_QWORD *)a2 + 8LL))(a2);
          v6 = (struct IImmersiveSystemModeInternal *)*((_QWORD *)this + 33);
        }
        v8 = v6;
        *((_QWORD *)this + 33) = a2;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
      }
      v10 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"Windows.Internal.Shell.Holographic.ContextIdentifier",
        0x35u,
        0x34u);
      return (unsigned int)Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IContextIdentifierStatics>>(
                             v10,
                             (__int64 *)this + 35);
    }
  }
  return (unsigned int)inited;
}
