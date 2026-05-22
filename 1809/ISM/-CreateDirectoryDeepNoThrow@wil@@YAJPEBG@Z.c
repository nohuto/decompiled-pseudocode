/*
 * XREFs of ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x180060CC8
 * Callers:
 *     ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x180060CC8 (-CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z.c)
 *     ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x180060EF4 (-StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800035C4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x180060CC8 (-CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180064E88 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C968 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall wil::CreateDirectoryDeepNoThrow(wil *this, const unsigned __int16 *a2)
{
  DWORD LastError; // eax
  __int64 v4; // rax
  __int64 v5; // rbx
  int StringOrdinal; // eax
  wil *v7; // r14
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rax
  _WORD *v11; // rbx
  signed int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rdx
  _WORD *v15; // rcx
  __int16 v16; // ax
  _WORD *v17; // rax
  const struct std::nothrow_t *v18; // rdx
  const struct std::nothrow_t *v20; // rdx
  const char *v21; // r9
  unsigned int cchValue; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  PCWSTR ppszRootEnd; // [rsp+58h] [rbp+10h] BYREF

  if ( !CreateDirectoryW((LPCWSTR)this, 0LL) )
  {
    LastError = GetLastError();
    if ( LastError == 3 )
    {
      if ( PathCchSkipRoot((PCWSTR)this, &ppszRootEnd) >= 0 && *ppszRootEnd )
      {
        v4 = -1LL;
        do
          ++v4;
        while ( *((_WORD *)this + v4) );
        v5 = 2 * v4;
        if ( v4 && *(_WORD *)((char *)this + v5 - 2) == 92 )
          LODWORD(v4) = v4 - 1;
        StringOrdinal = FindStringOrdinal(0x800000u, (LPCWSTR)this, v4, L"\\", 1, 1);
        v7 = StringOrdinal == -1 ? (wil *)((char *)this + v5) : (wil *)((char *)this + 2 * StringOrdinal + 2);
        v8 = (v7 - this) >> 1;
        if ( v8 )
        {
          v9 = v8 + 1;
          v10 = 2 * (v8 + 1);
          if ( !is_mul_ok(v8 + 1, 2uLL) )
            v10 = -1LL;
          v11 = operator new[](v10, (const struct std::nothrow_t *)&std::nothrow);
          if ( !v11 )
          {
            v12 = -2147024882;
            v13 = 124LL;
LABEL_35:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v13,
              (__int64)"internal\\sdk\\inc\\wil\\filesystem.h",
              (const char *)(unsigned int)v12);
            operator delete(v11, v18);
            return (unsigned int)v12;
          }
          v14 = 2147483646LL;
          v12 = 0;
          if ( v8 > 0x7FFFFFFE )
            v12 = -2147024809;
          if ( v12 < 0 )
          {
            if ( v8 != -1LL )
              *v11 = 0;
          }
          else
          {
            if ( v8 > 0x7FFFFFFE )
            {
              v12 = -2147024809;
              *v11 = 0;
LABEL_34:
              v13 = 125LL;
              goto LABEL_35;
            }
            v15 = v11;
            v14 = this - (wil *)v11;
            do
            {
              if ( v9 == 1 )
                break;
              v16 = *(_WORD *)((char *)v15 + v14);
              if ( !v16 )
                break;
              *v15++ = v16;
              --v9;
            }
            while ( v9 );
            v17 = v15 - 1;
            if ( v9 )
              v17 = v15;
            v12 = v9 == 0 ? 0x8007007A : 0;
            *v17 = 0;
          }
          if ( v12 < 0 )
            goto LABEL_34;
          wil::CreateDirectoryDeepNoThrow((wil *)v11, (const unsigned __int16 *)v14);
          operator delete(v11, v20);
        }
      }
      if ( !CreateDirectoryW((LPCWSTR)this, 0LL) )
        return wil::details::in1diag3::Return_GetLastError(
                 retaddr,
                 (void *)0x80,
                 (__int64)"internal\\sdk\\inc\\wil\\filesystem.h",
                 v21);
    }
    else if ( LastError != 183 && LastError )
    {
      return wil::details::in1diag3::Return_Win32(
               retaddr,
               (void *)0x84,
               (unsigned int)"internal\\sdk\\inc\\wil\\filesystem.h",
               (const char *)LastError,
               cchValue);
    }
  }
  return 0LL;
}
