/*
 * XREFs of SdbGetEntryFlags @ 0x140723318
 * Callers:
 *     SdbReadEntryInformation @ 0x140722BC0 (SdbReadEntryInformation.c)
 *     SdbpGetExeEntryFlags @ 0x14072322C (SdbpGetExeEntryFlags.c)
 * Callees:
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x140680C80 (AslLogCallPrintf.c)
 *     SdbpQueryAppCompatFlagsByExeID @ 0x1407233CC (SdbpQueryAppCompatFlagsByExeID.c)
 *     AslGuidToString @ 0x140723694 (AslGuidToString.c)
 */

__int64 __fastcall SdbGetEntryFlags(__int64 a1, int *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  int AppCompatFlagsByExeID; // eax
  int v6; // ecx
  _DWORD v8[4]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v9[80]; // [rsp+40h] [rbp-68h] BYREF

  *a2 = 0;
  if ( (int)AslGuidToString(v9, 39LL, a1) < 0 )
  {
    AslLogCallPrintf(1LL);
  }
  else
  {
    v8[0] = 0;
    if ( (int)SdbpQueryAppCompatFlagsByExeID(v3, v9, 1LL, v8) >= 0 )
      *a2 = v8[0];
    v8[0] = 0;
    AppCompatFlagsByExeID = SdbpQueryAppCompatFlagsByExeID(v4, v9, 0LL, v8);
    v6 = *a2;
    if ( AppCompatFlagsByExeID >= 0 )
    {
      v6 |= v8[0];
      *a2 = v6;
    }
    *a2 = v6 & 0xFFF;
  }
  return 1LL;
}
