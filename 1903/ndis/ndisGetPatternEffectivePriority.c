/*
 * XREFs of ndisGetPatternEffectivePriority @ 0x1C007301C
 * Callers:
 *     ndisOidPostAddPMProtocolOffload @ 0x1C0022620 (ndisOidPostAddPMProtocolOffload.c)
 *     ndisOidPostRemovePMProtocolOffload @ 0x1C0022BB0 (ndisOidPostRemovePMProtocolOffload.c)
 *     ndisMiniportPostAddWOLPattern @ 0x1C0034914 (ndisMiniportPostAddWOLPattern.c)
 *     ndisMiniportPostRemoveWoLPattern @ 0x1C0073BB8 (ndisMiniportPostRemoveWoLPattern.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGetPatternEffectivePriority(__int64 a1)
{
  __int64 result; // rax
  __int64 **v2; // rdx
  unsigned int v3; // ecx

  result = 0xFFFFFFFFLL;
  v2 = (__int64 **)(a1 + 8);
  while ( v2 )
  {
    v3 = result;
    result = *((unsigned int *)v2 + 6);
    v2 = (__int64 **)*v2;
    if ( (unsigned int)result >= v3 )
      result = v3;
  }
  return result;
}
