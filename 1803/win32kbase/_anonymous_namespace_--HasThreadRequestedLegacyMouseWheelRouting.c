/*
 * XREFs of _anonymous_namespace_::HasThreadRequestedLegacyMouseWheelRouting @ 0x1C0134B30
 * Callers:
 *     ?AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1C0133E58 (-AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01354D0 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall anonymous_namespace_::HasThreadRequestedLegacyMouseWheelRouting(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( a1
    && ((*(_DWORD *)(*(_QWORD *)(a1 + 416) + 812LL) & 0x8000) != 0
     || (GetAppCompatFlags2QuadWord(a1) & 0x10000000000000LL) != 0) )
  {
    return 1;
  }
  return v1;
}
