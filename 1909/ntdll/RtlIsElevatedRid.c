/*
 * XREFs of RtlIsElevatedRid @ 0x180083320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsElevatedRid(PSID_AND_ATTRIBUTES SidAttr)
{
  int v1; // edx
  _DWORD *Sid; // r8
  int v3; // ecx
  _DWORD *i; // rax

  v1 = 0;
  if ( !SidAttr )
    return 0;
  if ( (SidAttr->Attributes & 0x30) != 0 )
    return 0;
  Sid = SidAttr->Sid;
  if ( !*((_BYTE *)SidAttr->Sid + 1) || (unsigned int)(Sid[2] - 80) <= 0x1F )
    return 0;
  if ( *((_BYTE *)Sid + 1) )
    v3 = Sid[*((unsigned __int8 *)Sid + 1) + 1];
  else
    v3 = 0;
  for ( i = &unk_1801242C0; v3 != *i; ++i )
  {
    if ( (unsigned int)++v1 >= 0x13 )
      return 0;
  }
  return 1;
}
