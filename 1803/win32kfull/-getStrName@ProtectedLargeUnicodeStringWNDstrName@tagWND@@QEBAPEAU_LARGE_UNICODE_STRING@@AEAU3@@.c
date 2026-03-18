/*
 * XREFs of ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C00DDCEC
 * Callers:
 *     NtUserInternalGetWindowText @ 0x1C00DDB90 (NtUserInternalGetWindowText.c)
 *     _GetAltTabInfo @ 0x1C01BC2F4 (_GetAltTabInfo.c)
 * Callees:
 *     <none>
 */

struct _LARGE_UNICODE_STRING *__fastcall tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
        tagWND::ProtectedLargeUnicodeStringWNDstrName *this,
        struct _LARGE_UNICODE_STRING *a2)
{
  struct _LARGE_UNICODE_STRING *result; // rax

  *((_QWORD *)a2 + 1) = *(_QWORD *)this;
  *(_DWORD *)a2 = *(_DWORD *)(*((_QWORD *)this - 16) + 184LL);
  *((_DWORD *)a2 + 1) ^= (*((_DWORD *)a2 + 1) ^ *(_DWORD *)(*((_QWORD *)this - 16) + 188LL)) & 0x7FFFFFFF;
  result = a2;
  *((_DWORD *)a2 + 1) = *(_DWORD *)(*((_QWORD *)this - 16) + 188LL) ^ (*((_DWORD *)a2 + 1) ^ *(_DWORD *)(*((_QWORD *)this - 16) + 188LL)) & 0x7FFFFFFF;
  return result;
}
