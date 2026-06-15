/*
 * XREFs of ?CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z @ 0x140001BD4
 * Callers:
 *     ?RuntimeClassInitialize@CCrossProcessMemoryManager@@QEAAJPEBG@Z @ 0x140001B10 (-RuntimeClassInitialize@CCrossProcessMemoryManager@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x14000777C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     WPP_SF_D @ 0x14002BE64 (WPP_SF_D.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140053CE8 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CreateSecurityDescriptor(const unsigned __int16 *a1, __int64 a2, void **a3)
{
  __int64 v3; // rbx
  unsigned __int64 v6; // rbx
  wchar_t *v7; // rax
  WCHAR *v8; // rdi
  signed int v9; // ebx
  signed int LastError; // eax

  v3 = -1LL;
  do
    ++v3;
  while ( a1[v3] );
  v6 = v3 + 35;
  v7 = (wchar_t *)CoTaskMemAlloc(2 * v6);
  v8 = v7;
  if ( !v7 )
  {
    v9 = -2147024882;
LABEL_10:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        10LL,
        &WPP_257b778818ec382b07a1e7b3d18ed530_Traceguids,
        (unsigned int)v9);
    }
    AudCPTraceLoggingErrorHelper("CreateSecurityDescriptor", 0x66u, v9);
    return (unsigned int)v9;
  }
  v9 = StringCchPrintfW(v7, v6, L"D:(A;OICI;0x%08I32X;;;%ws)", 983071LL, a1);
  if ( v9 >= 0 )
  {
    if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(v8, 1u, a3, 0LL) )
    {
      v9 = 0;
    }
    else
    {
      LastError = GetLastError();
      v9 = LastError;
      if ( LastError > 0 )
        v9 = (unsigned __int16)LastError | 0x80070000;
    }
  }
  CoTaskMemFree(v8);
  if ( v9 < 0 )
    goto LABEL_10;
  return (unsigned int)v9;
}
