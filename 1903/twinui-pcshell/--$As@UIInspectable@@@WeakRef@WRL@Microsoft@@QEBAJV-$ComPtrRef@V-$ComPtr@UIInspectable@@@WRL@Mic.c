/*
 * XREFs of ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180044C6C
 * Callers:
 *     ??$WeakRefAs@V?$ComPtrRef@V?$ComPtr@UIDWMStoryboardListener@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJAEBVWeakRef@WRL@Microsoft@@V?$ComPtrRef@V?$ComPtr@UIDWMStoryboardListener@@@WRL@Microsoft@@@Details@12@@Z @ 0x180044904 (--$WeakRefAs@V-$ComPtrRef@V-$ComPtr@UIDWMStoryboardListener@@@WRL@Microsoft@@@Details@WRL@Micros.c)
 *     ??$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA?AV?$ComPtr@UIInspectable@@@WRL@Microsoft@@AEAVWeakRef@23@@Z @ 0x18007F9AC (--$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA-AV-$ComPtr@UIInspectable@@@WRL@Microsoft@.c)
 *     wistd::__function::__func__lambda_548464be655e837fe70a6c635a8d08fa__long___cdecl(unsigned_int_unsigned___int64___int64)_::operator() @ 0x180081620 (wistd--__function--__func__lambda_548464be655e837fe70a6c635a8d08fa__long___cdecl(unsigned_int_un.c)
 *     _lambda_89fb5ab193d74e8b0300aa0759d904c8_::operator() @ 0x180094780 (_lambda_89fb5ab193d74e8b0300aa0759d904c8_--operator().c)
 *     _lambda_0a3b6d6f5c204974f97bccd3169266e9_::operator() @ 0x18009A8B0 (_lambda_0a3b6d6f5c204974f97bccd3169266e9_--operator().c)
 *     _lambda_05543aeae04520384b0424ea475026ea_::operator() @ 0x18009CB38 (_lambda_05543aeae04520384b0424ea475026ea_--operator().c)
 *     _lambda_531262642ad094c3078a9cb1af58219e_::operator() @ 0x18009CCB0 (_lambda_531262642ad094c3078a9cb1af58219e_--operator().c)
 *     _lambda_8475afa15079342a15ccc51689e4ed78_::operator() @ 0x18009CE28 (_lambda_8475afa15079342a15ccc51689e4ed78_--operator().c)
 *     _lambda_a34f77da1c118d252c6ac03565c5dcbb_::operator() @ 0x18009D080 (_lambda_a34f77da1c118d252c6ac03565c5dcbb_--operator().c)
 *     _lambda_a5314efdfe6b9f90147b5239d1654f63_::operator() @ 0x18009D48C (_lambda_a5314efdfe6b9f90147b5239d1654f63_--operator().c)
 *     _lambda_b4654e0922f50786bbde1a7e7a9917df_::operator() @ 0x18009D7D4 (_lambda_b4654e0922f50786bbde1a7e7a9917df_--operator().c)
 *     _lambda_be51cf16fbf0031c38a94162e4d6f864_::operator() @ 0x18009DAC0 (_lambda_be51cf16fbf0031c38a94162e4d6f864_--operator().c)
 *     ??$WeakRefAs@V?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJAEBVWeakRef@WRL@Microsoft@@V?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180152760 (--$WeakRefAs@V-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJ.c)
 *     _lambda_036c3b4f3fb2a4a583399dad52518042_::operator() @ 0x18016BB40 (_lambda_036c3b4f3fb2a4a583399dad52518042_--operator().c)
 *     ?RequestPrivilegedHotkeys@PrivilegedHotkeyOperations@@UEAAJIQEBUIMMERSIVE_WINDOW_MESSAGE_SERVICE_HOTKEY_REGISTRATION@@PEAUIImmersiveWindowMessageNotification@@PEAK@Z @ 0x1801EC0B0 (-RequestPrivilegedHotkeys@PrivilegedHotkeyOperations@@UEAAJIQEBUIMMERSIVE_WINDOW_MESSAGE_SERVICE.c)
 *     ?UnrequestPrivilegedHotkeys@PrivilegedHotkeyOperations@@UEAAJK@Z @ 0x1801ED260 (-UnrequestPrivilegedHotkeys@PrivilegedHotkeyOperations@@UEAAJK@Z.c)
 *     _lambda_e061c9838ed53feae5184a4db6d526ff_::operator() @ 0x180352D18 (_lambda_e061c9838ed53feae5184a4db6d526ff_--operator().c)
 *     ?RuntimeClassInitialize@CSwitchItemElement@@QEAAJAEBUSwitchItemElementInitializeArgs@1@@Z @ 0x180362CD4 (-RuntimeClassInitialize@CSwitchItemElement@@QEAAJAEBUSwitchItemElementInitializeArgs@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::WeakRef::As<IInspectable>(Microsoft::WRL::WeakRef *this, struct IInspectable **a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return Microsoft::WRL::WeakRef::InternalResolve(this, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, a2);
}
