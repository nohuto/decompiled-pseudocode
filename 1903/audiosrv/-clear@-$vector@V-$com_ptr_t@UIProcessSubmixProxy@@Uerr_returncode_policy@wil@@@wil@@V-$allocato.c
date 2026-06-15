/*
 * XREFs of ?clear@?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1800F4130
 * Callers:
 *     ?GetSubmixesForApplication@CDeviceGraphStore@@UEAAJPEBGKAEAV?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800F3AF0 (-GetSubmixesForApplication@CDeviceGraphStore@@UEAAJPEBGKAEAV-$vector@V-$com_ptr_t@UIProcessSubmi.c)
 *     ?GetSubmixesForPID@CDeviceGraphStore@@UEAAJKW4ProcessSubmixCapture@@AEAV?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800F3C00 (-GetSubmixesForPID@CDeviceGraphStore@@UEAAJKW4ProcessSubmixCapture@@AEAV-$vector@V-$com_ptr_t@UI.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>::clear(__int64 **a1)
{
  __int64 *v1; // rsi
  __int64 *v3; // rbx
  __int64 result; // rax

  v1 = a1[1];
  v3 = *a1;
  if ( *a1 != v1 )
  {
    do
      result = wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v3++);
    while ( v3 != v1 );
    v3 = *a1;
  }
  a1[1] = v3;
  return result;
}
