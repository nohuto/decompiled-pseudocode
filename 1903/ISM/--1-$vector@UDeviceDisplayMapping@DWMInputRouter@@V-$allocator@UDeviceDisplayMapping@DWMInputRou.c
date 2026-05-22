/*
 * XREFs of ??1?$vector@UDeviceDisplayMapping@DWMInputRouter@@V?$allocator@UDeviceDisplayMapping@DWMInputRouter@@@std@@@std@@QEAA@XZ @ 0x1800C2498
 * Callers:
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$8 @ 0x18003BCB7 (_DWMInputRouter--DWMInputRouter_--_1_--dtor$8.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<DWMInputRouter::DeviceDisplayMapping>::~vector<DWMInputRouter::DeviceDisplayMapping>(
        __int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rsi
  __int64 v4; // rcx

  v2 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(_QWORD **)(a1 + 8);
    if ( v2 != v3 )
    {
      do
      {
        v4 = v2[1];
        if ( v4 )
        {
          v2[1] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        }
        v2 += 2;
      }
      while ( v2 != v3 );
      v2 = *(_QWORD **)a1;
    }
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF0uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
