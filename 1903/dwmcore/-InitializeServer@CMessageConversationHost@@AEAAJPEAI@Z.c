/*
 * XREFs of ?InitializeServer@CMessageConversationHost@@AEAAJPEAI@Z @ 0x1800E1630
 * Callers:
 *     ?Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800E1574 (-Create@CMessageConversationHost@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMessageConversationHost::InitializeServer(CMessageConversationHost *this, unsigned int *a2)
{
  PSECURITY_DESCRIPTOR v4; // rdi
  signed int v5; // eax
  __int64 v6; // rcx
  int v7; // ebx
  __int64 *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  DWORD LastError; // ebx
  signed int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // [rsp+20h] [rbp-50h]
  __int64 v16; // [rsp+60h] [rbp-10h] BYREF
  int v17; // [rsp+68h] [rbp-8h]
  __int64 v18; // [rsp+A0h] [rbp+30h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+A8h] [rbp+38h] BYREF

  SecurityDescriptor = 0LL;
  v18 = 0LL;
  SetLastError(0);
  v4 = SecurityDescriptor;
  if ( SecurityDescriptor )
  {
    LastError = GetLastError();
    LocalFree(v4);
    SetLastError(LastError);
  }
  if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
         L"D:(A;;0x01;;;WD)(A;;0x01;;;AC)(A;;0x01;;;S-1-15-3-1024-1502825166-1963708345-2616377461-2562897074-4192028372-3"
          "968301570-1997628692-1435953622)",
         1u,
         &SecurityDescriptor,
         0LL) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, PSECURITY_DESCRIPTOR, __int64 *))(**((_QWORD **)this + 3) + 56LL))(
           *((_QWORD *)this + 3),
           SecurityDescriptor,
           &v18);
    v7 = v5;
    if ( v5 < 0 )
    {
      v15 = 38;
    }
    else
    {
      v16 = 0LL;
      v8 = (__int64 *)*((_QWORD *)this + 3);
      v9 = *v8;
      v17 = 1;
      v5 = (*(__int64 (__fastcall **)(__int64 *, const wchar_t *, __int64, __int64 *, int, int, int, char *, unsigned int *, char *))(v9 + 280))(
             v8,
             L"System\\CompositionEngine",
             v18,
             &v16,
             1,
             1,
             1,
             (char *)this + 16,
             a2,
             (char *)this + 32);
      v7 = v5;
      if ( v5 >= 0 )
        goto LABEL_6;
      v15 = 49;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, v15, 0LL);
  }
  else
  {
    v13 = GetLastError();
    v7 = v13;
    if ( v13 > 0 )
      v7 = (unsigned __int16)v13 | 0x80070000;
    if ( v7 >= 0 )
      v7 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v7, 0x22u, 0LL);
  }
LABEL_6:
  v10 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  return (unsigned int)v7;
}
