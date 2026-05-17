/*
 * XREFs of sub_1800EA8E8 @ 0x1800EA8E8
 * Callers:
 *     RtlCheckBootStatusIntegrity @ 0x1800EA920 (RtlCheckBootStatusIntegrity.c)
 *     sub_1800EB12C @ 0x1800EB12C (sub_1800EB12C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800EA8E8(unsigned int a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( a1 > 0x10 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    *a2 = dword_180132B60[2 * a1];
    *a3 = dword_180132B60[2 * a1 + 1];
  }
  return v3;
}
