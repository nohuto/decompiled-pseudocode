/*
 * XREFs of ??_GCSceneNodeMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01A53F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResourceMarshalerArray@DirectComposition@@QEAA@XZ @ 0x1C000FC6C (--1CResourceMarshalerArray@DirectComposition@@QEAA@XZ.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 */

DirectComposition::CSceneNodeMarshaler *__fastcall DirectComposition::CSceneNodeMarshaler::`scalar deleting destructor'(
        DirectComposition::CSceneNodeMarshaler *this)
{
  char v2; // r9

  DirectComposition::CResourceMarshalerArray::~CResourceMarshalerArray((DirectComposition::CSceneNodeMarshaler *)((char *)this + 72));
  DirectComposition::CResourceMarshalerArray::~CResourceMarshalerArray((DirectComposition::CSceneNodeMarshaler *)((char *)this + 40));
  if ( (v2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
