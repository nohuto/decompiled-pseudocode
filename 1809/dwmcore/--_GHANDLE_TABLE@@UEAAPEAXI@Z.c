/*
 * XREFs of ??_GHANDLE_TABLE@@UEAAPEAXI@Z @ 0x180147C60
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 */

void **__fastcall HANDLE_TABLE::`scalar deleting destructor'(void **this, char a2)
{
  *this = &HANDLE_TABLE::`vftable';
  WPF::ProcessHeapImpl::Free(this[3]);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
