/*
 * XREFs of ??2@YAPAXI@Z @ 0x1000CFE2
 * Callers:
 *     CreateResourceManagerProxy @ 0x100077AD (CreateResourceManagerProxy.c)
 *     ?Init@CMemoryManager@System@Windows@@CGJXZ @ 0x10009DC0 (-Init@CMemoryManager@System@Windows@@CGJXZ.c)
 *     ?CreateResourceManagerClientProxyInternal@@YGJPAPAUIResourceManager@ExecutionModel@@@Z @ 0x1000C2B1 (-CreateResourceManagerClientProxyInternal@@YGJPAPAUIResourceManager@ExecutionModel@@@Z.c)
 *     ??2@YAPAXIABUnothrow_t@std@@@Z @ 0x1000CA62 (--2@YAPAXIABUnothrow_t@std@@@Z.c)
 *     ?AcquireResourceSetImpl@ResourceManagerClientProxy@@QAEJPAU_ResourceSetInfo@ExecutionModel@@PAUIResourceSetCallback@3@PAXPBG2KK_KKPA_NPAUIResourceSet@3@PAPAU53@@Z @ 0x10013E52 (-AcquireResourceSetImpl@ResourceManagerClientProxy@@QAEJPAU_ResourceSetInfo@ExecutionModel@@PAUI.c)
 *     ?CreateTerminalResourceSet@ResourceSetClientProxy@@UBGJPAPAUIResourceSet@ExecutionModel@@@Z @ 0x10014480 (-CreateTerminalResourceSet@ResourceSetClientProxy@@UBGJPAPAUIResourceSet@ExecutionModel@@@Z.c)
 *     ?GetResourceSetInfo@ResourceSetClientProxy@@UBGJPAPAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x10014690 (-GetResourceSetInfo@ResourceSetClientProxy@@UBGJPAPAU_ResourceSetInfo@ExecutionModel@@@Z.c)
 * Callees:
 *     _malloc @ 0x1000CCE5 (_malloc.c)
 *     __callnewh @ 0x1000D016 (__callnewh.c)
 */

void *__cdecl operator new(size_t Size)
{
  void *v1; // esi

  do
    v1 = malloc(Size);
  while ( !v1 && _callnewh(Size) );
  return v1;
}
