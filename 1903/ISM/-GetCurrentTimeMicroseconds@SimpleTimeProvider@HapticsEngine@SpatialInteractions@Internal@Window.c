/*
 * XREFs of ?GetCurrentTimeMicroseconds@SimpleTimeProvider@HapticsEngine@SpatialInteractions@Internal@Windows@@UEAAJPEA_J@Z @ 0x180165C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::HapticsEngine::SimpleTimeProvider::GetCurrentTimeMicroseconds(
        Windows::Internal::SpatialInteractions::HapticsEngine::SimpleTimeProvider *this,
        __int64 *a2)
{
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp+10h] BYREF

  QueryPerformanceCounter(&PerformanceCount);
  *a2 = 1000000 * PerformanceCount.QuadPart / qword_1801E0C18;
  return 0LL;
}
