/*
 * XREFs of ?OnFileSavePickerActivated@?QIApplicationOverrides@Xaml@UI@Windows@@Application@234@ME$AAAXPE$AAVFileSavePickerActivatedEventArgs@Activation@ApplicationModel@4@@Z @ 0x18025FFF8
 * Callers:
 *     ?OnFileSavePickerActivated@?QIApplicationOverrides@Xaml@UI@Windows@@Application@234@OCA@E$AAAXPE$AAVFileSavePickerActivatedEventArgs@Activation@ApplicationModel@4@@Z @ 0x1800A3980 (-OnFileSavePickerActivated@-QIApplicationOverrides@Xaml@UI@Windows@@Application@234@OCA@E$AAAXPE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18025B6D4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x18025B7BC (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _OnFileSavePickerActivated__QIApplicationOverrides_Xaml_UI_Windows__Application_234_ME_AAAXPE_AAVFileSavePickerActivatedEventArgs_Activation_ApplicationModel_4__Z(
        __int64 (__fastcall ***a1)(_QWORD, __int64, __int64 *),
        __int64 a2)
{
  int v3; // ebx
  __int64 result; // rax
  __int64 v5; // [rsp+50h] [rbp+18h]

  v5 = __abi_winrt_cast_to(0, a1, (__int64)&_uuidof__AUIApplicationOverrides_Xaml_UI_Windows__);
  v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 96LL))(v5, a2);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v3 < 0 )
    __abi_WinRTraiseException(v3);
  return result;
}
