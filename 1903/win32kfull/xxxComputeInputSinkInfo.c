/*
 * XREFs of xxxComputeInputSinkInfo @ 0x1C0007CA0
 * Callers:
 *     EditionHandleMitSignal @ 0x1C001E550 (EditionHandleMitSignal.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00A3A50 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 * Callees:
 *     memset @ 0x1C0166840 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
LONG xxxComputeInputSinkInfo()
{
  LONG result; // eax
  __int128 v1; // xmm0
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  _OWORD v6[8]; // [rsp+40h] [rbp-88h] BYREF

  result = IsInputThread();
  if ( (_BYTE)result )
    result = DCompHitTest(
               v6,
               HIDWORD(gInputSinkInfoRetrieval[0]),
               0LL,
               *(_QWORD *)((char *)gInputSinkInfoRetrieval + 4),
               0LL,
               0,
               0LL);
  if ( !LODWORD(gInputSinkInfoRetrieval[1]) )
  {
    result = (unsigned int)memset(v6, 0, 0x70uLL);
    gInputSinkInfoRetrieval[0] = v6[0];
    v1 = v6[2];
    gInputSinkInfoRetrieval[1] = v6[1];
    v2 = v6[3];
    gInputSinkInfoRetrieval[2] = v1;
    v3 = v6[4];
    gInputSinkInfoRetrieval[3] = v2;
    v4 = v6[5];
    gInputSinkInfoRetrieval[4] = v3;
    v5 = v6[6];
    gInputSinkInfoRetrieval[5] = v4;
    gInputSinkInfoRetrieval[6] = v5;
  }
  if ( gbCompositionInputSinkQueryBlockedOnDIT )
    return KeSetEvent((PRKEVENT)gpkeDITCompositionInputSinkQueryResponseEvent, 1, 0);
  return result;
}
