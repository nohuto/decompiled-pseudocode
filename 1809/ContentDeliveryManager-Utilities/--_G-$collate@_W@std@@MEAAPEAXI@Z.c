/*
 * XREFs of ??_G?$collate@_W@std@@MEAAPEAXI@Z @ 0x1800B6070
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z_0 @ 0x1800C6EA1 (--3@YAXPEAX@Z_0.c)
 */

void **__fastcall std::collate<wchar_t>::`scalar deleting destructor'(void **a1, char a2)
{
  *a1 = &std::collate<wchar_t>::`vftable';
  free(a1[3]);
  *a1 = &std::_Facet_base::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
