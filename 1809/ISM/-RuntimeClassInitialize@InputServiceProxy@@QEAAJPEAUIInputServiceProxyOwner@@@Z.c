/*
 * XREFs of ?RuntimeClassInitialize@InputServiceProxy@@QEAAJPEAUIInputServiceProxyOwner@@@Z @ 0x1800D33BC
 * Callers:
 *     CreateInputServiceProxy @ 0x1800D3270 (CreateInputServiceProxy.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001ED8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0MessageProxyReconnectAdapter@@QEAA@XZ @ 0x18000FFF8 (--0MessageProxyReconnectAdapter@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x18001021C (-RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyRecon.c)
 *     ?GetThreadDesktopName@@YAHPEA_WK@Z @ 0x1801089C0 (-GetThreadDesktopName@@YAHPEA_WK@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputServiceProxy::RuntimeClassInitialize(
        InputServiceProxy *this,
        struct IInputServiceProxyOwner *a2)
{
  __int64 v3; // rcx
  unsigned int v4; // edx
  int v5; // ebx
  __int64 v6; // rdx
  wchar_t *v7; // rcx
  wchar_t v8; // ax
  wchar_t *v9; // rax
  __int64 v10; // rcx
  MessageProxyReconnectAdapter *v11; // rax
  MessageProxyReconnectAdapter *v12; // rbx
  int v13; // esi
  ULONG ReturnLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C8h]
  __int64 v17; // [rsp+48h] [rbp-C0h]
  _QWORD ProcessInformation[7]; // [rsp+50h] [rbp-B8h] BYREF
  wchar_t Buffer[264]; // [rsp+88h] [rbp-80h] BYREF
  wchar_t v20[264]; // [rsp+298h] [rbp+190h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4D0h] [rbp+3C8h]

  v16 = -2LL;
  *((_QWORD *)this + 3) = a2;
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  memset_0(Buffer, 0, 0x208uLL);
  v20[0] = 0;
  if ( NtQueryInformationProcess(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         ProcessBasicInformation,
         ProcessInformation,
         0x30u,
         ReturnLength) )
  {
    v5 = -1;
  }
  else
  {
    v5 = *(_DWORD *)(ProcessInformation[1] + 704LL);
  }
  if ( v5 == -1 || !(unsigned int)GetThreadDesktopName(v20, v4) )
  {
    v6 = 260LL;
    v7 = Buffer;
    do
    {
      if ( v6 == -2147483386 )
        break;
      v8 = *(wchar_t *)((char *)v7 + (char *)L"System\\RemoteTextInputProcessor" - (char *)Buffer);
      if ( !v8 )
        break;
      *v7++ = v8;
      --v6;
    }
    while ( v6 );
    v9 = v7 - 1;
    if ( v6 )
      v9 = v7;
    *v9 = 0;
  }
  else
  {
    StringCchPrintfW(Buffer, 260LL, L"%s%s%d", L"System\\RemoteTextInputProcessor", v20, v5);
  }
  v10 = *((_QWORD *)this + 5);
  if ( v10 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  *((_QWORD *)this + 5) = 0LL;
  v11 = (MessageProxyReconnectAdapter *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v11 )
  {
    v13 = -2147024882;
    goto LABEL_31;
  }
  v12 = MessageProxyReconnectAdapter::MessageProxyReconnectAdapter(v11);
  *(_QWORD *)ReturnLength = v12;
  v17 = 0LL;
  v13 = MessageProxyReconnectAdapter::RuntimeClassInitialize(
          v12,
          &GUID_b30e303e_7340_4446_bd7b_c37fdee42abc,
          Buffer,
          (InputServiceProxy *)((char *)this + 8));
  if ( v13 >= 0 )
  {
    if ( v12 )
      (*(void (__fastcall **)(MessageProxyReconnectAdapter *))(*(_QWORD *)v12 + 8LL))(v12);
    *((_QWORD *)this + 5) = v12;
    if ( v12 )
      (*(void (__fastcall **)(MessageProxyReconnectAdapter *))(*(_QWORD *)v12 + 16LL))(v12);
    v13 = 0;
  }
  else if ( v12 )
  {
    (*(void (__fastcall **)(MessageProxyReconnectAdapter *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( v13 < 0 )
  {
LABEL_31:
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x30,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
      (const char *)(unsigned int)v13);
    JUMPOUT(0x1800D35F3LL);
  }
  return 0LL;
}
