/*
 * XREFs of ?RuntimeClassInitialize@TextInputStateAdapter@@QEAAJPEAUITextInputStateAdapterOwner@@@Z @ 0x1801495CC
 * Callers:
 *     ??$MakeAndInitialize@VTextInputStateAdapter@@UITextInputStateAdapter@@AEAPEAUITextInputStateAdapterOwner@@@Details@WRL@Microsoft@@YAJPEAPEAUITextInputStateAdapter@@AEAPEAUITextInputStateAdapterOwner@@@Z @ 0x180147D74 (--$MakeAndInitialize@VTextInputStateAdapter@@UITextInputStateAdapter@@AEAPEAUITextInputStateAdap.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x18002867C (-GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x18005A298 (-FailFastWithHR@@YAXJ_K0@Z.c)
 *     McTemplateU0sqq @ 0x18005A684 (McTemplateU0sqq.c)
 *     ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0BAE@GPEAVTextInputStateAdapter@@@Details@WRL@Microsoft@@YAJPEAPEAVMessageProxyReconnectAdapter@@AEBU_GUID@@AEAY0BAE@G$$QEAPEAVTextInputStateAdapter@@@Z @ 0x180147C94 (--$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEAY0BAE@GPEAVTextInputStateAd.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TextInputStateAdapter::RuntimeClassInitialize(
        TextInputStateAdapter *this,
        struct ITextInputStateAdapterOwner *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  signed int v7; // ebx
  __int64 v8; // r9
  HMODULE LibraryW; // rax
  signed int LastError; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  FARPROC ProcAddress; // rsi
  signed int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v20; // [rsp+30h] [rbp-248h] BYREF
  struct IMessageProxyReconnectAdapterOwner *v21[3]; // [rsp+38h] [rbp-240h] BYREF
  wchar_t v22[264]; // [rsp+50h] [rbp-228h] BYREF
  ULONG_PTR retaddr; // [rsp+278h] [rbp+0h]

  v21[1] = (struct IMessageProxyReconnectAdapterOwner *)-2LL;
  v20 = 0LL;
  v21[2] = 0LL;
  v4 = CoreUICreate((char *)this + 32);
  v7 = v4;
  if ( v4 < 0 )
  {
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
      goto LABEL_26;
    v8 = 836LL;
LABEL_4:
    McTemplateU0sqq(v6, v5, "TextInputStateAdapter::RuntimeClassInitialize", v8, v4);
    goto LABEL_26;
  }
  LibraryW = LoadLibraryW(L"CoreUIComponents.dll");
  *((_QWORD *)this + 12) = LibraryW;
  if ( LibraryW )
    goto LABEL_12;
  LastError = GetLastError();
  v7 = LastError;
  if ( LastError > 0 )
    v7 = (unsigned __int16)LastError | 0x80070000;
  if ( v7 >= 0 )
  {
LABEL_12:
    ProcAddress = GetProcAddress(*((HMODULE *)this + 12), "CoreUIFactoryCreate");
    if ( ProcAddress )
      goto LABEL_18;
    v14 = GetLastError();
    v7 = v14;
    if ( v14 > 0 )
      v7 = (unsigned __int16)v14 | 0x80070000;
    if ( v7 >= 0 )
    {
LABEL_18:
      v4 = ((__int64 (__fastcall *)(__int64 *))ProcAddress)(&v20);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_26;
        v8 = 844LL;
        goto LABEL_4;
      }
      memset_0(v22, 0, 0x208uLL);
      GetDesktopUniqueName(L"System\\RemoteTextInputState", v22);
      v21[0] = this;
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 6);
      v17 = Microsoft::WRL::Details::MakeAndInitialize<MessageProxyReconnectAdapter,MessageProxyReconnectAdapter,_GUID const &,unsigned short (&)[260],TextInputStateAdapter *>(
              (MessageProxyReconnectAdapter **)this + 6,
              &GUID_cf1538c5_01ef_4a39_acb7_1b68f01b7ef4,
              v22,
              v21);
      v7 = v17;
      if ( v17 >= 0 )
      {
        *((_QWORD *)this + 3) = a2;
        v7 = 0;
      }
      else
      {
        if ( v17 == -2147024882 )
          FailFastWithHR(-2147024882, retaddr, 0x357uLL);
        FailFastWithHR(v7, retaddr, 0x357uLL);
      }
    }
    else if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
    {
      McTemplateU0sqq(v16, v15, "TextInputStateAdapter::RuntimeClassInitialize", 843LL, v7);
    }
  }
  else if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
  {
    McTemplateU0sqq(v12, v11, "TextInputStateAdapter::RuntimeClassInitialize", 840LL, v7);
  }
LABEL_26:
  v18 = v20;
  v20 = 0LL;
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  return (unsigned int)v7;
}
