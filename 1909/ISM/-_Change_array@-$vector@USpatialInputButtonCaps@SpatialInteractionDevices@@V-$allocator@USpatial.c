/*
 * XREFs of ?_Change_array@?$vector@USpatialInputButtonCaps@SpatialInteractionDevices@@V?$allocator@USpatialInputButtonCaps@SpatialInteractionDevices@@@std@@@std@@AEAAXQEAUSpatialInputButtonCaps@SpatialInteractionDevices@@_K1@Z @ 0x1800DD74C
 * Callers:
 *     ??$_Emplace_reallocate@USpatialInputButtonCaps@SpatialInteractionDevices@@@?$vector@USpatialInputButtonCaps@SpatialInteractionDevices@@V?$allocator@USpatialInputButtonCaps@SpatialInteractionDevices@@@std@@@std@@QEAAPEAUSpatialInputButtonCaps@SpatialInteractionDevices@@QEAU23@$$QEAU23@@Z @ 0x1800DB0AC (--$_Emplace_reallocate@USpatialInputButtonCaps@SpatialInteractionDevices@@@-$vector@USpatialInpu.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<SpatialInteractionDevices::SpatialInputButtonCaps>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)(12 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v6) / 12LL)));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 12 * a3;
  result = 3 * a4;
  *(_QWORD *)(a1 + 16) = a2 + 12 * a4;
  return result;
}
