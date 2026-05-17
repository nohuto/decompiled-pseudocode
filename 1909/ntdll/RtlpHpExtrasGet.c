/*
 * XREFs of RtlpHpExtrasGet @ 0x180046D10
 * Callers:
 *     RtlpHpFreeHeap @ 0x180040830 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180040B50 (RtlpFreeHeapInternal.c)
 *     RtlpHpReAllocateHeap @ 0x180044EDC (RtlpHpReAllocateHeap.c)
 *     RtlpHpGetUserInfo @ 0x18006E88C (RtlpHpGetUserInfo.c)
 *     RtlSetUserValueHeap @ 0x18006E8F0 (RtlSetUserValueHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800EF630 (RtlSetUserFlagsHeap.c)
 * Callees:
 *     RtlpHpSizeHeapInternal @ 0x180046C60 (RtlpHpSizeHeapInternal.c)
 */

unsigned __int64 __fastcall RtlpHpExtrasGet(__int64 a1, unsigned __int64 a2, unsigned int a3, unsigned __int64 *a4)
{
  unsigned __int64 v7; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  int v11[6]; // [rsp+20h] [rbp-18h] BYREF

  v7 = RtlpHpSizeHeapInternal(a1, a2, a3, v11);
  result = -1LL;
  if ( v7 != -1LL )
  {
    result = 0LL;
    if ( a4 )
      *a4 = v7;
    if ( v11[0] )
    {
      v9 = a2 + v7;
      v10 = v9 + 16;
      if ( (a3 & 0x10000000) == 0 )
        v10 = v9;
      return (v10 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    }
  }
  return result;
}
