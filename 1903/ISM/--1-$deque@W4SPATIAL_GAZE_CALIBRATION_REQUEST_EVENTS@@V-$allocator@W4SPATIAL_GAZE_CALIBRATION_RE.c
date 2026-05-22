/*
 * XREFs of ??1?$deque@W4SPATIAL_GAZE_CALIBRATION_REQUEST_EVENTS@@V?$allocator@W4SPATIAL_GAZE_CALIBRATION_REQUEST_EVENTS@@@std@@@std@@QEAA@XZ @ 0x1800F07F0
 * Callers:
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject::SpatialInteractionEyeGazeSourceObject_::_1_::dtor$2 @ 0x1800F07D5 (_Windows--Internal--SpatialInteractions--SpatialInteractionEyeGazeSourceObject--Spa_ea_1800F07D5.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::deque<enum SPATIAL_GAZE_CALIBRATION_REQUEST_EVENTS>::~deque<enum SPATIAL_GAZE_CALIBRATION_REQUEST_EVENTS>(
        __int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdi
  void *v5; // rcx
  void *v6; // rcx

  while ( 1 )
  {
    v2 = *(_QWORD *)(a1 + 32);
    if ( !v2 )
      break;
    v3 = v2 - 1;
    *(_QWORD *)(a1 + 32) = v3;
    if ( !v3 )
      *(_QWORD *)(a1 + 24) = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 16);
  while ( v4 )
  {
    --v4;
    v5 = *(void **)(*(_QWORD *)(a1 + 8) + 8 * v4);
    if ( v5 )
      std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)0x10);
  }
  v6 = *(void **)(a1 + 8);
  if ( v6 )
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a1 + 16)));
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  std::_Deallocate<16,0>(*(void **)a1, (const struct std::nothrow_t *)0x10);
  *(_QWORD *)a1 = 0LL;
}
