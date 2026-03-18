/*
 * XREFs of AlpcpReleaseAttributes @ 0x1406488D8
 * Callers:
 *     AlpcpSendMessage @ 0x1405E1660 (AlpcpSendMessage.c)
 *     AlpcpCaptureAttributes @ 0x1405E3090 (AlpcpCaptureAttributes.c)
 *     AlpcpAcceptConnectPort @ 0x140648064 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     AlpcpDereferenceBlobEx @ 0x14064B150 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReleaseViewAttribute @ 0x1406E3868 (AlpcpReleaseViewAttribute.c)
 */

LONG_PTR __fastcall AlpcpReleaseAttributes(_QWORD *a1)
{
  ULONG_PTR v2; // rcx
  ULONG_PTR v3; // rcx
  ULONG_PTR v4; // rcx
  unsigned __int64 v5; // rcx
  LONG_PTR result; // rax

  v2 = a1[4];
  if ( v2 )
  {
    result = AlpcpDereferenceBlobEx(v2);
    a1[4] = 0LL;
  }
  v3 = a1[5];
  if ( v3 )
  {
    result = AlpcpReleaseViewAttribute(v3);
    a1[5] = 0LL;
  }
  v4 = a1[6];
  if ( v4 )
  {
    result = AlpcpDereferenceBlobEx(v4);
    a1[6] = 0LL;
  }
  v5 = a1[7];
  if ( (v5 & 1) != 0 )
  {
    if ( v5 >= 4 && (v5 & 2) != 0 )
      result = ObfDereferenceObject((PVOID)(v5 & 0xFFFFFFFFFFFFFFFCuLL));
    a1[7] = 0LL;
  }
  return result;
}
