/*
 * XREFs of _wcsupr @ 0x140195C50
 * Callers:
 *     PfFileInfoNotify @ 0x1400D3DE0 (PfFileInfoNotify.c)
 *     PfSnParametersRead @ 0x140752320 (PfSnParametersRead.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1408F3DE4 (BiGetObjectReferenceFromEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x1408F4D64 (BiUpdateObjectReferenceInEfiEntry.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsupr(wchar_t *String)
{
  wchar_t v1; // dx
  wchar_t *v2; // r8

  v1 = *String;
  v2 = String;
  while ( v1 )
  {
    if ( (unsigned __int16)(v1 - 97) <= 0x19u )
      *v2 = v1 - 32;
    v1 = *++v2;
  }
  return String;
}
