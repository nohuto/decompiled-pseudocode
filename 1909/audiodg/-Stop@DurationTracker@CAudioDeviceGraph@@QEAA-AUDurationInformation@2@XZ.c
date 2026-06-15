/*
 * XREFs of ?Stop@DurationTracker@CAudioDeviceGraph@@QEAA?AUDurationInformation@2@XZ @ 0x14000F780
 * Callers:
 *     ?Pause@CAudioDeviceGraph@@UEAAJXZ @ 0x14000F690 (-Pause@CAudioDeviceGraph@@UEAAJXZ.c)
 *     ?Stop@CAudioDeviceGraph@@UEAAJXZ @ 0x140038C20 (-Stop@CAudioDeviceGraph@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioDeviceGraph::DurationTracker::Stop(__int64 a1, __int64 a2)
{
  LONGLONG v4; // rax
  double v5; // xmm0_8
  double v6; // xmm2_8
  double v7; // xmm1_8
  __int64 result; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)a2 = 0;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  if ( *(_BYTE *)a1 )
  {
    ++*(_DWORD *)(a1 + 4);
    QueryPerformanceCounter(&PerformanceCount);
    v4 = PerformanceCount.QuadPart - *(_QWORD *)(a1 + 16);
    v5 = (double)(int)*(_QWORD *)(a1 + 8);
    *(_BYTE *)a1 = 0;
    v6 = (double)(int)v4 / v5;
    v7 = v6 + *(double *)(a1 + 24);
    *(double *)(a1 + 24) = v7;
  }
  else
  {
    v7 = *(double *)(a1 + 24);
    v6 = 0.0;
  }
  *(double *)(a2 + 8) = v6;
  *(_DWORD *)a2 = *(_DWORD *)(a1 + 4);
  result = a2;
  *(double *)(a2 + 16) = v7;
  return result;
}
