/*
 * XREFs of ?RuntimeClassInitialize@HotKeyProcessor@@QEAAJPEAUIHotkeyProcessorOwner@@@Z @ 0x180146EE4
 * Callers:
 *     ??$MakeAndInitialize@VHotKeyProcessor@@V1@PEAVHotkeyContextualProcessor@@@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyProcessor@@$$QEAPEAVHotkeyContextualProcessor@@@Z @ 0x18010830C (--$MakeAndInitialize@VHotKeyProcessor@@V1@PEAVHotkeyContextualProcessor@@@Details@WRL@Microsoft@.c)
 * Callees:
 *     ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x18002819C (-GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x18005A030 (-FailFastWithHR@@YAXJ_K0@Z.c)
 *     ?Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z @ 0x180147AEC (-Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z.c)
 */

__int64 __fastcall HotKeyProcessor::RuntimeClassInitialize(HotKeyProcessor *this, struct IHotkeyProcessorOwner *a2)
{
  struct IHotkeyProcessorOwner *v3; // rcx
  _QWORD *v5; // rsi
  __int64 v6; // rcx
  int v7; // ebx
  ULONG_PTR v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx
  _DWORD v12[4]; // [rsp+40h] [rbp-238h] BYREF
  wchar_t v13[264]; // [rsp+50h] [rbp-228h] BYREF
  ULONG_PTR retaddr; // [rsp+278h] [rbp+0h]

  v12[0] = 0;
  v3 = (struct IHotkeyProcessorOwner *)*((_QWORD *)this + 17);
  if ( v3 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IHotkeyProcessorOwner *))(*(_QWORD *)a2 + 8LL))(a2);
      v3 = (struct IHotkeyProcessorOwner *)*((_QWORD *)this + 17);
    }
    *((_QWORD *)this + 17) = a2;
    if ( v3 )
      (*(void (__fastcall **)(struct IHotkeyProcessorOwner *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v5 = (_QWORD *)((char *)this + 88);
  v6 = *((_QWORD *)this + 11);
  if ( v6 )
  {
    *v5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = CoreUIFactoryCreate((char *)this + 88);
  if ( v7 < 0 )
  {
    v8 = 40LL;
LABEL_18:
    if ( v7 == -2147024882 )
      FailFastWithHR(-2147024882, retaddr, v8);
    FailFastWithHR(v7, retaddr, v8);
    return (unsigned int)v7;
  }
  v7 = SharedMessagePortRefPtr::Initialize((char *)this + 104);
  if ( v7 < 0 )
  {
    v8 = 41LL;
    goto LABEL_18;
  }
  memset_0(v13, 0, 0x208uLL);
  GetDesktopUniqueName(L"System\\RemoteHotKeyProcessor", v13);
  v7 = (*(__int64 (__fastcall **)(_QWORD, GUID *, _DWORD *))(*(_QWORD *)*v5 + 24LL))(
         *v5,
         &GUID_647859d8_5046_411b_bd66_e49c8745ad3d,
         v12);
  if ( v7 < 0 )
  {
    v8 = 50LL;
    goto LABEL_18;
  }
  v9 = *v5;
  v10 = *((_QWORD *)this + 12);
  if ( v10 )
  {
    *((_QWORD *)this + 12) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v7 = (*(__int64 (__fastcall **)(__int64, HotKeyProcessor *, _QWORD, _QWORD, wchar_t *, _QWORD, char *))(*(_QWORD *)v9 + 32LL))(
         v9,
         this,
         0LL,
         v12[0],
         v13,
         *((_QWORD *)this + 14),
         (char *)this + 96);
  if ( v7 < 0 )
  {
    v8 = 58LL;
    goto LABEL_18;
  }
  return (unsigned int)v7;
}
