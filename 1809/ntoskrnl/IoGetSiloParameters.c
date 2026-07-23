/*
 * XREFs of IoGetSiloParameters @ 0x1401198B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IoGetSiloParameters(__int64 a1)
{
  _QWORD *v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 208);
  result = 0LL;
  if ( v1 )
  {
    if ( v1 != IopRevocationExtension )
      return v1[8];
  }
  return result;
}
