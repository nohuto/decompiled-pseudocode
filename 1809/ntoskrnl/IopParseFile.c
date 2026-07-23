/*
 * XREFs of IopParseFile @ 0x1406A4800
 * Callers:
 *     <none>
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x1400B8AD0 (IoGetRelatedDeviceObject.c)
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 */

__int64 __fastcall IopParseFile(
        struct _FILE_OBJECT *a1,
        POBJECT_TYPE *a2,
        struct _ACCESS_STATE *a3,
        unsigned __int8 a4,
        int a5,
        PUNICODE_STRING AbsoluteObjectName,
        PCUNICODE_STRING SourceString,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        PVOID *a11)
{
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rax

  if ( a2 != IoFileObjectType || !a8 || *(_WORD *)a8 != 8 || *(_WORD *)(a8 + 2) != 224 )
    return 3221225508LL;
  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  *(_QWORD *)(a8 + 40) = a1;
  return IopParseDevice(RelatedDeviceObject, a2, a3, a4, a5, AbsoluteObjectName, SourceString, a8, a9, a10, a11);
}
