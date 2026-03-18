/*
 * XREFs of ??2?$TValueResource@U_D3DCOLORVALUE@@UMILCMD_COLORRESOURCE@@$0BG@@@KAPEAX_K@Z @ 0x180173790
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800CFCE4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

LPVOID TValueResource<_D3DCOLORVALUE,MILCMD_COLORRESOURCE,22>::operator new()
{
  LPVOID result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = HeapAlloc(WPF::g_processHeap, 0, 0x48uLL);
  if ( !result )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  return result;
}
