/*
 * XREFs of _anonymous_namespace_::QpcToFileTimeAndGetCurrentFileTime @ 0x180081ABC
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x1800DD1CC (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall anonymous_namespace_::QpcToFileTimeAndGetCurrentFileTime(
        unsigned __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h]
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp+10h] BYREF

  GetSystemTimePreciseAsFileTime(a3);
  v7 = *a3;
  QueryPerformanceCounter(&PerformanceCount);
  result = 10000000 * (a1 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart
         - 10000000 * (PerformanceCount.QuadPart % (unsigned __int64)g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart
         + v7;
  *a2 = result
      + 10000000
      * (a1 / g_qpcFrequency.QuadPart - PerformanceCount.QuadPart / (unsigned __int64)g_qpcFrequency.QuadPart);
  return result;
}
