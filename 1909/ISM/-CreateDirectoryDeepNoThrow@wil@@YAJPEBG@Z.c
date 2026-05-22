/*
 * XREFs of ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x18009C50C
 * Callers:
 *     ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x18009C50C (-CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z.c)
 *     ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x18009F354 (-StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002CB58 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180051734 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x18009C50C (-CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18009E924 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x18009FD1C (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?try_get_parent_path_range@wil@@YA_NPEBGPEA_K@Z @ 0x1800A0484 (-try_get_parent_path_range@wil@@YA_NPEBGPEA_K@Z.c)
 */

__int64 __fastcall wil::CreateDirectoryDeepNoThrow(wil *this, const unsigned __int16 *a2)
{
  DWORD LastError; // eax
  unsigned __int64 *v4; // r8
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbp
  size_t v7; // rax
  unsigned __int16 *v8; // rax
  unsigned __int16 *v9; // rbx
  unsigned int v10; // edi
  int v11; // eax
  const unsigned __int16 *v12; // rdx
  const struct std::nothrow_t *v13; // rdx
  const struct std::nothrow_t *v15; // rdx
  const char *v16; // r9
  unsigned int v17; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v19; // [rsp+38h] [rbp+10h] BYREF

  if ( !CreateDirectoryW((LPCWSTR)this, 0LL) )
  {
    LastError = GetLastError();
    if ( LastError == 3 )
    {
      if ( wil::try_get_parent_path_range((LPCWSTR)this, (const unsigned __int16 *)&v19, v4) )
      {
        v5 = v19;
        v6 = v19 + 1;
        v7 = 2 * (v19 + 1);
        if ( !is_mul_ok(v19 + 1, 2uLL) )
          v7 = -1LL;
        v8 = (unsigned __int16 *)operator new[](v7, (const struct std::nothrow_t *)&std::nothrow);
        v9 = v8;
        if ( !v8 )
        {
          v10 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x70,
            (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\filesystem.h",
            (const char *)0x8007000ELL);
          return v10;
        }
        v11 = StringCchCopyNW(v8, v6, (const unsigned __int16 *)this, v5);
        v10 = v11;
        if ( v11 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x71,
            (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\filesystem.h",
            (const char *)(unsigned int)v11);
          operator delete(v9, v13);
          return v10;
        }
        wil::CreateDirectoryDeepNoThrow((wil *)v9, v12);
        operator delete(v9, v15);
      }
      if ( !CreateDirectoryW((LPCWSTR)this, 0LL) )
        return wil::details::in1diag3::Return_GetLastError(
                 retaddr,
                 (void *)0x74,
                 (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\filesystem.h",
                 v16);
    }
    else if ( LastError != 183 && LastError )
    {
      return wil::details::in1diag3::Return_Win32(
               retaddr,
               (void *)0x78,
               (unsigned int)"internal\\sdk\\inc\\wil\\opensource\\wil\\filesystem.h",
               (const char *)LastError,
               v17);
    }
  }
  return 0LL;
}
