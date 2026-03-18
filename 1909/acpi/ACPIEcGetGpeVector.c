/*
 * XREFs of ACPIEcGetGpeVector @ 0x1C00AE3B0
 * Callers:
 *     ACPIEcStartDeviceWorker @ 0x1C0053890 (ACPIEcStartDeviceWorker.c)
 * Callees:
 *     AMLIFreeDataBuffs @ 0x1C000A45C (AMLIFreeDataBuffs.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C00116EC (AMLIEvalNameSpaceObject.c)
 *     AMLIGetNamedChild @ 0x1C0015140 (AMLIGetNamedChild.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall ACPIEcGetGpeVector(__int64 a1)
{
  __int64 *v2; // rdi
  int v4; // esi
  _QWORD v5[7]; // [rsp+20h] [rbp-38h] BYREF

  v2 = AMLIGetNamedChild(*(__int64 **)(a1 + 56), 1162889055);
  if ( !v2 )
    return 3221225524LL;
  memset(v5, 0, 0x28uLL);
  v4 = AMLIEvalNameSpaceObject(v2, v5, 0, 0LL);
  AMLIDereferenceHandleEx((volatile signed __int32 *)v2);
  if ( v4 >= 0 )
  {
    if ( WORD1(v5[0]) != 1 )
    {
      AMLIFreeDataBuffs(v5);
      return 3222536207LL;
    }
    *(_DWORD *)(a1 + 48) = LOBYTE(v5[2]);
    AMLIFreeDataBuffs(v5);
  }
  return (unsigned int)v4;
}
