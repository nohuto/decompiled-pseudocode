/*
 * XREFs of ACPIEcGetUid @ 0x1C00AE450
 * Callers:
 *     ACPIEcStartDeviceWorker @ 0x1C0053890 (ACPIEcStartDeviceWorker.c)
 * Callees:
 *     AMLIFreeDataBuffs @ 0x1C000A45C (AMLIFreeDataBuffs.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C00116EC (AMLIEvalNameSpaceObject.c)
 *     AMLIGetNamedChild @ 0x1C0015140 (AMLIGetNamedChild.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 *__fastcall ACPIEcGetUid(__int64 a1)
{
  __int64 *result; // rax
  __int64 *v3; // rsi
  int v4; // ebx
  _QWORD v5[7]; // [rsp+20h] [rbp-38h] BYREF

  *(_DWORD *)(a1 + 16) = 0;
  result = AMLIGetNamedChild(*(__int64 **)(a1 + 56), 1145656671);
  v3 = result;
  if ( result )
  {
    memset(v5, 0, 0x28uLL);
    v4 = AMLIEvalNameSpaceObject(v3, v5, 0, 0LL);
    result = (__int64 *)AMLIDereferenceHandleEx((volatile signed __int32 *)v3);
    if ( v4 >= 0 )
    {
      if ( WORD1(v5[0]) == 1 )
        *(_DWORD *)(a1 + 16) = LOBYTE(v5[2]);
      return (__int64 *)AMLIFreeDataBuffs(v5);
    }
  }
  return result;
}
