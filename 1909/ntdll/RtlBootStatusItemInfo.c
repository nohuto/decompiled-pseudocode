/*
 * XREFs of RtlBootStatusItemInfo @ 0x1800EA9D8
 * Callers:
 *     RtlCheckBootStatusIntegrity @ 0x1800EAA10 (RtlCheckBootStatusIntegrity.c)
 *     RtlpGetSetBootStatusData @ 0x1800EB21C (RtlpGetSetBootStatusData.c)
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
