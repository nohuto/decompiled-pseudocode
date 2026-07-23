/*
 * XREFs of RtlBootStatusItemInfo @ 0x140719D78
 * Callers:
 *     PopBootStatSet @ 0x140719764 (PopBootStatSet.c)
 *     RtlpGetSetBootStatusData @ 0x140719BB4 (RtlpGetSetBootStatusData.c)
 *     PopBootStatGet @ 0x140754280 (PopBootStatGet.c)
 *     RtlCheckBootStatusIntegrity @ 0x140896E48 (RtlCheckBootStatusIntegrity.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlBootStatusItemInfo(unsigned int a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( a1 > 0x10 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    *a2 = RtlpBootStatusFields[2 * a1];
    *a3 = RtlpBootStatusFields[2 * a1 + 1];
  }
  return v3;
}
