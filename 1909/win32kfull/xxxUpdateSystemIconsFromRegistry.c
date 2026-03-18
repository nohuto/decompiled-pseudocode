/*
 * XREFs of xxxUpdateSystemIconsFromRegistry @ 0x1C013C600
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C013B018 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C004A0E8 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C004B4C4 (GetDpiForSystem.c)
 *     xxxClientLoadImage @ 0x1C00567C4 (xxxClientLoadImage.c)
 *     ?zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z @ 0x1C0059A10 (-zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z.c)
 *     RtlInitUnicodeStringOrId @ 0x1C013C7AC (RtlInitUnicodeStringOrId.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
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
  unsigned int DpiForSystem; // eax
  unsigned int DpiDependentMetric; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // rdx
  unsigned __int8 *v19; // rax
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
      &word_1C02D83A8,
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
        DpiForSystem = GetDpiForSystem(v8, v7, v10);
        DpiDependentMetric = GetDpiDependentMetric(21LL, DpiForSystem);
        v16 = GetDpiForSystem(v14, v13, v15);
        v17 = GetDpiDependentMetric(20LL, v16);
        v19 = xxxClientLoadImage((char **)&DestinationString, v18, 1u, v17, DpiDependentMetric, v5);
        if ( v19 )
        {
          if ( (*((_DWORD *)v19 + 20) & 0x40) == 0 )
            zzzSetSystemImage((struct tagCURSOR *)v19, v9);
        }
      }
    }
    ++v1;
  }
  while ( v1 < 7 );
}
