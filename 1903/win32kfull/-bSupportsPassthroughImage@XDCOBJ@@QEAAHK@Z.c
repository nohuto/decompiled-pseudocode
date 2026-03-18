/*
 * XREFs of ?bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z @ 0x1C02B953C
 * Callers:
 *     GreStretchDIBitsInternal @ 0x1C00595B4 (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C005F070 (GreSetDIBitsToDeviceInternal.c)
 * Callees:
 *     ?bSupportsJPEG@XDCOBJ@@QEAAHXZ @ 0x1C0080A08 (-bSupportsJPEG@XDCOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall XDCOBJ::bSupportsPassthroughImage(XDCOBJ *this, int a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  if ( a2 == 4 )
    return XDCOBJ::bSupportsJPEG(this);
  if ( a2 != 5 )
    return 0LL;
  v3 = *(_QWORD *)this;
  if ( (*(_DWORD *)(v3 + 76) & 8) == 0 )
    return 0LL;
  result = 1LL;
  if ( *(_DWORD *)(v3 + 32) == 1 )
    return 0LL;
  return result;
}
