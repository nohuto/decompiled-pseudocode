/*
 * XREFs of ?NDIS_BUFFER_TO_SPAN_PAGES@@YAKPEAU_MDL@@@Z @ 0x1C0091020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall NDIS_BUFFER_TO_SPAN_PAGES(struct _MDL *a1)
{
  __int64 ByteCount; // rdx

  ByteCount = a1->ByteCount;
  if ( (_DWORD)ByteCount )
    return ((unsigned __int64)((LODWORD(a1->StartVa) + a1->ByteOffset) & 0xFFF) + ByteCount + 4095) >> 12;
  else
    return 1LL;
}
