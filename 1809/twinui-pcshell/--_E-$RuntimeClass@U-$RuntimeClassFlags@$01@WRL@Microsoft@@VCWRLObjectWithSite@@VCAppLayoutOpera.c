/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@VCAppLayoutOperation@@U?$ChainInterfaces@UIDesktopOperation@@UIAppLayoutOperationBuilder@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180341C80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAppLayoutOperation@@QEAA@XZ @ 0x180341C0C (--1CAppLayoutOperation@@QEAA@XZ.c)
 */

char *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,CAppLayoutOperation,Microsoft::WRL::ChainInterfaces<IDesktopOperation,IAppLayoutOperationBuilder,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::`vector deleting destructor'(
        char *a1,
        char a2)
{
  *((_DWORD *)a1 + 47) = -1073741823;
  CAppLayoutOperation::~CAppLayoutOperation((CAppLayoutOperation *)(a1 + 24));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)a1 + 2);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0xC0);
  return a1;
}
