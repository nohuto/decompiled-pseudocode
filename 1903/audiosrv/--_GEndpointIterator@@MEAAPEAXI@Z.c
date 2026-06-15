/*
 * XREFs of ??_GEndpointIterator@@MEAAPEAXI@Z @ 0x180146990
 * Callers:
 *     ??_EEndpointIterator@@O7EAAPEAXI@Z @ 0x18006C7D0 (--_EEndpointIterator@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1EndpointIterator@@MEAA@XZ @ 0x1801468E8 (--1EndpointIterator@@MEAA@XZ.c)
 */

EndpointIterator *__fastcall EndpointIterator::`scalar deleting destructor'(EndpointIterator *this, char a2)
{
  EndpointIterator::~EndpointIterator(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
