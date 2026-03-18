/*
 * XREFs of xxxUpdateSystemIconsFromRegistry @ 0x1C00E2E38
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00BA614 (xxxSystemParametersInfoWorker.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00E1850 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00A9308 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C00AA6E4 (GetDpiForSystem.c)
 *     xxxClientLoadImage @ 0x1C00B5A14 (xxxClientLoadImage.c)
 *     ?zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z @ 0x1C00B8520 (-zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z.c)
 *     RtlInitUnicodeStringOrId @ 0x1C00E2FE4 (RtlInitUnicodeStringOrId.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

void __fastcall xxxUpdateSystemIconsFromRegistry(__int64 a1)
{
  int v1; // edi
  __int64 v3; // rbx
  __int64 v4; // rdx
  unsigned int v5; // esi
  unsigned __int8 *Image; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagCURSOR *v9; // rbp
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int DpiForSystem; // eax
  unsigned int DpiDependentMetric; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // rdx
  unsigned __int8 *v21; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-258h] BYREF
  WCHAR SourceString[264]; // [rsp+50h] [rbp-248h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  v1 = 0;
  DestinationString.Buffer = 0LL;
  do
  {
    v3 = 552LL * v1;
    FastGetProfileStringFromIDW(
      a1,
      5LL,
      *(unsigned __int16 *)((char *)&gasysico + v3 + 2),
      &word_1C02DAB68,
      SourceString,
      260,
      0);
    if ( SourceString[0] )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      v5 = 592;
    }
    else
    {
      RtlInitUnicodeStringOrId(&DestinationString, (unsigned __int16)(v1 + 100));
      v5 = 576;
    }
    Image = xxxClientLoadImage((char **)&DestinationString, v4, 1u, 0, 0, v5);
    if ( Image && (*((_DWORD *)Image + 20) & 0x40) == 0 )
      zzzSetSystemImage((struct tagCURSOR *)Image, *(struct tagCURSOR **)((char *)&gasysico + v3 + 8));
    if ( v1 == 5 )
    {
      v9 = (struct tagCURSOR *)_HMObjectFromHandle(*(_QWORD *)(gpsi + 6968LL));
      if ( v9 )
      {
        DpiForSystem = GetDpiForSystem(v8, v7, v10, v11);
        DpiDependentMetric = GetDpiDependentMetric(21LL, DpiForSystem);
        v18 = GetDpiForSystem(v15, v14, v16, v17);
        v19 = GetDpiDependentMetric(20LL, v18);
        v21 = xxxClientLoadImage((char **)&DestinationString, v20, 1u, v19, DpiDependentMetric, v5);
        if ( v21 )
        {
          if ( (*((_DWORD *)v21 + 20) & 0x40) == 0 )
            zzzSetSystemImage((struct tagCURSOR *)v21, v9);
        }
      }
    }
    ++v1;
  }
  while ( v1 < 7 );
}
