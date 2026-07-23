/*
 * XREFs of sub_1800FFA38 @ 0x1800FFA38
 * Callers:
 *     sub_1800FD4E8 @ 0x1800FD4E8 (sub_1800FD4E8.c)
 *     sub_1800FF6D0 @ 0x1800FF6D0 (sub_1800FF6D0.c)
 * Callees:
 *     sub_1800094BC @ 0x1800094BC (sub_1800094BC.c)
 *     sub_180015918 @ 0x180015918 (sub_180015918.c)
 *     RtlCultureNameToLCID @ 0x1800168B0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 */

__int64 __fastcall sub_1800FFA38(__int64 a1, __int64 a2, WCHAR *a3, __int16 a4)
{
  __int64 v8; // r8
  int v9; // edi
  __int16 v11[2]; // [rsp+20h] [rbp-38h] BYREF
  DWORD Lcid; // [rsp+24h] [rbp-34h] BYREF
  _UNICODE_STRING String; // [rsp+28h] [rbp-30h] BYREF

  v11[0] = -1;
  RtlInitUnicodeString(&String, a3);
  if ( RtlCultureNameToLCID(&String, &Lcid) )
  {
    LOBYTE(v8) = 1;
    v9 = sub_180015918(a1, a3, v8, v11);
    if ( v9 >= 0 )
    {
      *(_WORD *)(a2 + 4) = Lcid;
      *(_WORD *)(a2 + 6) = v11[0];
      *(_WORD *)a2 = a4;
      *(_WORD *)(a2 + 2) = 0;
      *(_QWORD *)(a2 + 8) = 0LL;
      *(_QWORD *)(a2 + 16) = 0LL;
      *(_DWORD *)(a2 + 24) = 0;
      if ( (a4 & 0x2000) == 0 )
        sub_1800094BC(a1, a2, a3);
    }
  }
  else
  {
    return (unsigned int)-1073020924;
  }
  return (unsigned int)v9;
}
