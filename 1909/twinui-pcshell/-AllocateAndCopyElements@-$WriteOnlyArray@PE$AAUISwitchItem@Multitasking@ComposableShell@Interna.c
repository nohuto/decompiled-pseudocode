/*
 * XREFs of ?AllocateAndCopyElements@?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@KAPEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEBQE$AAU34567@I@Z @ 0x1802E5D14
 * Callers:
 *     ??0?$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@IE$AAA@PEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x1802E155C (--0-$WriteOnlyArray@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platfor.c)
 *     ?CopyToOrDetach@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@AE$AAAXPEAPEAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAI@Z @ 0x1802E6B78 (-CopyToOrDetach@-$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Pla.c)
 *     ??0?$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@IE$AAA@PEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@I@Z @ 0x1802FF3F0 (--0-$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@Wi.c)
 * Callees:
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     __Platform_CoTaskMemAlloc @ 0x18008ADBB (__Platform_CoTaskMemAlloc.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x1802D24BC (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 */

__int64 *__fastcall Platform::WriteOnlyArray<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::AllocateAndCopyElements(
        __int64 *a1,
        unsigned int a2)
{
  __int64 v2; // rdi
  __int64 *v4; // rbx
  __int64 v5; // rbp
  __int64 *v6; // rax
  __int64 *v7; // rdi

  v2 = a2;
  if ( !a2 )
    return 0LL;
  if ( a2 > 0x1FFFFFFF )
  {
    __abi_WinRTraiseInvalidCastException();
    __debugbreak();
  }
  v5 = a2;
  v6 = (__int64 *)_Platform_CoTaskMemAlloc(8LL * a2);
  v4 = v6;
  if ( !v6 )
  {
    __abi_WinRTraiseOutOfMemoryException();
    __debugbreak();
  }
  memset_0(v6, 0, 8 * v2);
  if ( (_DWORD)v2 )
  {
    v7 = v4;
    do
    {
      __abi_winrt_ptr_assign(v7++, *a1++);
      --v5;
    }
    while ( v5 );
  }
  return v4;
}
