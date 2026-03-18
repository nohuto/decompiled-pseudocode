/*
 * XREFs of IsWindowUnderActiveLockScreen @ 0x1C002D44C
 * Callers:
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C002D124 (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0134444 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     DCELogicalSpeedTopLevelHitTest @ 0x1C01E65F0 (DCELogicalSpeedTopLevelHitTest.c)
 *     ?_IsTaskWindow@@YAHPEAUtagWND@@0@Z @ 0x1C01F4028 (-_IsTaskWindow@@YAHPEAUtagWND@@0@Z.c)
 *     _GetNextQueueWindow @ 0x1C01F4DC4 (_GetNextQueueWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsWindowUnderActiveLockScreen(__int64 a1)
{
  PVOID v1; // r8
  unsigned int v2; // edx
  int v4; // eax

  v1 = *(PVOID *)(a1 + 24);
  v2 = 0;
  if ( v1 )
  {
    if ( gbLockScreenActive )
    {
      if ( grpdeskLogon != v1 )
      {
        v4 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 236LL);
        if ( v4 < 2 || v4 > 3 && v4 != 14 && (unsigned int)(v4 - 17) > 1 )
          return 1;
      }
    }
  }
  return v2;
}
