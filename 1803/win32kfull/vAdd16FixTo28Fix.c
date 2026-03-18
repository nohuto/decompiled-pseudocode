/*
 * XREFs of vAdd16FixTo28Fix @ 0x1C02240E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall vAdd16FixTo28Fix(_DWORD *a1, _DWORD *a2, int a3)
{
  __int64 result; // rax
  int v4; // edx

  result = (unsigned int)*a2;
  v4 = -*a2;
  if ( !a3 )
    v4 = result;
  *a1 += v4 >> 12;
  return result;
}
