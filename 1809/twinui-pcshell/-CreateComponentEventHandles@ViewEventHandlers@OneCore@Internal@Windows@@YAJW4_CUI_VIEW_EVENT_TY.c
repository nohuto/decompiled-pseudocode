/*
 * XREFs of ?CreateComponentEventHandles@ViewEventHandlers@OneCore@Internal@Windows@@YAJW4_CUI_VIEW_EVENT_TYPE@@IIW4EventOptions@wil@@PEAPEAX@Z @ 0x1803A4E68
 * Callers:
 *     ?RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJAEAUComponentInfo@12345@I@Z @ 0x1803A7214 (-RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18002C954 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800DEBE0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800DF4A0 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800E26D8 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::CreateComponentEventHandles(
        int a1,
        unsigned int a2,
        int a3,
        char a4,
        wil::details **a5)
{
  wil::details *v5; // rbx
  int v8; // ecx
  int LastErrorFailHr; // edi
  const unsigned __int16 *v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rdx
  wil::details *v13; // rcx
  wil::details *Event; // rdi
  __int64 v15; // r8
  const char *v16; // r9
  void *v17; // rdx
  wil::details *v18; // rax
  wil::details *v20; // [rsp+30h] [rbp-108h] BYREF
  WCHAR Name[104]; // [rsp+40h] [rbp-F8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+0h]

  v5 = 0LL;
  v20 = 0LL;
  if ( a1 )
  {
    v8 = a1 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
      {
        LastErrorFailHr = -2147023728;
LABEL_9:
        v11 = 42LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
          (const char *)(unsigned int)LastErrorFailHr);
        goto LABEL_17;
      }
      v10 = L"CUIModalDialogEvent!%I32X!%I32X";
    }
    else
    {
      v10 = L"CUIWindowCloseEvent!%I32X!%I32X";
    }
  }
  else
  {
    v10 = L"CUIWindowReadyEvent!%I32X!%I32X";
  }
  LastErrorFailHr = StringCchPrintfW(Name, 100LL, v10, a2, a3);
  if ( LastErrorFailHr < 0 )
    goto LABEL_9;
  Event = (wil::details *)CreateEventExW(0LL, Name, a4 & 3, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      &v20,
      Event);
    v5 = v20;
    LastErrorFailHr = 0;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v13, v12, v15, v16);
  }
  if ( LastErrorFailHr < 0 )
  {
    v11 = 43LL;
    goto LABEL_15;
  }
  v18 = v5;
  v5 = 0LL;
  LastErrorFailHr = 0;
  *a5 = v18;
LABEL_17:
  if ( v5 )
    wil::details::CloseHandle(v5, v17);
  return (unsigned int)LastErrorFailHr;
}
