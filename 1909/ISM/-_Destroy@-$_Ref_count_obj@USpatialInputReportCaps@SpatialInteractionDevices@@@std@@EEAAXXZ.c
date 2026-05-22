/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@EEAAXXZ @ 0x1800DD7E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Ref_count_obj<SpatialInteractionDevices::SpatialInputReportCaps>::_Destroy(_QWORD *a1)
{
  void *v2; // rcx

  v2 = (void *)a1[21];
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)(12 * ((a1[23] - (_QWORD)v2) / 12LL)));
    a1[21] = 0LL;
    a1[22] = 0LL;
    a1[23] = 0LL;
  }
}
