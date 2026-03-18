/*
 * XREFs of ?Zombied@QueryFontRequest@@UEBA_NXZ @ 0x1C0114630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall QueryFontRequest::Zombied(QueryFontRequest *this)
{
  return *(_BYTE *)(*((_QWORD *)this + 6) + 12LL);
}
