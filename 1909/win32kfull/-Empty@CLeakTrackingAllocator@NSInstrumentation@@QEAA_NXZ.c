/*
 * XREFs of ?Empty@CLeakTrackingAllocator@NSInstrumentation@@QEAA_NXZ @ 0x1C0119A1C
 * Callers:
 *     UninitializeWin32PoolTracking @ 0x1C0119950 (UninitializeWin32PoolTracking.c)
 *     ?Win32kLeakTrackingLiveDumpCallback@@YAJPEAXP6AJ0PEBU_GUID@@0K@ZK_K3330@Z @ 0x1C020E7B0 (-Win32kLeakTrackingLiveDumpCallback@@YAJPEAXP6AJ0PEBU_GUID@@0K@ZK_K3330@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall NSInstrumentation::CLeakTrackingAllocator::Empty(NSInstrumentation::CLeakTrackingAllocator *this)
{
  bool result; // al
  __int64 v2; // rcx
  bool v3; // dl
  __int64 v4; // rcx
  bool v5; // cl

  result = 1;
  v2 = *(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 48LL);
  if ( v2 )
    v3 = *(_DWORD *)(v2 + 48) == 0;
  else
    v3 = 1;
  v4 = *(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 56LL);
  if ( v4 )
    v5 = *(_QWORD *)(v4 + 40) == 0LL;
  else
    v5 = 1;
  if ( !v3 || !v5 )
    return 0;
  return result;
}
