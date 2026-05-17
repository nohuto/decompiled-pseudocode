/*
 * XREFs of sub_1800085C8 @ 0x1800085C8
 * Callers:
 *     RtlpInitializeLangRegistryInfo @ 0x180005EE0 (RtlpInitializeLangRegistryInfo.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180013B50 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x1800141C0 (RtlpCreateProcessRegistryInfo.c)
 *     sub_18008AC6C @ 0x18008AC6C (sub_18008AC6C.c)
 * Callees:
 *     RtlpMuiRegLoadRegistryInfo @ 0x180008720 (RtlpMuiRegLoadRegistryInfo.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x180008810 (RtlpMuiRegFreeRegistryInfo.c)
 *     sub_180009204 @ 0x180009204 (sub_180009204.c)
 *     sub_1800093C4 @ 0x1800093C4 (sub_1800093C4.c)
 *     sub_180009670 @ 0x180009670 (sub_180009670.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     ZwGetMUIRegistryInfo @ 0x18009E4F0 (ZwGetMUIRegistryInfo.c)
 *     RtlpMuiRegCreateRegistryInfo @ 0x1800FDA50 (RtlpMuiRegCreateRegistryInfo.c)
 */

__int64 __fastcall sub_1800085C8(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 Heap; // rax
  __int64 v4; // rsi
  __int64 v5; // rdx
  int v6; // edi
  __int64 RegistryInfo; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  int v10; // [rsp+30h] [rbp-30h] BYREF
  __int64 v11; // [rsp+38h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+40h] [rbp-20h]
  int v13; // [rsp+48h] [rbp-18h]
  __int128 v14; // [rsp+50h] [rbp-10h]
  unsigned int v15; // [rsp+90h] [rbp+30h] BYREF
  __int64 v16; // [rsp+98h] [rbp+38h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+48h] BYREF

  v1 = 0LL;
  v16 = 0LL;
  if ( !a1 || *a1 )
  {
    v6 = -1073741811;
    goto LABEL_16;
  }
  v15 = 0;
  if ( (int)ZwGetMUIRegistryInfo(0LL, &v15, 0LL) < 0 )
  {
LABEL_20:
    RegistryInfo = RtlpMuiRegCreateRegistryInfo();
    v16 = RegistryInfo;
    v1 = RegistryInfo;
    if ( RegistryInfo )
    {
      v6 = RtlpMuiRegLoadRegistryInfo(RegistryInfo, 4095LL);
      if ( v6 >= 0 )
      {
        v6 = 0;
        *(_DWORD *)(v1 + 12) = MEMORY[0x7FFE03A4];
      }
      else
      {
        RtlpMuiRegFreeRegistryInfo(v1, 4095LL);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v16);
        v1 = 0LL;
      }
      goto LABEL_16;
    }
LABEL_18:
    v6 = -1073741801;
    goto LABEL_16;
  }
  if ( v15 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, v15);
    v1 = v16;
    v4 = Heap;
  }
  else
  {
    v4 = 0LL;
  }
  if ( !v4 )
    goto LABEL_18;
  if ( (int)ZwGetMUIRegistryInfo(0LL, &v15, v4) < 0
    || (int)sub_180009670(v4, v15, &v16) < 0
    || (v1 = v16, v6 = sub_1800093C4(v16), v6 < 0) )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v4);
    goto LABEL_20;
  }
  if ( *(_QWORD *)(v1 + 40) && (int)sub_180009204(0x2000000LL, v5, &v18) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration");
    v17 = 0LL;
    v11 = v18;
    v10 = 48;
    p_DestinationString = &DestinationString;
    v13 = 64;
    v14 = 0LL;
    if ( (int)ZwOpenKey(&v17, 131097LL, &v10) >= 0 )
    {
      RtlpMuiRegLoadRegistryInfo(v1, 4LL);
      ZwClose(v17);
    }
    ZwClose(v18);
  }
  RtlpMuiRegLoadRegistryInfo(v1, 568LL);
LABEL_16:
  *a1 = v1;
  return (unsigned int)v6;
}
