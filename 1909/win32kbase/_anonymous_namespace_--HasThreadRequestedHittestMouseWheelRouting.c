/*
 * XREFs of _anonymous_namespace_::HasThreadRequestedHittestMouseWheelRouting @ 0x1C018FA1C
 * Callers:
 *     ?AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1C018E170 (-AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 *     ?HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1C018FA58 (-HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 * Callees:
 *     _anonymous_namespace_::ResolveApplicationFrameChildThread @ 0x1C0190EE4 (_anonymous_namespace_--ResolveApplicationFrameChildThread.c)
 */

char __fastcall anonymous_namespace_::HasThreadRequestedHittestMouseWheelRouting(__int64 a1)
{
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 416) + 812LL) & 0x10000) != 0 )
    return 1;
  else
    return *(_BYTE *)(*(_QWORD *)(anonymous_namespace_::ResolveApplicationFrameChildThread() + 416) + 814LL) & 1;
}
