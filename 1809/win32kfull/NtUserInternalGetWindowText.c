/*
 * XREFs of NtUserInternalGetWindowText @ 0x1C00F9B70
 * Callers:
 *     <none>
 * Callees:
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C00F9CCC (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     DesktopVerifyHeapLargeUnicodeString @ 0x1C00F9D28 (DesktopVerifyHeapLargeUnicodeString.c)
 *     TextCopy @ 0x1C00F9DD0 (TextCopy.c)
 */

__int64 __fastcall NtUserInternalGetWindowText(__int64 a1, _WORD *a2, int a3)
{
  unsigned __int64 v3; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  unsigned int v12; // ebx
  tagWND::ProtectedLargeUnicodeStringWNDstrName *v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdx
  struct _LARGE_UNICODE_STRING *StrName; // rax
  int v18; // [rsp+30h] [rbp-18h] BYREF
  int v19; // [rsp+34h] [rbp-14h]
  __int64 v20; // [rsp+38h] [rbp-10h]

  v3 = a3;
  EnterSharedCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v11 = v6;
  v12 = 0;
  if ( v6 )
  {
    v13 = (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(v6 + 168);
    v14 = *(_QWORD *)(v6 + 168);
    if ( v14 )
    {
      v20 = v14;
      v15 = *(_QWORD *)(v11 + 40);
      v18 = *(_DWORD *)(v15 + 184);
      v19 ^= (*(_DWORD *)(v15 + 188) ^ v19) & 0x7FFFFFFF;
      v19 = *(_DWORD *)(v15 + 188) ^ (*(_DWORD *)(v15 + 188) ^ v19) & 0x7FFFFFFF;
      DesktopVerifyHeapLargeUnicodeString(*(_QWORD *)(v11 + 24), &v18);
    }
    if ( (_DWORD)v3 )
    {
      if ( v3 > 0x7FFFFFFFFFFFFFFFLL )
        ExRaiseAccessViolation();
      ProbeForWrite(a2, 2 * v3, 2u);
      *a2 = 0;
      if ( *(_DWORD *)(*(_QWORD *)(v11 + 40) + 184LL) )
      {
        StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(v13, (struct _LARGE_UNICODE_STRING *)&v18);
        v12 = TextCopy(StrName, a2, (unsigned int)v3);
      }
    }
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v12;
}
