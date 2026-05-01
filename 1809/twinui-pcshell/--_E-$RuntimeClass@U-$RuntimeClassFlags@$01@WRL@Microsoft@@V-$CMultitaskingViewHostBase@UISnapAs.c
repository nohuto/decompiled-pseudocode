/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UIXamlViewHost@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18027F3E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@QEAA@XZ @ 0x18026AE18 (--1-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@QEAA@XZ.c)
 */

_DWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewHostBase<ISnapAssistViewHost>,IXamlViewHost>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[33] = -1073741823;
  CMultitaskingViewHostBase<ISnapAssistViewHost>::~CMultitaskingViewHostBase<ISnapAssistViewHost>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x88);
  return a1;
}
