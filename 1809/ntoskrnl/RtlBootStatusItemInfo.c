/*
 * XREFs of RtlBootStatusItemInfo @ 0x140718AF8
 * Callers:
 *     PopBootStatSet @ 0x1407184E4 (PopBootStatSet.c)
 *     RtlpGetSetBootStatusData @ 0x140718934 (RtlpGetSetBootStatusData.c)
 *     PopBootStatGet @ 0x1407530B0 (PopBootStatGet.c)
 *     RtlCheckBootStatusIntegrity @ 0x140895C08 (RtlCheckBootStatusIntegrity.c)
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
