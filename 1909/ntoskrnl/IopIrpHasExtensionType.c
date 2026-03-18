/*
 * XREFs of IopIrpHasExtensionType @ 0x14011A80C
 * Callers:
 *     IoReuseIrp @ 0x140091F90 (IoReuseIrp.c)
 *     IopFreeIrpExtension @ 0x14011A3FC (IopFreeIrpExtension.c)
 *     IoMakeAssociatedIrpPriv @ 0x14011A4A4 (IoMakeAssociatedIrpPriv.c)
 *     IoPropagateActivityIdToThread @ 0x14011A7A0 (IoPropagateActivityIdToThread.c)
 *     IoGetFsTrackOffsetState @ 0x14011A7E0 (IoGetFsTrackOffsetState.c)
 *     IoIsKernelPagingRead @ 0x1401284B0 (IoIsKernelPagingRead.c)
 *     IoSetGenericIrpExtension @ 0x1401915C0 (IoSetGenericIrpExtension.c)
 *     IoClearAdapterCryptoEngineExtension @ 0x140299E30 (IoClearAdapterCryptoEngineExtension.c)
 *     IoClearFsTrackOffsetState @ 0x140299E80 (IoClearFsTrackOffsetState.c)
 *     IoGetAdapterCryptoEngineExtension @ 0x140299EB0 (IoGetAdapterCryptoEngineExtension.c)
 *     IoGetFsZeroingOffset @ 0x140299EF0 (IoGetFsZeroingOffset.c)
 *     IoSetFsZeroingOffset @ 0x140299FE0 (IoSetFsZeroingOffset.c)
 *     IoSetFsZeroingOffsetRequired @ 0x14029A020 (IoSetFsZeroingOffsetRequired.c)
 *     IopPerfCompleteRequest @ 0x14029A368 (IopPerfCompleteRequest.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall IopIrpHasExtensionType(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  char v3; // r8
  int v4; // eax

  v2 = *(_QWORD *)(a1 + 200);
  v3 = 0;
  if ( *(char *)(a1 + 71) < 0 )
    return a2 == 2;
  if ( v2 )
  {
    v4 = *(unsigned __int16 *)(v2 + 2);
    return _bittest(&v4, a2);
  }
  return v3;
}
