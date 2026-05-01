/*
 * XREFs of ??$_Assign_range@PEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@AEAAXPEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@0Uforward_iterator_tag@1@@Z @ 0x1802DF974
 * Callers:
 *     ?ReplaceAll@?Q?$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$equal_to@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@std@@$00@2Platform@@UE$AAAXP$01E$ABV?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@6@@Z @ 0x1802ECC14 (-ReplaceAll@-Q-$IVector@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Win_ea_1802ECC14.c)
 *     ?ReplaceAll@?Q?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAXP$01E$ABV?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@6@@Z @ 0x180303414 (-ReplaceAll@-Q-$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@C_ea_180303414.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800831C8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@AEBA_K_K@Z @ 0x1801D567C (-_Calculate_growth@-$vector@V-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@C.c)
 *     ??0?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAA@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1802E0F6C (--0-$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAA@P.c)
 *     ??1?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAA@XZ @ 0x1802E33DC (--1-$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEAA@X.c)
 *     ??4?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAAAEAV01@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x1802E3D18 (--4-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInte.c)
 *     ?_Buy@?$vector@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@@std@@@std@@AEAA_N_K@Z @ 0x1802EFFE0 (-_Buy@-$vector@V-$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Pla.c)
 */

unsigned __int64 __fastcall std::vector<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>>::_Assign_range<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc * *>(
        _QWORD *a1,
        _QWORD *a2,
        unsigned __int64 a3)
{
  char *v3; // rbx
  char *v4; // rsi
  unsigned __int64 v5; // r13
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rbp
  _QWORD *v8; // r14
  unsigned __int64 v9; // r12
  __int64 v11; // rdi
  unsigned __int64 v12; // rbp
  char *v13; // rbx
  unsigned __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // r12
  _QWORD *v17; // rbp
  __int64 v18; // r13
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // r12
  char *v21; // rbp
  char *i; // rbx
  unsigned __int64 v23; // [rsp+60h] [rbp+18h]

  v23 = a3;
  v3 = (char *)*a1;
  v4 = (char *)a1[1];
  v5 = a3 - (_QWORD)a2;
  result = (__int64)&v4[-*a1] >> 5;
  v7 = (__int64)(a3 - (_QWORD)a2) >> 3;
  v8 = a2;
  v9 = (__int64)(a1[2] - *a1) >> 5;
  if ( v7 <= v9 )
  {
    v15 = 0LL;
    if ( v7 <= result )
    {
      v20 = (v5 + 7) >> 3;
      v21 = &v3[32 * v7];
      if ( (unsigned __int64)a2 > a3 )
        v20 = 0LL;
      if ( v20 )
      {
        do
        {
          result = Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::operator=(
                     v3,
                     *v8);
          v3 += 32;
          ++v8;
          ++v15;
        }
        while ( v15 != v20 );
        v4 = (char *)a1[1];
      }
      for ( i = v21; i != v4; i += 32 )
        result = Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::~Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>(i);
      a1[1] = v21;
    }
    else
    {
      v16 = 0LL;
      v17 = &a2[result];
      v18 = result & 0x1FFFFFFFFFFFFFFFLL;
      if ( a2 > v17 )
        v18 = 0LL;
      if ( v18 )
      {
        do
        {
          result = Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::operator=(
                     v3,
                     *v8);
          v3 += 32;
          ++v8;
          ++v16;
        }
        while ( v16 != v18 );
        v4 = (char *)a1[1];
        a3 = v23;
      }
      v19 = (a3 - (unsigned __int64)v17 + 7) >> 3;
      if ( (unsigned __int64)v17 > a3 )
        v19 = 0LL;
      if ( v19 )
      {
        do
        {
          result = Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>(
                     v4,
                     *v17);
          v4 += 32;
          ++v17;
          ++v15;
        }
        while ( v15 != v19 );
      }
      a1[1] = v4;
    }
  }
  else
  {
    if ( v7 > 0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v11 = 0LL;
    v12 = std::vector<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>>::_Calculate_growth(
            a1,
            (__int64)(a3 - (_QWORD)a2) >> 3);
    if ( v3 )
    {
      if ( v3 != v4 )
      {
        do
        {
          Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::~Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>(v3);
          v3 += 32;
        }
        while ( v3 != v4 );
        v3 = (char *)*a1;
      }
      std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)(32 * v9));
    }
    result = std::vector<Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>>::_Buy(
               a1,
               v12);
    v13 = (char *)*a1;
    v14 = (v5 + 7) >> 3;
    if ( (unsigned __int64)v8 > v23 )
      v14 = 0LL;
    if ( v14 )
    {
      do
      {
        result = Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>(
                   v13,
                   *v8);
        v13 += 32;
        ++v8;
        ++v11;
      }
      while ( v11 != v14 );
    }
    a1[1] = v13;
  }
  return result;
}
