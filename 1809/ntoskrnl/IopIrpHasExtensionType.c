/*
 * XREFs of IopIrpHasExtensionType @ 0x140107CCC
 * Callers:
 *     IoReuseIrp @ 0x1400DF810 (IoReuseIrp.c)
 *     IopFreeIrpExtension @ 0x1401078D0 (IopFreeIrpExtension.c)
 *     IoMakeAssociatedIrpPriv @ 0x140107974 (IoMakeAssociatedIrpPriv.c)
 *     IoPropagateActivityIdToThread @ 0x140107C40 (IoPropagateActivityIdToThread.c)
 *     IoGetFsTrackOffsetState @ 0x140107CA0 (IoGetFsTrackOffsetState.c)
 *     IoSetGenericIrpExtension @ 0x1401408E0 (IoSetGenericIrpExtension.c)
 *     IoClearAdapterCryptoEngineExtension @ 0x140285120 (IoClearAdapterCryptoEngineExtension.c)
 *     IoClearFsTrackOffsetState @ 0x140285170 (IoClearFsTrackOffsetState.c)
 *     IoGetAdapterCryptoEngineExtension @ 0x1402851A0 (IoGetAdapterCryptoEngineExtension.c)
 *     IoGetFsZeroingOffset @ 0x1402851E0 (IoGetFsZeroingOffset.c)
 *     IoSetFsZeroingOffset @ 0x1402852D0 (IoSetFsZeroingOffset.c)
 *     IoSetFsZeroingOffsetRequired @ 0x140285310 (IoSetFsZeroingOffsetRequired.c)
 *     IopPerfCompleteRequest @ 0x14028563C (IopPerfCompleteRequest.c)
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
