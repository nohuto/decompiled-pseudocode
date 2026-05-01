/*
 * XREFs of ?GetXmlnsDefinitions@IXamlMetadataProvider@Markup@Xaml@UI@Windows@@UE$AAAP$01E$AAV?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@XZ @ 0x18025FCC8
 * Callers:
 *     ?GetXmlnsDefinitions@?QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAP$01E$AAV?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@XZ @ 0x18025FC60 (-GetXmlnsDefinitions@-QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHo_ea_18025FC60.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18025B6D4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ??$__abi_winrt_ptrto_array_ctor@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@@YAPEAXQ$01E$ADV?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@@Z @ 0x18025E1BC (--$__abi_winrt_ptrto_array_ctor@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@@YAPEAXQ$01E$ADV-$A.c)
 *     ??0?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@QE$AAA@PEAVXmlnsDefinition@Markup@Xaml@UI@Windows@@I@Z @ 0x18025E4D4 (--0-$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@QE$AAA@PEAVXmlnsDefinition@Mar.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::UI::Xaml::Markup::IXamlMetadataProvider::GetXmlnsDefinitions(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rsi
  Platform::Details *v4; // rax
  Platform::Details *v5; // rdi
  __int64 v6; // rbx
  unsigned int v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF
  Platform::Details *v10; // [rsp+60h] [rbp+18h]

  v1 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64 *))(*(_QWORD *)a1 + 64LL))(a1, &v8, &v9);
  if ( v1 < 0 )
    __abi_WinRTraiseException(v1);
  v2 = v8;
  v3 = v9;
  if ( v8 > 0xFFFFFFF )
  {
    __abi_WinRTraiseInvalidArgumentException();
    __debugbreak();
  }
  v10 = (Platform::Details *)Platform::Details::Heap::Allocate(0x58uLL, 0x88uLL);
  v4 = Platform::Array<Windows::UI::Xaml::Markup::XmlnsDefinition,1>::Array<Windows::UI::Xaml::Markup::XmlnsDefinition,1>(v10);
  v5 = v4;
  if ( *((_DWORD *)v4 + 18) || *((_QWORD *)v4 + 10) )
  {
    __abi_WinRTraiseFailureException();
    JUMPOUT(0x18025FD80LL);
  }
  *((_DWORD *)v4 + 18) = v2;
  *((_BYTE *)v4 + 76) = 0;
  *((_QWORD *)v4 + 10) = v3;
  v10 = v4;
  v6 = __abi_winrt_ptrto_array_ctor<Windows::UI::Xaml::Markup::XmlnsDefinition,1>(v4);
  (*(void (__fastcall **)(Platform::Details *))(*(_QWORD *)v5 + 16LL))(v5);
  return v6;
}
