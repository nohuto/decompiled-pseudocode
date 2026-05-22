/*
 * XREFs of ?_Change_array@?$vector@UDeviceDisplayMapping@DWMInputRouter@@V?$allocator@UDeviceDisplayMapping@DWMInputRouter@@@std@@@std@@AEAAXQEAUDeviceDisplayMapping@DWMInputRouter@@_K1@Z @ 0x1800C57E0
 * Callers:
 *     ??$_Emplace_reallocate@UDeviceDisplayMapping@DWMInputRouter@@@?$vector@UDeviceDisplayMapping@DWMInputRouter@@V?$allocator@UDeviceDisplayMapping@DWMInputRouter@@@std@@@std@@QEAAPEAUDeviceDisplayMapping@DWMInputRouter@@QEAU23@$$QEAU23@@Z @ 0x1800C1D3C (--$_Emplace_reallocate@UDeviceDisplayMapping@DWMInputRouter@@@-$vector@UDeviceDisplayMapping@DWM.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<DWMInputRouter::DeviceDisplayMapping>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v4; // rbx
  _QWORD *v9; // r15
  __int64 v10; // rcx

  v4 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v9 = *(_QWORD **)(a1 + 8);
    if ( v4 != v9 )
    {
      do
      {
        v10 = v4[1];
        if ( v10 )
        {
          v4[1] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
        v4 += 2;
      }
      while ( v4 != v9 );
      v4 = *(_QWORD **)a1;
    }
    std::_Deallocate<16,0>(
      v4,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF0uLL));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
}
