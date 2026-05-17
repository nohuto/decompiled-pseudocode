/*
 * XREFs of sub_18007CDAC @ 0x18007CDAC
 * Callers:
 *     sub_18002E26C @ 0x18002E26C (sub_18002E26C.c)
 * Callees:
 *     EtwEventRegister @ 0x18000A640 (EtwEventRegister.c)
 *     sub_18002946C @ 0x18002946C (sub_18002946C.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     EtwEventWrite @ 0x180052CB0 (EtwEventWrite.c)
 *     EtwNotificationUnregister @ 0x1800537B0 (EtwNotificationUnregister.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

wchar_t *__fastcall sub_18007CDAC(unsigned __int16 *a1)
{
  unsigned __int64 v2; // rcx
  const void **v3; // rdi
  wchar_t *v4; // rbx
  wchar_t *result; // rax
  int v6; // eax
  unsigned __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  wchar_t *v8; // [rsp+28h] [rbp-20h] BYREF
  int v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+34h] [rbp-14h]

  v2 = *a1;
  v3 = (const void **)(a1 + 4);
  if ( v2 + 2 > a1[1] || (v4 = (wchar_t *)*v3, *((_WORD *)*v3 + (v2 >> 1))) )
  {
    result = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18016542C + 1572864, v2 + 2);
    v4 = result;
    if ( !result )
      return result;
    memmove(result, *v3, *a1);
    v4[(unsigned __int64)*a1 >> 1] = 0;
  }
  result = (wchar_t *)sub_18002946C(v4, 4);
  if ( (_DWORD)result )
  {
    result = (wchar_t *)EtwEventRegister((int)&unk_18011E318, 0LL, 0LL, (__int64)&v7);
    if ( !(_DWORD)result )
    {
      v6 = *a1 + 2;
      v8 = v4;
      v9 = v6;
      v10 = 0;
      EtwEventWrite(v7, (int)&unk_18012C180, 1, (__int64)&v8);
      result = (wchar_t *)EtwNotificationUnregister(v7, 0LL);
    }
    if ( v4 != *v3 )
      return (wchar_t *)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v4);
  }
  return result;
}
