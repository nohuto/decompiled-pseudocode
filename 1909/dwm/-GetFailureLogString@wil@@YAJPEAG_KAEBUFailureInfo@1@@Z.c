/*
 * XREFs of ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x140007080
 * Callers:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x140007618 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140003000 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140004A90 (_guard_dispatch_icall_nop.c)
 *     ?LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ @ 0x1400078C0 (-LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ.c)
 */

__int64 __fastcall wil::GetFailureLogString(
        wchar_t *Buffer,
        unsigned __int16 *a2,
        __int64 a3,
        const struct wil::FailureInfo *a4)
{
  void (__fastcall *v7)(__int64, wchar_t *, unsigned __int16 *, const struct wil::FailureInfo *); // rax
  const char *v8; // rsi
  DWORD v9; // r8d
  const unsigned __int16 *v10; // rcx
  unsigned __int16 *v11; // rdi
  __int64 v12; // rax
  const unsigned __int16 *v13; // r9
  wchar_t *v14; // rax
  const unsigned __int16 *v15; // r9
  wchar_t *v16; // rbp
  DWORD CurrentThreadId; // eax
  wchar_t *v18; // rax
  const unsigned __int16 *v19; // r9
  wchar_t *v20; // rax
  const unsigned __int16 *v21; // r9
  const unsigned __int16 *v22; // r9
  const unsigned __int16 *v23; // r9
  LPWSTR lpBuffer; // [rsp+20h] [rbp-258h]
  LPWSTR lpBuffera; // [rsp+20h] [rbp-258h]
  DWORD nSize[2]; // [rsp+28h] [rbp-250h]
  va_list *Arguments; // [rsp+30h] [rbp-248h]
  WCHAR Buffera[256]; // [rsp+40h] [rbp-238h] BYREF

  if ( a2 )
  {
    if ( Buffer )
    {
      v7 = (void (__fastcall *)(__int64, wchar_t *, unsigned __int16 *, const struct wil::FailureInfo *))g_pfnResultLoggingCallback;
      *Buffer = 0;
      if ( !v7 || !wil::details::g_resultMessageCallbackSet || (v7(a3, Buffer, a2, a4), !*Buffer) )
      {
        v8 = (const char *)&word_14000BC26;
        if ( *(_DWORD *)a3 )
        {
          switch ( *(_DWORD *)a3 )
          {
            case 1:
              v8 = "ReturnHr";
              break;
            case 2:
              v8 = "LogHr";
              break;
            case 3:
              v8 = "FailFast";
              break;
          }
        }
        else
        {
          v8 = "Exception";
        }
        v9 = *(_DWORD *)(a3 + 4);
        Buffera[0] = 0;
        FormatMessageW(0x1200u, 0LL, v9, 0x400u, Buffera, 0x100u, 0LL);
        v10 = *(const unsigned __int16 **)(a3 + 48);
        v11 = &Buffer[(_QWORD)a2];
        v12 = *(_QWORD *)(a3 + 128);
        v13 = *(const unsigned __int16 **)(a3 + 120);
        if ( v10 )
        {
          LODWORD(lpBuffer) = *(_DWORD *)(a3 + 56);
          v14 = wil::details::LogStringPrintf(Buffer, v11, L"%hs(%d)\\%hs!%p: ", v10, lpBuffer, v13, v12);
        }
        else
        {
          v14 = wil::details::LogStringPrintf(Buffer, v11, L"%hs!%p: ", v13, v12);
        }
        v15 = *(const unsigned __int16 **)(a3 + 136);
        v16 = v14;
        if ( v15 )
          v16 = wil::details::LogStringPrintf(v14, v11, L"(caller: %p) ", v15);
        CurrentThreadId = GetCurrentThreadId();
        LODWORD(Arguments) = *(_DWORD *)(a3 + 4);
        nSize[0] = CurrentThreadId;
        LODWORD(lpBuffera) = *(_DWORD *)(a3 + 60);
        v18 = wil::details::LogStringPrintf(
                v16,
                v11,
                L"%hs(%d) tid(%x) %08X %ws",
                (const unsigned __int16 *)v8,
                lpBuffera,
                *(_QWORD *)nSize,
                Arguments,
                Buffera);
        if ( *(_QWORD *)(a3 + 16) || *(_QWORD *)(a3 + 64) || *(_QWORD *)(a3 + 40) )
        {
          v20 = wil::details::LogStringPrintf(v18, v11, L"    ", v19);
          v21 = *(const unsigned __int16 **)(a3 + 16);
          if ( v21 )
            v20 = wil::details::LogStringPrintf(v20, v11, L"Msg:[%ws] ", v21);
          v22 = *(const unsigned __int16 **)(a3 + 64);
          if ( v22 )
            v20 = wil::details::LogStringPrintf(v20, v11, L"CallContext:[%hs] ", v22);
          v23 = *(const unsigned __int16 **)(a3 + 40);
          if ( *(_QWORD *)(a3 + 32) )
          {
            wil::details::LogStringPrintf(v20, v11, L"[%hs(%hs)]\n", v23, *(_QWORD *)(a3 + 32));
          }
          else if ( v23 )
          {
            wil::details::LogStringPrintf(v20, v11, L"[%hs]\n", v23);
          }
          else
          {
            wil::details::LogStringPrintf(v20, v11, L"\n", 0LL);
          }
        }
      }
    }
  }
  return 0LL;
}
