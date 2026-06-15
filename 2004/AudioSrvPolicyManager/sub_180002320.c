/*
 * XREFs of sub_180002320 @ 0x180002320
 * Callers:
 *     sub_180002FC0 @ 0x180002FC0 (sub_180002FC0.c)
 *     sub_180003428 @ 0x180003428 (sub_180003428.c)
 *     sub_18003AED2 @ 0x18003AED2 (sub_18003AED2.c)
 *     sub_18003AFC5 @ 0x18003AFC5 (sub_18003AFC5.c)
 * Callees:
 *     sub_18000229C @ 0x18000229C (sub_18000229C.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180002320(char *a1, __int64 a2, __int64 a3)
{
  void (__fastcall *v6)(__int64, char *, __int64); // rax
  const char *v7; // rsi
  DWORD v8; // r8d
  char *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r9
  char *v12; // rax
  char *v13; // rbp
  DWORD CurrentThreadId; // eax
  char *v15; // rax
  char *v16; // rax
  __int64 v17; // r9
  LPWSTR lpBuffer; // [rsp+20h] [rbp-258h]
  LPWSTR lpBuffera; // [rsp+20h] [rbp-258h]
  DWORD nSize[2]; // [rsp+28h] [rbp-250h]
  va_list *Arguments; // [rsp+30h] [rbp-248h]
  WCHAR Buffer[256]; // [rsp+40h] [rbp-238h] BYREF

  if ( a1 )
  {
    v6 = (void (__fastcall *)(__int64, char *, __int64))qword_18004FCD8;
    *(_WORD *)a1 = 0;
    if ( !v6 || !byte_18004FCF8 || (v6(a3, a1, a2), !*(_WORD *)a1) )
    {
      v7 = (const char *)&unk_180042206;
      if ( *(_DWORD *)a3 )
      {
        switch ( *(_DWORD *)a3 )
        {
          case 1:
            v7 = "ReturnHr";
            break;
          case 2:
            v7 = "LogHr";
            break;
          case 3:
            v7 = "FailFast";
            break;
        }
      }
      else
      {
        v7 = "Exception";
      }
      v8 = *(_DWORD *)(a3 + 4);
      Buffer[0] = 0;
      FormatMessageW(0x1200u, 0LL, v8, 0x400u, Buffer, 0x100u, 0LL);
      v9 = &a1[2 * a2];
      v10 = *(_QWORD *)(a3 + 128);
      v11 = *(_QWORD *)(a3 + 120);
      if ( *(_QWORD *)(a3 + 48) )
      {
        LODWORD(lpBuffer) = *(_DWORD *)(a3 + 56);
        v12 = sub_18000229C(a1, v9, (const char *)L"%hs(%u)\\%hs!%p: ", *(_QWORD *)(a3 + 48), lpBuffer, v11, v10);
      }
      else
      {
        v12 = sub_18000229C(a1, v9, (const char *)L"%hs!%p: ", v11, v10);
      }
      v13 = v12;
      if ( *(_QWORD *)(a3 + 136) )
        v13 = sub_18000229C(v12, v9, (const char *)L"(caller: %p) ");
      CurrentThreadId = GetCurrentThreadId();
      LODWORD(Arguments) = *(_DWORD *)(a3 + 4);
      nSize[0] = CurrentThreadId;
      LODWORD(lpBuffera) = *(_DWORD *)(a3 + 60);
      v15 = sub_18000229C(
              v13,
              v9,
              (const char *)L"%hs(%d) tid(%x) %08X %ws",
              v7,
              lpBuffera,
              *(_QWORD *)nSize,
              Arguments,
              Buffer);
      if ( *(_QWORD *)(a3 + 16) || *(_QWORD *)(a3 + 64) || *(_QWORD *)(a3 + 40) )
      {
        v16 = sub_18000229C(v15, v9, (const char *)L"    ");
        if ( *(_QWORD *)(a3 + 16) )
          v16 = sub_18000229C(v16, v9, (const char *)L"Msg:[%ws] ");
        if ( *(_QWORD *)(a3 + 64) )
          v16 = sub_18000229C(v16, v9, (const char *)L"CallContext:[%hs] ");
        v17 = *(_QWORD *)(a3 + 40);
        if ( *(_QWORD *)(a3 + 32) )
        {
          sub_18000229C(v16, v9, (const char *)L"[%hs(%hs)]\n", v17, *(_QWORD *)(a3 + 32));
        }
        else if ( v17 )
        {
          sub_18000229C(v16, v9, (const char *)L"[%hs]\n");
        }
        else
        {
          sub_18000229C(v16, v9, (const char *)L"\n");
        }
      }
    }
  }
  return 0LL;
}
