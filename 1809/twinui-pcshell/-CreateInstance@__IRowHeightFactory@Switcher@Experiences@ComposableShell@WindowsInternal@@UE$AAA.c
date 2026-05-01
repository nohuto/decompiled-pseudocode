/*
 * XREFs of ?CreateInstance@__IRowHeightFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVRowHeight@2345@NH@Z @ 0x18026F048
 * Callers:
 *     ??0TaskViewTimelineViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVSwitchItemListViewModel@1234@PE$AAVObject@Platform@@@Z @ 0x180269BD0 (--0TaskViewTimelineViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAV.c)
 *     ??0RowHeight@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@NH@Z @ 0x18027DD14 (--0RowHeight@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@NH@Z.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18007F598 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18025B6D4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::__IRowHeightFactory::CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v3; // eax
  __int64 v4; // rbx
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)a1 + 48LL))(a1, a2, a3, &v6);
  if ( v3 < 0 )
    __abi_WinRTraiseException(v3);
  v4 = __abi_winrt_ptr_ctor(v6);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v4;
}
