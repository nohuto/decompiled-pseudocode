/*
 * XREFs of AlpcpReleaseAttributes @ 0x14061A818
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x140619CD8 (AlpcpAcceptConnectPort.c)
 *     AlpcpSendMessage @ 0x1406348F0 (AlpcpSendMessage.c)
 *     AlpcpCaptureAttributes @ 0x1406363E0 (AlpcpCaptureAttributes.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     AlpcpDereferenceBlobEx @ 0x140618C70 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReleaseViewAttribute @ 0x14061CCAC (AlpcpReleaseViewAttribute.c)
 */

__int64 __fastcall AlpcpReleaseAttributes(_QWORD *a1)
{
  ULONG_PTR v2; // rcx
  ULONG_PTR v3; // rcx
  ULONG_PTR v4; // rcx
  __int64 v5; // rcx
  __int64 result; // rax

  v2 = a1[4];
  if ( v2 )
  {
    result = AlpcpDereferenceBlobEx(v2, 1);
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
    result = AlpcpDereferenceBlobEx(v4, 1);
    a1[6] = 0LL;
  }
  v5 = a1[7];
  if ( v5 )
  {
    if ( (v5 & 1) != 0 )
      result = ObfDereferenceObject((PVOID)(v5 & 0xFFFFFFFFFFFFFFFEuLL));
    a1[7] = 0LL;
  }
  return result;
}
