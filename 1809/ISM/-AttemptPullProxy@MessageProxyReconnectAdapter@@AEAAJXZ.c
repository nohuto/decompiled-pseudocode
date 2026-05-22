/*
 * XREFs of ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x18001070C
 * Callers:
 *     ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x18001021C (-RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyRecon.c)
 *     ?s_AttemptPullProxy@MessageProxyReconnectAdapter@@CAJPEAX@Z @ 0x1800106B0 (-s_AttemptPullProxy@MessageProxyReconnectAdapter@@CAJPEAX@Z.c)
 * Callees:
 *     McTemplateU0sqq @ 0x18000FEA0 (McTemplateU0sqq.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x18000FF3C (-FailFastWithHR@@YAXJ_K0@Z.c)
 *     ?StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180010A34 (-StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MessageProxyReconnectAdapter::AttemptPullProxy(MessageProxyReconnectAdapter *this)
{
  __int64 *v2; // rsi
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rcx
  PCWSTR StringRawBuffer; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  ULONG_PTR v13; // rsi
  ULONG_PTR retaddr; // [rsp+58h] [rbp+18h]
  unsigned int v16; // [rsp+60h] [rbp+20h] BYREF
  __int64 v17; // [rsp+68h] [rbp+28h] BYREF

  v2 = (__int64 *)((char *)this + 64);
  if ( *((_QWORD *)this + 8) )
    FailFastWithHR(-2147467259, retaddr, 0xC7uLL);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 8LL))(*((_QWORD *)this + 6));
  ++*((_DWORD *)this + 10);
  v16 = 0;
  v17 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, char *, unsigned int *))(**((_QWORD **)this + 7) + 24LL))(
         *((_QWORD *)this + 7),
         (char *)this + 24,
         &v16);
  v6 = v3;
  if ( v3 < 0 )
  {
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
      goto LABEL_18;
    v7 = 282LL;
    goto LABEL_17;
  }
  v8 = *((_QWORD *)this + 7);
  v9 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 11), 0LL);
  v6 = (*(__int64 (__fastcall **)(__int64, PCWSTR, _QWORD, __int64 *))(*(_QWORD *)v8 + 40LL))(
         v8,
         StringRawBuffer,
         v16,
         &v17);
  if ( v6 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 6) + 24LL))(*((_QWORD *)this + 6), v17);
    v11 = *v2;
    if ( *v2 )
    {
      *v2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v17)(
           v17,
           &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08,
           v2);
    v6 = v3;
    if ( v3 < 0 )
    {
      if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
        goto LABEL_18;
      v7 = 296LL;
      goto LABEL_17;
    }
    v3 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v17 + 56LL))(v17, (char *)this + 8);
    v6 = v3;
    if ( v3 < 0 && (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
    {
      v7 = 297LL;
LABEL_17:
      McTemplateU0sqq(v5, v4, (__int64)"MessageProxyReconnectAdapter::CreateRemoteProxy", v7, v3);
    }
  }
LABEL_18:
  v12 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( v6 )
  {
    if ( ((v6 + 2018375675) & 0xFFFFFFFB) != 0 )
    {
      if ( v6 >= 0 )
        goto LABEL_33;
      v13 = 251LL;
    }
    else
    {
      if ( *((_DWORD *)this + 10) < MessageProxyReconnectAdapter::ms_uiProxyConnectionAttemptLimit )
        goto LABEL_33;
      if ( !MessageProxyReconnectAdapter::ms_uiProxyConnectionAttemptLimit )
        goto LABEL_33;
      MessageProxyReconnectAdapter::StopConnectionRetryTimer(this);
      if ( v6 >= 0 )
        goto LABEL_33;
      v13 = 242LL;
    }
  }
  else
  {
    v6 = MessageProxyReconnectAdapter::StopConnectionRetryTimer(this);
    if ( v6 >= 0 )
      goto LABEL_33;
    v13 = 225LL;
  }
  if ( v6 == -2147024882 )
    FailFastWithHR(-2147024882, retaddr, v13);
  FailFastWithHR(v6, retaddr, v13);
LABEL_33:
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 16LL))(*((_QWORD *)this + 6));
  return 0LL;
}
