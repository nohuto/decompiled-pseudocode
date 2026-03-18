/*
 * XREFs of ??_GCInlineStorageBase@PrimitiveStorage@@UEAAPEAXI@Z @ 0x18001DCA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 */

PrimitiveStorage::CInlineStorageBase *__fastcall PrimitiveStorage::CInlineStorageBase::`scalar deleting destructor'(
        PrimitiveStorage::CInlineStorageBase *this,
        char a2)
{
  --CHWDrawListEngineMetrics::s_cDrawListPrimitives;
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x68uLL);
  return this;
}
