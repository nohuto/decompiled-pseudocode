/*
 * XREFs of ??_GCTransformGroupMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0005980
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResourceMarshalerArray@DirectComposition@@QEAA@XZ @ 0x1C0010C3C (--1CResourceMarshalerArray@DirectComposition@@QEAA@XZ.c)
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 */

DirectComposition::CTransformGroupMarshaler *__fastcall DirectComposition::CTransformGroupMarshaler::`scalar deleting destructor'(
        DirectComposition::CTransformGroupMarshaler *this)
{
  char v2; // r9

  DirectComposition::CResourceMarshalerArray::~CResourceMarshalerArray((DirectComposition::CTransformGroupMarshaler *)((char *)this + 56));
  if ( (v2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
