/*
 * XREFs of IsOidRequestDirectOid @ 0x1C0068A60
 * Callers:
 *     ndisMDirectOidRequest @ 0x1C006B170 (ndisMDirectOidRequest.c)
 *     NdisFDirectOidRequest @ 0x1C008D6B0 (NdisFDirectOidRequest.c)
 * Callees:
 *     <none>
 */

char __fastcall IsOidRequestDirectOid(int a1)
{
  char result; // al
  _DWORD *v2; // rdx
  unsigned int v3; // r8d

  result = 0;
  v2 = &ndisDirectOidRequestPathOids;
  v3 = 0;
  while ( a1 != *v2 )
  {
    ++v3;
    ++v2;
    if ( v3 >= 0x17 )
      return result;
  }
  return 1;
}
