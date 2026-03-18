/*
 * XREFs of NtUserInternalGetWindowText @ 0x1C00DDF00
 * Callers:
 *     <none>
 * Callees:
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C00DE040 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     DesktopVerifyHeapLargeUnicodeString @ 0x1C00DE0A4 (DesktopVerifyHeapLargeUnicodeString.c)
 *     TextCopy @ 0x1C00DE14C (TextCopy.c)
 */

__int64 __fastcall NtUserInternalGetWindowText(__int64 a1, _WORD *a2, int a3)
{
  unsigned __int64 v3; // r14
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rsi
  unsigned int v9; // ebx
  tagWND::ProtectedLargeUnicodeStringWNDstrName *v10; // rdi
  struct _LARGE_UNICODE_STRING *StrName; // rax
  struct _LARGE_UNICODE_STRING *v12; // rax
  __int64 v14; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+38h] [rbp-10h]

  v3 = a3;
  EnterSharedCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v8 = v6;
  v9 = 0;
  if ( v6 )
  {
    v10 = (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(v6 + 184);
    if ( *(_QWORD *)(v6 + 184) )
    {
      v14 = 0LL;
      v15 = 0LL;
      StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(v10, (struct _LARGE_UNICODE_STRING *)&v14);
      DesktopVerifyHeapLargeUnicodeString(*(_QWORD *)(v8 + 24), StrName);
    }
    if ( (_DWORD)v3 )
    {
      if ( v3 > 0x7FFFFFFFFFFFFFFFLL )
        ExRaiseAccessViolation();
      ProbeForWrite(a2, 2 * v3, 2u);
      *a2 = 0;
      if ( *(_DWORD *)(*(_QWORD *)(v8 + 40) + 184LL) )
      {
        v14 = 0LL;
        v15 = 0LL;
        v12 = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(v10, (struct _LARGE_UNICODE_STRING *)&v14);
        v9 = TextCopy(v12, a2, (unsigned int)v3);
      }
    }
  }
  UserSessionSwitchLeaveCrit(v7);
  return v9;
}
