/*
 * XREFs of KiSynchNumaCounterSetCallback @ 0x140844840
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfW @ 0x1400161B0 (RtlStringCbPrintfW.c)
 *     KeEnumerateNextProcessor @ 0x140063BD0 (KeEnumerateNextProcessor.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PcwAddInstance @ 0x140692680 (PcwAddInstance.c)
 *     KiAddSynchCounters @ 0x1408446F0 (KiAddSynchCounters.c)
 *     EtwDereferenceSpinLockCounters @ 0x1408BEFAC (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x1408BF008 (EtwReferenceSpinLockCounters.c)
 */

int __fastcall KiSynchNumaCounterSetCallback(int a1, __int64 a2)
{
  int v2; // ecx
  struct _PCW_BUFFER *v3; // r15
  bool v4; // cf
  unsigned int v5; // edi
  __int64 v6; // rcx
  unsigned __int16 *v7; // r14
  __int16 v8; // bx
  int v9; // esi
  const void *v10; // rbx
  __int64 v11; // rdx
  int result; // eax
  PPCW_DATA Data; // [rsp+20h] [rbp-E0h]
  ULONG Id; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  struct _PCW_DATA v16; // [rsp+48h] [rbp-B8h] BYREF
  struct _PCW_DATA v17; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int16 *v18[2]; // [rsp+68h] [rbp-98h] BYREF
  __int16 v19; // [rsp+78h] [rbp-88h]
  _DWORD v20[48]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v21[48]; // [rsp+140h] [rbp+40h] BYREF
  wchar_t pszDest[12]; // [rsp+200h] [rbp+100h] BYREF

  if ( !a1 )
  {
    EtwReferenceSpinLockCounters();
    return 0;
  }
  v2 = a1 - 1;
  if ( !v2 )
  {
    EtwDereferenceSpinLockCounters();
    return 0;
  }
  if ( (unsigned int)(v2 - 1) > 1 )
    return 0;
  v3 = *(struct _PCW_BUFFER **)(a2 + 24);
  memset(v21, 0, 0xB8uLL);
  v4 = KeNumberNodes != 0;
  v5 = 0;
  while ( v4 )
  {
    v6 = KeNodeBlock[v5];
    v7 = *(unsigned __int16 **)(v6 + 136);
    if ( v7 )
    {
      v8 = *(_WORD *)(v6 + 144);
      memset(v20, 0, 0xB8uLL);
      v18[1] = v7;
      v9 = 0;
      v19 = v8;
      v18[0] = 0LL;
      while ( !(unsigned int)KeEnumerateNextProcessor(&Id, v18) )
      {
        v10 = (const void *)(KiProcessorBlock[Id] + 25024);
        KiAddSynchCounters(v20, (__int64)v10);
        KiAddSynchCounters(v21, v11);
        LODWORD(Data) = v9;
        RtlStringCbPrintfW(pszDest, 0x16uLL, L"%u,%u", v5, Data);
        RtlInitUnicodeString(&DestinationString, pszDest);
        v17.Data = v10;
        v17.Size = 184;
        result = PcwAddInstance(v3, &DestinationString, Id, 1u, &v17);
        if ( result < 0 )
          return result;
        ++v9;
      }
      RtlStringCbPrintfW(pszDest, 0x16uLL, L"%u,_Total", v5);
      RtlInitUnicodeString(&DestinationString, pszDest);
      v16.Data = v20;
      v16.Size = 184;
      result = PcwAddInstance(v3, &DestinationString, v5 + KeMaximumProcessors, 1u, &v16);
      if ( result < 0 )
        return result;
    }
    v4 = ++v5 < (unsigned __int16)KeNumberNodes;
  }
  RtlStringCbPrintfW(pszDest, 0x16uLL, L"_Total");
  RtlInitUnicodeString(&DestinationString, pszDest);
  v16.Data = v21;
  v16.Size = 184;
  return PcwAddInstance(v3, &DestinationString, KeMaximumProcessors + (unsigned __int16)KeNumberNodes, 1u, &v16);
}
