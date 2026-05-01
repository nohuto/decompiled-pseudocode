/*
 * XREFs of ?CopyToOrDetach@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@AE$AAAXPEAPEAVXmlnsDefinition@Markup@Xaml@UI@Windows@@PEAI@Z @ 0x18025F43C
 * Callers:
 *     ??$__abi_array_copy_to_and_release@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Details@Platform@@YAXP$01E$AAV?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@1@PEAPEAXPEAI@Z @ 0x18025E180 (--$__abi_array_copy_to_and_release@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Details@Platform.c)
 * Callees:
 *     ?AllocateAndCopyElements@?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@KAPEAVXmlnsDefinition@Markup@Xaml@UI@Windows@@PEBV34567@I@Z @ 0x18025F37C (-AllocateAndCopyElements@-$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@.c)
 */

void __fastcall Platform::Array<Windows::UI::Xaml::Markup::XmlnsDefinition,1>::CopyToOrDetach(
        __int64 a1,
        char **a2,
        _DWORD *a3)
{
  if ( !a2 || !a3 )
  {
    __abi_WinRTraiseNullReferenceException();
    JUMPOUT(0x18025F4F9LL);
  }
  if ( !*(_DWORD *)(a1 + 72) )
  {
    *a2 = 0LL;
    *a3 = 0;
    return;
  }
  if ( !*(_QWORD *)(a1 + 80) )
    goto LABEL_14;
  if ( !*(_BYTE *)(a1 + 76) && *(_QWORD *)(a1 + 88) && *(_DWORD *)(*(_QWORD *)(a1 + 88) + 12LL) == 1 )
  {
    *a2 = *(char **)(a1 + 80);
    *a3 = *(_DWORD *)(a1 + 72);
    *(_DWORD *)(a1 + 72) = 0;
    *(_BYTE *)(a1 + 76) = 0;
    *(_QWORD *)(a1 + 80) = 0LL;
    return;
  }
  if ( !*(_BYTE *)(a1 + 76) && (!*(_QWORD *)(a1 + 88) || *(int *)(*(_QWORD *)(a1 + 88) + 12LL) <= 1) )
  {
LABEL_14:
    __abi_WinRTraiseFailureException();
    __debugbreak();
  }
  *a2 = Platform::WriteOnlyArray<Windows::UI::Xaml::Markup::XmlnsDefinition,1>::AllocateAndCopyElements(
          *(_QWORD **)(a1 + 80),
          *(_DWORD *)(a1 + 72));
  *a3 = *(_DWORD *)(a1 + 72);
}
