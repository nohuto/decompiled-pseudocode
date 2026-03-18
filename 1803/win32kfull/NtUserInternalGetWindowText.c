/*
 * XREFs of NtUserInternalGetWindowText @ 0x1C00DDB90
 * Callers:
 *     <none>
 * Callees:
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C00DDCEC (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     DesktopVerifyHeapLargeUnicodeString @ 0x1C00DDD48 (DesktopVerifyHeapLargeUnicodeString.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

__int64 __fastcall NtUserInternalGetWindowText(__int64 a1, _WORD *a2, int a3)
{
  unsigned __int64 v3; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  unsigned int v12; // esi
  tagWND::ProtectedLargeUnicodeStringWNDstrName *v13; // r15
  __int64 v14; // rax
  __int64 v15; // rdx
  struct _LARGE_UNICODE_STRING *StrName; // rax
  __int64 v17; // rdx
  unsigned int v18; // edi
  __int64 v19; // rbx
  int v21; // [rsp+30h] [rbp-18h] BYREF
  int v22; // [rsp+34h] [rbp-14h]
  __int64 v23; // [rsp+38h] [rbp-10h]

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
      v23 = v14;
      v15 = *(_QWORD *)(v11 + 40);
      v21 = *(_DWORD *)(v15 + 184);
      v22 ^= (v22 ^ *(_DWORD *)(v15 + 188)) & 0x7FFFFFFF;
      v22 = *(_DWORD *)(v15 + 188) ^ (v22 ^ *(_DWORD *)(v15 + 188)) & 0x7FFFFFFF;
      DesktopVerifyHeapLargeUnicodeString(*(_QWORD *)(v11 + 24), &v21);
    }
    if ( (_DWORD)v3 )
    {
      if ( v3 > 0x7FFFFFFFFFFFFFFFLL )
        ExRaiseAccessViolation();
      ProbeForWrite(a2, 2 * v3, 2u);
      *a2 = 0;
      if ( *(_DWORD *)(*(_QWORD *)(v11 + 40) + 184LL) )
      {
        StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(v13, (struct _LARGE_UNICODE_STRING *)&v21);
        v17 = *(_DWORD *)StrName >> 1;
        if ( (unsigned int)v17 >= (int)v3 - 1 )
          v17 = (unsigned int)(v3 - 1);
        v18 = v17;
        v19 = v17;
        memmove(a2, *((const void **)StrName + 1), 2 * v17);
        a2[v19] = 0;
        v12 = v18;
      }
    }
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v12;
}
