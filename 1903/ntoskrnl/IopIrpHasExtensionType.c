/*
 * XREFs of IopIrpHasExtensionType @ 0x14011C27C
 * Callers:
 *     IoReuseIrp @ 0x1400A7F70 (IoReuseIrp.c)
 *     IopFreeIrpExtension @ 0x14011BE78 (IopFreeIrpExtension.c)
 *     IoMakeAssociatedIrpPriv @ 0x14011BF14 (IoMakeAssociatedIrpPriv.c)
 *     IoPropagateActivityIdToThread @ 0x14011C210 (IoPropagateActivityIdToThread.c)
 *     IoGetFsTrackOffsetState @ 0x14011C250 (IoGetFsTrackOffsetState.c)
 *     IoIsKernelPagingRead @ 0x140127A90 (IoIsKernelPagingRead.c)
 *     IoSetGenericIrpExtension @ 0x140190F50 (IoSetGenericIrpExtension.c)
 *     IoClearAdapterCryptoEngineExtension @ 0x14029A0D0 (IoClearAdapterCryptoEngineExtension.c)
 *     IoClearFsTrackOffsetState @ 0x14029A120 (IoClearFsTrackOffsetState.c)
 *     IoGetAdapterCryptoEngineExtension @ 0x14029A150 (IoGetAdapterCryptoEngineExtension.c)
 *     IoGetFsZeroingOffset @ 0x14029A190 (IoGetFsZeroingOffset.c)
 *     IoSetFsZeroingOffset @ 0x14029A280 (IoSetFsZeroingOffset.c)
 *     IoSetFsZeroingOffsetRequired @ 0x14029A2C0 (IoSetFsZeroingOffsetRequired.c)
 *     IopPerfCompleteRequest @ 0x14029A608 (IopPerfCompleteRequest.c)
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
