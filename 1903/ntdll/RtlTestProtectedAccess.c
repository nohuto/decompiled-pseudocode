/*
 * XREFs of RtlTestProtectedAccess @ 0x18008B920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall RtlTestProtectedAccess(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // eax
  bool result; // al

  result = 1;
  if ( (a2 & 7) != 0 )
  {
    if ( (unsigned __int8)(a1 & 7) < (unsigned __int8)(a2 & 7) )
      return 0;
    v2 = dword_18012B640[3 * ((unsigned __int64)a1 >> 4)];
    if ( !_bittest(&v2, a2 >> 4) )
      return 0;
  }
  return result;
}
