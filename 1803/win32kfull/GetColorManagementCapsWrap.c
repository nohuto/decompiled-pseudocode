/*
 * XREFs of GetColorManagementCapsWrap @ 0x1C0103340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetColorManagementCapsWrap(_DWORD *a1)
{
  int v1; // r8d
  int v2; // edx
  unsigned int v3; // ecx
  __int64 result; // rax

  v1 = 0;
  if ( (a1[10] & 1) != 0 && (a1[525] == 3 || (a1[530] & 0x10) != 0) )
    v1 = 2;
  v2 = a1[454];
  v3 = v1 | 4;
  if ( (v2 & 0x4000000) == 0 )
    v3 = v1;
  result = v3 | 1;
  if ( (v2 & 0x2000000) == 0 )
    return v3;
  return result;
}
