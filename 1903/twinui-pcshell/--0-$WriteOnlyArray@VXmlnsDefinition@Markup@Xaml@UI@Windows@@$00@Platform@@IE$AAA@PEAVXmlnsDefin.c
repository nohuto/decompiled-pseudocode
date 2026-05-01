/*
 * XREFs of ??0?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@IE$AAA@PEAVXmlnsDefinition@Markup@Xaml@UI@Windows@@I@Z @ 0x1802B71C4
 * Callers:
 *     ??0?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@QE$AAA@PEAVXmlnsDefinition@Markup@Xaml@UI@Windows@@I@Z @ 0x1802B6FCC (--0-$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@QE$AAA@PEAVXmlnsDefinition@Mar.c)
 * Callees:
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x1802B4450 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 *     ?AllocateAndCopyElements@?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@KAPEAVXmlnsDefinition@Markup@Xaml@UI@Windows@@PEBV34567@I@Z @ 0x1802B7DFC (-AllocateAndCopyElements@-$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Platform::WriteOnlyArray<Windows::UI::Xaml::Markup::XmlnsDefinition,1>::WriteOnlyArray<Windows::UI::Xaml::Markup::XmlnsDefinition,1>(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  Platform::Object::Object(a1 + 16);
  *(_QWORD *)a1 = &___7__WriteOnlyArray_VXmlnsDefinition_Markup_Xaml_UI_Windows___00_Platform__6B__I__WriteOnlyArray_VXmlnsDefinition_Markup_Xaml_UI_Windows___00PublicNonVirtuals_1__;
  *(_QWORD *)(a1 + 8) = &Platform::WriteOnlyArray<Windows::UI::Xaml::Markup::XmlnsDefinition,1>::`vftable'{for `Platform::IDisposable'};
  *(_QWORD *)(a1 + 16) = &Platform::WriteOnlyArray<Windows::UI::Xaml::Markup::XmlnsDefinition,1>::`vftable'{for `Platform::Object'};
  *(_QWORD *)(a1 + 24) = &Platform::WriteOnlyArray<Windows::UI::Xaml::Markup::XmlnsDefinition,1>::`vftable'{for `__abi_IUnknown'};
  *(_QWORD *)(a1 + 32) = &Platform::WriteOnlyArray<Windows::UI::Xaml::Markup::XmlnsDefinition,1>::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  __abi_FTMWeakRefData::__abi_FTMWeakRefData(a1 + 56);
  *(_DWORD *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 44) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( a3 )
  {
    *(_QWORD *)(a1 + 48) = Platform::WriteOnlyArray<Windows::UI::Xaml::Markup::XmlnsDefinition,1>::AllocateAndCopyElements(
                             a2,
                             a3);
    *(_DWORD *)(a1 + 40) = a3;
  }
  return a1;
}
