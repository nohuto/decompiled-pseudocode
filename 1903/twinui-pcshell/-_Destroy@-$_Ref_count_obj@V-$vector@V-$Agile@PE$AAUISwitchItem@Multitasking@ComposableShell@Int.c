/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@V?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@@std@@EEAAXXZ @ 0x1802D0DC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080B08 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAA@XZ @ 0x1802C3EAC (--1-$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAA@X.c)
 */

void __fastcall std::_Ref_count_obj<std::vector<Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>>>::_Destroy(
        _QWORD *a1)
{
  __int64 *v1; // rbx
  __int64 *v3; // rsi

  v1 = (__int64 *)a1[2];
  if ( v1 )
  {
    v3 = (__int64 *)a1[3];
    if ( v1 != v3 )
    {
      do
      {
        Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::~Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>(v1);
        v1 += 4;
      }
      while ( v1 != v3 );
      v1 = (__int64 *)a1[2];
    }
    std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)((a1[4] - (_QWORD)v1) & 0xFFFFFFFFFFFFFFE0uLL));
    a1[2] = 0LL;
    a1[3] = 0LL;
    a1[4] = 0LL;
  }
}
