/*
 * XREFs of _wcsupr @ 0x1401A0420
 * Callers:
 *     PfFileInfoNotify @ 0x140093D90 (PfFileInfoNotify.c)
 *     PfSnParametersRead @ 0x140777A9C (PfSnParametersRead.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x140931AAC (BiGetObjectReferenceFromEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140932A58 (BiUpdateObjectReferenceInEfiEntry.c)
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
