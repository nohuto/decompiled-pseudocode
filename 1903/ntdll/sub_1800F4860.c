/*
 * XREFs of sub_1800F4860 @ 0x1800F4860
 * Callers:
 *     RtlDetectHeapLeaks @ 0x18006B5E0 (RtlDetectHeapLeaks.c)
 * Callees:
 *     RtlQueryHeapInformation @ 0x180067610 (RtlQueryHeapInformation.c)
 *     sub_1800F46F8 @ 0x1800F46F8 (sub_1800F46F8.c)
 */

char sub_1800F4860()
{
  char result; // al
  _QWORD v1[2]; // [rsp+30h] [rbp-68h] BYREF
  int v2; // [rsp+40h] [rbp-58h]
  __int64 (__fastcall *v3)(__int64); // [rsp+48h] [rbp-50h]
  __int64 v4; // [rsp+50h] [rbp-48h]

  v1[0] = -1LL;
  v1[1] = 0LL;
  v4 = 0LL;
  v3 = sub_1800F4580;
  v2 = 5;
  result = RtlQueryHeapInformation(0LL, (HEAP_INFORMATION_CLASS)2, v1, 0x58uLL, 0LL);
  if ( qword_1801669B0 )
    result = sub_1800F46F8(qword_1801669B0, 1LL);
  qword_1801669B0 = 0LL;
  dword_180166980 = 0;
  return result;
}
