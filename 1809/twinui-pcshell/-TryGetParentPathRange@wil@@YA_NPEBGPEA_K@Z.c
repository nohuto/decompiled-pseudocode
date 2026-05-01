/*
 * XREFs of ?TryGetParentPathRange@wil@@YA_NPEBGPEA_K@Z @ 0x180200654
 * Callers:
 *     ?CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z @ 0x1801FE788 (-CreateDirectoryDeepNoThrow@wil@@YAJPEBG@Z.c)
 * Callees:
 *     ?FindLastPathSegment@wil@@YAPEBGPEBG@Z @ 0x1801DB964 (-FindLastPathSegment@wil@@YAPEBGPEBG@Z.c)
 */

char __fastcall wil::TryGetParentPathRange(LPCWSTR lpStringSource, unsigned __int16 *a2, unsigned __int64 *a3)
{
  char v4; // bl
  const unsigned __int16 *v6; // rdx
  __int64 v7; // rax
  PCWSTR ppszRootEnd; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  *(_QWORD *)a2 = 0LL;
  if ( PathCchSkipRoot(lpStringSource, &ppszRootEnd) >= 0 && *ppszRootEnd )
  {
    v7 = wil::FindLastPathSegment(lpStringSource, v6) - lpStringSource;
    *(_QWORD *)a2 = v7;
    return v7 != 0;
  }
  return v4;
}
