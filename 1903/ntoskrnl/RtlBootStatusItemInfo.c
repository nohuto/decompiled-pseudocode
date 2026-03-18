/*
 * XREFs of RtlBootStatusItemInfo @ 0x140741E30
 * Callers:
 *     PopBootStatSet @ 0x140738B08 (PopBootStatSet.c)
 *     RtlpGetSetBootStatusData @ 0x140741C5C (RtlpGetSetBootStatusData.c)
 *     PopBootStatGet @ 0x14077916C (PopBootStatGet.c)
 *     RtlCheckBootStatusIntegrity @ 0x1408D3B38 (RtlCheckBootStatusIntegrity.c)
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
