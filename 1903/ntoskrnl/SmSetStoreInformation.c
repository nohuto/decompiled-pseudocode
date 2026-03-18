/*
 * XREFs of SmSetStoreInformation @ 0x1406EB974
 * Callers:
 *     NtSetSystemInformation @ 0x1406A6DC0 (NtSetSystemInformation.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     SmProcessCreateRequest @ 0x1406B3984 (SmProcessCreateRequest.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1406EBA24 (SmProcessStoreMemoryPriorityRequest.c)
 *     SmProcessConfigRequest @ 0x1407859CC (SmProcessConfigRequest.c)
 *     SmProcessDeleteRequest @ 0x1408E8110 (SmProcessDeleteRequest.c)
 *     SmProcessResizeRequest @ 0x1408E8530 (SmProcessResizeRequest.c)
 *     SmProcessSystemStoreTrimRequest @ 0x1408E88BC (SmProcessSystemStoreTrimRequest.c)
 *     SmcProcessCreateRequest @ 0x1408E8DC8 (SmcProcessCreateRequest.c)
 *     SmcProcessDeleteRequest @ 0x1408E9018 (SmcProcessDeleteRequest.c)
 *     SmcProcessResizeRequest @ 0x1408E9084 (SmcProcessResizeRequest.c)
 *     SmcProcessStoreCreateRequest @ 0x1408E9354 (SmcProcessStoreCreateRequest.c)
 *     SmcProcessStoreDeleteRequest @ 0x1408E94B0 (SmcProcessStoreDeleteRequest.c)
 */

__int64 __fastcall SmSetStoreInformation(__int64 a1, __int128 *a2, int a3, KPROCESSOR_MODE a4)
{
  __int64 v5; // r8
  __int64 v6; // r9
  __int128 v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  if ( a3 != 24 )
    return 3221225476LL;
  v8 = *a2;
  v9 = *((_QWORD *)a2 + 2);
  if ( (unsigned int)*a2 != 1 )
    return 3221225485LL;
  if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a4) )
    return 3221225506LL;
  if ( SDWORD1(v8) <= 12 )
  {
    switch ( DWORD1(v8) )
    {
      case 0xC:
        LOBYTE(v6) = a4;
        return SmcProcessStoreDeleteRequest(&unk_14058C1C0, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
      case 3:
        return SmProcessCreateRequest((__int64)&SmGlobals, *((unsigned __int64 *)&v8 + 1), v9, a4);
      case 4:
        LOBYTE(v6) = a4;
        return SmProcessDeleteRequest(&SmGlobals, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
      case 9:
        LOBYTE(v6) = a4;
        return SmcProcessCreateRequest(&unk_14058C1C0, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
      case 0xA:
        LOBYTE(v6) = a4;
        return SmcProcessDeleteRequest(&unk_14058C1C0, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
      case 0xB:
        LOBYTE(v6) = a4;
        return SmcProcessStoreCreateRequest(&unk_14058C1C0, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
    }
    return 3221225475LL;
  }
  switch ( DWORD1(v8) )
  {
    case 0x11:
      LOBYTE(v6) = a4;
      return SmProcessResizeRequest(&SmGlobals, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
    case 0x12:
      LOBYTE(v6) = a4;
      return SmcProcessResizeRequest(&unk_14058C1C0, *((_QWORD *)&v8 + 1), (unsigned int)v9, v6);
    case 0x13:
      LOBYTE(v5) = a4;
      return SmProcessConfigRequest(*((_QWORD *)&v8 + 1), (unsigned int)v9, v5);
    case 0x14:
      LOBYTE(v5) = a4;
      return SmProcessStoreMemoryPriorityRequest(*((_QWORD *)&v8 + 1), (unsigned int)v9, v5);
    case 0x15:
      LOBYTE(v5) = a4;
      return SmProcessSystemStoreTrimRequest(*((_QWORD *)&v8 + 1), (unsigned int)v9, v5);
    default:
      return 3221225475LL;
  }
}
