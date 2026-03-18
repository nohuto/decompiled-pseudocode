/*
 * XREFs of xxxUpdateSystemIconsFromRegistry @ 0x1C00DBFCC
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00BD788 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00209DC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 *     RtlInitUnicodeStringOrId @ 0x1C00A60B8 (RtlInitUnicodeStringOrId.c)
 *     xxxClientLoadImage @ 0x1C00B7340 (xxxClientLoadImage.c)
 *     ?zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z @ 0x1C00D8EC8 (-zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall xxxUpdateSystemIconsFromRegistry(__int64 a1)
{
  int i; // edi
  __int64 v3; // rbx
  __int64 v4; // rdx
  int v5; // esi
  ULONG_PTR Image; // rax
  struct tagCURSOR *v7; // rbp
  unsigned int DpiForSystem; // eax
  __int64 v9; // r8
  int DpiDependentMetric; // ebx
  unsigned int v11; // eax
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rdx
  ULONG_PTR v15; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-258h] BYREF
  WCHAR SourceString[264]; // [rsp+50h] [rbp-248h] BYREF

  for ( i = 0; i < 7; ++i )
  {
    v3 = 552LL * i;
    FastGetProfileStringFromIDW(a1, 5LL, *(unsigned __int16 *)((char *)&gasysico + v3 + 2), &pwsz, SourceString, 260, 0);
    if ( SourceString[0] )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      v5 = 592;
    }
    else
    {
      RtlInitUnicodeStringOrId(&DestinationString, (WCHAR *)(unsigned __int16)(i + 100));
      v5 = 576;
    }
    Image = xxxClientLoadImage(&DestinationString.Length, v4, 1u, 0, 0, v5);
    if ( Image && (*(_DWORD *)(Image + 80) & 0x40) == 0 )
      zzzSetSystemImage((struct tagCURSOR *)Image, *(struct tagCURSOR **)((char *)&gasysico + v3 + 8));
    if ( i == 5 )
    {
      v7 = *(struct tagCURSOR **)(gpKernelHandleTable + 24LL * (unsigned __int16)*(_DWORD *)(gpsi + 6968LL));
      if ( v7 )
      {
        DpiForSystem = GetDpiForSystem();
        DpiDependentMetric = GetDpiDependentMetric(21LL, DpiForSystem, v9);
        v11 = GetDpiForSystem();
        v13 = GetDpiDependentMetric(20LL, v11, v12);
        v15 = xxxClientLoadImage(&DestinationString.Length, v14, 1u, v13, DpiDependentMetric, v5);
        if ( v15 )
        {
          if ( (*(_DWORD *)(v15 + 80) & 0x40) == 0 )
            zzzSetSystemImage((struct tagCURSOR *)v15, v7);
        }
      }
    }
  }
}
