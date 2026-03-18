/*
 * XREFs of SmQueryStoreInformation @ 0x1406CFD5C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140626390 (ExpQuerySystemInformation.c)
 * Callees:
 *     SeSinglePrivilegeCheck @ 0x140612160 (SeSinglePrivilegeCheck.c)
 *     SmProcessCompressionInfoRequest @ 0x140663308 (SmProcessCompressionInfoRequest.c)
 *     SmProcessRegistrationRequest @ 0x14075ECA4 (SmProcessRegistrationRequest.c)
 *     SmProcessListRequest @ 0x1408AAF48 (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x1408AB3E0 (SmProcessStatsRequest.c)
 *     SmcProcessListRequest @ 0x1408ABFF0 (SmcProcessListRequest.c)
 *     SmcProcessStatsRequest @ 0x1408AC234 (SmcProcessStatsRequest.c)
 */

__int64 __fastcall SmQueryStoreInformation(__int64 a1, __int64 a2, int a3, __int64 a4, _DWORD *a5)
{
  char PreviousMode; // bl
  int v6; // ecx
  int v8[4]; // [rsp+30h] [rbp-28h]
  int v9[2]; // [rsp+40h] [rbp-18h]

  PreviousMode = a4;
  if ( a3 != 24 )
    return 3221225476LL;
  *(_OWORD *)v8 = *(_OWORD *)a2;
  *(_QWORD *)v9 = *(_QWORD *)(a2 + 16);
  if ( (unsigned int)*(_OWORD *)a2 != 1 )
    return 3221225485LL;
  if ( v8[1] > 0x16u || (v6 = 4202788, !_bittest(&v6, v8[1])) )
  {
    if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a4) )
      return 3221225506LL;
  }
  switch ( v8[1] )
  {
    case 22:
      return SmProcessCompressionInfoRequest(*(unsigned __int64 *)&v8[2], v9[0], a5, PreviousMode);
    case 15:
      LOBYTE(a4) = PreviousMode;
      return SmProcessRegistrationRequest(*(_QWORD *)&v8[2], (unsigned int)v9[0], a5, a4);
    case 2:
      return SmProcessStatsRequest(v6, v8[2], v9[0], (int)a5, PreviousMode);
    case 5:
      return SmProcessListRequest(&SmGlobals, *(_QWORD *)&v8[2], (unsigned int)v9[0], a5, PreviousMode);
    case 8:
      return SmcProcessListRequest((unsigned int)&unk_14055B1C0, v8[2], v9[0], (_DWORD)a5, PreviousMode);
    case 13:
      return SmcProcessStatsRequest((unsigned int)&unk_14055B1C0, v8[2], v9[0], (_DWORD)a5, PreviousMode);
    default:
      return 3221225475LL;
  }
}
