/*
 * XREFs of ?GetEventByChangeCount@Details@WindowPropertyHelpers@@YAJPEAUHWND__@@JAEAV?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@@Z @ 0x180252324
 * Callers:
 *     ?InitializeEventChangedSignalSource@WindowPropertyChangedSource@@SAJPEAUHWND__@@AEAV?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@@Z @ 0x180252AD8 (-InitializeEventChangedSignalSource@WindowPropertyChangedSource@@SAJPEAUHWND__@@AEAV-$unique_any.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180032084 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1801017C8 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180103910 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180104D80 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 */

__int64 __fastcall WindowPropertyHelpers::Details::GetEventByChangeCount(
        unsigned int a1,
        __int64 a2,
        wil::details **a3)
{
  int v4; // eax
  unsigned int LastError; // ebx
  const char *v7; // r9
  __int64 v8; // rdx
  wil::details *v9; // rcx
  wil::details *v10; // rbx
  __int64 v11; // r8
  const char *v12; // r9
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+30h] [rbp-69h] BYREF
  PSECURITY_DESCRIPTOR ObjectDescriptor; // [rsp+38h] [rbp-61h] BYREF
  ULONG SecurityDescriptorSize; // [rsp+40h] [rbp-59h] BYREF
  struct _SECURITY_ATTRIBUTES EventAttributes; // [rsp+48h] [rbp-51h] BYREF
  WCHAR Name[64]; // [rsp+60h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v4 = StringCchPrintfW(Name, 64LL, L"PropertiesChangeEvent-0x%08x-%ld", a1, 1);
  LastError = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x104,
      (__int64)"internal\\onecoreuapshell\\inc\\windowproperty.h",
      (const char *)(unsigned int)v4);
    return LastError;
  }
  SecurityDescriptor = 0LL;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;0xFFFFFFFFF;;;WD)(A;;0xFFFFFFFFF;;;AC)",
          1u,
          &SecurityDescriptor,
          &SecurityDescriptorSize) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x10A,
                  (__int64)"internal\\onecoreuapshell\\inc\\windowproperty.h",
                  v7);
    goto LABEL_6;
  }
  EventAttributes.nLength = 24;
  *(_QWORD *)&EventAttributes.bInheritHandle = 0LL;
  EventAttributes.lpSecurityDescriptor = SecurityDescriptor;
  v10 = (wil::details *)CreateEventExW(&EventAttributes, Name, 1u, 0x1F0003u);
  if ( v10 )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      a3,
      v10);
    LastError = 0;
  }
  else
  {
    LastError = wil::details::GetLastErrorFailHr(v9, v8, v11, v12);
  }
  if ( (LastError & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10F,
      (__int64)"internal\\onecoreuapshell\\inc\\windowproperty.h",
      (const char *)LastError);
LABEL_6:
    if ( SecurityDescriptor )
    {
      ObjectDescriptor = SecurityDescriptor;
      DestroyPrivateObjectSecurity(&ObjectDescriptor);
    }
    return LastError;
  }
  if ( SecurityDescriptor )
  {
    ObjectDescriptor = SecurityDescriptor;
    DestroyPrivateObjectSecurity(&ObjectDescriptor);
  }
  return 0LL;
}
