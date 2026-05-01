/*
 * XREFs of ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x1801FE788
 * Callers:
 *     _lambda_961dfd5ca30ced7f152f1faecc2cc684_::operator() @ 0x1801FDC38 (_lambda_961dfd5ca30ced7f152f1faecc2cc684_--operator().c)
 *     ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x1801FE788 (-CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800854A4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800E7180 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x18010466C (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x1801FE788 (-CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z.c)
 *     ?TryGetParentPathRange@wil@@YA_NPEBGPEA_K@Z @ 0x180200654 (-TryGetParentPathRange@wil@@YA_NPEBGPEA_K@Z.c)
 */

__int64 __fastcall wil::CreateDirectoryDeepNoThrow(wil *this, const unsigned __int16 *a2)
{
  DWORD LastError; // eax
  unsigned __int64 *v4; // r8
  unsigned __int64 v5; // rdi
  __int64 v6; // rbp
  size_t v7; // rax
  char *v8; // rax
  char *v9; // rbx
  unsigned int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // r9
  int v13; // eax
  const unsigned __int16 *v14; // rdx
  const struct std::nothrow_t *v15; // rdx
  const struct std::nothrow_t *v17; // rdx
  const char *v18; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v20; // [rsp+38h] [rbp+10h] BYREF

  if ( !CreateDirectoryW((LPCWSTR)this, 0LL) )
  {
    LastError = GetLastError();
    if ( LastError == 3 )
    {
      if ( wil::TryGetParentPathRange((LPCWSTR)this, (const unsigned __int16 *)&v20, v4) )
      {
        v5 = v20;
        v6 = v20 + 1;
        v7 = 2 * (v20 + 1);
        if ( !is_mul_ok(v20 + 1, 2uLL) )
          v7 = -1LL;
        v8 = (char *)operator new[](v7, (const struct std::nothrow_t *)&std::nothrow);
        v9 = v8;
        if ( !v8 )
        {
          v10 = -2147024882;
          v11 = 124LL;
          v12 = 2147942414LL;
LABEL_10:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v11,
            (__int64)"internal\\sdk\\inc\\wil\\FileSystem.h",
            (const char *)v12);
          operator delete(v9, v15);
          return v10;
        }
        v13 = StringCchCopyNW(v8, v6, (char *)this, v5);
        v10 = v13;
        if ( v13 < 0 )
        {
          v12 = (unsigned int)v13;
          v11 = 125LL;
          goto LABEL_10;
        }
        wil::CreateDirectoryDeepNoThrow((wil *)v9, v14);
        operator delete(v9, v17);
      }
      if ( !CreateDirectoryW((LPCWSTR)this, 0LL) )
        return wil::details::in1diag3::Return_GetLastError(
                 retaddr,
                 (void *)0x80,
                 (__int64)"internal\\sdk\\inc\\wil\\FileSystem.h",
                 v18);
    }
    else if ( LastError != 183 && LastError )
    {
      return wil::details::in1diag3::Return_Win32(
               retaddr,
               132LL,
               (__int64)"internal\\sdk\\inc\\wil\\FileSystem.h",
               (const char *)LastError);
    }
  }
  return 0LL;
}
