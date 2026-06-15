/*
 * XREFs of ?CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z @ 0x14000F364
 * Callers:
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXI_J3PEA_K4@Z @ 0x14000F420 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXI_J3PEA_K4@Z.c)
 *     ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEA_K1@Z @ 0x140061020 (-Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x14000EE40 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005623C (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CreateSecurityDescriptor(const unsigned __int16 *a1, unsigned int a2, void **a3)
{
  __int64 v3; // rbx
  __int64 v7; // rbx
  unsigned __int16 *v8; // rax
  WCHAR *v9; // rdi
  int v10; // ebx
  signed int LastError; // eax

  v3 = -1LL;
  do
    ++v3;
  while ( a1[v3] );
  v7 = v3 + 35;
  v8 = (unsigned __int16 *)CoTaskMemAlloc(2 * v7);
  v9 = v8;
  if ( !v8 )
  {
    v10 = -2147024882;
LABEL_10:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        10LL,
        &WPP_66a5760bf1703aef601fd26b60b3d9f6_Traceguids,
        (unsigned int)v10);
    }
    AudCPTraceLoggingErrorHelper("CreateSecurityDescriptor", 0x64u, v10);
    return (unsigned int)v10;
  }
  v10 = StringCchPrintfW(v8, v7, L"D:(A;OICI;0x%08I32X;;;%ws)", a2, a1);
  if ( v10 >= 0 )
  {
    if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(v9, 1u, a3, 0LL) )
    {
      v10 = 0;
    }
    else
    {
      LastError = GetLastError();
      v10 = LastError;
      if ( LastError > 0 )
        v10 = (unsigned __int16)LastError | 0x80070000;
    }
  }
  CoTaskMemFree(v9);
  if ( v10 < 0 )
    goto LABEL_10;
  return (unsigned int)v10;
}
