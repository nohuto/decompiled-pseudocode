/*
 * XREFs of ndisOidPostIovFreeVF @ 0x1C00B2700
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisIovFreeVF@@YAHPEAU_NDIS_VF_BLOCK@@@Z @ 0x1C00B0B7C (-ndisIovFreeVF@@YAHPEAU_NDIS_VF_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisOidPostIovFreeVF(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  int v4; // edx

  v2 = *(_QWORD *)(a1 + 32);
  result = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    v4 = *(_DWORD *)(a1 + 40);
    if ( !v4 || v4 == 65539 && (result = *(unsigned int *)(result + 120), (result & 4) != 0) )
    {
      result = ndisIovFreeVF(*(struct _NDIS_VF_BLOCK **)(v2 + 144));
      *(_DWORD *)(a1 + 40) = 0;
    }
  }
  return result;
}
