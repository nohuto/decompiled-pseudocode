/*
 * XREFs of ?Initialize@CMessageConversationHost@@AEAAJXZ @ 0x180061C08
 * Callers:
 *     ?Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x180061B9C (-Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMessageConversationHost::Initialize(CMessageConversationHost *this)
{
  int ConversationHost; // eax
  unsigned int v3; // ecx
  signed int v4; // ebx
  __int64 *v5; // rcx
  _QWORD *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r8
  signed int LastError; // eax
  int v11; // r9d
  unsigned int v12; // [rsp+20h] [rbp-68h]
  __int64 v13; // [rsp+60h] [rbp-28h] BYREF
  int v14; // [rsp+68h] [rbp-20h]
  int v15; // [rsp+98h] [rbp+10h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+A0h] [rbp+18h] BYREF

  SecurityDescriptor = 0LL;
  SetLastError(0);
  if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
         L"D:(A;;0x01;;;WD)(A;;0x01;;;AC)(A;;0x01;;;S-1-15-3-1024-1502825166-1963708345-2616377461-2562897074-4192028372-3"
          "968301570-1997628692-1435953622)",
         1u,
         &SecurityDescriptor,
         0LL) )
  {
    ConversationHost = (*(__int64 (__fastcall **)(_QWORD, PSECURITY_DESCRIPTOR, char *))(**((_QWORD **)this + 3) + 56LL))(
                         *((_QWORD *)this + 3),
                         SecurityDescriptor,
                         (char *)this + 32);
    v4 = ConversationHost;
    if ( ConversationHost < 0 )
    {
      v12 = 115;
    }
    else
    {
      v13 = 0LL;
      v5 = (__int64 *)*((_QWORD *)this + 3);
      v15 = 0;
      v6 = (_QWORD *)((char *)this + 40);
      v7 = *v5;
      v8 = *((_QWORD *)this + 4);
      v14 = 1;
      ConversationHost = (*(__int64 (__fastcall **)(__int64 *, const wchar_t *, __int64, __int64 *, int, int, int, char *, int *, char *))(v7 + 312))(
                           v5,
                           L"System\\CompositionEngine",
                           v8,
                           &v13,
                           1,
                           1,
                           1,
                           (char *)this + 16,
                           &v15,
                           (char *)this + 40);
      v4 = ConversationHost;
      if ( ConversationHost < 0 )
      {
        v12 = 133;
      }
      else
      {
        ConversationHost = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v6)(
                             *v6,
                             &GUID_5e648581_8bf0_4f2a_9f51_28d09a2202d6,
                             (char *)this + 48);
        v4 = ConversationHost;
        if ( ConversationHost < 0 )
        {
          v12 = 143;
        }
        else
        {
          ConversationHost = CoreUICallCreateConversationHost(*((_QWORD *)this + 3), *v6, (char *)this + 56, 0LL);
          v4 = ConversationHost;
          if ( ConversationHost >= 0 )
          {
            v4 = 0;
            goto LABEL_7;
          }
          v12 = 155;
        }
      }
    }
    v11 = ConversationHost;
  }
  else
  {
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    v12 = 111;
    if ( v4 >= 0 )
      v4 = -2003304445;
    v11 = v4;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v11, v12);
LABEL_7:
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  return (unsigned int)v4;
}
