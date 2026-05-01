/*
 * XREFs of ??$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA?AV?$ComPtr@UIInspectable@@@WRL@Microsoft@@AEAVWeakRef@23@@Z @ 0x180081CEC
 * Callers:
 *     _lambda_57aa3e92036d8099e639386d4804eb50_::operator() @ 0x180081B80 (_lambda_57aa3e92036d8099e639386d4804eb50_--operator().c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable___::_)(IInspectable___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_c4af598836494ce840533c25bf9d8a3e___1_IInspectable___IInspectable___::Invoke @ 0x180430260 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IEven_ea_180430260.c)
 *     SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5___::OnIdleStateChanged @ 0x180432D90 (SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5___--OnIdleStateChanged.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001476C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 */

struct IInspectable **__fastcall ExperienceManagerUtils::AsStrong<IInspectable>(
        struct IInspectable **a1,
        Microsoft::WRL::WeakRef *this)
{
  *a1 = 0LL;
  Microsoft::WRL::WeakRef::As<IInspectable>(this, a1);
  return a1;
}
