/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@QEAV21@AEBV21@@Z @ 0x1800B5858
 * Callers:
 *     ?GetActiveApps@UwpAppStateManager@@UEAA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@XZ @ 0x1800B6740 (-GetActiveApps@UwpAppStateManager@@UEAA-AV-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$all.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18005D1A0 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Xlength@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@CAXXZ @ 0x1800B8338 (-_Xlength@-$vector@Uservice_description@immersive_shell_component@winrt@@V-$allocator@Uservice_d.c)
 *     ?allocate@?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@_K@Z @ 0x180180D1C (-allocate@-$allocator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAAPE.c)
 *     ?_Calculate_growth@?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@AEBA_K_K@Z @ 0x1801D567C (-_Calculate_growth@-$vector@V-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@C.c)
 *     ?_Change_array@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXQEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@_K1@Z @ 0x1801D56B4 (-_Change_array@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocat.c)
 *     ?_Umove@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEAV32@00@Z @ 0x1801D63BC (-_Umove@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$b.c)
 *     ?_Umove_if_noexcept@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@00@Z @ 0x1801D6414 (-_Umove_if_noexcept@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$al.c)
 */

unsigned __int64 __fastcall std::vector<std::wstring>::_Emplace_reallocate<std::wstring const &>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rsi
  unsigned __int64 v10; // rdi
  _QWORD *v11; // r15
  _QWORD *v12; // r12
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned __int64 result; // rax
  __int64 v19; // rcx
  __int64 v20; // [rsp+28h] [rbp-50h]
  _QWORD *v21; // [rsp+80h] [rbp+8h]
  __int64 v22; // [rsp+88h] [rbp+10h]

  v4 = a2 - *a1;
  v5 = (a1[1] - *a1) >> 5;
  if ( v5 == 0x7FFFFFFFFFFFFFFLL )
    std::vector<winrt::immersive_shell_component::service_description>::_Xlength();
  v22 = v5 + 1;
  v6 = std::vector<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>>::_Calculate_growth(
         a1,
         v5 + 1);
  v8 = std::allocator<std::wstring>::allocate(v7, v6);
  v9 = (_QWORD *)v8;
  v20 = v8;
  v10 = v4 & 0xFFFFFFFFFFFFFFE0uLL;
  v11 = (_QWORD *)(v10 + v8);
  v12 = (_QWORD *)(v10 + v8 + 32);
  try
  {
    std::wstring::wstring(v10 + v8);
    v21 = v11;
    v14 = a1[1];
    v15 = *a1;
    if ( a2 == v14 )
    {
      std::vector<std::wstring>::_Umove_if_noexcept(v13, v15, v14, v9);
    }
    else
    {
      std::vector<std::wstring>::_Umove(v13, v15, a2, v9);
      v21 = v9;
      std::vector<std::wstring>::_Umove(v16, a2, a1[1], v12);
    }
    std::vector<std::wstring>::_Change_array(a1, v9, v22, v6);
    result = v10 + *a1;
  }
  catch ( ... )
  {
    std::vector<std::wstring>::_Destroy(v17, v21, v12);
    std::allocator<std::wstring>::deallocate(v19, v20, v6);
    throw;
  }
  return result;
}
