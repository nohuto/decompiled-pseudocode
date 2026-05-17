/*
 * XREFs of RtlpPopUserShadowStack @ 0x18001EA30
 * Callers:
 *     RtlVirtualUnwind @ 0x18001CC50 (RtlVirtualUnwind.c)
 *     RtlUnwindEx @ 0x18001D490 (RtlUnwindEx.c)
 *     RtlpWalkFrameChain @ 0x18001F4F0 (RtlpWalkFrameChain.c)
 *     RtlDispatchException @ 0x18006A8C0 (RtlDispatchException.c)
 *     RtlpUnwindEpilogue @ 0x1800FB5D8 (RtlpUnwindEpilogue.c)
 * Callees:
 *     RtlLocateExtendedFeature2 @ 0x180074490 (RtlLocateExtendedFeature2.c)
 */

__int64 __fastcall RtlpPopUserShadowStack(__int64 a1)
{
  __int64 result; // rax

  result = *(_DWORD *)(a1 + 48) & 0x100040;
  if ( (_DWORD)result == 1048640 )
  {
    result = RtlLocateExtendedFeature2(a1 + 1232, 11LL, 2147353560LL);
    if ( result )
    {
      if ( (*(_BYTE *)result & 1) != 0 )
        *(_QWORD *)(result + 8) += 8LL;
    }
  }
  return result;
}
