/*
 * XREFs of KiSynchNumaCounterSetCallback @ 0x14087F070
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfW @ 0x1400040E8 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     KeEnumerateNextProcessor @ 0x1400BE260 (KeEnumerateNextProcessor.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PcwAddInstance @ 0x1406AEA80 (PcwAddInstance.c)
 *     KiAddSynchCounters @ 0x14087EF10 (KiAddSynchCounters.c)
 *     EtwDereferenceSpinLockCounters @ 0x1408FA8F0 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x1408FA94C (EtwReferenceSpinLockCounters.c)
 */

int __fastcall KiSynchNumaCounterSetCallback(int a1, __int64 a2)
{
  int result; // eax
  int v5; // ebx
  struct _PCW_BUFFER *v6; // r15
  unsigned int v7; // edi
  bool i; // cf
  __int64 v9; // rcx
  __int64 v10; // r14
  __int16 v11; // bx
  int v12; // esi
  const void *v13; // rbx
  __int64 v14; // rdx
  PPCW_DATA Data; // [rsp+20h] [rbp-E0h]
  ULONG Id; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  struct _PCW_DATA v18; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 *v19; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A0h]
  __int64 v21; // [rsp+68h] [rbp-98h]
  struct _PCW_DATA v22; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v23[48]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v24[48]; // [rsp+140h] [rbp+40h] BYREF
  wchar_t pszDest[12]; // [rsp+200h] [rbp+100h] BYREF

  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  memset(v23, 0, 0xB8uLL);
  memset(v24, 0, 0xB8uLL);
  result = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( !a1 )
  {
    EtwReferenceSpinLockCounters();
    return 0;
  }
  v5 = a1 - 1;
  if ( !v5 )
  {
    EtwDereferenceSpinLockCounters();
    return 0;
  }
  if ( (unsigned int)(v5 - 1) <= 1 )
  {
    v6 = *(struct _PCW_BUFFER **)(a2 + 24);
    v7 = 0;
    for ( i = KeNumberNodes != 0; i; i = v7 < (unsigned __int16)KeNumberNodes )
    {
      v9 = KeNodeBlock[v7];
      v10 = *(_QWORD *)(v9 + 136);
      if ( v10 )
      {
        v11 = *(_WORD *)(v9 + 144);
        memset(v23, 0, 0xB8uLL);
        v20 = v10;
        v12 = 0;
        LOWORD(v21) = v11;
        v19 = 0LL;
        while ( !(unsigned int)KeEnumerateNextProcessor(&Id, &v19) )
        {
          v13 = (const void *)(KiProcessorBlock[Id] + 25024);
          KiAddSynchCounters(v23, (__int64)v13);
          KiAddSynchCounters(v24, v14);
          LODWORD(Data) = v12;
          RtlStringCbPrintfW(pszDest, 0x16uLL, L"%u,%u", v7, Data);
          RtlInitUnicodeString(&DestinationString, pszDest);
          v22.Data = v13;
          v22.Size = 184;
          result = PcwAddInstance(v6, &DestinationString, Id, 1u, &v22);
          if ( result < 0 )
            return result;
          ++v12;
        }
        RtlStringCbPrintfW(pszDest, 0x16uLL, L"%u,_Total", v7);
        RtlInitUnicodeString(&DestinationString, pszDest);
        v18.Data = v23;
        v18.Size = 184;
        result = PcwAddInstance(v6, &DestinationString, v7 + KeMaximumProcessors, 1u, &v18);
        if ( result < 0 )
          return result;
      }
      ++v7;
    }
    RtlStringCbPrintfW(pszDest, 0x16uLL, L"_Total");
    RtlInitUnicodeString(&DestinationString, pszDest);
    v18.Data = v24;
    v18.Size = 184;
    return PcwAddInstance(v6, &DestinationString, KeMaximumProcessors + (unsigned __int16)KeNumberNodes, 1u, &v18);
  }
  return result;
}
