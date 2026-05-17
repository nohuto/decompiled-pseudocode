/*
 * XREFs of sub_18001EA30 @ 0x18001EA30
 * Callers:
 *     RtlVirtualUnwind @ 0x18001CC50 (RtlVirtualUnwind.c)
 *     RtlUnwindEx @ 0x18001D490 (RtlUnwindEx.c)
 *     sub_18001F4F0 @ 0x18001F4F0 (sub_18001F4F0.c)
 *     sub_18006A670 @ 0x18006A670 (sub_18006A670.c)
 *     sub_1800FB4F8 @ 0x1800FB4F8 (sub_1800FB4F8.c)
 * Callees:
 *     RtlLocateExtendedFeature2 @ 0x180073EF0 (RtlLocateExtendedFeature2.c)
 */

__int64 __fastcall sub_18001EA30(__int64 a1)
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
