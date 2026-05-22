/*
 * XREFs of ?CreateRemoteProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180013F40
 * Callers:
 *     ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180013E9C (-AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0sqq @ 0x18005A684 (McTemplateU0sqq.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MessageProxyReconnectAdapter::CreateRemoteProxy(MessageProxyReconnectAdapter *this)
{
  int v2; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // ebx
  __int64 v6; // rbx
  __int64 v7; // rcx
  PCWSTR StringRawBuffer; // rax
  __int64 v9; // rcx
  __int64 v11; // rcx
  int v12; // r9d
  unsigned int v13; // [rsp+50h] [rbp+10h] BYREF
  __int64 v14; // [rsp+58h] [rbp+18h] BYREF

  v13 = 0;
  v14 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, char *, unsigned int *))(**((_QWORD **)this + 7) + 24LL))(
         *((_QWORD *)this + 7),
         (char *)this + 24,
         &v13);
  v5 = v2;
  if ( v2 < 0 )
  {
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
      goto LABEL_5;
    v12 = 282;
    goto LABEL_19;
  }
  v6 = *((_QWORD *)this + 7);
  v7 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 11), 0LL);
  v5 = (*(__int64 (__fastcall **)(__int64, PCWSTR, _QWORD, __int64 *))(*(_QWORD *)v6 + 40LL))(
         v6,
         StringRawBuffer,
         v13,
         &v14);
  if ( v5 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 6) + 24LL))(*((_QWORD *)this + 6), v14);
    v11 = *((_QWORD *)this + 8);
    if ( v11 )
    {
      *((_QWORD *)this + 8) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v2 = (**(__int64 (__fastcall ***)(__int64, GUID *, char *))v14)(
           v14,
           &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08,
           (char *)this + 64);
    v5 = v2;
    if ( v2 < 0 )
    {
      if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
        goto LABEL_5;
      v12 = 296;
    }
    else
    {
      v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v14 + 56LL))(v14, (char *)this + 8);
      v5 = v2;
      if ( v2 >= 0 || (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
        goto LABEL_5;
      v12 = 297;
    }
LABEL_19:
    McTemplateU0sqq(v4, v3, (unsigned int)"MessageProxyReconnectAdapter::CreateRemoteProxy", v12, v2);
  }
LABEL_5:
  v9 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return (unsigned int)v5;
}
