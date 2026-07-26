/*
 * XREFs of ndisEnableRsc @ 0x1C00AB100
 * Callers:
 *     ndisUpdateMinimumStackVersion @ 0x1C0104308 (ndisUpdateMinimumStackVersion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisEnableRsc(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 4096);
  if ( result )
    *(_BYTE *)(result + 5) = 0;
  return result;
}
