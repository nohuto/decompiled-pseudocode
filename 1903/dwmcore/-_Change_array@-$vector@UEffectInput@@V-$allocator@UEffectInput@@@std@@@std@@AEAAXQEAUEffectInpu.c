/*
 * XREFs of ?_Change_array@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAXQEAUEffectInput@@_K1@Z @ 0x180078740
 * Callers:
 *     ?_Reallocate_exactly@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAX_K@Z @ 0x180077474 (-_Reallocate_exactly@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@AEAAX_K@Z.c)
 *     ??$_Emplace_reallocate@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAPEAUEffectInput@@QEAU2@$$QEA$$T@Z @ 0x180205D90 (--$_Emplace_reallocate@$$T@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAAPEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<EffectInput>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rbx
  __int64 result; // rax
  __int64 *v10; // rbp

  v4 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v10 = *(__int64 **)(a1 + 8);
    if ( v4 != v10 )
    {
      do
      {
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v4 + 1);
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v4);
        v4 += 13;
      }
      while ( v4 != v10 );
      v4 = *(__int64 **)a1;
    }
    std::_Deallocate<16,0>(v4, 104 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v4) / 104LL));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 104 * a3;
  result = a2 + 104 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
