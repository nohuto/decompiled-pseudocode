/*
 * XREFs of ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x180004ECC
 * Callers:
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x18000518C (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 * Callees:
 *     ?LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ @ 0x1800013A4 (-LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ.c)
 *     __security_check_cookie @ 0x180005E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180006730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::GetFailureLogString(
        wil *this,
        unsigned __int16 *a2,
        __int64 a3,
        const struct wil::FailureInfo *a4)
{
  void (__fastcall *v6)(__int64, wil *, __int64, const struct wil::FailureInfo *); // rax
  const char *v7; // rsi
  DWORD v8; // r8d
  __int64 v9; // rax
  char *v10; // rdx
  const unsigned __int16 *v11; // r9
  unsigned __int16 *v12; // rax
  const unsigned __int16 *v13; // r9
  unsigned __int16 *v14; // rbp
  DWORD CurrentThreadId; // eax
  unsigned __int16 *v16; // rax
  const unsigned __int16 *v17; // r9
  unsigned __int16 *v18; // rax
  const unsigned __int16 *v19; // r9
  const unsigned __int16 *v20; // r9
  char *v21; // rdx
  const unsigned __int16 *v22; // r9
  LPWSTR lpBuffer; // [rsp+20h] [rbp-258h]
  LPWSTR lpBuffera; // [rsp+20h] [rbp-258h]
  DWORD nSize[2]; // [rsp+28h] [rbp-250h]
  va_list *Arguments; // [rsp+30h] [rbp-248h]
  WCHAR Buffer[256]; // [rsp+40h] [rbp-238h] BYREF

  if ( this )
  {
    v6 = (void (__fastcall *)(__int64, wil *, __int64, const struct wil::FailureInfo *))g_pfnResultLoggingCallback;
    *(_WORD *)this = 0;
    if ( !v6 || !wil::details::g_resultMessageCallbackSet || (v6(a3, this, 2048LL, a4), !*(_WORD *)this) )
    {
      v7 = (const char *)&word_18000763A;
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
      v9 = *(_QWORD *)(a3 + 128);
      v10 = (char *)this + 4096;
      v11 = *(const unsigned __int16 **)(a3 + 120);
      if ( *(_QWORD *)(a3 + 48) )
      {
        LODWORD(lpBuffer) = *(_DWORD *)(a3 + 56);
        v12 = wil::details::LogStringPrintf(
                this,
                v10,
                L"%hs(%d)\\%hs!%p: ",
                *(const unsigned __int16 **)(a3 + 48),
                lpBuffer,
                v11,
                v9);
      }
      else
      {
        v12 = wil::details::LogStringPrintf(this, v10, L"%hs!%p: ", v11, v9);
      }
      v13 = *(const unsigned __int16 **)(a3 + 136);
      v14 = v12;
      if ( v13 )
        v14 = wil::details::LogStringPrintf((wil::details *)v12, (char *)this + 4096, L"(caller: %p) ", v13);
      CurrentThreadId = GetCurrentThreadId();
      LODWORD(Arguments) = *(_DWORD *)(a3 + 4);
      nSize[0] = CurrentThreadId;
      LODWORD(lpBuffera) = *(_DWORD *)(a3 + 60);
      v16 = wil::details::LogStringPrintf(
              (wil::details *)v14,
              (char *)this + 4096,
              L"%hs(%d) tid(%x) %08X %ws",
              (const unsigned __int16 *)v7,
              lpBuffera,
              *(_QWORD *)nSize,
              Arguments,
              Buffer);
      if ( *(_QWORD *)(a3 + 16) || *(_QWORD *)(a3 + 64) || *(_QWORD *)(a3 + 40) )
      {
        v18 = wil::details::LogStringPrintf((wil::details *)v16, (char *)this + 4096, L"    ", v17);
        v19 = *(const unsigned __int16 **)(a3 + 16);
        if ( v19 )
          v18 = wil::details::LogStringPrintf((wil::details *)v18, (char *)this + 4096, L"Msg:[%ws] ", v19);
        v20 = *(const unsigned __int16 **)(a3 + 64);
        if ( v20 )
          v18 = wil::details::LogStringPrintf((wil::details *)v18, (char *)this + 4096, L"CallContext:[%hs] ", v20);
        v21 = (char *)this + 4096;
        v22 = *(const unsigned __int16 **)(a3 + 40);
        if ( *(_QWORD *)(a3 + 32) )
        {
          wil::details::LogStringPrintf((wil::details *)v18, v21, L"[%hs(%hs)]\n", v22, *(_QWORD *)(a3 + 32));
        }
        else if ( v22 )
        {
          wil::details::LogStringPrintf((wil::details *)v18, v21, L"[%hs]\n", v22);
        }
        else
        {
          wil::details::LogStringPrintf((wil::details *)v18, v21, L"\n", 0LL);
        }
      }
    }
  }
  return 0LL;
}
