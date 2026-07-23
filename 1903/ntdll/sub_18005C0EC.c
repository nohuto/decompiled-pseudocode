/*
 * XREFs of sub_18005C0EC @ 0x18005C0EC
 * Callers:
 *     sub_18005BC5C @ 0x18005BC5C (sub_18005BC5C.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlQueryEnvironmentVariable_U @ 0x18005CB10 (RtlQueryEnvironmentVariable_U.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x18008E310 (_wcsnicmp.c)
 */

NTSTATUS __fastcall sub_18005C0EC(wchar_t *String1, size_t *a2)
{
  NTSTATUS result; // eax
  WCHAR *Heap; // rax
  NTSTATUS v6; // eax
  PWCH Buffer; // rsi
  int v8; // ebx
  size_t v9; // rdi
  _UNICODE_STRING Value; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v11[704]; // [rsp+30h] [rbp-D0h] BYREF

  Value.Buffer = (PWCH)v11;
  Value.MaximumLength = 702;
  *a2 = 0LL;
  result = RtlQueryEnvironmentVariable_U(0LL, (PUNICODE_STRING)&Name, &Value);
  if ( result == -1073741789 )
  {
    Value.MaximumLength = Value.Length + 2;
    Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned __int16)(Value.Length + 2));
    Value.Buffer = Heap;
  }
  else
  {
    if ( result < 0 )
      return result;
    Heap = Value.Buffer;
  }
  if ( !Heap )
    return -1073741637;
  v6 = RtlQueryEnvironmentVariable_U(0LL, (PUNICODE_STRING)&Name, &Value);
  Buffer = Value.Buffer;
  v8 = v6;
  if ( v6 >= 0 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( Value.Buffer[v9] );
    if ( wcsnicmp(String1, Value.Buffer, v9) )
      v8 = -1073741637;
    else
      *a2 = v9;
  }
  if ( Buffer != (PWCH)v11 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Value.Buffer);
  return v8;
}
